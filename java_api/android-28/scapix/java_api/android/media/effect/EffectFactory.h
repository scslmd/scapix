// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_MEDIA_EFFECT_EFFECTFACTORY_H
#define SCAPIX_ANDROID_MEDIA_EFFECT_EFFECTFACTORY_H

namespace scapix::java_api {

namespace android::media::effect { class Effect; }
namespace java::lang { class String; }

namespace android::media::effect {

class EffectFactory : public object_base<SCAPIX_META_STRING("android/media/effect/EffectFactory"),
	java::lang::Object>
{
public:

	static ref<java::lang::String> EFFECT_AUTOFIX_();
	static ref<java::lang::String> EFFECT_BACKDROPPER_();
	static ref<java::lang::String> EFFECT_BITMAPOVERLAY_();
	static ref<java::lang::String> EFFECT_BLACKWHITE_();
	static ref<java::lang::String> EFFECT_BRIGHTNESS_();
	static ref<java::lang::String> EFFECT_CONTRAST_();
	static ref<java::lang::String> EFFECT_CROP_();
	static ref<java::lang::String> EFFECT_CROSSPROCESS_();
	static ref<java::lang::String> EFFECT_DOCUMENTARY_();
	static ref<java::lang::String> EFFECT_DUOTONE_();
	static ref<java::lang::String> EFFECT_FILLLIGHT_();
	static ref<java::lang::String> EFFECT_FISHEYE_();
	static ref<java::lang::String> EFFECT_FLIP_();
	static ref<java::lang::String> EFFECT_GRAIN_();
	static ref<java::lang::String> EFFECT_GRAYSCALE_();
	static ref<java::lang::String> EFFECT_LOMOISH_();
	static ref<java::lang::String> EFFECT_NEGATIVE_();
	static ref<java::lang::String> EFFECT_POSTERIZE_();
	static ref<java::lang::String> EFFECT_REDEYE_();
	static ref<java::lang::String> EFFECT_ROTATE_();
	static ref<java::lang::String> EFFECT_SATURATE_();
	static ref<java::lang::String> EFFECT_SEPIA_();
	static ref<java::lang::String> EFFECT_SHARPEN_();
	static ref<java::lang::String> EFFECT_STRAIGHTEN_();
	static ref<java::lang::String> EFFECT_TEMPERATURE_();
	static ref<java::lang::String> EFFECT_TINT_();
	static ref<java::lang::String> EFFECT_VIGNETTE_();

	ref<android::media::effect::Effect> createEffect(ref<java::lang::String> effectName);
	static jboolean isEffectSupported(ref<java::lang::String> effectName);

protected:

	EffectFactory(handle_type h) : base_(h) {}

};

} // namespace android::media::effect
} // namespace scapix::java_api

#include <scapix/java_api/android/media/effect/Effect.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::media::effect {

inline ref<java::lang::String> EffectFactory::EFFECT_AUTOFIX_() { return get_static_field<SCAPIX_META_STRING("EFFECT_AUTOFIX"), ref<java::lang::String>>(); }
inline ref<java::lang::String> EffectFactory::EFFECT_BACKDROPPER_() { return get_static_field<SCAPIX_META_STRING("EFFECT_BACKDROPPER"), ref<java::lang::String>>(); }
inline ref<java::lang::String> EffectFactory::EFFECT_BITMAPOVERLAY_() { return get_static_field<SCAPIX_META_STRING("EFFECT_BITMAPOVERLAY"), ref<java::lang::String>>(); }
inline ref<java::lang::String> EffectFactory::EFFECT_BLACKWHITE_() { return get_static_field<SCAPIX_META_STRING("EFFECT_BLACKWHITE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> EffectFactory::EFFECT_BRIGHTNESS_() { return get_static_field<SCAPIX_META_STRING("EFFECT_BRIGHTNESS"), ref<java::lang::String>>(); }
inline ref<java::lang::String> EffectFactory::EFFECT_CONTRAST_() { return get_static_field<SCAPIX_META_STRING("EFFECT_CONTRAST"), ref<java::lang::String>>(); }
inline ref<java::lang::String> EffectFactory::EFFECT_CROP_() { return get_static_field<SCAPIX_META_STRING("EFFECT_CROP"), ref<java::lang::String>>(); }
inline ref<java::lang::String> EffectFactory::EFFECT_CROSSPROCESS_() { return get_static_field<SCAPIX_META_STRING("EFFECT_CROSSPROCESS"), ref<java::lang::String>>(); }
inline ref<java::lang::String> EffectFactory::EFFECT_DOCUMENTARY_() { return get_static_field<SCAPIX_META_STRING("EFFECT_DOCUMENTARY"), ref<java::lang::String>>(); }
inline ref<java::lang::String> EffectFactory::EFFECT_DUOTONE_() { return get_static_field<SCAPIX_META_STRING("EFFECT_DUOTONE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> EffectFactory::EFFECT_FILLLIGHT_() { return get_static_field<SCAPIX_META_STRING("EFFECT_FILLLIGHT"), ref<java::lang::String>>(); }
inline ref<java::lang::String> EffectFactory::EFFECT_FISHEYE_() { return get_static_field<SCAPIX_META_STRING("EFFECT_FISHEYE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> EffectFactory::EFFECT_FLIP_() { return get_static_field<SCAPIX_META_STRING("EFFECT_FLIP"), ref<java::lang::String>>(); }
inline ref<java::lang::String> EffectFactory::EFFECT_GRAIN_() { return get_static_field<SCAPIX_META_STRING("EFFECT_GRAIN"), ref<java::lang::String>>(); }
inline ref<java::lang::String> EffectFactory::EFFECT_GRAYSCALE_() { return get_static_field<SCAPIX_META_STRING("EFFECT_GRAYSCALE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> EffectFactory::EFFECT_LOMOISH_() { return get_static_field<SCAPIX_META_STRING("EFFECT_LOMOISH"), ref<java::lang::String>>(); }
inline ref<java::lang::String> EffectFactory::EFFECT_NEGATIVE_() { return get_static_field<SCAPIX_META_STRING("EFFECT_NEGATIVE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> EffectFactory::EFFECT_POSTERIZE_() { return get_static_field<SCAPIX_META_STRING("EFFECT_POSTERIZE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> EffectFactory::EFFECT_REDEYE_() { return get_static_field<SCAPIX_META_STRING("EFFECT_REDEYE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> EffectFactory::EFFECT_ROTATE_() { return get_static_field<SCAPIX_META_STRING("EFFECT_ROTATE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> EffectFactory::EFFECT_SATURATE_() { return get_static_field<SCAPIX_META_STRING("EFFECT_SATURATE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> EffectFactory::EFFECT_SEPIA_() { return get_static_field<SCAPIX_META_STRING("EFFECT_SEPIA"), ref<java::lang::String>>(); }
inline ref<java::lang::String> EffectFactory::EFFECT_SHARPEN_() { return get_static_field<SCAPIX_META_STRING("EFFECT_SHARPEN"), ref<java::lang::String>>(); }
inline ref<java::lang::String> EffectFactory::EFFECT_STRAIGHTEN_() { return get_static_field<SCAPIX_META_STRING("EFFECT_STRAIGHTEN"), ref<java::lang::String>>(); }
inline ref<java::lang::String> EffectFactory::EFFECT_TEMPERATURE_() { return get_static_field<SCAPIX_META_STRING("EFFECT_TEMPERATURE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> EffectFactory::EFFECT_TINT_() { return get_static_field<SCAPIX_META_STRING("EFFECT_TINT"), ref<java::lang::String>>(); }
inline ref<java::lang::String> EffectFactory::EFFECT_VIGNETTE_() { return get_static_field<SCAPIX_META_STRING("EFFECT_VIGNETTE"), ref<java::lang::String>>(); }
inline ref<android::media::effect::Effect> EffectFactory::createEffect(ref<java::lang::String> effectName) { return call_method<SCAPIX_META_STRING("createEffect"), ref<android::media::effect::Effect>>(effectName); }
inline jboolean EffectFactory::isEffectSupported(ref<java::lang::String> effectName) { return call_static_method<SCAPIX_META_STRING("isEffectSupported"), jboolean>(effectName); }

} // namespace android::media::effect
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_MEDIA_EFFECT_EFFECTFACTORY_H
