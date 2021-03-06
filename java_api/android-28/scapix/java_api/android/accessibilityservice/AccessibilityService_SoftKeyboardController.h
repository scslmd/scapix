// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_ACCESSIBILITYSERVICE_ACCESSIBILITYSERVICE_SOFTKEYBOARDCONTROLLER_H
#define SCAPIX_ANDROID_ACCESSIBILITYSERVICE_ACCESSIBILITYSERVICE_SOFTKEYBOARDCONTROLLER_H

namespace scapix::java_api {

namespace android::accessibilityservice { class AccessibilityService_SoftKeyboardController_OnShowModeChangedListener; }
namespace android::os { class Handler; }

namespace android::accessibilityservice {

class AccessibilityService_SoftKeyboardController : public object_base<SCAPIX_META_STRING("android/accessibilityservice/AccessibilityService$SoftKeyboardController"),
	java::lang::Object>
{
public:

	using OnShowModeChangedListener = AccessibilityService_SoftKeyboardController_OnShowModeChangedListener;

	void addOnShowModeChangedListener(ref<android::accessibilityservice::AccessibilityService_SoftKeyboardController_OnShowModeChangedListener> listener);
	void addOnShowModeChangedListener(ref<android::accessibilityservice::AccessibilityService_SoftKeyboardController_OnShowModeChangedListener> listener, ref<android::os::Handler> handler);
	jboolean removeOnShowModeChangedListener(ref<android::accessibilityservice::AccessibilityService_SoftKeyboardController_OnShowModeChangedListener> listener);
	jint getShowMode();
	jboolean setShowMode(jint showMode);

protected:

	AccessibilityService_SoftKeyboardController(handle_type h) : base_(h) {}

};

} // namespace android::accessibilityservice
} // namespace scapix::java_api

#include <scapix/java_api/android/accessibilityservice/AccessibilityService_SoftKeyboardController_OnShowModeChangedListener.h>
#include <scapix/java_api/android/os/Handler.h>

namespace scapix::java_api {
namespace android::accessibilityservice {

inline void AccessibilityService_SoftKeyboardController::addOnShowModeChangedListener(ref<android::accessibilityservice::AccessibilityService_SoftKeyboardController_OnShowModeChangedListener> listener) { return call_method<SCAPIX_META_STRING("addOnShowModeChangedListener"), void>(listener); }
inline void AccessibilityService_SoftKeyboardController::addOnShowModeChangedListener(ref<android::accessibilityservice::AccessibilityService_SoftKeyboardController_OnShowModeChangedListener> listener, ref<android::os::Handler> handler) { return call_method<SCAPIX_META_STRING("addOnShowModeChangedListener"), void>(listener, handler); }
inline jboolean AccessibilityService_SoftKeyboardController::removeOnShowModeChangedListener(ref<android::accessibilityservice::AccessibilityService_SoftKeyboardController_OnShowModeChangedListener> listener) { return call_method<SCAPIX_META_STRING("removeOnShowModeChangedListener"), jboolean>(listener); }
inline jint AccessibilityService_SoftKeyboardController::getShowMode() { return call_method<SCAPIX_META_STRING("getShowMode"), jint>(); }
inline jboolean AccessibilityService_SoftKeyboardController::setShowMode(jint showMode) { return call_method<SCAPIX_META_STRING("setShowMode"), jboolean>(showMode); }

} // namespace android::accessibilityservice
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_ACCESSIBILITYSERVICE_ACCESSIBILITYSERVICE_SOFTKEYBOARDCONTROLLER_H
