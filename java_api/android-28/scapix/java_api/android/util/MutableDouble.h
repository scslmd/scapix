// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_UTIL_MUTABLEDOUBLE_H
#define SCAPIX_ANDROID_UTIL_MUTABLEDOUBLE_H

namespace scapix::java_api {
namespace android::util {

class MutableDouble : public object_base<SCAPIX_META_STRING("android/util/MutableDouble"),
	java::lang::Object>
{
public:

	jdouble value();
	void value(jdouble);

	static ref<MutableDouble> new_object(jdouble value);

protected:

	MutableDouble(handle_type h) : base_(h) {}

};

} // namespace android::util
} // namespace scapix::java_api


namespace scapix::java_api {
namespace android::util {

inline jdouble MutableDouble::value() { return get_field<SCAPIX_META_STRING("value"), jdouble>(); }
inline void MutableDouble::value(jdouble v) { set_field<SCAPIX_META_STRING("value"), jdouble>(v); }
inline ref<MutableDouble> MutableDouble::new_object(jdouble value) { return base_::new_object(value); }

} // namespace android::util
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_UTIL_MUTABLEDOUBLE_H
