// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_APP_ACTIONBAR_TABLISTENER_H
#define SCAPIX_ANDROID_APP_ACTIONBAR_TABLISTENER_H

namespace scapix::java_api {

namespace android::app { class ActionBar_Tab; }
namespace android::app { class FragmentTransaction; }

namespace android::app {

class ActionBar_TabListener : public object_base<SCAPIX_META_STRING("android/app/ActionBar$TabListener"),
	java::lang::Object>
{
public:

	void onTabSelected(ref<android::app::ActionBar_Tab> p1, ref<android::app::FragmentTransaction> p2);
	void onTabUnselected(ref<android::app::ActionBar_Tab> p1, ref<android::app::FragmentTransaction> p2);
	void onTabReselected(ref<android::app::ActionBar_Tab> p1, ref<android::app::FragmentTransaction> p2);

protected:

	ActionBar_TabListener(handle_type h) : base_(h) {}

};

} // namespace android::app
} // namespace scapix::java_api

#include <scapix/java_api/android/app/ActionBar_Tab.h>
#include <scapix/java_api/android/app/FragmentTransaction.h>

namespace scapix::java_api {
namespace android::app {

inline void ActionBar_TabListener::onTabSelected(ref<android::app::ActionBar_Tab> p1, ref<android::app::FragmentTransaction> p2) { return call_method<SCAPIX_META_STRING("onTabSelected"), void>(p1, p2); }
inline void ActionBar_TabListener::onTabUnselected(ref<android::app::ActionBar_Tab> p1, ref<android::app::FragmentTransaction> p2) { return call_method<SCAPIX_META_STRING("onTabUnselected"), void>(p1, p2); }
inline void ActionBar_TabListener::onTabReselected(ref<android::app::ActionBar_Tab> p1, ref<android::app::FragmentTransaction> p2) { return call_method<SCAPIX_META_STRING("onTabReselected"), void>(p1, p2); }

} // namespace android::app
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_APP_ACTIONBAR_TABLISTENER_H
