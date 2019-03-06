// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_UTIL_MUTABLELONG_H
#define SCAPIX_ANDROID_UTIL_MUTABLELONG_H

namespace scapix::java_api {
namespace android::util {

class MutableLong : public object_base<SCAPIX_META_STRING("android/util/MutableLong"),
	java::lang::Object>
{
public:

	jlong value();
	void value(jlong);

	static ref<MutableLong> new_object(jlong value);

protected:

	MutableLong(handle_type h) : base_(h) {}

};

} // namespace android::util
} // namespace scapix::java_api


namespace scapix::java_api {
namespace android::util {

inline jlong MutableLong::value() { return get_field<SCAPIX_META_STRING("value"), jlong>(); }
inline void MutableLong::value(jlong v) { set_field<SCAPIX_META_STRING("value"), jlong>(v); }
inline ref<MutableLong> MutableLong::new_object(jlong value) { return base_::new_object(value); }

} // namespace android::util
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_UTIL_MUTABLELONG_H
