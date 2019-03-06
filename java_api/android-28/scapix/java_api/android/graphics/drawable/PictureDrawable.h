// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/android/graphics/drawable/Drawable.h>

#ifndef SCAPIX_ANDROID_GRAPHICS_DRAWABLE_PICTUREDRAWABLE_H
#define SCAPIX_ANDROID_GRAPHICS_DRAWABLE_PICTUREDRAWABLE_H

namespace scapix::java_api {

namespace android::graphics { class Canvas; }
namespace android::graphics { class ColorFilter; }
namespace android::graphics { class Picture; }

namespace android::graphics::drawable {

class PictureDrawable : public object_base<SCAPIX_META_STRING("android/graphics/drawable/PictureDrawable"),
	android::graphics::drawable::Drawable>
{
public:

	static ref<PictureDrawable> new_object(ref<android::graphics::Picture> picture);
	ref<android::graphics::Picture> getPicture();
	void setPicture(ref<android::graphics::Picture> picture);
	void draw(ref<android::graphics::Canvas> canvas);
	jint getIntrinsicWidth();
	jint getIntrinsicHeight();
	jint getOpacity();
	void setColorFilter(ref<android::graphics::ColorFilter> colorFilter);
	void setAlpha(jint alpha);

protected:

	PictureDrawable(handle_type h) : base_(h) {}

};

} // namespace android::graphics::drawable
} // namespace scapix::java_api

#include <scapix/java_api/android/graphics/Canvas.h>
#include <scapix/java_api/android/graphics/ColorFilter.h>
#include <scapix/java_api/android/graphics/Picture.h>

namespace scapix::java_api {
namespace android::graphics::drawable {

inline ref<PictureDrawable> PictureDrawable::new_object(ref<android::graphics::Picture> picture) { return base_::new_object(picture); }
inline ref<android::graphics::Picture> PictureDrawable::getPicture() { return call_method<SCAPIX_META_STRING("getPicture"), ref<android::graphics::Picture>>(); }
inline void PictureDrawable::setPicture(ref<android::graphics::Picture> picture) { return call_method<SCAPIX_META_STRING("setPicture"), void>(picture); }
inline void PictureDrawable::draw(ref<android::graphics::Canvas> canvas) { return call_method<SCAPIX_META_STRING("draw"), void>(canvas); }
inline jint PictureDrawable::getIntrinsicWidth() { return call_method<SCAPIX_META_STRING("getIntrinsicWidth"), jint>(); }
inline jint PictureDrawable::getIntrinsicHeight() { return call_method<SCAPIX_META_STRING("getIntrinsicHeight"), jint>(); }
inline jint PictureDrawable::getOpacity() { return call_method<SCAPIX_META_STRING("getOpacity"), jint>(); }
inline void PictureDrawable::setColorFilter(ref<android::graphics::ColorFilter> colorFilter) { return call_method<SCAPIX_META_STRING("setColorFilter"), void>(colorFilter); }
inline void PictureDrawable::setAlpha(jint alpha) { return call_method<SCAPIX_META_STRING("setAlpha"), void>(alpha); }

} // namespace android::graphics::drawable
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_GRAPHICS_DRAWABLE_PICTUREDRAWABLE_H
