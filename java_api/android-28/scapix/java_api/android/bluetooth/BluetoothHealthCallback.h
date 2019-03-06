// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_BLUETOOTH_BLUETOOTHHEALTHCALLBACK_H
#define SCAPIX_ANDROID_BLUETOOTH_BLUETOOTHHEALTHCALLBACK_H

namespace scapix::java_api {

namespace android::bluetooth { class BluetoothDevice; }
namespace android::bluetooth { class BluetoothHealthAppConfiguration; }
namespace android::os { class ParcelFileDescriptor; }

namespace android::bluetooth {

class BluetoothHealthCallback : public object_base<SCAPIX_META_STRING("android/bluetooth/BluetoothHealthCallback"),
	java::lang::Object>
{
public:

	static ref<BluetoothHealthCallback> new_object();
	void onHealthAppConfigurationStatusChange(ref<android::bluetooth::BluetoothHealthAppConfiguration> config, jint status);
	void onHealthChannelStateChange(ref<android::bluetooth::BluetoothHealthAppConfiguration> config, ref<android::bluetooth::BluetoothDevice> device, jint prevState, jint newState, ref<android::os::ParcelFileDescriptor> fd, jint channelId);

protected:

	BluetoothHealthCallback(handle_type h) : base_(h) {}

};

} // namespace android::bluetooth
} // namespace scapix::java_api

#include <scapix/java_api/android/bluetooth/BluetoothDevice.h>
#include <scapix/java_api/android/bluetooth/BluetoothHealthAppConfiguration.h>
#include <scapix/java_api/android/os/ParcelFileDescriptor.h>

namespace scapix::java_api {
namespace android::bluetooth {

inline ref<BluetoothHealthCallback> BluetoothHealthCallback::new_object() { return base_::new_object(); }
inline void BluetoothHealthCallback::onHealthAppConfigurationStatusChange(ref<android::bluetooth::BluetoothHealthAppConfiguration> config, jint status) { return call_method<SCAPIX_META_STRING("onHealthAppConfigurationStatusChange"), void>(config, status); }
inline void BluetoothHealthCallback::onHealthChannelStateChange(ref<android::bluetooth::BluetoothHealthAppConfiguration> config, ref<android::bluetooth::BluetoothDevice> device, jint prevState, jint newState, ref<android::os::ParcelFileDescriptor> fd, jint channelId) { return call_method<SCAPIX_META_STRING("onHealthChannelStateChange"), void>(config, device, prevState, newState, fd, channelId); }

} // namespace android::bluetooth
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_BLUETOOTH_BLUETOOTHHEALTHCALLBACK_H
