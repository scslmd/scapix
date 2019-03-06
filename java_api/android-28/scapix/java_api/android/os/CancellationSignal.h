// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_OS_CANCELLATIONSIGNAL_H
#define SCAPIX_ANDROID_OS_CANCELLATIONSIGNAL_H

namespace scapix::java_api {

namespace android::os { class CancellationSignal_OnCancelListener; }

namespace android::os {

class CancellationSignal : public object_base<SCAPIX_META_STRING("android/os/CancellationSignal"),
	java::lang::Object>
{
public:

	using OnCancelListener = CancellationSignal_OnCancelListener;

	static ref<CancellationSignal> new_object();
	jboolean isCanceled();
	void throwIfCanceled();
	void cancel();
	void setOnCancelListener(ref<android::os::CancellationSignal_OnCancelListener> listener);

protected:

	CancellationSignal(handle_type h) : base_(h) {}

};

} // namespace android::os
} // namespace scapix::java_api

#include <scapix/java_api/android/os/CancellationSignal_OnCancelListener.h>

namespace scapix::java_api {
namespace android::os {

inline ref<CancellationSignal> CancellationSignal::new_object() { return base_::new_object(); }
inline jboolean CancellationSignal::isCanceled() { return call_method<SCAPIX_META_STRING("isCanceled"), jboolean>(); }
inline void CancellationSignal::throwIfCanceled() { return call_method<SCAPIX_META_STRING("throwIfCanceled"), void>(); }
inline void CancellationSignal::cancel() { return call_method<SCAPIX_META_STRING("cancel"), void>(); }
inline void CancellationSignal::setOnCancelListener(ref<android::os::CancellationSignal_OnCancelListener> listener) { return call_method<SCAPIX_META_STRING("setOnCancelListener"), void>(listener); }

} // namespace android::os
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_OS_CANCELLATIONSIGNAL_H
