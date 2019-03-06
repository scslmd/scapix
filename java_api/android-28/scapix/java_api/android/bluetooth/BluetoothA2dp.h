// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/bluetooth/BluetoothProfile.h>

#ifndef SCAPIX_ANDROID_BLUETOOTH_BLUETOOTHA2DP_H
#define SCAPIX_ANDROID_BLUETOOTH_BLUETOOTHA2DP_H

namespace scapix::java_api {

namespace android::bluetooth { class BluetoothDevice; }
namespace java::lang { class String; }
namespace java::util { class List; }

namespace android::bluetooth {

class BluetoothA2dp : public object_base<SCAPIX_META_STRING("android/bluetooth/BluetoothA2dp"),
	java::lang::Object,
	android::bluetooth::BluetoothProfile>
{
public:

	static ref<java::lang::String> ACTION_CONNECTION_STATE_CHANGED_();
	static ref<java::lang::String> ACTION_PLAYING_STATE_CHANGED_();
	static jint STATE_NOT_PLAYING_();
	static jint STATE_PLAYING_();

	void finalize();
	ref<java::util::List> getConnectedDevices();
	ref<java::util::List> getDevicesMatchingConnectionStates(ref<link::java::array<jint>> states);
	jint getConnectionState(ref<android::bluetooth::BluetoothDevice> device);
	jboolean isA2dpPlaying(ref<android::bluetooth::BluetoothDevice> device);

protected:

	BluetoothA2dp(handle_type h) : base_(h) {}

};

} // namespace android::bluetooth
} // namespace scapix::java_api

#include <scapix/java_api/android/bluetooth/BluetoothDevice.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>

namespace scapix::java_api {
namespace android::bluetooth {

inline ref<java::lang::String> BluetoothA2dp::ACTION_CONNECTION_STATE_CHANGED_() { return get_static_field<SCAPIX_META_STRING("ACTION_CONNECTION_STATE_CHANGED"), ref<java::lang::String>>(); }
inline ref<java::lang::String> BluetoothA2dp::ACTION_PLAYING_STATE_CHANGED_() { return get_static_field<SCAPIX_META_STRING("ACTION_PLAYING_STATE_CHANGED"), ref<java::lang::String>>(); }
inline jint BluetoothA2dp::STATE_NOT_PLAYING_() { return get_static_field<SCAPIX_META_STRING("STATE_NOT_PLAYING"), jint>(); }
inline jint BluetoothA2dp::STATE_PLAYING_() { return get_static_field<SCAPIX_META_STRING("STATE_PLAYING"), jint>(); }
inline void BluetoothA2dp::finalize() { return call_method<SCAPIX_META_STRING("finalize"), void>(); }
inline ref<java::util::List> BluetoothA2dp::getConnectedDevices() { return call_method<SCAPIX_META_STRING("getConnectedDevices"), ref<java::util::List>>(); }
inline ref<java::util::List> BluetoothA2dp::getDevicesMatchingConnectionStates(ref<link::java::array<jint>> states) { return call_method<SCAPIX_META_STRING("getDevicesMatchingConnectionStates"), ref<java::util::List>>(states); }
inline jint BluetoothA2dp::getConnectionState(ref<android::bluetooth::BluetoothDevice> device) { return call_method<SCAPIX_META_STRING("getConnectionState"), jint>(device); }
inline jboolean BluetoothA2dp::isA2dpPlaying(ref<android::bluetooth::BluetoothDevice> device) { return call_method<SCAPIX_META_STRING("isA2dpPlaying"), jboolean>(device); }

} // namespace android::bluetooth
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_BLUETOOTH_BLUETOOTHA2DP_H
