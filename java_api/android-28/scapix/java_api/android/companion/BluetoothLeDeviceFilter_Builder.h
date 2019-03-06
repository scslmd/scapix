// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_COMPANION_BLUETOOTHLEDEVICEFILTER_BUILDER_H
#define SCAPIX_ANDROID_COMPANION_BLUETOOTHLEDEVICEFILTER_BUILDER_H

namespace scapix::java_api {

namespace android::bluetooth::le { class ScanFilter; }
namespace android::companion { class BluetoothLeDeviceFilter; }
namespace java::lang { class String; }
namespace java::nio { class ByteOrder; }
namespace java::util::regex { class Pattern; }

namespace android::companion {

class BluetoothLeDeviceFilter_Builder : public object_base<SCAPIX_META_STRING("android/companion/BluetoothLeDeviceFilter$Builder"),
	java::lang::Object>
{
public:

	static ref<BluetoothLeDeviceFilter_Builder> new_object();
	ref<android::companion::BluetoothLeDeviceFilter_Builder> setNamePattern(ref<java::util::regex::Pattern> regex);
	ref<android::companion::BluetoothLeDeviceFilter_Builder> setScanFilter(ref<android::bluetooth::le::ScanFilter> scanFilter);
	ref<android::companion::BluetoothLeDeviceFilter_Builder> setRawDataFilter(ref<link::java::array<jbyte>> rawDataFilter, ref<link::java::array<jbyte>> rawDataFilterMask);
	ref<android::companion::BluetoothLeDeviceFilter_Builder> setRenameFromBytes(ref<java::lang::String> prefix, ref<java::lang::String> suffix, jint bytesFrom, jint bytesLength, ref<java::nio::ByteOrder> byteOrder);
	ref<android::companion::BluetoothLeDeviceFilter_Builder> setRenameFromName(ref<java::lang::String> prefix, ref<java::lang::String> suffix, jint nameFrom, jint nameLength);
	ref<android::companion::BluetoothLeDeviceFilter> build();

protected:

	BluetoothLeDeviceFilter_Builder(handle_type h) : base_(h) {}

};

} // namespace android::companion
} // namespace scapix::java_api

#include <scapix/java_api/android/bluetooth/le/ScanFilter.h>
#include <scapix/java_api/android/companion/BluetoothLeDeviceFilter.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/nio/ByteOrder.h>
#include <scapix/java_api/java/util/regex/Pattern.h>

namespace scapix::java_api {
namespace android::companion {

inline ref<BluetoothLeDeviceFilter_Builder> BluetoothLeDeviceFilter_Builder::new_object() { return base_::new_object(); }
inline ref<android::companion::BluetoothLeDeviceFilter_Builder> BluetoothLeDeviceFilter_Builder::setNamePattern(ref<java::util::regex::Pattern> regex) { return call_method<SCAPIX_META_STRING("setNamePattern"), ref<android::companion::BluetoothLeDeviceFilter_Builder>>(regex); }
inline ref<android::companion::BluetoothLeDeviceFilter_Builder> BluetoothLeDeviceFilter_Builder::setScanFilter(ref<android::bluetooth::le::ScanFilter> scanFilter) { return call_method<SCAPIX_META_STRING("setScanFilter"), ref<android::companion::BluetoothLeDeviceFilter_Builder>>(scanFilter); }
inline ref<android::companion::BluetoothLeDeviceFilter_Builder> BluetoothLeDeviceFilter_Builder::setRawDataFilter(ref<link::java::array<jbyte>> rawDataFilter, ref<link::java::array<jbyte>> rawDataFilterMask) { return call_method<SCAPIX_META_STRING("setRawDataFilter"), ref<android::companion::BluetoothLeDeviceFilter_Builder>>(rawDataFilter, rawDataFilterMask); }
inline ref<android::companion::BluetoothLeDeviceFilter_Builder> BluetoothLeDeviceFilter_Builder::setRenameFromBytes(ref<java::lang::String> prefix, ref<java::lang::String> suffix, jint bytesFrom, jint bytesLength, ref<java::nio::ByteOrder> byteOrder) { return call_method<SCAPIX_META_STRING("setRenameFromBytes"), ref<android::companion::BluetoothLeDeviceFilter_Builder>>(prefix, suffix, bytesFrom, bytesLength, byteOrder); }
inline ref<android::companion::BluetoothLeDeviceFilter_Builder> BluetoothLeDeviceFilter_Builder::setRenameFromName(ref<java::lang::String> prefix, ref<java::lang::String> suffix, jint nameFrom, jint nameLength) { return call_method<SCAPIX_META_STRING("setRenameFromName"), ref<android::companion::BluetoothLeDeviceFilter_Builder>>(prefix, suffix, nameFrom, nameLength); }
inline ref<android::companion::BluetoothLeDeviceFilter> BluetoothLeDeviceFilter_Builder::build() { return call_method<SCAPIX_META_STRING("build"), ref<android::companion::BluetoothLeDeviceFilter>>(); }

} // namespace android::companion
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_COMPANION_BLUETOOTHLEDEVICEFILTER_BUILDER_H
