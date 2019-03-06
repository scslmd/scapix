// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/android/graphics/PathEffect.h>

#ifndef SCAPIX_ANDROID_GRAPHICS_PATHDASHPATHEFFECT_H
#define SCAPIX_ANDROID_GRAPHICS_PATHDASHPATHEFFECT_H

namespace scapix::java_api {

namespace android::graphics { class Path; }
namespace android::graphics { class PathDashPathEffect_Style; }

namespace android::graphics {

class PathDashPathEffect : public object_base<SCAPIX_META_STRING("android/graphics/PathDashPathEffect"),
	android::graphics::PathEffect>
{
public:

	using Style = PathDashPathEffect_Style;

	static ref<PathDashPathEffect> new_object(ref<android::graphics::Path> shape, jfloat advance, jfloat phase, ref<android::graphics::PathDashPathEffect_Style> style);

protected:

	PathDashPathEffect(handle_type h) : base_(h) {}

};

} // namespace android::graphics
} // namespace scapix::java_api

#include <scapix/java_api/android/graphics/Path.h>
#include <scapix/java_api/android/graphics/PathDashPathEffect_Style.h>

namespace scapix::java_api {
namespace android::graphics {

inline ref<PathDashPathEffect> PathDashPathEffect::new_object(ref<android::graphics::Path> shape, jfloat advance, jfloat phase, ref<android::graphics::PathDashPathEffect_Style> style) { return base_::new_object(shape, advance, phase, style); }

} // namespace android::graphics
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_GRAPHICS_PATHDASHPATHEFFECT_H
