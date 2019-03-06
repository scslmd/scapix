// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/RuntimeException.h>

#ifndef SCAPIX_ANDROID_VIEW_INFLATEEXCEPTION_H
#define SCAPIX_ANDROID_VIEW_INFLATEEXCEPTION_H

namespace scapix::java_api {

namespace java::lang { class String; }
namespace java::lang { class Throwable; }

namespace android::view {

class InflateException : public object_base<SCAPIX_META_STRING("android/view/InflateException"),
	java::lang::RuntimeException>
{
public:

	static ref<InflateException> new_object();
	static ref<InflateException> new_object(ref<java::lang::String> detailMessage, ref<java::lang::Throwable> throwable);
	static ref<InflateException> new_object(ref<java::lang::String> detailMessage);
	static ref<InflateException> new_object(ref<java::lang::Throwable> throwable);

protected:

	InflateException(handle_type h) : base_(h) {}

};

} // namespace android::view
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Throwable.h>

namespace scapix::java_api {
namespace android::view {

inline ref<InflateException> InflateException::new_object() { return base_::new_object(); }
inline ref<InflateException> InflateException::new_object(ref<java::lang::String> detailMessage, ref<java::lang::Throwable> throwable) { return base_::new_object(detailMessage, throwable); }
inline ref<InflateException> InflateException::new_object(ref<java::lang::String> detailMessage) { return base_::new_object(detailMessage); }
inline ref<InflateException> InflateException::new_object(ref<java::lang::Throwable> throwable) { return base_::new_object(throwable); }

} // namespace android::view
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_VIEW_INFLATEEXCEPTION_H
