// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_ACCESSIBILITYSERVICE_ACCESSIBILITYSERVICE_GESTURERESULTCALLBACK_H
#define SCAPIX_ANDROID_ACCESSIBILITYSERVICE_ACCESSIBILITYSERVICE_GESTURERESULTCALLBACK_H

namespace scapix::java_api {

namespace android::accessibilityservice { class GestureDescription; }

namespace android::accessibilityservice {

class AccessibilityService_GestureResultCallback : public object_base<SCAPIX_META_STRING("android/accessibilityservice/AccessibilityService$GestureResultCallback"),
	java::lang::Object>
{
public:

	static ref<AccessibilityService_GestureResultCallback> new_object();
	void onCompleted(ref<android::accessibilityservice::GestureDescription> gestureDescription);
	void onCancelled(ref<android::accessibilityservice::GestureDescription> gestureDescription);

protected:

	AccessibilityService_GestureResultCallback(handle_type h) : base_(h) {}

};

} // namespace android::accessibilityservice
} // namespace scapix::java_api

#include <scapix/java_api/android/accessibilityservice/GestureDescription.h>

namespace scapix::java_api {
namespace android::accessibilityservice {

inline ref<AccessibilityService_GestureResultCallback> AccessibilityService_GestureResultCallback::new_object() { return base_::new_object(); }
inline void AccessibilityService_GestureResultCallback::onCompleted(ref<android::accessibilityservice::GestureDescription> gestureDescription) { return call_method<SCAPIX_META_STRING("onCompleted"), void>(gestureDescription); }
inline void AccessibilityService_GestureResultCallback::onCancelled(ref<android::accessibilityservice::GestureDescription> gestureDescription) { return call_method<SCAPIX_META_STRING("onCancelled"), void>(gestureDescription); }

} // namespace android::accessibilityservice
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_ACCESSIBILITYSERVICE_ACCESSIBILITYSERVICE_GESTURERESULTCALLBACK_H
