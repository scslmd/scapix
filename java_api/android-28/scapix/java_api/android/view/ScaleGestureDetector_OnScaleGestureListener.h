// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_VIEW_SCALEGESTUREDETECTOR_ONSCALEGESTURELISTENER_H
#define SCAPIX_ANDROID_VIEW_SCALEGESTUREDETECTOR_ONSCALEGESTURELISTENER_H

namespace scapix::java_api {

namespace android::view { class ScaleGestureDetector; }

namespace android::view {

class ScaleGestureDetector_OnScaleGestureListener : public object_base<SCAPIX_META_STRING("android/view/ScaleGestureDetector$OnScaleGestureListener"),
	java::lang::Object>
{
public:

	jboolean onScale(ref<android::view::ScaleGestureDetector> p1);
	jboolean onScaleBegin(ref<android::view::ScaleGestureDetector> p1);
	void onScaleEnd(ref<android::view::ScaleGestureDetector> p1);

protected:

	ScaleGestureDetector_OnScaleGestureListener(handle_type h) : base_(h) {}

};

} // namespace android::view
} // namespace scapix::java_api

#include <scapix/java_api/android/view/ScaleGestureDetector.h>

namespace scapix::java_api {
namespace android::view {

inline jboolean ScaleGestureDetector_OnScaleGestureListener::onScale(ref<android::view::ScaleGestureDetector> p1) { return call_method<SCAPIX_META_STRING("onScale"), jboolean>(p1); }
inline jboolean ScaleGestureDetector_OnScaleGestureListener::onScaleBegin(ref<android::view::ScaleGestureDetector> p1) { return call_method<SCAPIX_META_STRING("onScaleBegin"), jboolean>(p1); }
inline void ScaleGestureDetector_OnScaleGestureListener::onScaleEnd(ref<android::view::ScaleGestureDetector> p1) { return call_method<SCAPIX_META_STRING("onScaleEnd"), void>(p1); }

} // namespace android::view
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_VIEW_SCALEGESTUREDETECTOR_ONSCALEGESTURELISTENER_H
