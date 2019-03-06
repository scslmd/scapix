// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_ANDROID_TELEPHONY_VISUALVOICEMAILSMS_H
#define SCAPIX_ANDROID_TELEPHONY_VISUALVOICEMAILSMS_H

namespace scapix::java_api {

namespace android::os { class Bundle; }
namespace android::os { class Parcel; }
namespace android::os { class Parcelable_Creator; }
namespace android::telecom { class PhoneAccountHandle; }
namespace java::lang { class String; }

namespace android::telephony {

class VisualVoicemailSms : public object_base<SCAPIX_META_STRING("android/telephony/VisualVoicemailSms"),
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static ref<android::os::Parcelable_Creator> CREATOR_();

	ref<android::telecom::PhoneAccountHandle> getPhoneAccountHandle();
	ref<java::lang::String> getPrefix();
	ref<android::os::Bundle> getFields();
	ref<java::lang::String> getMessageBody();
	jint describeContents();
	void writeToParcel(ref<android::os::Parcel> dest, jint flags);

protected:

	VisualVoicemailSms(handle_type h) : base_(h) {}

};

} // namespace android::telephony
} // namespace scapix::java_api

#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/android/telecom/PhoneAccountHandle.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::telephony {

inline ref<android::os::Parcelable_Creator> VisualVoicemailSms::CREATOR_() { return get_static_field<SCAPIX_META_STRING("CREATOR"), ref<android::os::Parcelable_Creator>>(); }
inline ref<android::telecom::PhoneAccountHandle> VisualVoicemailSms::getPhoneAccountHandle() { return call_method<SCAPIX_META_STRING("getPhoneAccountHandle"), ref<android::telecom::PhoneAccountHandle>>(); }
inline ref<java::lang::String> VisualVoicemailSms::getPrefix() { return call_method<SCAPIX_META_STRING("getPrefix"), ref<java::lang::String>>(); }
inline ref<android::os::Bundle> VisualVoicemailSms::getFields() { return call_method<SCAPIX_META_STRING("getFields"), ref<android::os::Bundle>>(); }
inline ref<java::lang::String> VisualVoicemailSms::getMessageBody() { return call_method<SCAPIX_META_STRING("getMessageBody"), ref<java::lang::String>>(); }
inline jint VisualVoicemailSms::describeContents() { return call_method<SCAPIX_META_STRING("describeContents"), jint>(); }
inline void VisualVoicemailSms::writeToParcel(ref<android::os::Parcel> dest, jint flags) { return call_method<SCAPIX_META_STRING("writeToParcel"), void>(dest, flags); }

} // namespace android::telephony
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_TELEPHONY_VISUALVOICEMAILSMS_H
