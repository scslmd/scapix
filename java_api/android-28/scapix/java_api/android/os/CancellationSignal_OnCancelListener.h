// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_OS_CANCELLATIONSIGNAL_ONCANCELLISTENER_H
#define SCAPIX_ANDROID_OS_CANCELLATIONSIGNAL_ONCANCELLISTENER_H

namespace scapix::java_api {


namespace android::os {

class CancellationSignal_OnCancelListener : public object_base<SCAPIX_META_STRING("android/os/CancellationSignal$OnCancelListener"),
	java::lang::Object>
{
public:

	void onCancel();

protected:

	CancellationSignal_OnCancelListener(handle_type h) : base_(h) {}

};

} // namespace android::os
} // namespace scapix::java_api


namespace scapix::java_api {
namespace android::os {

inline void CancellationSignal_OnCancelListener::onCancel() { return call_method<SCAPIX_META_STRING("onCancel"), void>(); }

} // namespace android::os
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_OS_CANCELLATIONSIGNAL_ONCANCELLISTENER_H
