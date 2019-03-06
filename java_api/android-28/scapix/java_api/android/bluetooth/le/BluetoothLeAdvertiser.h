// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_BLUETOOTH_LE_BLUETOOTHLEADVERTISER_H
#define SCAPIX_ANDROID_BLUETOOTH_LE_BLUETOOTHLEADVERTISER_H

namespace scapix::java_api {

namespace android::bluetooth::le { class AdvertiseCallback; }
namespace android::bluetooth::le { class AdvertiseData; }
namespace android::bluetooth::le { class AdvertiseSettings; }
namespace android::bluetooth::le { class AdvertisingSetCallback; }
namespace android::bluetooth::le { class AdvertisingSetParameters; }
namespace android::bluetooth::le { class PeriodicAdvertisingParameters; }
namespace android::os { class Handler; }

namespace android::bluetooth::le {

class BluetoothLeAdvertiser : public object_base<SCAPIX_META_STRING("android/bluetooth/le/BluetoothLeAdvertiser"),
	java::lang::Object>
{
public:

	void startAdvertising(ref<android::bluetooth::le::AdvertiseSettings> settings, ref<android::bluetooth::le::AdvertiseData> advertiseData, ref<android::bluetooth::le::AdvertiseCallback> callback);
	void startAdvertising(ref<android::bluetooth::le::AdvertiseSettings> settings, ref<android::bluetooth::le::AdvertiseData> advertiseData, ref<android::bluetooth::le::AdvertiseData> scanResponse, ref<android::bluetooth::le::AdvertiseCallback> callback);
	void stopAdvertising(ref<android::bluetooth::le::AdvertiseCallback> callback);
	void startAdvertisingSet(ref<android::bluetooth::le::AdvertisingSetParameters> parameters, ref<android::bluetooth::le::AdvertiseData> advertiseData, ref<android::bluetooth::le::AdvertiseData> scanResponse, ref<android::bluetooth::le::PeriodicAdvertisingParameters> periodicParameters, ref<android::bluetooth::le::AdvertiseData> periodicData, ref<android::bluetooth::le::AdvertisingSetCallback> callback);
	void startAdvertisingSet(ref<android::bluetooth::le::AdvertisingSetParameters> parameters, ref<android::bluetooth::le::AdvertiseData> advertiseData, ref<android::bluetooth::le::AdvertiseData> scanResponse, ref<android::bluetooth::le::PeriodicAdvertisingParameters> periodicParameters, ref<android::bluetooth::le::AdvertiseData> periodicData, ref<android::bluetooth::le::AdvertisingSetCallback> callback, ref<android::os::Handler> handler);
	void startAdvertisingSet(ref<android::bluetooth::le::AdvertisingSetParameters> parameters, ref<android::bluetooth::le::AdvertiseData> advertiseData, ref<android::bluetooth::le::AdvertiseData> scanResponse, ref<android::bluetooth::le::PeriodicAdvertisingParameters> periodicParameters, ref<android::bluetooth::le::AdvertiseData> periodicData, jint duration, jint maxExtendedAdvertisingEvents, ref<android::bluetooth::le::AdvertisingSetCallback> callback);
	void startAdvertisingSet(ref<android::bluetooth::le::AdvertisingSetParameters> parameters, ref<android::bluetooth::le::AdvertiseData> advertiseData, ref<android::bluetooth::le::AdvertiseData> scanResponse, ref<android::bluetooth::le::PeriodicAdvertisingParameters> periodicParameters, ref<android::bluetooth::le::AdvertiseData> periodicData, jint duration, jint maxExtendedAdvertisingEvents, ref<android::bluetooth::le::AdvertisingSetCallback> callback, ref<android::os::Handler> handler);
	void stopAdvertisingSet(ref<android::bluetooth::le::AdvertisingSetCallback> callback);

protected:

	BluetoothLeAdvertiser(handle_type h) : base_(h) {}

};

} // namespace android::bluetooth::le
} // namespace scapix::java_api

#include <scapix/java_api/android/bluetooth/le/AdvertiseCallback.h>
#include <scapix/java_api/android/bluetooth/le/AdvertiseData.h>
#include <scapix/java_api/android/bluetooth/le/AdvertiseSettings.h>
#include <scapix/java_api/android/bluetooth/le/AdvertisingSetCallback.h>
#include <scapix/java_api/android/bluetooth/le/AdvertisingSetParameters.h>
#include <scapix/java_api/android/bluetooth/le/PeriodicAdvertisingParameters.h>
#include <scapix/java_api/android/os/Handler.h>

namespace scapix::java_api {
namespace android::bluetooth::le {

inline void BluetoothLeAdvertiser::startAdvertising(ref<android::bluetooth::le::AdvertiseSettings> settings, ref<android::bluetooth::le::AdvertiseData> advertiseData, ref<android::bluetooth::le::AdvertiseCallback> callback) { return call_method<SCAPIX_META_STRING("startAdvertising"), void>(settings, advertiseData, callback); }
inline void BluetoothLeAdvertiser::startAdvertising(ref<android::bluetooth::le::AdvertiseSettings> settings, ref<android::bluetooth::le::AdvertiseData> advertiseData, ref<android::bluetooth::le::AdvertiseData> scanResponse, ref<android::bluetooth::le::AdvertiseCallback> callback) { return call_method<SCAPIX_META_STRING("startAdvertising"), void>(settings, advertiseData, scanResponse, callback); }
inline void BluetoothLeAdvertiser::stopAdvertising(ref<android::bluetooth::le::AdvertiseCallback> callback) { return call_method<SCAPIX_META_STRING("stopAdvertising"), void>(callback); }
inline void BluetoothLeAdvertiser::startAdvertisingSet(ref<android::bluetooth::le::AdvertisingSetParameters> parameters, ref<android::bluetooth::le::AdvertiseData> advertiseData, ref<android::bluetooth::le::AdvertiseData> scanResponse, ref<android::bluetooth::le::PeriodicAdvertisingParameters> periodicParameters, ref<android::bluetooth::le::AdvertiseData> periodicData, ref<android::bluetooth::le::AdvertisingSetCallback> callback) { return call_method<SCAPIX_META_STRING("startAdvertisingSet"), void>(parameters, advertiseData, scanResponse, periodicParameters, periodicData, callback); }
inline void BluetoothLeAdvertiser::startAdvertisingSet(ref<android::bluetooth::le::AdvertisingSetParameters> parameters, ref<android::bluetooth::le::AdvertiseData> advertiseData, ref<android::bluetooth::le::AdvertiseData> scanResponse, ref<android::bluetooth::le::PeriodicAdvertisingParameters> periodicParameters, ref<android::bluetooth::le::AdvertiseData> periodicData, ref<android::bluetooth::le::AdvertisingSetCallback> callback, ref<android::os::Handler> handler) { return call_method<SCAPIX_META_STRING("startAdvertisingSet"), void>(parameters, advertiseData, scanResponse, periodicParameters, periodicData, callback, handler); }
inline void BluetoothLeAdvertiser::startAdvertisingSet(ref<android::bluetooth::le::AdvertisingSetParameters> parameters, ref<android::bluetooth::le::AdvertiseData> advertiseData, ref<android::bluetooth::le::AdvertiseData> scanResponse, ref<android::bluetooth::le::PeriodicAdvertisingParameters> periodicParameters, ref<android::bluetooth::le::AdvertiseData> periodicData, jint duration, jint maxExtendedAdvertisingEvents, ref<android::bluetooth::le::AdvertisingSetCallback> callback) { return call_method<SCAPIX_META_STRING("startAdvertisingSet"), void>(parameters, advertiseData, scanResponse, periodicParameters, periodicData, duration, maxExtendedAdvertisingEvents, callback); }
inline void BluetoothLeAdvertiser::startAdvertisingSet(ref<android::bluetooth::le::AdvertisingSetParameters> parameters, ref<android::bluetooth::le::AdvertiseData> advertiseData, ref<android::bluetooth::le::AdvertiseData> scanResponse, ref<android::bluetooth::le::PeriodicAdvertisingParameters> periodicParameters, ref<android::bluetooth::le::AdvertiseData> periodicData, jint duration, jint maxExtendedAdvertisingEvents, ref<android::bluetooth::le::AdvertisingSetCallback> callback, ref<android::os::Handler> handler) { return call_method<SCAPIX_META_STRING("startAdvertisingSet"), void>(parameters, advertiseData, scanResponse, periodicParameters, periodicData, duration, maxExtendedAdvertisingEvents, callback, handler); }
inline void BluetoothLeAdvertiser::stopAdvertisingSet(ref<android::bluetooth::le::AdvertisingSetCallback> callback) { return call_method<SCAPIX_META_STRING("stopAdvertisingSet"), void>(callback); }

} // namespace android::bluetooth::le
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_BLUETOOTH_LE_BLUETOOTHLEADVERTISER_H
