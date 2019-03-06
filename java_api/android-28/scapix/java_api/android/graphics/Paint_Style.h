// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_ANDROID_GRAPHICS_PAINT_STYLE_H
#define SCAPIX_ANDROID_GRAPHICS_PAINT_STYLE_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace android::graphics {

class Paint_Style : public object_base<SCAPIX_META_STRING("android/graphics/Paint$Style"),
	java::lang::Enum>
{
public:

	static ref<android::graphics::Paint_Style> FILL_();
	static ref<android::graphics::Paint_Style> STROKE_();
	static ref<android::graphics::Paint_Style> FILL_AND_STROKE_();

	static ref<link::java::array<android::graphics::Paint_Style>> values();
	static ref<android::graphics::Paint_Style> valueOf(ref<java::lang::String> name);

protected:

	Paint_Style(handle_type h) : base_(h) {}

};

} // namespace android::graphics
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::graphics {

inline ref<android::graphics::Paint_Style> Paint_Style::FILL_() { return get_static_field<SCAPIX_META_STRING("FILL"), ref<android::graphics::Paint_Style>>(); }
inline ref<android::graphics::Paint_Style> Paint_Style::STROKE_() { return get_static_field<SCAPIX_META_STRING("STROKE"), ref<android::graphics::Paint_Style>>(); }
inline ref<android::graphics::Paint_Style> Paint_Style::FILL_AND_STROKE_() { return get_static_field<SCAPIX_META_STRING("FILL_AND_STROKE"), ref<android::graphics::Paint_Style>>(); }
inline ref<link::java::array<android::graphics::Paint_Style>> Paint_Style::values() { return call_static_method<SCAPIX_META_STRING("values"), ref<link::java::array<android::graphics::Paint_Style>>>(); }
inline ref<android::graphics::Paint_Style> Paint_Style::valueOf(ref<java::lang::String> name) { return call_static_method<SCAPIX_META_STRING("valueOf"), ref<android::graphics::Paint_Style>>(name); }

} // namespace android::graphics
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_GRAPHICS_PAINT_STYLE_H
