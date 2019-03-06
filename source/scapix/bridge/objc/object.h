//
//  scapix/bridge/objc/object.h
//  Copyright (c) 2019 Boris Rasin (boris@scapix.com)
//

#ifndef SCAPIX_BRIDGE_OBJC_OBJECT_H
#define SCAPIX_BRIDGE_OBJC_OBJECT_H

#include <memory>
#include <cassert>
#include <scapix/bridge/type_traits.h>
#include <CoreFoundation/CFBase.h>

namespace scapix {
namespace link {
namespace objc {

template <typename To, typename From, typename>
struct convert_impl;

} // namespace objc
} // namespace link

namespace bridge {
namespace objc {

class object_base : public std::enable_shared_from_this<object_base>
{
protected:
    
    object_base() = default;
    
    ~object_base()
    {
        CFRelease(wrapper);
    }

    template <typename T>
    friend void attach(T& cpp, CFTypeRef objc)
    {
        cpp.attach(objc);
    }
    
    void attach(CFTypeRef obj);

    // @class BridgeObject
    CFTypeRef wrapper = nullptr;

};

// to do: inheritance should be private, not to expose protected members

template <typename T>
class object : public object_base
{
public:
    
    std::shared_ptr<T> shared_from_this()
    {
        return std::static_pointer_cast<T>(object_base::shared_from_this());
    }
    
    std::shared_ptr<const T> shared_from_this() const
    {
        return std::static_pointer_cast<T>(object_base::shared_from_this());
    }
    
protected:

    object() = default;

private:

    template <typename To, typename From, typename>
    friend struct link::objc::convert_impl;
    
    template <typename Wrapper>
    Wrapper get_wrapper();

};

} // namespace objc
} // namespace bridge
} // namespace scapix

#ifdef __OBJC__

#include <scapix/link/objc/convert.h>
#import "BridgeObjectPrivate.h"

namespace scapix {
namespace bridge {
namespace objc {

inline void object_base::attach(CFTypeRef obj)
{
    assert(!wrapper);
    wrapper = obj;
    
    [(__bridge BridgeObject*)obj attachObject:this];
}

template <typename T>
template <typename Wrapper>
inline Wrapper object<T>::get_wrapper()
{
    if (!wrapper)
        attach(CFBridgingRetain([std::remove_pointer_t<Wrapper> alloc]));

    return (__bridge Wrapper)wrapper;
}

template <typename T>
constexpr bool is_wrapper = std::is_convertible_v<BridgeObject*, T>;

template <typename F>
struct init_impl;

template <typename ...Args>
struct init_impl<void(Args...)>
{
    template <typename T, typename Wrapper, typename ...ObjcArgs>
    static void init(Wrapper* wrapper, ObjcArgs... args)
    {
        attach(*std::make_shared<T>(link::objc::convert<Args>(args)...), CFBridgingRetain(wrapper));
    }
};

template <typename T, typename F, typename Wrapper, typename ...ObjcArgs>
inline Wrapper* init(Wrapper* wrapper, ObjcArgs... args)
{
    init_impl<F>::template init<T>(wrapper, args...);
    return wrapper;
}

template <auto Func>
struct call_impl;

template <typename Class, typename R, typename ...Args, R(Class::*Func)(Args...)>
struct call_impl<Func>
{
    template <typename ObjcRet, typename Wrapper, typename ...ObjcArgs>
    static ObjcRet call(Wrapper* wrapper, ObjcArgs... args)
    {
        return link::objc::convert<ObjcRet>((link::objc::convert<Class>(wrapper).*Func)(link::objc::convert<Args>(args)...));
    }
};

template <typename Class, typename ...Args, void(Class::*Func)(Args...)>
struct call_impl<Func>
{
    template <typename ObjcRet, typename Wrapper, typename ...ObjcArgs>
    static void call(Wrapper* wrapper, ObjcArgs... args)
    {
        (link::objc::convert<Class>(wrapper).*Func)(link::objc::convert<Args>(args)...);
    }
};

template <typename Class, typename R, typename ...Args, R(Class::*Func)(Args...)const>
struct call_impl<Func>
{
    template <typename ObjcRet, typename Wrapper, typename ...ObjcArgs>
    static ObjcRet call(Wrapper* wrapper, ObjcArgs... args)
    {
        return link::objc::convert<ObjcRet>((link::objc::convert<Class>(wrapper).*Func)(link::objc::convert<Args>(args)...));
    }
};

template <typename Class, typename ...Args, void(Class::*Func)(Args...)const>
struct call_impl<Func>
{
    template <typename ObjcRet, typename Wrapper, typename ...ObjcArgs>
    static void call(Wrapper* wrapper, ObjcArgs... args)
    {
        (link::objc::convert<Class>(wrapper).*Func)(link::objc::convert<Args>(args)...);
    }
};

template <typename R, typename ...Args, R(*Func)(Args...)>
struct call_impl<Func>
{
    template <typename ObjcRet, typename ...ObjcArgs>
    static ObjcRet call(ObjcArgs... args)
    {
        return link::objc::convert<ObjcRet>((*Func)(link::objc::convert<Args>(args)...));
    }
};

template <typename ...Args, void(*Func)(Args...)>
struct call_impl<Func>
{
    template <typename ObjcRet, typename ...ObjcArgs>
    static void call(ObjcArgs... args)
    {
        (*Func)(link::objc::convert<Args>(args)...);
    }
};

template <typename F, F Func, typename ObjcRet, typename ...ObjcArgs>
inline auto call(ObjcArgs... args)
{
    return call_impl<Func>::template call<ObjcRet>(args...);
}

} // namespace objc
} // namespace bridge

namespace link {
namespace objc {

// only used to convert 'this'

template <typename Bridge, typename Wrapper>
struct convert_impl<Bridge, Wrapper, std::enable_if_t<bridge::is_object<Bridge>>>
{
    static_assert(bridge::objc::is_wrapper<Wrapper>);
    
    static Bridge& convert(Wrapper value)
    {
        return *static_cast<Bridge*>(value->shared.get());
    }
};

template <typename Bridge, typename Wrapper>
struct convert_impl<std::shared_ptr<Bridge>, Wrapper, std::enable_if_t<bridge::is_object<Bridge>>>
{
    static_assert(bridge::objc::is_wrapper<Wrapper>);
    
    static std::shared_ptr<Bridge> convert(Wrapper value)
    {
        if (!value)
            return nullptr;
        
        return std::static_pointer_cast<Bridge>(value->shared);
    }

    static Wrapper convert(std::shared_ptr<Bridge> value)
    {
        // to do: use [NSNull null] instead of nil for values inside NSArray (and NSDictionary, NSSet?)

        if (!value)
            return nil;
        
        return value->template get_wrapper<Wrapper>();
    }
};

} // namespace objc
} // namespace link
} // namespace scapix

#endif // __OBJC__
#endif // SCAPIX_BRIDGE_OBJC_OBJECT_H
