// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/bluetooth/BluetoothProfile.h>

#ifndef SCAPIX_ANDROID_BLUETOOTH_BLUETOOTHGATT_H
#define SCAPIX_ANDROID_BLUETOOTH_BLUETOOTHGATT_H

namespace scapix::java_api {

namespace android::bluetooth { class BluetoothDevice; }
namespace android::bluetooth { class BluetoothGattCharacteristic; }
namespace android::bluetooth { class BluetoothGattDescriptor; }
namespace android::bluetooth { class BluetoothGattService; }
namespace java::util { class List; }
namespace java::util { class UUID; }

namespace android::bluetooth {

class BluetoothGatt : public object_base<SCAPIX_META_STRING("android/bluetooth/BluetoothGatt"),
	java::lang::Object,
	android::bluetooth::BluetoothProfile>
{
public:

	static jint CONNECTION_PRIORITY_BALANCED_();
	static jint CONNECTION_PRIORITY_HIGH_();
	static jint CONNECTION_PRIORITY_LOW_POWER_();
	static jint GATT_CONNECTION_CONGESTED_();
	static jint GATT_FAILURE_();
	static jint GATT_INSUFFICIENT_AUTHENTICATION_();
	static jint GATT_INSUFFICIENT_ENCRYPTION_();
	static jint GATT_INVALID_ATTRIBUTE_LENGTH_();
	static jint GATT_INVALID_OFFSET_();
	static jint GATT_READ_NOT_PERMITTED_();
	static jint GATT_REQUEST_NOT_SUPPORTED_();
	static jint GATT_SUCCESS_();
	static jint GATT_WRITE_NOT_PERMITTED_();

	void close();
	void disconnect();
	jboolean connect();
	void setPreferredPhy(jint txPhy, jint rxPhy, jint phyOptions);
	void readPhy();
	ref<android::bluetooth::BluetoothDevice> getDevice();
	jboolean discoverServices();
	ref<java::util::List> getServices();
	ref<android::bluetooth::BluetoothGattService> getService(ref<java::util::UUID> uuid);
	jboolean readCharacteristic(ref<android::bluetooth::BluetoothGattCharacteristic> characteristic);
	jboolean writeCharacteristic(ref<android::bluetooth::BluetoothGattCharacteristic> characteristic);
	jboolean readDescriptor(ref<android::bluetooth::BluetoothGattDescriptor> descriptor);
	jboolean writeDescriptor(ref<android::bluetooth::BluetoothGattDescriptor> descriptor);
	jboolean beginReliableWrite();
	jboolean executeReliableWrite();
	void abortReliableWrite();
	void abortReliableWrite(ref<android::bluetooth::BluetoothDevice> mDevice);
	jboolean setCharacteristicNotification(ref<android::bluetooth::BluetoothGattCharacteristic> characteristic, jboolean enable);
	jboolean readRemoteRssi();
	jboolean requestMtu(jint mtu);
	jboolean requestConnectionPriority(jint connectionPriority);
	jint getConnectionState(ref<android::bluetooth::BluetoothDevice> device);
	ref<java::util::List> getConnectedDevices();
	ref<java::util::List> getDevicesMatchingConnectionStates(ref<link::java::array<jint>> states);

protected:

	BluetoothGatt(handle_type h) : base_(h) {}

};

} // namespace android::bluetooth
} // namespace scapix::java_api

#include <scapix/java_api/android/bluetooth/BluetoothDevice.h>
#include <scapix/java_api/android/bluetooth/BluetoothGattCharacteristic.h>
#include <scapix/java_api/android/bluetooth/BluetoothGattDescriptor.h>
#include <scapix/java_api/android/bluetooth/BluetoothGattService.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/java/util/UUID.h>

namespace scapix::java_api {
namespace android::bluetooth {

inline jint BluetoothGatt::CONNECTION_PRIORITY_BALANCED_() { return get_static_field<SCAPIX_META_STRING("CONNECTION_PRIORITY_BALANCED"), jint>(); }
inline jint BluetoothGatt::CONNECTION_PRIORITY_HIGH_() { return get_static_field<SCAPIX_META_STRING("CONNECTION_PRIORITY_HIGH"), jint>(); }
inline jint BluetoothGatt::CONNECTION_PRIORITY_LOW_POWER_() { return get_static_field<SCAPIX_META_STRING("CONNECTION_PRIORITY_LOW_POWER"), jint>(); }
inline jint BluetoothGatt::GATT_CONNECTION_CONGESTED_() { return get_static_field<SCAPIX_META_STRING("GATT_CONNECTION_CONGESTED"), jint>(); }
inline jint BluetoothGatt::GATT_FAILURE_() { return get_static_field<SCAPIX_META_STRING("GATT_FAILURE"), jint>(); }
inline jint BluetoothGatt::GATT_INSUFFICIENT_AUTHENTICATION_() { return get_static_field<SCAPIX_META_STRING("GATT_INSUFFICIENT_AUTHENTICATION"), jint>(); }
inline jint BluetoothGatt::GATT_INSUFFICIENT_ENCRYPTION_() { return get_static_field<SCAPIX_META_STRING("GATT_INSUFFICIENT_ENCRYPTION"), jint>(); }
inline jint BluetoothGatt::GATT_INVALID_ATTRIBUTE_LENGTH_() { return get_static_field<SCAPIX_META_STRING("GATT_INVALID_ATTRIBUTE_LENGTH"), jint>(); }
inline jint BluetoothGatt::GATT_INVALID_OFFSET_() { return get_static_field<SCAPIX_META_STRING("GATT_INVALID_OFFSET"), jint>(); }
inline jint BluetoothGatt::GATT_READ_NOT_PERMITTED_() { return get_static_field<SCAPIX_META_STRING("GATT_READ_NOT_PERMITTED"), jint>(); }
inline jint BluetoothGatt::GATT_REQUEST_NOT_SUPPORTED_() { return get_static_field<SCAPIX_META_STRING("GATT_REQUEST_NOT_SUPPORTED"), jint>(); }
inline jint BluetoothGatt::GATT_SUCCESS_() { return get_static_field<SCAPIX_META_STRING("GATT_SUCCESS"), jint>(); }
inline jint BluetoothGatt::GATT_WRITE_NOT_PERMITTED_() { return get_static_field<SCAPIX_META_STRING("GATT_WRITE_NOT_PERMITTED"), jint>(); }
inline void BluetoothGatt::close() { return call_method<SCAPIX_META_STRING("close"), void>(); }
inline void BluetoothGatt::disconnect() { return call_method<SCAPIX_META_STRING("disconnect"), void>(); }
inline jboolean BluetoothGatt::connect() { return call_method<SCAPIX_META_STRING("connect"), jboolean>(); }
inline void BluetoothGatt::setPreferredPhy(jint txPhy, jint rxPhy, jint phyOptions) { return call_method<SCAPIX_META_STRING("setPreferredPhy"), void>(txPhy, rxPhy, phyOptions); }
inline void BluetoothGatt::readPhy() { return call_method<SCAPIX_META_STRING("readPhy"), void>(); }
inline ref<android::bluetooth::BluetoothDevice> BluetoothGatt::getDevice() { return call_method<SCAPIX_META_STRING("getDevice"), ref<android::bluetooth::BluetoothDevice>>(); }
inline jboolean BluetoothGatt::discoverServices() { return call_method<SCAPIX_META_STRING("discoverServices"), jboolean>(); }
inline ref<java::util::List> BluetoothGatt::getServices() { return call_method<SCAPIX_META_STRING("getServices"), ref<java::util::List>>(); }
inline ref<android::bluetooth::BluetoothGattService> BluetoothGatt::getService(ref<java::util::UUID> uuid) { return call_method<SCAPIX_META_STRING("getService"), ref<android::bluetooth::BluetoothGattService>>(uuid); }
inline jboolean BluetoothGatt::readCharacteristic(ref<android::bluetooth::BluetoothGattCharacteristic> characteristic) { return call_method<SCAPIX_META_STRING("readCharacteristic"), jboolean>(characteristic); }
inline jboolean BluetoothGatt::writeCharacteristic(ref<android::bluetooth::BluetoothGattCharacteristic> characteristic) { return call_method<SCAPIX_META_STRING("writeCharacteristic"), jboolean>(characteristic); }
inline jboolean BluetoothGatt::readDescriptor(ref<android::bluetooth::BluetoothGattDescriptor> descriptor) { return call_method<SCAPIX_META_STRING("readDescriptor"), jboolean>(descriptor); }
inline jboolean BluetoothGatt::writeDescriptor(ref<android::bluetooth::BluetoothGattDescriptor> descriptor) { return call_method<SCAPIX_META_STRING("writeDescriptor"), jboolean>(descriptor); }
inline jboolean BluetoothGatt::beginReliableWrite() { return call_method<SCAPIX_META_STRING("beginReliableWrite"), jboolean>(); }
inline jboolean BluetoothGatt::executeReliableWrite() { return call_method<SCAPIX_META_STRING("executeReliableWrite"), jboolean>(); }
inline void BluetoothGatt::abortReliableWrite() { return call_method<SCAPIX_META_STRING("abortReliableWrite"), void>(); }
inline void BluetoothGatt::abortReliableWrite(ref<android::bluetooth::BluetoothDevice> mDevice) { return call_method<SCAPIX_META_STRING("abortReliableWrite"), void>(mDevice); }
inline jboolean BluetoothGatt::setCharacteristicNotification(ref<android::bluetooth::BluetoothGattCharacteristic> characteristic, jboolean enable) { return call_method<SCAPIX_META_STRING("setCharacteristicNotification"), jboolean>(characteristic, enable); }
inline jboolean BluetoothGatt::readRemoteRssi() { return call_method<SCAPIX_META_STRING("readRemoteRssi"), jboolean>(); }
inline jboolean BluetoothGatt::requestMtu(jint mtu) { return call_method<SCAPIX_META_STRING("requestMtu"), jboolean>(mtu); }
inline jboolean BluetoothGatt::requestConnectionPriority(jint connectionPriority) { return call_method<SCAPIX_META_STRING("requestConnectionPriority"), jboolean>(connectionPriority); }
inline jint BluetoothGatt::getConnectionState(ref<android::bluetooth::BluetoothDevice> device) { return call_method<SCAPIX_META_STRING("getConnectionState"), jint>(device); }
inline ref<java::util::List> BluetoothGatt::getConnectedDevices() { return call_method<SCAPIX_META_STRING("getConnectedDevices"), ref<java::util::List>>(); }
inline ref<java::util::List> BluetoothGatt::getDevicesMatchingConnectionStates(ref<link::java::array<jint>> states) { return call_method<SCAPIX_META_STRING("getDevicesMatchingConnectionStates"), ref<java::util::List>>(states); }

} // namespace android::bluetooth
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_BLUETOOTH_BLUETOOTHGATT_H
