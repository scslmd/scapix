// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_HARDWARE_SENSORMANAGER_H
#define SCAPIX_ANDROID_HARDWARE_SENSORMANAGER_H

namespace scapix::java_api {

namespace android::hardware { class HardwareBuffer; }
namespace android::hardware { class Sensor; }
namespace android::hardware { class SensorDirectChannel; }
namespace android::hardware { class SensorEventListener; }
namespace android::hardware { class SensorListener; }
namespace android::hardware { class SensorManager_DynamicSensorCallback; }
namespace android::hardware { class TriggerEventListener; }
namespace android::os { class Handler; }
namespace android::os { class MemoryFile; }
namespace java::util { class List; }

namespace android::hardware {

class SensorManager : public object_base<SCAPIX_META_STRING("android/hardware/SensorManager"),
	java::lang::Object>
{
public:

	using DynamicSensorCallback = SensorManager_DynamicSensorCallback;

	static jint AXIS_MINUS_X_();
	static jint AXIS_MINUS_Y_();
	static jint AXIS_MINUS_Z_();
	static jint AXIS_X_();
	static jint AXIS_Y_();
	static jint AXIS_Z_();
	static jint DATA_X_();
	static jint DATA_Y_();
	static jint DATA_Z_();
	static jfloat GRAVITY_DEATH_STAR_I_();
	static jfloat GRAVITY_EARTH_();
	static jfloat GRAVITY_JUPITER_();
	static jfloat GRAVITY_MARS_();
	static jfloat GRAVITY_MERCURY_();
	static jfloat GRAVITY_MOON_();
	static jfloat GRAVITY_NEPTUNE_();
	static jfloat GRAVITY_PLUTO_();
	static jfloat GRAVITY_SATURN_();
	static jfloat GRAVITY_SUN_();
	static jfloat GRAVITY_THE_ISLAND_();
	static jfloat GRAVITY_URANUS_();
	static jfloat GRAVITY_VENUS_();
	static jfloat LIGHT_CLOUDY_();
	static jfloat LIGHT_FULLMOON_();
	static jfloat LIGHT_NO_MOON_();
	static jfloat LIGHT_OVERCAST_();
	static jfloat LIGHT_SHADE_();
	static jfloat LIGHT_SUNLIGHT_();
	static jfloat LIGHT_SUNLIGHT_MAX_();
	static jfloat LIGHT_SUNRISE_();
	static jfloat MAGNETIC_FIELD_EARTH_MAX_();
	static jfloat MAGNETIC_FIELD_EARTH_MIN_();
	static jfloat PRESSURE_STANDARD_ATMOSPHERE_();
	static jint RAW_DATA_INDEX_();
	static jint RAW_DATA_X_();
	static jint RAW_DATA_Y_();
	static jint RAW_DATA_Z_();
	static jint SENSOR_ACCELEROMETER_();
	static jint SENSOR_ALL_();
	static jint SENSOR_DELAY_FASTEST_();
	static jint SENSOR_DELAY_GAME_();
	static jint SENSOR_DELAY_NORMAL_();
	static jint SENSOR_DELAY_UI_();
	static jint SENSOR_LIGHT_();
	static jint SENSOR_MAGNETIC_FIELD_();
	static jint SENSOR_MAX_();
	static jint SENSOR_MIN_();
	static jint SENSOR_ORIENTATION_();
	static jint SENSOR_ORIENTATION_RAW_();
	static jint SENSOR_PROXIMITY_();
	static jint SENSOR_STATUS_ACCURACY_HIGH_();
	static jint SENSOR_STATUS_ACCURACY_LOW_();
	static jint SENSOR_STATUS_ACCURACY_MEDIUM_();
	static jint SENSOR_STATUS_NO_CONTACT_();
	static jint SENSOR_STATUS_UNRELIABLE_();
	static jint SENSOR_TEMPERATURE_();
	static jint SENSOR_TRICORDER_();
	static jfloat STANDARD_GRAVITY_();

	jint getSensors();
	ref<java::util::List> getSensorList(jint type);
	ref<java::util::List> getDynamicSensorList(jint type);
	ref<android::hardware::Sensor> getDefaultSensor(jint type);
	ref<android::hardware::Sensor> getDefaultSensor(jint type, jboolean wakeUp);
	jboolean registerListener(ref<android::hardware::SensorListener> listener, jint sensors);
	jboolean registerListener(ref<android::hardware::SensorListener> listener, jint sensors, jint rate);
	void unregisterListener(ref<android::hardware::SensorListener> listener);
	void unregisterListener(ref<android::hardware::SensorListener> listener, jint sensors);
	void unregisterListener(ref<android::hardware::SensorEventListener> listener, ref<android::hardware::Sensor> sensor);
	void unregisterListener(ref<android::hardware::SensorEventListener> listener);
	jboolean registerListener(ref<android::hardware::SensorEventListener> listener, ref<android::hardware::Sensor> sensor, jint samplingPeriodUs);
	jboolean registerListener(ref<android::hardware::SensorEventListener> listener, ref<android::hardware::Sensor> sensor, jint samplingPeriodUs, jint maxReportLatencyUs);
	jboolean registerListener(ref<android::hardware::SensorEventListener> listener, ref<android::hardware::Sensor> sensor, jint samplingPeriodUs, ref<android::os::Handler> handler);
	jboolean registerListener(ref<android::hardware::SensorEventListener> listener, ref<android::hardware::Sensor> sensor, jint samplingPeriodUs, jint maxReportLatencyUs, ref<android::os::Handler> handler);
	jboolean flush(ref<android::hardware::SensorEventListener> listener);
	ref<android::hardware::SensorDirectChannel> createDirectChannel(ref<android::os::MemoryFile> mem);
	ref<android::hardware::SensorDirectChannel> createDirectChannel(ref<android::hardware::HardwareBuffer> mem);
	void registerDynamicSensorCallback(ref<android::hardware::SensorManager_DynamicSensorCallback> callback);
	void registerDynamicSensorCallback(ref<android::hardware::SensorManager_DynamicSensorCallback> callback, ref<android::os::Handler> handler);
	void unregisterDynamicSensorCallback(ref<android::hardware::SensorManager_DynamicSensorCallback> callback);
	jboolean isDynamicSensorDiscoverySupported();
	static jboolean getRotationMatrix(ref<link::java::array<jfloat>> R_, ref<link::java::array<jfloat>> I_, ref<link::java::array<jfloat>> gravity, ref<link::java::array<jfloat>> geomagnetic);
	static jfloat getInclination(ref<link::java::array<jfloat>> I_);
	static jboolean remapCoordinateSystem(ref<link::java::array<jfloat>> inR, jint X_, jint Y_, ref<link::java::array<jfloat>> outR);
	static ref<link::java::array<jfloat>> getOrientation(ref<link::java::array<jfloat>> R_, ref<link::java::array<jfloat>> values);
	static jfloat getAltitude(jfloat p0, jfloat p);
	static void getAngleChange(ref<link::java::array<jfloat>> angleChange, ref<link::java::array<jfloat>> R_, ref<link::java::array<jfloat>> prevR);
	static void getRotationMatrixFromVector(ref<link::java::array<jfloat>> R_, ref<link::java::array<jfloat>> rotationVector);
	static void getQuaternionFromVector(ref<link::java::array<jfloat>> Q_, ref<link::java::array<jfloat>> rv);
	jboolean requestTriggerSensor(ref<android::hardware::TriggerEventListener> listener, ref<android::hardware::Sensor> sensor);
	jboolean cancelTriggerSensor(ref<android::hardware::TriggerEventListener> listener, ref<android::hardware::Sensor> sensor);

protected:

	SensorManager(handle_type h) : base_(h) {}

};

} // namespace android::hardware
} // namespace scapix::java_api

#include <scapix/java_api/android/hardware/HardwareBuffer.h>
#include <scapix/java_api/android/hardware/Sensor.h>
#include <scapix/java_api/android/hardware/SensorDirectChannel.h>
#include <scapix/java_api/android/hardware/SensorEventListener.h>
#include <scapix/java_api/android/hardware/SensorListener.h>
#include <scapix/java_api/android/hardware/SensorManager_DynamicSensorCallback.h>
#include <scapix/java_api/android/hardware/TriggerEventListener.h>
#include <scapix/java_api/android/os/Handler.h>
#include <scapix/java_api/android/os/MemoryFile.h>
#include <scapix/java_api/java/util/List.h>

namespace scapix::java_api {
namespace android::hardware {

inline jint SensorManager::AXIS_MINUS_X_() { return get_static_field<SCAPIX_META_STRING("AXIS_MINUS_X"), jint>(); }
inline jint SensorManager::AXIS_MINUS_Y_() { return get_static_field<SCAPIX_META_STRING("AXIS_MINUS_Y"), jint>(); }
inline jint SensorManager::AXIS_MINUS_Z_() { return get_static_field<SCAPIX_META_STRING("AXIS_MINUS_Z"), jint>(); }
inline jint SensorManager::AXIS_X_() { return get_static_field<SCAPIX_META_STRING("AXIS_X"), jint>(); }
inline jint SensorManager::AXIS_Y_() { return get_static_field<SCAPIX_META_STRING("AXIS_Y"), jint>(); }
inline jint SensorManager::AXIS_Z_() { return get_static_field<SCAPIX_META_STRING("AXIS_Z"), jint>(); }
inline jint SensorManager::DATA_X_() { return get_static_field<SCAPIX_META_STRING("DATA_X"), jint>(); }
inline jint SensorManager::DATA_Y_() { return get_static_field<SCAPIX_META_STRING("DATA_Y"), jint>(); }
inline jint SensorManager::DATA_Z_() { return get_static_field<SCAPIX_META_STRING("DATA_Z"), jint>(); }
inline jfloat SensorManager::GRAVITY_DEATH_STAR_I_() { return get_static_field<SCAPIX_META_STRING("GRAVITY_DEATH_STAR_I"), jfloat>(); }
inline jfloat SensorManager::GRAVITY_EARTH_() { return get_static_field<SCAPIX_META_STRING("GRAVITY_EARTH"), jfloat>(); }
inline jfloat SensorManager::GRAVITY_JUPITER_() { return get_static_field<SCAPIX_META_STRING("GRAVITY_JUPITER"), jfloat>(); }
inline jfloat SensorManager::GRAVITY_MARS_() { return get_static_field<SCAPIX_META_STRING("GRAVITY_MARS"), jfloat>(); }
inline jfloat SensorManager::GRAVITY_MERCURY_() { return get_static_field<SCAPIX_META_STRING("GRAVITY_MERCURY"), jfloat>(); }
inline jfloat SensorManager::GRAVITY_MOON_() { return get_static_field<SCAPIX_META_STRING("GRAVITY_MOON"), jfloat>(); }
inline jfloat SensorManager::GRAVITY_NEPTUNE_() { return get_static_field<SCAPIX_META_STRING("GRAVITY_NEPTUNE"), jfloat>(); }
inline jfloat SensorManager::GRAVITY_PLUTO_() { return get_static_field<SCAPIX_META_STRING("GRAVITY_PLUTO"), jfloat>(); }
inline jfloat SensorManager::GRAVITY_SATURN_() { return get_static_field<SCAPIX_META_STRING("GRAVITY_SATURN"), jfloat>(); }
inline jfloat SensorManager::GRAVITY_SUN_() { return get_static_field<SCAPIX_META_STRING("GRAVITY_SUN"), jfloat>(); }
inline jfloat SensorManager::GRAVITY_THE_ISLAND_() { return get_static_field<SCAPIX_META_STRING("GRAVITY_THE_ISLAND"), jfloat>(); }
inline jfloat SensorManager::GRAVITY_URANUS_() { return get_static_field<SCAPIX_META_STRING("GRAVITY_URANUS"), jfloat>(); }
inline jfloat SensorManager::GRAVITY_VENUS_() { return get_static_field<SCAPIX_META_STRING("GRAVITY_VENUS"), jfloat>(); }
inline jfloat SensorManager::LIGHT_CLOUDY_() { return get_static_field<SCAPIX_META_STRING("LIGHT_CLOUDY"), jfloat>(); }
inline jfloat SensorManager::LIGHT_FULLMOON_() { return get_static_field<SCAPIX_META_STRING("LIGHT_FULLMOON"), jfloat>(); }
inline jfloat SensorManager::LIGHT_NO_MOON_() { return get_static_field<SCAPIX_META_STRING("LIGHT_NO_MOON"), jfloat>(); }
inline jfloat SensorManager::LIGHT_OVERCAST_() { return get_static_field<SCAPIX_META_STRING("LIGHT_OVERCAST"), jfloat>(); }
inline jfloat SensorManager::LIGHT_SHADE_() { return get_static_field<SCAPIX_META_STRING("LIGHT_SHADE"), jfloat>(); }
inline jfloat SensorManager::LIGHT_SUNLIGHT_() { return get_static_field<SCAPIX_META_STRING("LIGHT_SUNLIGHT"), jfloat>(); }
inline jfloat SensorManager::LIGHT_SUNLIGHT_MAX_() { return get_static_field<SCAPIX_META_STRING("LIGHT_SUNLIGHT_MAX"), jfloat>(); }
inline jfloat SensorManager::LIGHT_SUNRISE_() { return get_static_field<SCAPIX_META_STRING("LIGHT_SUNRISE"), jfloat>(); }
inline jfloat SensorManager::MAGNETIC_FIELD_EARTH_MAX_() { return get_static_field<SCAPIX_META_STRING("MAGNETIC_FIELD_EARTH_MAX"), jfloat>(); }
inline jfloat SensorManager::MAGNETIC_FIELD_EARTH_MIN_() { return get_static_field<SCAPIX_META_STRING("MAGNETIC_FIELD_EARTH_MIN"), jfloat>(); }
inline jfloat SensorManager::PRESSURE_STANDARD_ATMOSPHERE_() { return get_static_field<SCAPIX_META_STRING("PRESSURE_STANDARD_ATMOSPHERE"), jfloat>(); }
inline jint SensorManager::RAW_DATA_INDEX_() { return get_static_field<SCAPIX_META_STRING("RAW_DATA_INDEX"), jint>(); }
inline jint SensorManager::RAW_DATA_X_() { return get_static_field<SCAPIX_META_STRING("RAW_DATA_X"), jint>(); }
inline jint SensorManager::RAW_DATA_Y_() { return get_static_field<SCAPIX_META_STRING("RAW_DATA_Y"), jint>(); }
inline jint SensorManager::RAW_DATA_Z_() { return get_static_field<SCAPIX_META_STRING("RAW_DATA_Z"), jint>(); }
inline jint SensorManager::SENSOR_ACCELEROMETER_() { return get_static_field<SCAPIX_META_STRING("SENSOR_ACCELEROMETER"), jint>(); }
inline jint SensorManager::SENSOR_ALL_() { return get_static_field<SCAPIX_META_STRING("SENSOR_ALL"), jint>(); }
inline jint SensorManager::SENSOR_DELAY_FASTEST_() { return get_static_field<SCAPIX_META_STRING("SENSOR_DELAY_FASTEST"), jint>(); }
inline jint SensorManager::SENSOR_DELAY_GAME_() { return get_static_field<SCAPIX_META_STRING("SENSOR_DELAY_GAME"), jint>(); }
inline jint SensorManager::SENSOR_DELAY_NORMAL_() { return get_static_field<SCAPIX_META_STRING("SENSOR_DELAY_NORMAL"), jint>(); }
inline jint SensorManager::SENSOR_DELAY_UI_() { return get_static_field<SCAPIX_META_STRING("SENSOR_DELAY_UI"), jint>(); }
inline jint SensorManager::SENSOR_LIGHT_() { return get_static_field<SCAPIX_META_STRING("SENSOR_LIGHT"), jint>(); }
inline jint SensorManager::SENSOR_MAGNETIC_FIELD_() { return get_static_field<SCAPIX_META_STRING("SENSOR_MAGNETIC_FIELD"), jint>(); }
inline jint SensorManager::SENSOR_MAX_() { return get_static_field<SCAPIX_META_STRING("SENSOR_MAX"), jint>(); }
inline jint SensorManager::SENSOR_MIN_() { return get_static_field<SCAPIX_META_STRING("SENSOR_MIN"), jint>(); }
inline jint SensorManager::SENSOR_ORIENTATION_() { return get_static_field<SCAPIX_META_STRING("SENSOR_ORIENTATION"), jint>(); }
inline jint SensorManager::SENSOR_ORIENTATION_RAW_() { return get_static_field<SCAPIX_META_STRING("SENSOR_ORIENTATION_RAW"), jint>(); }
inline jint SensorManager::SENSOR_PROXIMITY_() { return get_static_field<SCAPIX_META_STRING("SENSOR_PROXIMITY"), jint>(); }
inline jint SensorManager::SENSOR_STATUS_ACCURACY_HIGH_() { return get_static_field<SCAPIX_META_STRING("SENSOR_STATUS_ACCURACY_HIGH"), jint>(); }
inline jint SensorManager::SENSOR_STATUS_ACCURACY_LOW_() { return get_static_field<SCAPIX_META_STRING("SENSOR_STATUS_ACCURACY_LOW"), jint>(); }
inline jint SensorManager::SENSOR_STATUS_ACCURACY_MEDIUM_() { return get_static_field<SCAPIX_META_STRING("SENSOR_STATUS_ACCURACY_MEDIUM"), jint>(); }
inline jint SensorManager::SENSOR_STATUS_NO_CONTACT_() { return get_static_field<SCAPIX_META_STRING("SENSOR_STATUS_NO_CONTACT"), jint>(); }
inline jint SensorManager::SENSOR_STATUS_UNRELIABLE_() { return get_static_field<SCAPIX_META_STRING("SENSOR_STATUS_UNRELIABLE"), jint>(); }
inline jint SensorManager::SENSOR_TEMPERATURE_() { return get_static_field<SCAPIX_META_STRING("SENSOR_TEMPERATURE"), jint>(); }
inline jint SensorManager::SENSOR_TRICORDER_() { return get_static_field<SCAPIX_META_STRING("SENSOR_TRICORDER"), jint>(); }
inline jfloat SensorManager::STANDARD_GRAVITY_() { return get_static_field<SCAPIX_META_STRING("STANDARD_GRAVITY"), jfloat>(); }
inline jint SensorManager::getSensors() { return call_method<SCAPIX_META_STRING("getSensors"), jint>(); }
inline ref<java::util::List> SensorManager::getSensorList(jint type) { return call_method<SCAPIX_META_STRING("getSensorList"), ref<java::util::List>>(type); }
inline ref<java::util::List> SensorManager::getDynamicSensorList(jint type) { return call_method<SCAPIX_META_STRING("getDynamicSensorList"), ref<java::util::List>>(type); }
inline ref<android::hardware::Sensor> SensorManager::getDefaultSensor(jint type) { return call_method<SCAPIX_META_STRING("getDefaultSensor"), ref<android::hardware::Sensor>>(type); }
inline ref<android::hardware::Sensor> SensorManager::getDefaultSensor(jint type, jboolean wakeUp) { return call_method<SCAPIX_META_STRING("getDefaultSensor"), ref<android::hardware::Sensor>>(type, wakeUp); }
inline jboolean SensorManager::registerListener(ref<android::hardware::SensorListener> listener, jint sensors) { return call_method<SCAPIX_META_STRING("registerListener"), jboolean>(listener, sensors); }
inline jboolean SensorManager::registerListener(ref<android::hardware::SensorListener> listener, jint sensors, jint rate) { return call_method<SCAPIX_META_STRING("registerListener"), jboolean>(listener, sensors, rate); }
inline void SensorManager::unregisterListener(ref<android::hardware::SensorListener> listener) { return call_method<SCAPIX_META_STRING("unregisterListener"), void>(listener); }
inline void SensorManager::unregisterListener(ref<android::hardware::SensorListener> listener, jint sensors) { return call_method<SCAPIX_META_STRING("unregisterListener"), void>(listener, sensors); }
inline void SensorManager::unregisterListener(ref<android::hardware::SensorEventListener> listener, ref<android::hardware::Sensor> sensor) { return call_method<SCAPIX_META_STRING("unregisterListener"), void>(listener, sensor); }
inline void SensorManager::unregisterListener(ref<android::hardware::SensorEventListener> listener) { return call_method<SCAPIX_META_STRING("unregisterListener"), void>(listener); }
inline jboolean SensorManager::registerListener(ref<android::hardware::SensorEventListener> listener, ref<android::hardware::Sensor> sensor, jint samplingPeriodUs) { return call_method<SCAPIX_META_STRING("registerListener"), jboolean>(listener, sensor, samplingPeriodUs); }
inline jboolean SensorManager::registerListener(ref<android::hardware::SensorEventListener> listener, ref<android::hardware::Sensor> sensor, jint samplingPeriodUs, jint maxReportLatencyUs) { return call_method<SCAPIX_META_STRING("registerListener"), jboolean>(listener, sensor, samplingPeriodUs, maxReportLatencyUs); }
inline jboolean SensorManager::registerListener(ref<android::hardware::SensorEventListener> listener, ref<android::hardware::Sensor> sensor, jint samplingPeriodUs, ref<android::os::Handler> handler) { return call_method<SCAPIX_META_STRING("registerListener"), jboolean>(listener, sensor, samplingPeriodUs, handler); }
inline jboolean SensorManager::registerListener(ref<android::hardware::SensorEventListener> listener, ref<android::hardware::Sensor> sensor, jint samplingPeriodUs, jint maxReportLatencyUs, ref<android::os::Handler> handler) { return call_method<SCAPIX_META_STRING("registerListener"), jboolean>(listener, sensor, samplingPeriodUs, maxReportLatencyUs, handler); }
inline jboolean SensorManager::flush(ref<android::hardware::SensorEventListener> listener) { return call_method<SCAPIX_META_STRING("flush"), jboolean>(listener); }
inline ref<android::hardware::SensorDirectChannel> SensorManager::createDirectChannel(ref<android::os::MemoryFile> mem) { return call_method<SCAPIX_META_STRING("createDirectChannel"), ref<android::hardware::SensorDirectChannel>>(mem); }
inline ref<android::hardware::SensorDirectChannel> SensorManager::createDirectChannel(ref<android::hardware::HardwareBuffer> mem) { return call_method<SCAPIX_META_STRING("createDirectChannel"), ref<android::hardware::SensorDirectChannel>>(mem); }
inline void SensorManager::registerDynamicSensorCallback(ref<android::hardware::SensorManager_DynamicSensorCallback> callback) { return call_method<SCAPIX_META_STRING("registerDynamicSensorCallback"), void>(callback); }
inline void SensorManager::registerDynamicSensorCallback(ref<android::hardware::SensorManager_DynamicSensorCallback> callback, ref<android::os::Handler> handler) { return call_method<SCAPIX_META_STRING("registerDynamicSensorCallback"), void>(callback, handler); }
inline void SensorManager::unregisterDynamicSensorCallback(ref<android::hardware::SensorManager_DynamicSensorCallback> callback) { return call_method<SCAPIX_META_STRING("unregisterDynamicSensorCallback"), void>(callback); }
inline jboolean SensorManager::isDynamicSensorDiscoverySupported() { return call_method<SCAPIX_META_STRING("isDynamicSensorDiscoverySupported"), jboolean>(); }
inline jboolean SensorManager::getRotationMatrix(ref<link::java::array<jfloat>> R_, ref<link::java::array<jfloat>> I_, ref<link::java::array<jfloat>> gravity, ref<link::java::array<jfloat>> geomagnetic) { return call_static_method<SCAPIX_META_STRING("getRotationMatrix"), jboolean>(R_, I_, gravity, geomagnetic); }
inline jfloat SensorManager::getInclination(ref<link::java::array<jfloat>> I_) { return call_static_method<SCAPIX_META_STRING("getInclination"), jfloat>(I_); }
inline jboolean SensorManager::remapCoordinateSystem(ref<link::java::array<jfloat>> inR, jint X_, jint Y_, ref<link::java::array<jfloat>> outR) { return call_static_method<SCAPIX_META_STRING("remapCoordinateSystem"), jboolean>(inR, X_, Y_, outR); }
inline ref<link::java::array<jfloat>> SensorManager::getOrientation(ref<link::java::array<jfloat>> R_, ref<link::java::array<jfloat>> values) { return call_static_method<SCAPIX_META_STRING("getOrientation"), ref<link::java::array<jfloat>>>(R_, values); }
inline jfloat SensorManager::getAltitude(jfloat p0, jfloat p) { return call_static_method<SCAPIX_META_STRING("getAltitude"), jfloat>(p0, p); }
inline void SensorManager::getAngleChange(ref<link::java::array<jfloat>> angleChange, ref<link::java::array<jfloat>> R_, ref<link::java::array<jfloat>> prevR) { return call_static_method<SCAPIX_META_STRING("getAngleChange"), void>(angleChange, R_, prevR); }
inline void SensorManager::getRotationMatrixFromVector(ref<link::java::array<jfloat>> R_, ref<link::java::array<jfloat>> rotationVector) { return call_static_method<SCAPIX_META_STRING("getRotationMatrixFromVector"), void>(R_, rotationVector); }
inline void SensorManager::getQuaternionFromVector(ref<link::java::array<jfloat>> Q_, ref<link::java::array<jfloat>> rv) { return call_static_method<SCAPIX_META_STRING("getQuaternionFromVector"), void>(Q_, rv); }
inline jboolean SensorManager::requestTriggerSensor(ref<android::hardware::TriggerEventListener> listener, ref<android::hardware::Sensor> sensor) { return call_method<SCAPIX_META_STRING("requestTriggerSensor"), jboolean>(listener, sensor); }
inline jboolean SensorManager::cancelTriggerSensor(ref<android::hardware::TriggerEventListener> listener, ref<android::hardware::Sensor> sensor) { return call_method<SCAPIX_META_STRING("cancelTriggerSensor"), jboolean>(listener, sensor); }

} // namespace android::hardware
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_HARDWARE_SENSORMANAGER_H
