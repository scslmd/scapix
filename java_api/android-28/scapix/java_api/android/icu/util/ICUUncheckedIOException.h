// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/RuntimeException.h>

#ifndef SCAPIX_ANDROID_ICU_UTIL_ICUUNCHECKEDIOEXCEPTION_H
#define SCAPIX_ANDROID_ICU_UTIL_ICUUNCHECKEDIOEXCEPTION_H

namespace scapix::java_api {

namespace java::lang { class String; }
namespace java::lang { class Throwable; }

namespace android::icu::util {

class ICUUncheckedIOException : public object_base<SCAPIX_META_STRING("android/icu/util/ICUUncheckedIOException"),
	java::lang::RuntimeException>
{
public:

	static ref<ICUUncheckedIOException> new_object();
	static ref<ICUUncheckedIOException> new_object(ref<java::lang::String> message);
	static ref<ICUUncheckedIOException> new_object(ref<java::lang::Throwable> cause);
	static ref<ICUUncheckedIOException> new_object(ref<java::lang::String> message, ref<java::lang::Throwable> cause);

protected:

	ICUUncheckedIOException(handle_type h) : base_(h) {}

};

} // namespace android::icu::util
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Throwable.h>

namespace scapix::java_api {
namespace android::icu::util {

inline ref<ICUUncheckedIOException> ICUUncheckedIOException::new_object() { return base_::new_object(); }
inline ref<ICUUncheckedIOException> ICUUncheckedIOException::new_object(ref<java::lang::String> message) { return base_::new_object(message); }
inline ref<ICUUncheckedIOException> ICUUncheckedIOException::new_object(ref<java::lang::Throwable> cause) { return base_::new_object(cause); }
inline ref<ICUUncheckedIOException> ICUUncheckedIOException::new_object(ref<java::lang::String> message, ref<java::lang::Throwable> cause) { return base_::new_object(message, cause); }

} // namespace android::icu::util
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_ICU_UTIL_ICUUNCHECKEDIOEXCEPTION_H
