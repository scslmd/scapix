// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_APP_APPLICATION_ACTIVITYLIFECYCLECALLBACKS_H
#define SCAPIX_ANDROID_APP_APPLICATION_ACTIVITYLIFECYCLECALLBACKS_H

namespace scapix::java_api {

namespace android::app { class Activity; }
namespace android::os { class Bundle; }

namespace android::app {

class Application_ActivityLifecycleCallbacks : public object_base<SCAPIX_META_STRING("android/app/Application$ActivityLifecycleCallbacks"),
	java::lang::Object>
{
public:

	void onActivityCreated(ref<android::app::Activity> p1, ref<android::os::Bundle> p2);
	void onActivityStarted(ref<android::app::Activity> p1);
	void onActivityResumed(ref<android::app::Activity> p1);
	void onActivityPaused(ref<android::app::Activity> p1);
	void onActivityStopped(ref<android::app::Activity> p1);
	void onActivitySaveInstanceState(ref<android::app::Activity> p1, ref<android::os::Bundle> p2);
	void onActivityDestroyed(ref<android::app::Activity> p1);

protected:

	Application_ActivityLifecycleCallbacks(handle_type h) : base_(h) {}

};

} // namespace android::app
} // namespace scapix::java_api

#include <scapix/java_api/android/app/Activity.h>
#include <scapix/java_api/android/os/Bundle.h>

namespace scapix::java_api {
namespace android::app {

inline void Application_ActivityLifecycleCallbacks::onActivityCreated(ref<android::app::Activity> p1, ref<android::os::Bundle> p2) { return call_method<SCAPIX_META_STRING("onActivityCreated"), void>(p1, p2); }
inline void Application_ActivityLifecycleCallbacks::onActivityStarted(ref<android::app::Activity> p1) { return call_method<SCAPIX_META_STRING("onActivityStarted"), void>(p1); }
inline void Application_ActivityLifecycleCallbacks::onActivityResumed(ref<android::app::Activity> p1) { return call_method<SCAPIX_META_STRING("onActivityResumed"), void>(p1); }
inline void Application_ActivityLifecycleCallbacks::onActivityPaused(ref<android::app::Activity> p1) { return call_method<SCAPIX_META_STRING("onActivityPaused"), void>(p1); }
inline void Application_ActivityLifecycleCallbacks::onActivityStopped(ref<android::app::Activity> p1) { return call_method<SCAPIX_META_STRING("onActivityStopped"), void>(p1); }
inline void Application_ActivityLifecycleCallbacks::onActivitySaveInstanceState(ref<android::app::Activity> p1, ref<android::os::Bundle> p2) { return call_method<SCAPIX_META_STRING("onActivitySaveInstanceState"), void>(p1, p2); }
inline void Application_ActivityLifecycleCallbacks::onActivityDestroyed(ref<android::app::Activity> p1) { return call_method<SCAPIX_META_STRING("onActivityDestroyed"), void>(p1); }

} // namespace android::app
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_APP_APPLICATION_ACTIVITYLIFECYCLECALLBACKS_H
