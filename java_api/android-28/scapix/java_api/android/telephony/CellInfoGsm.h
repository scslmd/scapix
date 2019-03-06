// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/android/telephony/CellInfo.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_ANDROID_TELEPHONY_CELLINFOGSM_H
#define SCAPIX_ANDROID_TELEPHONY_CELLINFOGSM_H

namespace scapix::java_api {

namespace android::os { class Parcel; }
namespace android::os { class Parcelable_Creator; }
namespace android::telephony { class CellIdentityGsm; }
namespace android::telephony { class CellSignalStrengthGsm; }
namespace java::lang { class Object; }
namespace java::lang { class String; }

namespace android::telephony {

class CellInfoGsm : public object_base<SCAPIX_META_STRING("android/telephony/CellInfoGsm"),
	android::telephony::CellInfo,
	android::os::Parcelable>
{
public:

	static ref<android::os::Parcelable_Creator> CREATOR_();

	ref<android::telephony::CellIdentityGsm> getCellIdentity();
	ref<android::telephony::CellSignalStrengthGsm> getCellSignalStrength();
	jint hashCode();
	jboolean equals(ref<java::lang::Object> other);
	ref<java::lang::String> toString();
	jint describeContents();
	void writeToParcel(ref<android::os::Parcel> dest, jint flags);

protected:

	CellInfoGsm(handle_type h) : base_(h) {}

};

} // namespace android::telephony
} // namespace scapix::java_api

#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/android/telephony/CellIdentityGsm.h>
#include <scapix/java_api/android/telephony/CellSignalStrengthGsm.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::telephony {

inline ref<android::os::Parcelable_Creator> CellInfoGsm::CREATOR_() { return get_static_field<SCAPIX_META_STRING("CREATOR"), ref<android::os::Parcelable_Creator>>(); }
inline ref<android::telephony::CellIdentityGsm> CellInfoGsm::getCellIdentity() { return call_method<SCAPIX_META_STRING("getCellIdentity"), ref<android::telephony::CellIdentityGsm>>(); }
inline ref<android::telephony::CellSignalStrengthGsm> CellInfoGsm::getCellSignalStrength() { return call_method<SCAPIX_META_STRING("getCellSignalStrength"), ref<android::telephony::CellSignalStrengthGsm>>(); }
inline jint CellInfoGsm::hashCode() { return call_method<SCAPIX_META_STRING("hashCode"), jint>(); }
inline jboolean CellInfoGsm::equals(ref<java::lang::Object> other) { return call_method<SCAPIX_META_STRING("equals"), jboolean>(other); }
inline ref<java::lang::String> CellInfoGsm::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }
inline jint CellInfoGsm::describeContents() { return call_method<SCAPIX_META_STRING("describeContents"), jint>(); }
inline void CellInfoGsm::writeToParcel(ref<android::os::Parcel> dest, jint flags) { return call_method<SCAPIX_META_STRING("writeToParcel"), void>(dest, flags); }

} // namespace android::telephony
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_TELEPHONY_CELLINFOGSM_H
