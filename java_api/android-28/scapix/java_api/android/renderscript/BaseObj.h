// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_RENDERSCRIPT_BASEOBJ_H
#define SCAPIX_ANDROID_RENDERSCRIPT_BASEOBJ_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace android::renderscript {

class BaseObj : public object_base<SCAPIX_META_STRING("android/renderscript/BaseObj"),
	java::lang::Object>
{
public:

	void setName(ref<java::lang::String> name);
	ref<java::lang::String> getName();
	void destroy();
	jint hashCode();
	jboolean equals(ref<java::lang::Object> obj);

protected:

	BaseObj(handle_type h) : base_(h) {}

};

} // namespace android::renderscript
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::renderscript {

inline void BaseObj::setName(ref<java::lang::String> name) { return call_method<SCAPIX_META_STRING("setName"), void>(name); }
inline ref<java::lang::String> BaseObj::getName() { return call_method<SCAPIX_META_STRING("getName"), ref<java::lang::String>>(); }
inline void BaseObj::destroy() { return call_method<SCAPIX_META_STRING("destroy"), void>(); }
inline jint BaseObj::hashCode() { return call_method<SCAPIX_META_STRING("hashCode"), jint>(); }
inline jboolean BaseObj::equals(ref<java::lang::Object> obj) { return call_method<SCAPIX_META_STRING("equals"), jboolean>(obj); }

} // namespace android::renderscript
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_RENDERSCRIPT_BASEOBJ_H
