// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_VIEW_VIEW_ONCREATECONTEXTMENULISTENER_H
#define SCAPIX_ANDROID_VIEW_VIEW_ONCREATECONTEXTMENULISTENER_H

namespace scapix::java_api {

namespace android::view { class ContextMenu; }
namespace android::view { class ContextMenu_ContextMenuInfo; }
namespace android::view { class View; }

namespace android::view {

class View_OnCreateContextMenuListener : public object_base<SCAPIX_META_STRING("android/view/View$OnCreateContextMenuListener"),
	java::lang::Object>
{
public:

	void onCreateContextMenu(ref<android::view::ContextMenu> p1, ref<android::view::View> p2, ref<android::view::ContextMenu_ContextMenuInfo> p3);

protected:

	View_OnCreateContextMenuListener(handle_type h) : base_(h) {}

};

} // namespace android::view
} // namespace scapix::java_api

#include <scapix/java_api/android/view/ContextMenu.h>
#include <scapix/java_api/android/view/ContextMenu_ContextMenuInfo.h>
#include <scapix/java_api/android/view/View.h>

namespace scapix::java_api {
namespace android::view {

inline void View_OnCreateContextMenuListener::onCreateContextMenu(ref<android::view::ContextMenu> p1, ref<android::view::View> p2, ref<android::view::ContextMenu_ContextMenuInfo> p3) { return call_method<SCAPIX_META_STRING("onCreateContextMenu"), void>(p1, p2, p3); }

} // namespace android::view
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_VIEW_VIEW_ONCREATECONTEXTMENULISTENER_H
