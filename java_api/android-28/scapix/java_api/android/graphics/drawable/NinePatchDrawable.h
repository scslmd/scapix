// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/android/graphics/drawable/Drawable.h>

#ifndef SCAPIX_ANDROID_GRAPHICS_DRAWABLE_NINEPATCHDRAWABLE_H
#define SCAPIX_ANDROID_GRAPHICS_DRAWABLE_NINEPATCHDRAWABLE_H

namespace scapix::java_api {

namespace android::content::res { class ColorStateList; }
namespace android::content::res { class Resources; }
namespace android::content::res { class Resources_Theme; }
namespace android::graphics { class Bitmap; }
namespace android::graphics { class Canvas; }
namespace android::graphics { class ColorFilter; }
namespace android::graphics { class NinePatch; }
namespace android::graphics { class Outline; }
namespace android::graphics { class Paint; }
namespace android::graphics { class PorterDuff_Mode; }
namespace android::graphics { class Rect; }
namespace android::graphics { class Region; }
namespace android::graphics::drawable { class Drawable_ConstantState; }
namespace android::util { class AttributeSet; }
namespace android::util { class DisplayMetrics; }
namespace java::lang { class String; }
namespace org::xmlpull::v1 { class XmlPullParser; }

namespace android::graphics::drawable {

class NinePatchDrawable : public object_base<SCAPIX_META_STRING("android/graphics/drawable/NinePatchDrawable"),
	android::graphics::drawable::Drawable>
{
public:

	static ref<NinePatchDrawable> new_object(ref<android::graphics::Bitmap> bitmap, ref<link::java::array<jbyte>> chunk, ref<android::graphics::Rect> padding, ref<java::lang::String> srcName);
	static ref<NinePatchDrawable> new_object(ref<android::content::res::Resources> res, ref<android::graphics::Bitmap> bitmap, ref<link::java::array<jbyte>> chunk, ref<android::graphics::Rect> padding, ref<java::lang::String> srcName);
	static ref<NinePatchDrawable> new_object(ref<android::graphics::NinePatch> patch);
	static ref<NinePatchDrawable> new_object(ref<android::content::res::Resources> res, ref<android::graphics::NinePatch> patch);
	void setTargetDensity(ref<android::graphics::Canvas> canvas);
	void setTargetDensity(ref<android::util::DisplayMetrics> metrics);
	void setTargetDensity(jint density);
	void draw(ref<android::graphics::Canvas> canvas);
	jint getChangingConfigurations();
	jboolean getPadding(ref<android::graphics::Rect> padding);
	void getOutline(ref<android::graphics::Outline> outline);
	void setAlpha(jint alpha);
	jint getAlpha();
	void setColorFilter(ref<android::graphics::ColorFilter> colorFilter);
	void setTintList(ref<android::content::res::ColorStateList> tint);
	void setTintMode(ref<android::graphics::PorterDuff_Mode> tintMode);
	void setDither(jboolean dither);
	void setAutoMirrored(jboolean mirrored);
	jboolean isAutoMirrored();
	void setFilterBitmap(jboolean filter);
	jboolean isFilterBitmap();
	void inflate(ref<android::content::res::Resources> r, ref<org::xmlpull::v1::XmlPullParser> parser, ref<android::util::AttributeSet> attrs, ref<android::content::res::Resources_Theme> theme);
	void applyTheme(ref<android::content::res::Resources_Theme> t);
	jboolean canApplyTheme();
	ref<android::graphics::Paint> getPaint();
	jint getIntrinsicWidth();
	jint getIntrinsicHeight();
	jint getOpacity();
	ref<android::graphics::Region> getTransparentRegion();
	ref<android::graphics::drawable::Drawable_ConstantState> getConstantState();
	ref<android::graphics::drawable::Drawable> mutate();
	jboolean isStateful();

protected:

	NinePatchDrawable(handle_type h) : base_(h) {}

};

} // namespace android::graphics::drawable
} // namespace scapix::java_api

#include <scapix/java_api/android/content/res/ColorStateList.h>
#include <scapix/java_api/android/content/res/Resources.h>
#include <scapix/java_api/android/content/res/Resources_Theme.h>
#include <scapix/java_api/android/graphics/Bitmap.h>
#include <scapix/java_api/android/graphics/Canvas.h>
#include <scapix/java_api/android/graphics/ColorFilter.h>
#include <scapix/java_api/android/graphics/NinePatch.h>
#include <scapix/java_api/android/graphics/Outline.h>
#include <scapix/java_api/android/graphics/Paint.h>
#include <scapix/java_api/android/graphics/PorterDuff_Mode.h>
#include <scapix/java_api/android/graphics/Rect.h>
#include <scapix/java_api/android/graphics/Region.h>
#include <scapix/java_api/android/graphics/drawable/Drawable_ConstantState.h>
#include <scapix/java_api/android/util/AttributeSet.h>
#include <scapix/java_api/android/util/DisplayMetrics.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/xmlpull/v1/XmlPullParser.h>

namespace scapix::java_api {
namespace android::graphics::drawable {

inline ref<NinePatchDrawable> NinePatchDrawable::new_object(ref<android::graphics::Bitmap> bitmap, ref<link::java::array<jbyte>> chunk, ref<android::graphics::Rect> padding, ref<java::lang::String> srcName) { return base_::new_object(bitmap, chunk, padding, srcName); }
inline ref<NinePatchDrawable> NinePatchDrawable::new_object(ref<android::content::res::Resources> res, ref<android::graphics::Bitmap> bitmap, ref<link::java::array<jbyte>> chunk, ref<android::graphics::Rect> padding, ref<java::lang::String> srcName) { return base_::new_object(res, bitmap, chunk, padding, srcName); }
inline ref<NinePatchDrawable> NinePatchDrawable::new_object(ref<android::graphics::NinePatch> patch) { return base_::new_object(patch); }
inline ref<NinePatchDrawable> NinePatchDrawable::new_object(ref<android::content::res::Resources> res, ref<android::graphics::NinePatch> patch) { return base_::new_object(res, patch); }
inline void NinePatchDrawable::setTargetDensity(ref<android::graphics::Canvas> canvas) { return call_method<SCAPIX_META_STRING("setTargetDensity"), void>(canvas); }
inline void NinePatchDrawable::setTargetDensity(ref<android::util::DisplayMetrics> metrics) { return call_method<SCAPIX_META_STRING("setTargetDensity"), void>(metrics); }
inline void NinePatchDrawable::setTargetDensity(jint density) { return call_method<SCAPIX_META_STRING("setTargetDensity"), void>(density); }
inline void NinePatchDrawable::draw(ref<android::graphics::Canvas> canvas) { return call_method<SCAPIX_META_STRING("draw"), void>(canvas); }
inline jint NinePatchDrawable::getChangingConfigurations() { return call_method<SCAPIX_META_STRING("getChangingConfigurations"), jint>(); }
inline jboolean NinePatchDrawable::getPadding(ref<android::graphics::Rect> padding) { return call_method<SCAPIX_META_STRING("getPadding"), jboolean>(padding); }
inline void NinePatchDrawable::getOutline(ref<android::graphics::Outline> outline) { return call_method<SCAPIX_META_STRING("getOutline"), void>(outline); }
inline void NinePatchDrawable::setAlpha(jint alpha) { return call_method<SCAPIX_META_STRING("setAlpha"), void>(alpha); }
inline jint NinePatchDrawable::getAlpha() { return call_method<SCAPIX_META_STRING("getAlpha"), jint>(); }
inline void NinePatchDrawable::setColorFilter(ref<android::graphics::ColorFilter> colorFilter) { return call_method<SCAPIX_META_STRING("setColorFilter"), void>(colorFilter); }
inline void NinePatchDrawable::setTintList(ref<android::content::res::ColorStateList> tint) { return call_method<SCAPIX_META_STRING("setTintList"), void>(tint); }
inline void NinePatchDrawable::setTintMode(ref<android::graphics::PorterDuff_Mode> tintMode) { return call_method<SCAPIX_META_STRING("setTintMode"), void>(tintMode); }
inline void NinePatchDrawable::setDither(jboolean dither) { return call_method<SCAPIX_META_STRING("setDither"), void>(dither); }
inline void NinePatchDrawable::setAutoMirrored(jboolean mirrored) { return call_method<SCAPIX_META_STRING("setAutoMirrored"), void>(mirrored); }
inline jboolean NinePatchDrawable::isAutoMirrored() { return call_method<SCAPIX_META_STRING("isAutoMirrored"), jboolean>(); }
inline void NinePatchDrawable::setFilterBitmap(jboolean filter) { return call_method<SCAPIX_META_STRING("setFilterBitmap"), void>(filter); }
inline jboolean NinePatchDrawable::isFilterBitmap() { return call_method<SCAPIX_META_STRING("isFilterBitmap"), jboolean>(); }
inline void NinePatchDrawable::inflate(ref<android::content::res::Resources> r, ref<org::xmlpull::v1::XmlPullParser> parser, ref<android::util::AttributeSet> attrs, ref<android::content::res::Resources_Theme> theme) { return call_method<SCAPIX_META_STRING("inflate"), void>(r, parser, attrs, theme); }
inline void NinePatchDrawable::applyTheme(ref<android::content::res::Resources_Theme> t) { return call_method<SCAPIX_META_STRING("applyTheme"), void>(t); }
inline jboolean NinePatchDrawable::canApplyTheme() { return call_method<SCAPIX_META_STRING("canApplyTheme"), jboolean>(); }
inline ref<android::graphics::Paint> NinePatchDrawable::getPaint() { return call_method<SCAPIX_META_STRING("getPaint"), ref<android::graphics::Paint>>(); }
inline jint NinePatchDrawable::getIntrinsicWidth() { return call_method<SCAPIX_META_STRING("getIntrinsicWidth"), jint>(); }
inline jint NinePatchDrawable::getIntrinsicHeight() { return call_method<SCAPIX_META_STRING("getIntrinsicHeight"), jint>(); }
inline jint NinePatchDrawable::getOpacity() { return call_method<SCAPIX_META_STRING("getOpacity"), jint>(); }
inline ref<android::graphics::Region> NinePatchDrawable::getTransparentRegion() { return call_method<SCAPIX_META_STRING("getTransparentRegion"), ref<android::graphics::Region>>(); }
inline ref<android::graphics::drawable::Drawable_ConstantState> NinePatchDrawable::getConstantState() { return call_method<SCAPIX_META_STRING("getConstantState"), ref<android::graphics::drawable::Drawable_ConstantState>>(); }
inline ref<android::graphics::drawable::Drawable> NinePatchDrawable::mutate() { return call_method<SCAPIX_META_STRING("mutate"), ref<android::graphics::drawable::Drawable>>(); }
inline jboolean NinePatchDrawable::isStateful() { return call_method<SCAPIX_META_STRING("isStateful"), jboolean>(); }

} // namespace android::graphics::drawable
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_GRAPHICS_DRAWABLE_NINEPATCHDRAWABLE_H
