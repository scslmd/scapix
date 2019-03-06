// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_HARDWARE_CAMERA2_PARAMS_LENSSHADINGMAP_H
#define SCAPIX_ANDROID_HARDWARE_CAMERA2_PARAMS_LENSSHADINGMAP_H

namespace scapix::java_api {

namespace android::hardware::camera2::params { class RggbChannelVector; }
namespace java::lang { class String; }

namespace android::hardware::camera2::params {

class LensShadingMap : public object_base<SCAPIX_META_STRING("android/hardware/camera2/params/LensShadingMap"),
	java::lang::Object>
{
public:

	static jfloat MINIMUM_GAIN_FACTOR_();

	jint getRowCount();
	jint getColumnCount();
	jint getGainFactorCount();
	jfloat getGainFactor(jint colorChannel, jint column, jint row);
	ref<android::hardware::camera2::params::RggbChannelVector> getGainFactorVector(jint column, jint row);
	void copyGainFactors(ref<link::java::array<jfloat>> destination, jint offset);
	jboolean equals(ref<java::lang::Object> obj);
	jint hashCode();
	ref<java::lang::String> toString();

protected:

	LensShadingMap(handle_type h) : base_(h) {}

};

} // namespace android::hardware::camera2::params
} // namespace scapix::java_api

#include <scapix/java_api/android/hardware/camera2/params/RggbChannelVector.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::hardware::camera2::params {

inline jfloat LensShadingMap::MINIMUM_GAIN_FACTOR_() { return get_static_field<SCAPIX_META_STRING("MINIMUM_GAIN_FACTOR"), jfloat>(); }
inline jint LensShadingMap::getRowCount() { return call_method<SCAPIX_META_STRING("getRowCount"), jint>(); }
inline jint LensShadingMap::getColumnCount() { return call_method<SCAPIX_META_STRING("getColumnCount"), jint>(); }
inline jint LensShadingMap::getGainFactorCount() { return call_method<SCAPIX_META_STRING("getGainFactorCount"), jint>(); }
inline jfloat LensShadingMap::getGainFactor(jint colorChannel, jint column, jint row) { return call_method<SCAPIX_META_STRING("getGainFactor"), jfloat>(colorChannel, column, row); }
inline ref<android::hardware::camera2::params::RggbChannelVector> LensShadingMap::getGainFactorVector(jint column, jint row) { return call_method<SCAPIX_META_STRING("getGainFactorVector"), ref<android::hardware::camera2::params::RggbChannelVector>>(column, row); }
inline void LensShadingMap::copyGainFactors(ref<link::java::array<jfloat>> destination, jint offset) { return call_method<SCAPIX_META_STRING("copyGainFactors"), void>(destination, offset); }
inline jboolean LensShadingMap::equals(ref<java::lang::Object> obj) { return call_method<SCAPIX_META_STRING("equals"), jboolean>(obj); }
inline jint LensShadingMap::hashCode() { return call_method<SCAPIX_META_STRING("hashCode"), jint>(); }
inline ref<java::lang::String> LensShadingMap::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }

} // namespace android::hardware::camera2::params
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_HARDWARE_CAMERA2_PARAMS_LENSSHADINGMAP_H
