// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_VIEW_ACTIONMODE_CALLBACK_H
#define SCAPIX_ANDROID_VIEW_ACTIONMODE_CALLBACK_H

namespace scapix::java_api {

namespace android::view { class ActionMode; }
namespace android::view { class Menu; }
namespace android::view { class MenuItem; }

namespace android::view {

class ActionMode_Callback : public object_base<SCAPIX_META_STRING("android/view/ActionMode$Callback"),
	java::lang::Object>
{
public:

	jboolean onCreateActionMode(ref<android::view::ActionMode> p1, ref<android::view::Menu> p2);
	jboolean onPrepareActionMode(ref<android::view::ActionMode> p1, ref<android::view::Menu> p2);
	jboolean onActionItemClicked(ref<android::view::ActionMode> p1, ref<android::view::MenuItem> p2);
	void onDestroyActionMode(ref<android::view::ActionMode> p1);

protected:

	ActionMode_Callback(handle_type h) : base_(h) {}

};

} // namespace android::view
} // namespace scapix::java_api

#include <scapix/java_api/android/view/ActionMode.h>
#include <scapix/java_api/android/view/Menu.h>
#include <scapix/java_api/android/view/MenuItem.h>

namespace scapix::java_api {
namespace android::view {

inline jboolean ActionMode_Callback::onCreateActionMode(ref<android::view::ActionMode> p1, ref<android::view::Menu> p2) { return call_method<SCAPIX_META_STRING("onCreateActionMode"), jboolean>(p1, p2); }
inline jboolean ActionMode_Callback::onPrepareActionMode(ref<android::view::ActionMode> p1, ref<android::view::Menu> p2) { return call_method<SCAPIX_META_STRING("onPrepareActionMode"), jboolean>(p1, p2); }
inline jboolean ActionMode_Callback::onActionItemClicked(ref<android::view::ActionMode> p1, ref<android::view::MenuItem> p2) { return call_method<SCAPIX_META_STRING("onActionItemClicked"), jboolean>(p1, p2); }
inline void ActionMode_Callback::onDestroyActionMode(ref<android::view::ActionMode> p1) { return call_method<SCAPIX_META_STRING("onDestroyActionMode"), void>(p1); }

} // namespace android::view
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_VIEW_ACTIONMODE_CALLBACK_H
