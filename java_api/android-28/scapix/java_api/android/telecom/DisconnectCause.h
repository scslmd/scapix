// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_ANDROID_TELECOM_DISCONNECTCAUSE_H
#define SCAPIX_ANDROID_TELECOM_DISCONNECTCAUSE_H

namespace scapix::java_api {

namespace android::os { class Parcel; }
namespace android::os { class Parcelable_Creator; }
namespace java::lang { class CharSequence; }
namespace java::lang { class String; }

namespace android::telecom {

class DisconnectCause : public object_base<SCAPIX_META_STRING("android/telecom/DisconnectCause"),
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static jint ANSWERED_ELSEWHERE_();
	static jint BUSY_();
	static jint CALL_PULLED_();
	static jint CANCELED_();
	static jint CONNECTION_MANAGER_NOT_SUPPORTED_();
	static ref<android::os::Parcelable_Creator> CREATOR_();
	static jint ERROR_();
	static jint LOCAL_();
	static jint MISSED_();
	static jint OTHER_();
	static jint REJECTED_();
	static jint REMOTE_();
	static jint RESTRICTED_();
	static jint UNKNOWN_();

	static ref<DisconnectCause> new_object(jint code);
	static ref<DisconnectCause> new_object(jint code, ref<java::lang::String> reason);
	static ref<DisconnectCause> new_object(jint code, ref<java::lang::CharSequence> label, ref<java::lang::CharSequence> description, ref<java::lang::String> reason);
	static ref<DisconnectCause> new_object(jint code, ref<java::lang::CharSequence> label, ref<java::lang::CharSequence> description, ref<java::lang::String> reason, jint toneToPlay);
	jint getCode();
	ref<java::lang::CharSequence> getLabel();
	ref<java::lang::CharSequence> getDescription();
	ref<java::lang::String> getReason();
	jint getTone();
	void writeToParcel(ref<android::os::Parcel> destination, jint flags);
	jint describeContents();
	jint hashCode();
	jboolean equals(ref<java::lang::Object> o);
	ref<java::lang::String> toString();

protected:

	DisconnectCause(handle_type h) : base_(h) {}

};

} // namespace android::telecom
} // namespace scapix::java_api

#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::telecom {

inline jint DisconnectCause::ANSWERED_ELSEWHERE_() { return get_static_field<SCAPIX_META_STRING("ANSWERED_ELSEWHERE"), jint>(); }
inline jint DisconnectCause::BUSY_() { return get_static_field<SCAPIX_META_STRING("BUSY"), jint>(); }
inline jint DisconnectCause::CALL_PULLED_() { return get_static_field<SCAPIX_META_STRING("CALL_PULLED"), jint>(); }
inline jint DisconnectCause::CANCELED_() { return get_static_field<SCAPIX_META_STRING("CANCELED"), jint>(); }
inline jint DisconnectCause::CONNECTION_MANAGER_NOT_SUPPORTED_() { return get_static_field<SCAPIX_META_STRING("CONNECTION_MANAGER_NOT_SUPPORTED"), jint>(); }
inline ref<android::os::Parcelable_Creator> DisconnectCause::CREATOR_() { return get_static_field<SCAPIX_META_STRING("CREATOR"), ref<android::os::Parcelable_Creator>>(); }
inline jint DisconnectCause::ERROR_() { return get_static_field<SCAPIX_META_STRING("ERROR"), jint>(); }
inline jint DisconnectCause::LOCAL_() { return get_static_field<SCAPIX_META_STRING("LOCAL"), jint>(); }
inline jint DisconnectCause::MISSED_() { return get_static_field<SCAPIX_META_STRING("MISSED"), jint>(); }
inline jint DisconnectCause::OTHER_() { return get_static_field<SCAPIX_META_STRING("OTHER"), jint>(); }
inline jint DisconnectCause::REJECTED_() { return get_static_field<SCAPIX_META_STRING("REJECTED"), jint>(); }
inline jint DisconnectCause::REMOTE_() { return get_static_field<SCAPIX_META_STRING("REMOTE"), jint>(); }
inline jint DisconnectCause::RESTRICTED_() { return get_static_field<SCAPIX_META_STRING("RESTRICTED"), jint>(); }
inline jint DisconnectCause::UNKNOWN_() { return get_static_field<SCAPIX_META_STRING("UNKNOWN"), jint>(); }
inline ref<DisconnectCause> DisconnectCause::new_object(jint code) { return base_::new_object(code); }
inline ref<DisconnectCause> DisconnectCause::new_object(jint code, ref<java::lang::String> reason) { return base_::new_object(code, reason); }
inline ref<DisconnectCause> DisconnectCause::new_object(jint code, ref<java::lang::CharSequence> label, ref<java::lang::CharSequence> description, ref<java::lang::String> reason) { return base_::new_object(code, label, description, reason); }
inline ref<DisconnectCause> DisconnectCause::new_object(jint code, ref<java::lang::CharSequence> label, ref<java::lang::CharSequence> description, ref<java::lang::String> reason, jint toneToPlay) { return base_::new_object(code, label, description, reason, toneToPlay); }
inline jint DisconnectCause::getCode() { return call_method<SCAPIX_META_STRING("getCode"), jint>(); }
inline ref<java::lang::CharSequence> DisconnectCause::getLabel() { return call_method<SCAPIX_META_STRING("getLabel"), ref<java::lang::CharSequence>>(); }
inline ref<java::lang::CharSequence> DisconnectCause::getDescription() { return call_method<SCAPIX_META_STRING("getDescription"), ref<java::lang::CharSequence>>(); }
inline ref<java::lang::String> DisconnectCause::getReason() { return call_method<SCAPIX_META_STRING("getReason"), ref<java::lang::String>>(); }
inline jint DisconnectCause::getTone() { return call_method<SCAPIX_META_STRING("getTone"), jint>(); }
inline void DisconnectCause::writeToParcel(ref<android::os::Parcel> destination, jint flags) { return call_method<SCAPIX_META_STRING("writeToParcel"), void>(destination, flags); }
inline jint DisconnectCause::describeContents() { return call_method<SCAPIX_META_STRING("describeContents"), jint>(); }
inline jint DisconnectCause::hashCode() { return call_method<SCAPIX_META_STRING("hashCode"), jint>(); }
inline jboolean DisconnectCause::equals(ref<java::lang::Object> o) { return call_method<SCAPIX_META_STRING("equals"), jboolean>(o); }
inline ref<java::lang::String> DisconnectCause::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }

} // namespace android::telecom
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_TELECOM_DISCONNECTCAUSE_H
