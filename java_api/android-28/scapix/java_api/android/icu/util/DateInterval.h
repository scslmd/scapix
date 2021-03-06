// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_ANDROID_ICU_UTIL_DATEINTERVAL_H
#define SCAPIX_ANDROID_ICU_UTIL_DATEINTERVAL_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace android::icu::util {

class DateInterval : public object_base<SCAPIX_META_STRING("android/icu/util/DateInterval"),
	java::lang::Object,
	java::io::Serializable>
{
public:

	static ref<DateInterval> new_object(jlong from, jlong p2);
	jlong getFromDate();
	jlong getToDate();
	jboolean equals(ref<java::lang::Object> a);
	jint hashCode();
	ref<java::lang::String> toString();

protected:

	DateInterval(handle_type h) : base_(h) {}

};

} // namespace android::icu::util
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::icu::util {

inline ref<DateInterval> DateInterval::new_object(jlong from, jlong p2) { return base_::new_object(from, p2); }
inline jlong DateInterval::getFromDate() { return call_method<SCAPIX_META_STRING("getFromDate"), jlong>(); }
inline jlong DateInterval::getToDate() { return call_method<SCAPIX_META_STRING("getToDate"), jlong>(); }
inline jboolean DateInterval::equals(ref<java::lang::Object> a) { return call_method<SCAPIX_META_STRING("equals"), jboolean>(a); }
inline jint DateInterval::hashCode() { return call_method<SCAPIX_META_STRING("hashCode"), jint>(); }
inline ref<java::lang::String> DateInterval::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }

} // namespace android::icu::util
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_ICU_UTIL_DATEINTERVAL_H
