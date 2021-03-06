// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_ANDROID_TELECOM_CALLAUDIOSTATE_H
#define SCAPIX_ANDROID_TELECOM_CALLAUDIOSTATE_H

namespace scapix::java_api {

namespace android::bluetooth { class BluetoothDevice; }
namespace android::os { class Parcel; }
namespace android::os { class Parcelable_Creator; }
namespace java::lang { class String; }
namespace java::util { class Collection; }

namespace android::telecom {

class CallAudioState : public object_base<SCAPIX_META_STRING("android/telecom/CallAudioState"),
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static ref<android::os::Parcelable_Creator> CREATOR_();
	static jint ROUTE_BLUETOOTH_();
	static jint ROUTE_EARPIECE_();
	static jint ROUTE_SPEAKER_();
	static jint ROUTE_WIRED_HEADSET_();
	static jint ROUTE_WIRED_OR_EARPIECE_();

	static ref<CallAudioState> new_object(jboolean muted, jint route, jint supportedRouteMask);
	jboolean equals(ref<java::lang::Object> obj);
	ref<java::lang::String> toString();
	jboolean isMuted();
	jint getRoute();
	jint getSupportedRouteMask();
	ref<android::bluetooth::BluetoothDevice> getActiveBluetoothDevice();
	ref<java::util::Collection> getSupportedBluetoothDevices();
	static ref<java::lang::String> audioRouteToString(jint route);
	jint describeContents();
	void writeToParcel(ref<android::os::Parcel> destination, jint flags);

protected:

	CallAudioState(handle_type h) : base_(h) {}

};

} // namespace android::telecom
} // namespace scapix::java_api

#include <scapix/java_api/android/bluetooth/BluetoothDevice.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Collection.h>

namespace scapix::java_api {
namespace android::telecom {

inline ref<android::os::Parcelable_Creator> CallAudioState::CREATOR_() { return get_static_field<SCAPIX_META_STRING("CREATOR"), ref<android::os::Parcelable_Creator>>(); }
inline jint CallAudioState::ROUTE_BLUETOOTH_() { return get_static_field<SCAPIX_META_STRING("ROUTE_BLUETOOTH"), jint>(); }
inline jint CallAudioState::ROUTE_EARPIECE_() { return get_static_field<SCAPIX_META_STRING("ROUTE_EARPIECE"), jint>(); }
inline jint CallAudioState::ROUTE_SPEAKER_() { return get_static_field<SCAPIX_META_STRING("ROUTE_SPEAKER"), jint>(); }
inline jint CallAudioState::ROUTE_WIRED_HEADSET_() { return get_static_field<SCAPIX_META_STRING("ROUTE_WIRED_HEADSET"), jint>(); }
inline jint CallAudioState::ROUTE_WIRED_OR_EARPIECE_() { return get_static_field<SCAPIX_META_STRING("ROUTE_WIRED_OR_EARPIECE"), jint>(); }
inline ref<CallAudioState> CallAudioState::new_object(jboolean muted, jint route, jint supportedRouteMask) { return base_::new_object(muted, route, supportedRouteMask); }
inline jboolean CallAudioState::equals(ref<java::lang::Object> obj) { return call_method<SCAPIX_META_STRING("equals"), jboolean>(obj); }
inline ref<java::lang::String> CallAudioState::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }
inline jboolean CallAudioState::isMuted() { return call_method<SCAPIX_META_STRING("isMuted"), jboolean>(); }
inline jint CallAudioState::getRoute() { return call_method<SCAPIX_META_STRING("getRoute"), jint>(); }
inline jint CallAudioState::getSupportedRouteMask() { return call_method<SCAPIX_META_STRING("getSupportedRouteMask"), jint>(); }
inline ref<android::bluetooth::BluetoothDevice> CallAudioState::getActiveBluetoothDevice() { return call_method<SCAPIX_META_STRING("getActiveBluetoothDevice"), ref<android::bluetooth::BluetoothDevice>>(); }
inline ref<java::util::Collection> CallAudioState::getSupportedBluetoothDevices() { return call_method<SCAPIX_META_STRING("getSupportedBluetoothDevices"), ref<java::util::Collection>>(); }
inline ref<java::lang::String> CallAudioState::audioRouteToString(jint route) { return call_static_method<SCAPIX_META_STRING("audioRouteToString"), ref<java::lang::String>>(route); }
inline jint CallAudioState::describeContents() { return call_method<SCAPIX_META_STRING("describeContents"), jint>(); }
inline void CallAudioState::writeToParcel(ref<android::os::Parcel> destination, jint flags) { return call_method<SCAPIX_META_STRING("writeToParcel"), void>(destination, flags); }

} // namespace android::telecom
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_TELECOM_CALLAUDIOSTATE_H
