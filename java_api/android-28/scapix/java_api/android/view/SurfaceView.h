// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/android/view/View.h>

#ifndef SCAPIX_ANDROID_VIEW_SURFACEVIEW_H
#define SCAPIX_ANDROID_VIEW_SURFACEVIEW_H

namespace scapix::java_api {

namespace android::content { class Context; }
namespace android::graphics { class Canvas; }
namespace android::graphics { class Region; }
namespace android::util { class AttributeSet; }
namespace android::view { class SurfaceHolder; }

namespace android::view {

class SurfaceView : public object_base<SCAPIX_META_STRING("android/view/SurfaceView"),
	android::view::View>
{
public:

	static ref<SurfaceView> new_object(ref<android::content::Context> context);
	static ref<SurfaceView> new_object(ref<android::content::Context> context, ref<android::util::AttributeSet> attrs);
	static ref<SurfaceView> new_object(ref<android::content::Context> context, ref<android::util::AttributeSet> attrs, jint defStyleAttr);
	static ref<SurfaceView> new_object(ref<android::content::Context> context, ref<android::util::AttributeSet> attrs, jint defStyleAttr, jint defStyleRes);
	ref<android::view::SurfaceHolder> getHolder();
	void setVisibility(jint visibility);
	jboolean gatherTransparentRegion(ref<android::graphics::Region> region);
	void draw(ref<android::graphics::Canvas> canvas);
	void setZOrderMediaOverlay(jboolean isMediaOverlay);
	void setZOrderOnTop(jboolean onTop);
	void setSecure(jboolean isSecure);

protected:

	SurfaceView(handle_type h) : base_(h) {}

};

} // namespace android::view
} // namespace scapix::java_api

#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/graphics/Canvas.h>
#include <scapix/java_api/android/graphics/Region.h>
#include <scapix/java_api/android/util/AttributeSet.h>
#include <scapix/java_api/android/view/SurfaceHolder.h>

namespace scapix::java_api {
namespace android::view {

inline ref<SurfaceView> SurfaceView::new_object(ref<android::content::Context> context) { return base_::new_object(context); }
inline ref<SurfaceView> SurfaceView::new_object(ref<android::content::Context> context, ref<android::util::AttributeSet> attrs) { return base_::new_object(context, attrs); }
inline ref<SurfaceView> SurfaceView::new_object(ref<android::content::Context> context, ref<android::util::AttributeSet> attrs, jint defStyleAttr) { return base_::new_object(context, attrs, defStyleAttr); }
inline ref<SurfaceView> SurfaceView::new_object(ref<android::content::Context> context, ref<android::util::AttributeSet> attrs, jint defStyleAttr, jint defStyleRes) { return base_::new_object(context, attrs, defStyleAttr, defStyleRes); }
inline ref<android::view::SurfaceHolder> SurfaceView::getHolder() { return call_method<SCAPIX_META_STRING("getHolder"), ref<android::view::SurfaceHolder>>(); }
inline void SurfaceView::setVisibility(jint visibility) { return call_method<SCAPIX_META_STRING("setVisibility"), void>(visibility); }
inline jboolean SurfaceView::gatherTransparentRegion(ref<android::graphics::Region> region) { return call_method<SCAPIX_META_STRING("gatherTransparentRegion"), jboolean>(region); }
inline void SurfaceView::draw(ref<android::graphics::Canvas> canvas) { return call_method<SCAPIX_META_STRING("draw"), void>(canvas); }
inline void SurfaceView::setZOrderMediaOverlay(jboolean isMediaOverlay) { return call_method<SCAPIX_META_STRING("setZOrderMediaOverlay"), void>(isMediaOverlay); }
inline void SurfaceView::setZOrderOnTop(jboolean onTop) { return call_method<SCAPIX_META_STRING("setZOrderOnTop"), void>(onTop); }
inline void SurfaceView::setSecure(jboolean isSecure) { return call_method<SCAPIX_META_STRING("setSecure"), void>(isSecure); }

} // namespace android::view
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_VIEW_SURFACEVIEW_H
