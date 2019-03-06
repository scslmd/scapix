// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_VIEW_VIEWTREEOBSERVER_ONDRAWLISTENER_H
#define SCAPIX_ANDROID_VIEW_VIEWTREEOBSERVER_ONDRAWLISTENER_H

namespace scapix::java_api {


namespace android::view {

class ViewTreeObserver_OnDrawListener : public object_base<SCAPIX_META_STRING("android/view/ViewTreeObserver$OnDrawListener"),
	java::lang::Object>
{
public:

	void onDraw();

protected:

	ViewTreeObserver_OnDrawListener(handle_type h) : base_(h) {}

};

} // namespace android::view
} // namespace scapix::java_api


namespace scapix::java_api {
namespace android::view {

inline void ViewTreeObserver_OnDrawListener::onDraw() { return call_method<SCAPIX_META_STRING("onDraw"), void>(); }

} // namespace android::view
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_VIEW_VIEWTREEOBSERVER_ONDRAWLISTENER_H
