// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/android/graphics/drawable/DrawableWrapper.h>

#ifndef SCAPIX_ANDROID_GRAPHICS_DRAWABLE_CLIPDRAWABLE_H
#define SCAPIX_ANDROID_GRAPHICS_DRAWABLE_CLIPDRAWABLE_H

namespace scapix::java_api {

namespace android::content::res { class Resources; }
namespace android::content::res { class Resources_Theme; }
namespace android::graphics { class Canvas; }
namespace android::graphics::drawable { class Drawable; }
namespace android::util { class AttributeSet; }
namespace org::xmlpull::v1 { class XmlPullParser; }

namespace android::graphics::drawable {

class ClipDrawable : public object_base<SCAPIX_META_STRING("android/graphics/drawable/ClipDrawable"),
	android::graphics::drawable::DrawableWrapper>
{
public:

	static jint HORIZONTAL_();
	static jint VERTICAL_();

	static ref<ClipDrawable> new_object(ref<android::graphics::drawable::Drawable> drawable, jint gravity, jint orientation);
	void inflate(ref<android::content::res::Resources> r, ref<org::xmlpull::v1::XmlPullParser> parser, ref<android::util::AttributeSet> attrs, ref<android::content::res::Resources_Theme> theme);
	void applyTheme(ref<android::content::res::Resources_Theme> t);
	jint getOpacity();
	void draw(ref<android::graphics::Canvas> canvas);

protected:

	ClipDrawable(handle_type h) : base_(h) {}

};

} // namespace android::graphics::drawable
} // namespace scapix::java_api

#include <scapix/java_api/android/content/res/Resources.h>
#include <scapix/java_api/android/content/res/Resources_Theme.h>
#include <scapix/java_api/android/graphics/Canvas.h>
#include <scapix/java_api/android/graphics/drawable/Drawable.h>
#include <scapix/java_api/android/util/AttributeSet.h>
#include <scapix/java_api/org/xmlpull/v1/XmlPullParser.h>

namespace scapix::java_api {
namespace android::graphics::drawable {

inline jint ClipDrawable::HORIZONTAL_() { return get_static_field<SCAPIX_META_STRING("HORIZONTAL"), jint>(); }
inline jint ClipDrawable::VERTICAL_() { return get_static_field<SCAPIX_META_STRING("VERTICAL"), jint>(); }
inline ref<ClipDrawable> ClipDrawable::new_object(ref<android::graphics::drawable::Drawable> drawable, jint gravity, jint orientation) { return base_::new_object(drawable, gravity, orientation); }
inline void ClipDrawable::inflate(ref<android::content::res::Resources> r, ref<org::xmlpull::v1::XmlPullParser> parser, ref<android::util::AttributeSet> attrs, ref<android::content::res::Resources_Theme> theme) { return call_method<SCAPIX_META_STRING("inflate"), void>(r, parser, attrs, theme); }
inline void ClipDrawable::applyTheme(ref<android::content::res::Resources_Theme> t) { return call_method<SCAPIX_META_STRING("applyTheme"), void>(t); }
inline jint ClipDrawable::getOpacity() { return call_method<SCAPIX_META_STRING("getOpacity"), jint>(); }
inline void ClipDrawable::draw(ref<android::graphics::Canvas> canvas) { return call_method<SCAPIX_META_STRING("draw"), void>(canvas); }

} // namespace android::graphics::drawable
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_GRAPHICS_DRAWABLE_CLIPDRAWABLE_H
