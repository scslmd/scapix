// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_ANDROID_LOCATION_GNSSNAVIGATIONMESSAGE_H
#define SCAPIX_ANDROID_LOCATION_GNSSNAVIGATIONMESSAGE_H

namespace scapix::java_api {

namespace android::os { class Parcel; }
namespace android::os { class Parcelable_Creator; }
namespace java::lang { class String; }
namespace android::location { class GnssNavigationMessage_Callback; }

namespace android::location {

class GnssNavigationMessage : public object_base<SCAPIX_META_STRING("android/location/GnssNavigationMessage"),
	java::lang::Object,
	android::os::Parcelable>
{
public:

	using Callback = GnssNavigationMessage_Callback;

	static ref<android::os::Parcelable_Creator> CREATOR_();
	static jint STATUS_PARITY_PASSED_();
	static jint STATUS_PARITY_REBUILT_();
	static jint STATUS_UNKNOWN_();
	static jint TYPE_BDS_D1_();
	static jint TYPE_BDS_D2_();
	static jint TYPE_GAL_F_();
	static jint TYPE_GAL_I_();
	static jint TYPE_GLO_L1CA_();
	static jint TYPE_GPS_CNAV2_();
	static jint TYPE_GPS_L1CA_();
	static jint TYPE_GPS_L2CNAV_();
	static jint TYPE_GPS_L5CNAV_();
	static jint TYPE_UNKNOWN_();

	jint getType();
	jint getSvid();
	jint getMessageId();
	jint getSubmessageId();
	ref<link::java::array<jbyte>> getData();
	jint getStatus();
	void writeToParcel(ref<android::os::Parcel> parcel, jint flags);
	jint describeContents();
	ref<java::lang::String> toString();

protected:

	GnssNavigationMessage(handle_type h) : base_(h) {}

};

} // namespace android::location
} // namespace scapix::java_api

#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::location {

inline ref<android::os::Parcelable_Creator> GnssNavigationMessage::CREATOR_() { return get_static_field<SCAPIX_META_STRING("CREATOR"), ref<android::os::Parcelable_Creator>>(); }
inline jint GnssNavigationMessage::STATUS_PARITY_PASSED_() { return get_static_field<SCAPIX_META_STRING("STATUS_PARITY_PASSED"), jint>(); }
inline jint GnssNavigationMessage::STATUS_PARITY_REBUILT_() { return get_static_field<SCAPIX_META_STRING("STATUS_PARITY_REBUILT"), jint>(); }
inline jint GnssNavigationMessage::STATUS_UNKNOWN_() { return get_static_field<SCAPIX_META_STRING("STATUS_UNKNOWN"), jint>(); }
inline jint GnssNavigationMessage::TYPE_BDS_D1_() { return get_static_field<SCAPIX_META_STRING("TYPE_BDS_D1"), jint>(); }
inline jint GnssNavigationMessage::TYPE_BDS_D2_() { return get_static_field<SCAPIX_META_STRING("TYPE_BDS_D2"), jint>(); }
inline jint GnssNavigationMessage::TYPE_GAL_F_() { return get_static_field<SCAPIX_META_STRING("TYPE_GAL_F"), jint>(); }
inline jint GnssNavigationMessage::TYPE_GAL_I_() { return get_static_field<SCAPIX_META_STRING("TYPE_GAL_I"), jint>(); }
inline jint GnssNavigationMessage::TYPE_GLO_L1CA_() { return get_static_field<SCAPIX_META_STRING("TYPE_GLO_L1CA"), jint>(); }
inline jint GnssNavigationMessage::TYPE_GPS_CNAV2_() { return get_static_field<SCAPIX_META_STRING("TYPE_GPS_CNAV2"), jint>(); }
inline jint GnssNavigationMessage::TYPE_GPS_L1CA_() { return get_static_field<SCAPIX_META_STRING("TYPE_GPS_L1CA"), jint>(); }
inline jint GnssNavigationMessage::TYPE_GPS_L2CNAV_() { return get_static_field<SCAPIX_META_STRING("TYPE_GPS_L2CNAV"), jint>(); }
inline jint GnssNavigationMessage::TYPE_GPS_L5CNAV_() { return get_static_field<SCAPIX_META_STRING("TYPE_GPS_L5CNAV"), jint>(); }
inline jint GnssNavigationMessage::TYPE_UNKNOWN_() { return get_static_field<SCAPIX_META_STRING("TYPE_UNKNOWN"), jint>(); }
inline jint GnssNavigationMessage::getType() { return call_method<SCAPIX_META_STRING("getType"), jint>(); }
inline jint GnssNavigationMessage::getSvid() { return call_method<SCAPIX_META_STRING("getSvid"), jint>(); }
inline jint GnssNavigationMessage::getMessageId() { return call_method<SCAPIX_META_STRING("getMessageId"), jint>(); }
inline jint GnssNavigationMessage::getSubmessageId() { return call_method<SCAPIX_META_STRING("getSubmessageId"), jint>(); }
inline ref<link::java::array<jbyte>> GnssNavigationMessage::getData() { return call_method<SCAPIX_META_STRING("getData"), ref<link::java::array<jbyte>>>(); }
inline jint GnssNavigationMessage::getStatus() { return call_method<SCAPIX_META_STRING("getStatus"), jint>(); }
inline void GnssNavigationMessage::writeToParcel(ref<android::os::Parcel> parcel, jint flags) { return call_method<SCAPIX_META_STRING("writeToParcel"), void>(parcel, flags); }
inline jint GnssNavigationMessage::describeContents() { return call_method<SCAPIX_META_STRING("describeContents"), jint>(); }
inline ref<java::lang::String> GnssNavigationMessage::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }

} // namespace android::location
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_LOCATION_GNSSNAVIGATIONMESSAGE_H
