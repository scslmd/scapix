// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/android/util/Property.h>

#ifndef SCAPIX_ANDROID_UTIL_FLOATPROPERTY_H
#define SCAPIX_ANDROID_UTIL_FLOATPROPERTY_H

namespace scapix::java_api {

namespace java::lang { class Float; }
namespace java::lang { class Object; }
namespace java::lang { class String; }

namespace android::util {

class FloatProperty : public object_base<SCAPIX_META_STRING("android/util/FloatProperty"),
	android::util::Property>
{
public:

	static ref<FloatProperty> new_object(ref<java::lang::String> name);
	void setValue(ref<java::lang::Object> p1, jfloat p2);
	void set(ref<java::lang::Object> object, ref<java::lang::Float> value);

protected:

	FloatProperty(handle_type h) : base_(h) {}

};

} // namespace android::util
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/Float.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::util {

inline ref<FloatProperty> FloatProperty::new_object(ref<java::lang::String> name) { return base_::new_object(name); }
inline void FloatProperty::setValue(ref<java::lang::Object> p1, jfloat p2) { return call_method<SCAPIX_META_STRING("setValue"), void>(p1, p2); }
inline void FloatProperty::set(ref<java::lang::Object> object, ref<java::lang::Float> value) { return call_method<SCAPIX_META_STRING("set"), void>(object, value); }

} // namespace android::util
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_UTIL_FLOATPROPERTY_H
