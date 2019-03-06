// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_ANDROID_GRAPHICS_BLURMASKFILTER_BLUR_H
#define SCAPIX_ANDROID_GRAPHICS_BLURMASKFILTER_BLUR_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace android::graphics {

class BlurMaskFilter_Blur : public object_base<SCAPIX_META_STRING("android/graphics/BlurMaskFilter$Blur"),
	java::lang::Enum>
{
public:

	static ref<android::graphics::BlurMaskFilter_Blur> NORMAL_();
	static ref<android::graphics::BlurMaskFilter_Blur> SOLID_();
	static ref<android::graphics::BlurMaskFilter_Blur> OUTER_();
	static ref<android::graphics::BlurMaskFilter_Blur> INNER_();

	static ref<link::java::array<android::graphics::BlurMaskFilter_Blur>> values();
	static ref<android::graphics::BlurMaskFilter_Blur> valueOf(ref<java::lang::String> name);

protected:

	BlurMaskFilter_Blur(handle_type h) : base_(h) {}

};

} // namespace android::graphics
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::graphics {

inline ref<android::graphics::BlurMaskFilter_Blur> BlurMaskFilter_Blur::NORMAL_() { return get_static_field<SCAPIX_META_STRING("NORMAL"), ref<android::graphics::BlurMaskFilter_Blur>>(); }
inline ref<android::graphics::BlurMaskFilter_Blur> BlurMaskFilter_Blur::SOLID_() { return get_static_field<SCAPIX_META_STRING("SOLID"), ref<android::graphics::BlurMaskFilter_Blur>>(); }
inline ref<android::graphics::BlurMaskFilter_Blur> BlurMaskFilter_Blur::OUTER_() { return get_static_field<SCAPIX_META_STRING("OUTER"), ref<android::graphics::BlurMaskFilter_Blur>>(); }
inline ref<android::graphics::BlurMaskFilter_Blur> BlurMaskFilter_Blur::INNER_() { return get_static_field<SCAPIX_META_STRING("INNER"), ref<android::graphics::BlurMaskFilter_Blur>>(); }
inline ref<link::java::array<android::graphics::BlurMaskFilter_Blur>> BlurMaskFilter_Blur::values() { return call_static_method<SCAPIX_META_STRING("values"), ref<link::java::array<android::graphics::BlurMaskFilter_Blur>>>(); }
inline ref<android::graphics::BlurMaskFilter_Blur> BlurMaskFilter_Blur::valueOf(ref<java::lang::String> name) { return call_static_method<SCAPIX_META_STRING("valueOf"), ref<android::graphics::BlurMaskFilter_Blur>>(name); }

} // namespace android::graphics
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_GRAPHICS_BLURMASKFILTER_BLUR_H
