// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_VIEW_SCALEGESTUREDETECTOR_H
#define SCAPIX_ANDROID_VIEW_SCALEGESTUREDETECTOR_H

namespace scapix::java_api {

namespace android::content { class Context; }
namespace android::os { class Handler; }
namespace android::view { class MotionEvent; }
namespace android::view { class ScaleGestureDetector_OnScaleGestureListener; }
namespace android::view { class ScaleGestureDetector_SimpleOnScaleGestureListener; }

namespace android::view {

class ScaleGestureDetector : public object_base<SCAPIX_META_STRING("android/view/ScaleGestureDetector"),
	java::lang::Object>
{
public:

	using SimpleOnScaleGestureListener = ScaleGestureDetector_SimpleOnScaleGestureListener;
	using OnScaleGestureListener = ScaleGestureDetector_OnScaleGestureListener;

	static ref<ScaleGestureDetector> new_object(ref<android::content::Context> context, ref<android::view::ScaleGestureDetector_OnScaleGestureListener> listener);
	static ref<ScaleGestureDetector> new_object(ref<android::content::Context> context, ref<android::view::ScaleGestureDetector_OnScaleGestureListener> listener, ref<android::os::Handler> handler);
	jboolean onTouchEvent(ref<android::view::MotionEvent> event);
	void setQuickScaleEnabled(jboolean scales);
	jboolean isQuickScaleEnabled();
	void setStylusScaleEnabled(jboolean scales);
	jboolean isStylusScaleEnabled();
	jboolean isInProgress();
	jfloat getFocusX();
	jfloat getFocusY();
	jfloat getCurrentSpan();
	jfloat getCurrentSpanX();
	jfloat getCurrentSpanY();
	jfloat getPreviousSpan();
	jfloat getPreviousSpanX();
	jfloat getPreviousSpanY();
	jfloat getScaleFactor();
	jlong getTimeDelta();
	jlong getEventTime();

protected:

	ScaleGestureDetector(handle_type h) : base_(h) {}

};

} // namespace android::view
} // namespace scapix::java_api

#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/os/Handler.h>
#include <scapix/java_api/android/view/MotionEvent.h>
#include <scapix/java_api/android/view/ScaleGestureDetector_OnScaleGestureListener.h>

namespace scapix::java_api {
namespace android::view {

inline ref<ScaleGestureDetector> ScaleGestureDetector::new_object(ref<android::content::Context> context, ref<android::view::ScaleGestureDetector_OnScaleGestureListener> listener) { return base_::new_object(context, listener); }
inline ref<ScaleGestureDetector> ScaleGestureDetector::new_object(ref<android::content::Context> context, ref<android::view::ScaleGestureDetector_OnScaleGestureListener> listener, ref<android::os::Handler> handler) { return base_::new_object(context, listener, handler); }
inline jboolean ScaleGestureDetector::onTouchEvent(ref<android::view::MotionEvent> event) { return call_method<SCAPIX_META_STRING("onTouchEvent"), jboolean>(event); }
inline void ScaleGestureDetector::setQuickScaleEnabled(jboolean scales) { return call_method<SCAPIX_META_STRING("setQuickScaleEnabled"), void>(scales); }
inline jboolean ScaleGestureDetector::isQuickScaleEnabled() { return call_method<SCAPIX_META_STRING("isQuickScaleEnabled"), jboolean>(); }
inline void ScaleGestureDetector::setStylusScaleEnabled(jboolean scales) { return call_method<SCAPIX_META_STRING("setStylusScaleEnabled"), void>(scales); }
inline jboolean ScaleGestureDetector::isStylusScaleEnabled() { return call_method<SCAPIX_META_STRING("isStylusScaleEnabled"), jboolean>(); }
inline jboolean ScaleGestureDetector::isInProgress() { return call_method<SCAPIX_META_STRING("isInProgress"), jboolean>(); }
inline jfloat ScaleGestureDetector::getFocusX() { return call_method<SCAPIX_META_STRING("getFocusX"), jfloat>(); }
inline jfloat ScaleGestureDetector::getFocusY() { return call_method<SCAPIX_META_STRING("getFocusY"), jfloat>(); }
inline jfloat ScaleGestureDetector::getCurrentSpan() { return call_method<SCAPIX_META_STRING("getCurrentSpan"), jfloat>(); }
inline jfloat ScaleGestureDetector::getCurrentSpanX() { return call_method<SCAPIX_META_STRING("getCurrentSpanX"), jfloat>(); }
inline jfloat ScaleGestureDetector::getCurrentSpanY() { return call_method<SCAPIX_META_STRING("getCurrentSpanY"), jfloat>(); }
inline jfloat ScaleGestureDetector::getPreviousSpan() { return call_method<SCAPIX_META_STRING("getPreviousSpan"), jfloat>(); }
inline jfloat ScaleGestureDetector::getPreviousSpanX() { return call_method<SCAPIX_META_STRING("getPreviousSpanX"), jfloat>(); }
inline jfloat ScaleGestureDetector::getPreviousSpanY() { return call_method<SCAPIX_META_STRING("getPreviousSpanY"), jfloat>(); }
inline jfloat ScaleGestureDetector::getScaleFactor() { return call_method<SCAPIX_META_STRING("getScaleFactor"), jfloat>(); }
inline jlong ScaleGestureDetector::getTimeDelta() { return call_method<SCAPIX_META_STRING("getTimeDelta"), jlong>(); }
inline jlong ScaleGestureDetector::getEventTime() { return call_method<SCAPIX_META_STRING("getEventTime"), jlong>(); }

} // namespace android::view
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_VIEW_SCALEGESTUREDETECTOR_H
