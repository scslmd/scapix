// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_BLUETOOTH_BLUETOOTHPROFILE_SERVICELISTENER_H
#define SCAPIX_ANDROID_BLUETOOTH_BLUETOOTHPROFILE_SERVICELISTENER_H

namespace scapix::java_api {

namespace android::bluetooth { class BluetoothProfile; }

namespace android::bluetooth {

class BluetoothProfile_ServiceListener : public object_base<SCAPIX_META_STRING("android/bluetooth/BluetoothProfile$ServiceListener"),
	java::lang::Object>
{
public:

	void onServiceConnected(jint p1, ref<android::bluetooth::BluetoothProfile> p2);
	void onServiceDisconnected(jint p1);

protected:

	BluetoothProfile_ServiceListener(handle_type h) : base_(h) {}

};

} // namespace android::bluetooth
} // namespace scapix::java_api

#include <scapix/java_api/android/bluetooth/BluetoothProfile.h>

namespace scapix::java_api {
namespace android::bluetooth {

inline void BluetoothProfile_ServiceListener::onServiceConnected(jint p1, ref<android::bluetooth::BluetoothProfile> p2) { return call_method<SCAPIX_META_STRING("onServiceConnected"), void>(p1, p2); }
inline void BluetoothProfile_ServiceListener::onServiceDisconnected(jint p1) { return call_method<SCAPIX_META_STRING("onServiceDisconnected"), void>(p1); }

} // namespace android::bluetooth
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_BLUETOOTH_BLUETOOTHPROFILE_SERVICELISTENER_H
