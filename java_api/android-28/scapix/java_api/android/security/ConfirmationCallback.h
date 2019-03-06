// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_SECURITY_CONFIRMATIONCALLBACK_H
#define SCAPIX_ANDROID_SECURITY_CONFIRMATIONCALLBACK_H

namespace scapix::java_api {

namespace java::lang { class Throwable; }

namespace android::security {

class ConfirmationCallback : public object_base<SCAPIX_META_STRING("android/security/ConfirmationCallback"),
	java::lang::Object>
{
public:

	static ref<ConfirmationCallback> new_object();
	void onConfirmed(ref<link::java::array<jbyte>> dataThatWasConfirmed);
	void onDismissed();
	void onCanceled();
	void onError(ref<java::lang::Throwable> e);

protected:

	ConfirmationCallback(handle_type h) : base_(h) {}

};

} // namespace android::security
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/Throwable.h>

namespace scapix::java_api {
namespace android::security {

inline ref<ConfirmationCallback> ConfirmationCallback::new_object() { return base_::new_object(); }
inline void ConfirmationCallback::onConfirmed(ref<link::java::array<jbyte>> dataThatWasConfirmed) { return call_method<SCAPIX_META_STRING("onConfirmed"), void>(dataThatWasConfirmed); }
inline void ConfirmationCallback::onDismissed() { return call_method<SCAPIX_META_STRING("onDismissed"), void>(); }
inline void ConfirmationCallback::onCanceled() { return call_method<SCAPIX_META_STRING("onCanceled"), void>(); }
inline void ConfirmationCallback::onError(ref<java::lang::Throwable> e) { return call_method<SCAPIX_META_STRING("onError"), void>(e); }

} // namespace android::security
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_SECURITY_CONFIRMATIONCALLBACK_H
