// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_HARDWARE_GEOMAGNETICFIELD_H
#define SCAPIX_ANDROID_HARDWARE_GEOMAGNETICFIELD_H

namespace scapix::java_api {
namespace android::hardware {

class GeomagneticField : public object_base<SCAPIX_META_STRING("android/hardware/GeomagneticField"),
	java::lang::Object>
{
public:

	static ref<GeomagneticField> new_object(jfloat gdLatitudeDeg, jfloat gdLongitudeDeg, jfloat altitudeMeters, jlong timeMillis);
	jfloat getX();
	jfloat getY();
	jfloat getZ();
	jfloat getDeclination();
	jfloat getInclination();
	jfloat getHorizontalStrength();
	jfloat getFieldStrength();

protected:

	GeomagneticField(handle_type h) : base_(h) {}

};

} // namespace android::hardware
} // namespace scapix::java_api


namespace scapix::java_api {
namespace android::hardware {

inline ref<GeomagneticField> GeomagneticField::new_object(jfloat gdLatitudeDeg, jfloat gdLongitudeDeg, jfloat altitudeMeters, jlong timeMillis) { return base_::new_object(gdLatitudeDeg, gdLongitudeDeg, altitudeMeters, timeMillis); }
inline jfloat GeomagneticField::getX() { return call_method<SCAPIX_META_STRING("getX"), jfloat>(); }
inline jfloat GeomagneticField::getY() { return call_method<SCAPIX_META_STRING("getY"), jfloat>(); }
inline jfloat GeomagneticField::getZ() { return call_method<SCAPIX_META_STRING("getZ"), jfloat>(); }
inline jfloat GeomagneticField::getDeclination() { return call_method<SCAPIX_META_STRING("getDeclination"), jfloat>(); }
inline jfloat GeomagneticField::getInclination() { return call_method<SCAPIX_META_STRING("getInclination"), jfloat>(); }
inline jfloat GeomagneticField::getHorizontalStrength() { return call_method<SCAPIX_META_STRING("getHorizontalStrength"), jfloat>(); }
inline jfloat GeomagneticField::getFieldStrength() { return call_method<SCAPIX_META_STRING("getFieldStrength"), jfloat>(); }

} // namespace android::hardware
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_HARDWARE_GEOMAGNETICFIELD_H
