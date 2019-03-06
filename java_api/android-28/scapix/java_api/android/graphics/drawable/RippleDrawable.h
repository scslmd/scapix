// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/android/graphics/drawable/LayerDrawable.h>

#ifndef SCAPIX_ANDROID_GRAPHICS_DRAWABLE_RIPPLEDRAWABLE_H
#define SCAPIX_ANDROID_GRAPHICS_DRAWABLE_RIPPLEDRAWABLE_H

namespace scapix::java_api {

namespace android::content::res { class ColorStateList; }
namespace android::content::res { class Resources; }
namespace android::content::res { class Resources_Theme; }
namespace android::graphics { class Canvas; }
namespace android::graphics { class Outline; }
namespace android::graphics { class Rect; }
namespace android::graphics::drawable { class Drawable; }
namespace android::graphics::drawable { class Drawable_ConstantState; }
namespace android::util { class AttributeSet; }
namespace org::xmlpull::v1 { class XmlPullParser; }

namespace android::graphics::drawable {

class RippleDrawable : public object_base<SCAPIX_META_STRING("android/graphics/drawable/RippleDrawable"),
	android::graphics::drawable::LayerDrawable>
{
public:

	static jint RADIUS_AUTO_();

	static ref<RippleDrawable> new_object(ref<android::content::res::ColorStateList> color, ref<android::graphics::drawable::Drawable> content, ref<android::graphics::drawable::Drawable> mask);
	void jumpToCurrentState();
	jint getOpacity();
	jboolean setVisible(jboolean visible, jboolean restart);
	jboolean isStateful();
	void setColor(ref<android::content::res::ColorStateList> color);
	void setRadius(jint radius);
	jint getRadius();
	void inflate(ref<android::content::res::Resources> r, ref<org::xmlpull::v1::XmlPullParser> parser, ref<android::util::AttributeSet> attrs, ref<android::content::res::Resources_Theme> theme);
	jboolean setDrawableByLayerId(jint id, ref<android::graphics::drawable::Drawable> drawable);
	void setPaddingMode(jint mode);
	void applyTheme(ref<android::content::res::Resources_Theme> t);
	jboolean canApplyTheme();
	void setHotspot(jfloat x, jfloat y);
	void setHotspotBounds(jint left, jint top, jint right, jint bottom);
	void getHotspotBounds(ref<android::graphics::Rect> outRect);
	void getOutline(ref<android::graphics::Outline> outline);
	void draw(ref<android::graphics::Canvas> canvas);
	void invalidateSelf();
	ref<android::graphics::Rect> getDirtyBounds();
	ref<android::graphics::drawable::Drawable_ConstantState> getConstantState();
	ref<android::graphics::drawable::Drawable> mutate();

protected:

	RippleDrawable(handle_type h) : base_(h) {}

};

} // namespace android::graphics::drawable
} // namespace scapix::java_api

#include <scapix/java_api/android/content/res/ColorStateList.h>
#include <scapix/java_api/android/content/res/Resources.h>
#include <scapix/java_api/android/content/res/Resources_Theme.h>
#include <scapix/java_api/android/graphics/Canvas.h>
#include <scapix/java_api/android/graphics/Outline.h>
#include <scapix/java_api/android/graphics/Rect.h>
#include <scapix/java_api/android/graphics/drawable/Drawable.h>
#include <scapix/java_api/android/graphics/drawable/Drawable_ConstantState.h>
#include <scapix/java_api/android/util/AttributeSet.h>
#include <scapix/java_api/org/xmlpull/v1/XmlPullParser.h>

namespace scapix::java_api {
namespace android::graphics::drawable {

inline jint RippleDrawable::RADIUS_AUTO_() { return get_static_field<SCAPIX_META_STRING("RADIUS_AUTO"), jint>(); }
inline ref<RippleDrawable> RippleDrawable::new_object(ref<android::content::res::ColorStateList> color, ref<android::graphics::drawable::Drawable> content, ref<android::graphics::drawable::Drawable> mask) { return base_::new_object(color, content, mask); }
inline void RippleDrawable::jumpToCurrentState() { return call_method<SCAPIX_META_STRING("jumpToCurrentState"), void>(); }
inline jint RippleDrawable::getOpacity() { return call_method<SCAPIX_META_STRING("getOpacity"), jint>(); }
inline jboolean RippleDrawable::setVisible(jboolean visible, jboolean restart) { return call_method<SCAPIX_META_STRING("setVisible"), jboolean>(visible, restart); }
inline jboolean RippleDrawable::isStateful() { return call_method<SCAPIX_META_STRING("isStateful"), jboolean>(); }
inline void RippleDrawable::setColor(ref<android::content::res::ColorStateList> color) { return call_method<SCAPIX_META_STRING("setColor"), void>(color); }
inline void RippleDrawable::setRadius(jint radius) { return call_method<SCAPIX_META_STRING("setRadius"), void>(radius); }
inline jint RippleDrawable::getRadius() { return call_method<SCAPIX_META_STRING("getRadius"), jint>(); }
inline void RippleDrawable::inflate(ref<android::content::res::Resources> r, ref<org::xmlpull::v1::XmlPullParser> parser, ref<android::util::AttributeSet> attrs, ref<android::content::res::Resources_Theme> theme) { return call_method<SCAPIX_META_STRING("inflate"), void>(r, parser, attrs, theme); }
inline jboolean RippleDrawable::setDrawableByLayerId(jint id, ref<android::graphics::drawable::Drawable> drawable) { return call_method<SCAPIX_META_STRING("setDrawableByLayerId"), jboolean>(id, drawable); }
inline void RippleDrawable::setPaddingMode(jint mode) { return call_method<SCAPIX_META_STRING("setPaddingMode"), void>(mode); }
inline void RippleDrawable::applyTheme(ref<android::content::res::Resources_Theme> t) { return call_method<SCAPIX_META_STRING("applyTheme"), void>(t); }
inline jboolean RippleDrawable::canApplyTheme() { return call_method<SCAPIX_META_STRING("canApplyTheme"), jboolean>(); }
inline void RippleDrawable::setHotspot(jfloat x, jfloat y) { return call_method<SCAPIX_META_STRING("setHotspot"), void>(x, y); }
inline void RippleDrawable::setHotspotBounds(jint left, jint top, jint right, jint bottom) { return call_method<SCAPIX_META_STRING("setHotspotBounds"), void>(left, top, right, bottom); }
inline void RippleDrawable::getHotspotBounds(ref<android::graphics::Rect> outRect) { return call_method<SCAPIX_META_STRING("getHotspotBounds"), void>(outRect); }
inline void RippleDrawable::getOutline(ref<android::graphics::Outline> outline) { return call_method<SCAPIX_META_STRING("getOutline"), void>(outline); }
inline void RippleDrawable::draw(ref<android::graphics::Canvas> canvas) { return call_method<SCAPIX_META_STRING("draw"), void>(canvas); }
inline void RippleDrawable::invalidateSelf() { return call_method<SCAPIX_META_STRING("invalidateSelf"), void>(); }
inline ref<android::graphics::Rect> RippleDrawable::getDirtyBounds() { return call_method<SCAPIX_META_STRING("getDirtyBounds"), ref<android::graphics::Rect>>(); }
inline ref<android::graphics::drawable::Drawable_ConstantState> RippleDrawable::getConstantState() { return call_method<SCAPIX_META_STRING("getConstantState"), ref<android::graphics::drawable::Drawable_ConstantState>>(); }
inline ref<android::graphics::drawable::Drawable> RippleDrawable::mutate() { return call_method<SCAPIX_META_STRING("mutate"), ref<android::graphics::drawable::Drawable>>(); }

} // namespace android::graphics::drawable
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_GRAPHICS_DRAWABLE_RIPPLEDRAWABLE_H
