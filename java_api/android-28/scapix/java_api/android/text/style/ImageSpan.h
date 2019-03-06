// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/android/text/style/DynamicDrawableSpan.h>

#ifndef SCAPIX_ANDROID_TEXT_STYLE_IMAGESPAN_H
#define SCAPIX_ANDROID_TEXT_STYLE_IMAGESPAN_H

namespace scapix::java_api {

namespace android::content { class Context; }
namespace android::graphics { class Bitmap; }
namespace android::graphics::drawable { class Drawable; }
namespace android::net { class Uri; }
namespace java::lang { class String; }

namespace android::text::style {

class ImageSpan : public object_base<SCAPIX_META_STRING("android/text/style/ImageSpan"),
	android::text::style::DynamicDrawableSpan>
{
public:

	static ref<ImageSpan> new_object(ref<android::graphics::Bitmap> b);
	static ref<ImageSpan> new_object(ref<android::graphics::Bitmap> b, jint verticalAlignment);
	static ref<ImageSpan> new_object(ref<android::content::Context> context, ref<android::graphics::Bitmap> bitmap);
	static ref<ImageSpan> new_object(ref<android::content::Context> context, ref<android::graphics::Bitmap> bitmap, jint verticalAlignment);
	static ref<ImageSpan> new_object(ref<android::graphics::drawable::Drawable> drawable);
	static ref<ImageSpan> new_object(ref<android::graphics::drawable::Drawable> drawable, jint verticalAlignment);
	static ref<ImageSpan> new_object(ref<android::graphics::drawable::Drawable> drawable, ref<java::lang::String> source);
	static ref<ImageSpan> new_object(ref<android::graphics::drawable::Drawable> drawable, ref<java::lang::String> source, jint verticalAlignment);
	static ref<ImageSpan> new_object(ref<android::content::Context> context, ref<android::net::Uri> uri);
	static ref<ImageSpan> new_object(ref<android::content::Context> context, ref<android::net::Uri> uri, jint verticalAlignment);
	static ref<ImageSpan> new_object(ref<android::content::Context> context, jint resourceId);
	static ref<ImageSpan> new_object(ref<android::content::Context> context, jint resourceId, jint verticalAlignment);
	ref<android::graphics::drawable::Drawable> getDrawable();
	ref<java::lang::String> getSource();

protected:

	ImageSpan(handle_type h) : base_(h) {}

};

} // namespace android::text::style
} // namespace scapix::java_api

#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/graphics/Bitmap.h>
#include <scapix/java_api/android/graphics/drawable/Drawable.h>
#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::text::style {

inline ref<ImageSpan> ImageSpan::new_object(ref<android::graphics::Bitmap> b) { return base_::new_object(b); }
inline ref<ImageSpan> ImageSpan::new_object(ref<android::graphics::Bitmap> b, jint verticalAlignment) { return base_::new_object(b, verticalAlignment); }
inline ref<ImageSpan> ImageSpan::new_object(ref<android::content::Context> context, ref<android::graphics::Bitmap> bitmap) { return base_::new_object(context, bitmap); }
inline ref<ImageSpan> ImageSpan::new_object(ref<android::content::Context> context, ref<android::graphics::Bitmap> bitmap, jint verticalAlignment) { return base_::new_object(context, bitmap, verticalAlignment); }
inline ref<ImageSpan> ImageSpan::new_object(ref<android::graphics::drawable::Drawable> drawable) { return base_::new_object(drawable); }
inline ref<ImageSpan> ImageSpan::new_object(ref<android::graphics::drawable::Drawable> drawable, jint verticalAlignment) { return base_::new_object(drawable, verticalAlignment); }
inline ref<ImageSpan> ImageSpan::new_object(ref<android::graphics::drawable::Drawable> drawable, ref<java::lang::String> source) { return base_::new_object(drawable, source); }
inline ref<ImageSpan> ImageSpan::new_object(ref<android::graphics::drawable::Drawable> drawable, ref<java::lang::String> source, jint verticalAlignment) { return base_::new_object(drawable, source, verticalAlignment); }
inline ref<ImageSpan> ImageSpan::new_object(ref<android::content::Context> context, ref<android::net::Uri> uri) { return base_::new_object(context, uri); }
inline ref<ImageSpan> ImageSpan::new_object(ref<android::content::Context> context, ref<android::net::Uri> uri, jint verticalAlignment) { return base_::new_object(context, uri, verticalAlignment); }
inline ref<ImageSpan> ImageSpan::new_object(ref<android::content::Context> context, jint resourceId) { return base_::new_object(context, resourceId); }
inline ref<ImageSpan> ImageSpan::new_object(ref<android::content::Context> context, jint resourceId, jint verticalAlignment) { return base_::new_object(context, resourceId, verticalAlignment); }
inline ref<android::graphics::drawable::Drawable> ImageSpan::getDrawable() { return call_method<SCAPIX_META_STRING("getDrawable"), ref<android::graphics::drawable::Drawable>>(); }
inline ref<java::lang::String> ImageSpan::getSource() { return call_method<SCAPIX_META_STRING("getSource"), ref<java::lang::String>>(); }

} // namespace android::text::style
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_TEXT_STYLE_IMAGESPAN_H
