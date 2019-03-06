// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_ANDROID_BLUETOOTH_LE_SCANRESULT_H
#define SCAPIX_ANDROID_BLUETOOTH_LE_SCANRESULT_H

namespace scapix::java_api {

namespace android::bluetooth { class BluetoothDevice; }
namespace android::bluetooth::le { class ScanRecord; }
namespace android::os { class Parcel; }
namespace android::os { class Parcelable_Creator; }
namespace java::lang { class String; }

namespace android::bluetooth::le {

class ScanResult : public object_base<SCAPIX_META_STRING("android/bluetooth/le/ScanResult"),
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static ref<android::os::Parcelable_Creator> CREATOR_();
	static jint DATA_COMPLETE_();
	static jint DATA_TRUNCATED_();
	static jint PERIODIC_INTERVAL_NOT_PRESENT_();
	static jint PHY_UNUSED_();
	static jint SID_NOT_PRESENT_();
	static jint TX_POWER_NOT_PRESENT_();

	static ref<ScanResult> new_object(ref<android::bluetooth::BluetoothDevice> device, ref<android::bluetooth::le::ScanRecord> scanRecord, jint rssi, jlong timestampNanos);
	static ref<ScanResult> new_object(ref<android::bluetooth::BluetoothDevice> device, jint eventType, jint primaryPhy, jint secondaryPhy, jint advertisingSid, jint txPower, jint rssi, jint periodicAdvertisingInterval, ref<android::bluetooth::le::ScanRecord> scanRecord, jlong timestampNanos);
	void writeToParcel(ref<android::os::Parcel> dest, jint flags);
	jint describeContents();
	ref<android::bluetooth::BluetoothDevice> getDevice();
	ref<android::bluetooth::le::ScanRecord> getScanRecord();
	jint getRssi();
	jlong getTimestampNanos();
	jboolean isLegacy();
	jboolean isConnectable();
	jint getDataStatus();
	jint getPrimaryPhy();
	jint getSecondaryPhy();
	jint getAdvertisingSid();
	jint getTxPower();
	jint getPeriodicAdvertisingInterval();
	jint hashCode();
	jboolean equals(ref<java::lang::Object> obj);
	ref<java::lang::String> toString();

protected:

	ScanResult(handle_type h) : base_(h) {}

};

} // namespace android::bluetooth::le
} // namespace scapix::java_api

#include <scapix/java_api/android/bluetooth/BluetoothDevice.h>
#include <scapix/java_api/android/bluetooth/le/ScanRecord.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::bluetooth::le {

inline ref<android::os::Parcelable_Creator> ScanResult::CREATOR_() { return get_static_field<SCAPIX_META_STRING("CREATOR"), ref<android::os::Parcelable_Creator>>(); }
inline jint ScanResult::DATA_COMPLETE_() { return get_static_field<SCAPIX_META_STRING("DATA_COMPLETE"), jint>(); }
inline jint ScanResult::DATA_TRUNCATED_() { return get_static_field<SCAPIX_META_STRING("DATA_TRUNCATED"), jint>(); }
inline jint ScanResult::PERIODIC_INTERVAL_NOT_PRESENT_() { return get_static_field<SCAPIX_META_STRING("PERIODIC_INTERVAL_NOT_PRESENT"), jint>(); }
inline jint ScanResult::PHY_UNUSED_() { return get_static_field<SCAPIX_META_STRING("PHY_UNUSED"), jint>(); }
inline jint ScanResult::SID_NOT_PRESENT_() { return get_static_field<SCAPIX_META_STRING("SID_NOT_PRESENT"), jint>(); }
inline jint ScanResult::TX_POWER_NOT_PRESENT_() { return get_static_field<SCAPIX_META_STRING("TX_POWER_NOT_PRESENT"), jint>(); }
inline ref<ScanResult> ScanResult::new_object(ref<android::bluetooth::BluetoothDevice> device, ref<android::bluetooth::le::ScanRecord> scanRecord, jint rssi, jlong timestampNanos) { return base_::new_object(device, scanRecord, rssi, timestampNanos); }
inline ref<ScanResult> ScanResult::new_object(ref<android::bluetooth::BluetoothDevice> device, jint eventType, jint primaryPhy, jint secondaryPhy, jint advertisingSid, jint txPower, jint rssi, jint periodicAdvertisingInterval, ref<android::bluetooth::le::ScanRecord> scanRecord, jlong timestampNanos) { return base_::new_object(device, eventType, primaryPhy, secondaryPhy, advertisingSid, txPower, rssi, periodicAdvertisingInterval, scanRecord, timestampNanos); }
inline void ScanResult::writeToParcel(ref<android::os::Parcel> dest, jint flags) { return call_method<SCAPIX_META_STRING("writeToParcel"), void>(dest, flags); }
inline jint ScanResult::describeContents() { return call_method<SCAPIX_META_STRING("describeContents"), jint>(); }
inline ref<android::bluetooth::BluetoothDevice> ScanResult::getDevice() { return call_method<SCAPIX_META_STRING("getDevice"), ref<android::bluetooth::BluetoothDevice>>(); }
inline ref<android::bluetooth::le::ScanRecord> ScanResult::getScanRecord() { return call_method<SCAPIX_META_STRING("getScanRecord"), ref<android::bluetooth::le::ScanRecord>>(); }
inline jint ScanResult::getRssi() { return call_method<SCAPIX_META_STRING("getRssi"), jint>(); }
inline jlong ScanResult::getTimestampNanos() { return call_method<SCAPIX_META_STRING("getTimestampNanos"), jlong>(); }
inline jboolean ScanResult::isLegacy() { return call_method<SCAPIX_META_STRING("isLegacy"), jboolean>(); }
inline jboolean ScanResult::isConnectable() { return call_method<SCAPIX_META_STRING("isConnectable"), jboolean>(); }
inline jint ScanResult::getDataStatus() { return call_method<SCAPIX_META_STRING("getDataStatus"), jint>(); }
inline jint ScanResult::getPrimaryPhy() { return call_method<SCAPIX_META_STRING("getPrimaryPhy"), jint>(); }
inline jint ScanResult::getSecondaryPhy() { return call_method<SCAPIX_META_STRING("getSecondaryPhy"), jint>(); }
inline jint ScanResult::getAdvertisingSid() { return call_method<SCAPIX_META_STRING("getAdvertisingSid"), jint>(); }
inline jint ScanResult::getTxPower() { return call_method<SCAPIX_META_STRING("getTxPower"), jint>(); }
inline jint ScanResult::getPeriodicAdvertisingInterval() { return call_method<SCAPIX_META_STRING("getPeriodicAdvertisingInterval"), jint>(); }
inline jint ScanResult::hashCode() { return call_method<SCAPIX_META_STRING("hashCode"), jint>(); }
inline jboolean ScanResult::equals(ref<java::lang::Object> obj) { return call_method<SCAPIX_META_STRING("equals"), jboolean>(obj); }
inline ref<java::lang::String> ScanResult::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }

} // namespace android::bluetooth::le
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_BLUETOOTH_LE_SCANRESULT_H
