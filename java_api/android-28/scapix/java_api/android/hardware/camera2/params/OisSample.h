// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_HARDWARE_CAMERA2_PARAMS_OISSAMPLE_H
#define SCAPIX_ANDROID_HARDWARE_CAMERA2_PARAMS_OISSAMPLE_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace android::hardware::camera2::params {

class OisSample : public object_base<SCAPIX_META_STRING("android/hardware/camera2/params/OisSample"),
	java::lang::Object>
{
public:

	static ref<OisSample> new_object(jlong timestamp, jfloat p2, jfloat xShift);
	jlong getTimestamp();
	jfloat getXshift();
	jfloat getYshift();
	jboolean equals(ref<java::lang::Object> obj);
	jint hashCode();
	ref<java::lang::String> toString();

protected:

	OisSample(handle_type h) : base_(h) {}

};

} // namespace android::hardware::camera2::params
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::hardware::camera2::params {

inline ref<OisSample> OisSample::new_object(jlong timestamp, jfloat p2, jfloat xShift) { return base_::new_object(timestamp, p2, xShift); }
inline jlong OisSample::getTimestamp() { return call_method<SCAPIX_META_STRING("getTimestamp"), jlong>(); }
inline jfloat OisSample::getXshift() { return call_method<SCAPIX_META_STRING("getXshift"), jfloat>(); }
inline jfloat OisSample::getYshift() { return call_method<SCAPIX_META_STRING("getYshift"), jfloat>(); }
inline jboolean OisSample::equals(ref<java::lang::Object> obj) { return call_method<SCAPIX_META_STRING("equals"), jboolean>(obj); }
inline jint OisSample::hashCode() { return call_method<SCAPIX_META_STRING("hashCode"), jint>(); }
inline ref<java::lang::String> OisSample::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }

} // namespace android::hardware::camera2::params
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_HARDWARE_CAMERA2_PARAMS_OISSAMPLE_H
