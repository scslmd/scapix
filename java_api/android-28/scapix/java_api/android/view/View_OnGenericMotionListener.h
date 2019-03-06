// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_VIEW_VIEW_ONGENERICMOTIONLISTENER_H
#define SCAPIX_ANDROID_VIEW_VIEW_ONGENERICMOTIONLISTENER_H

namespace scapix::java_api {

namespace android::view { class MotionEvent; }
namespace android::view { class View; }

namespace android::view {

class View_OnGenericMotionListener : public object_base<SCAPIX_META_STRING("android/view/View$OnGenericMotionListener"),
	java::lang::Object>
{
public:

	jboolean onGenericMotion(ref<android::view::View> p1, ref<android::view::MotionEvent> p2);

protected:

	View_OnGenericMotionListener(handle_type h) : base_(h) {}

};

} // namespace android::view
} // namespace scapix::java_api

#include <scapix/java_api/android/view/MotionEvent.h>
#include <scapix/java_api/android/view/View.h>

namespace scapix::java_api {
namespace android::view {

inline jboolean View_OnGenericMotionListener::onGenericMotion(ref<android::view::View> p1, ref<android::view::MotionEvent> p2) { return call_method<SCAPIX_META_STRING("onGenericMotion"), jboolean>(p1, p2); }

} // namespace android::view
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_VIEW_VIEW_ONGENERICMOTIONLISTENER_H
