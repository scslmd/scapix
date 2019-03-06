// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_ANDROID_ACCOUNTS_AUTHENTICATORDESCRIPTION_H
#define SCAPIX_ANDROID_ACCOUNTS_AUTHENTICATORDESCRIPTION_H

namespace scapix::java_api {

namespace android::os { class Parcel; }
namespace android::os { class Parcelable_Creator; }
namespace java::lang { class String; }

namespace android::accounts {

class AuthenticatorDescription : public object_base<SCAPIX_META_STRING("android/accounts/AuthenticatorDescription"),
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static ref<android::os::Parcelable_Creator> CREATOR_();
	jint accountPreferencesId();
	jboolean customTokens();
	jint iconId();
	jint labelId();
	ref<java::lang::String> packageName();
	jint smallIconId();
	ref<java::lang::String> type();

	static ref<AuthenticatorDescription> new_object(ref<java::lang::String> type, ref<java::lang::String> packageName, jint labelId, jint iconId, jint smallIconId, jint prefId, jboolean customTokens);
	static ref<AuthenticatorDescription> new_object(ref<java::lang::String> type, ref<java::lang::String> packageName, jint labelId, jint iconId, jint smallIconId, jint prefId);
	static ref<android::accounts::AuthenticatorDescription> newKey(ref<java::lang::String> type);
	jint describeContents();
	jint hashCode();
	jboolean equals(ref<java::lang::Object> o);
	ref<java::lang::String> toString();
	void writeToParcel(ref<android::os::Parcel> dest, jint flags);

protected:

	AuthenticatorDescription(handle_type h) : base_(h) {}

};

} // namespace android::accounts
} // namespace scapix::java_api

#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::accounts {

inline ref<android::os::Parcelable_Creator> AuthenticatorDescription::CREATOR_() { return get_static_field<SCAPIX_META_STRING("CREATOR"), ref<android::os::Parcelable_Creator>>(); }
inline jint AuthenticatorDescription::accountPreferencesId() { return get_field<SCAPIX_META_STRING("accountPreferencesId"), jint>(); }
inline jboolean AuthenticatorDescription::customTokens() { return get_field<SCAPIX_META_STRING("customTokens"), jboolean>(); }
inline jint AuthenticatorDescription::iconId() { return get_field<SCAPIX_META_STRING("iconId"), jint>(); }
inline jint AuthenticatorDescription::labelId() { return get_field<SCAPIX_META_STRING("labelId"), jint>(); }
inline ref<java::lang::String> AuthenticatorDescription::packageName() { return get_field<SCAPIX_META_STRING("packageName"), ref<java::lang::String>>(); }
inline jint AuthenticatorDescription::smallIconId() { return get_field<SCAPIX_META_STRING("smallIconId"), jint>(); }
inline ref<java::lang::String> AuthenticatorDescription::type() { return get_field<SCAPIX_META_STRING("type"), ref<java::lang::String>>(); }
inline ref<AuthenticatorDescription> AuthenticatorDescription::new_object(ref<java::lang::String> type, ref<java::lang::String> packageName, jint labelId, jint iconId, jint smallIconId, jint prefId, jboolean customTokens) { return base_::new_object(type, packageName, labelId, iconId, smallIconId, prefId, customTokens); }
inline ref<AuthenticatorDescription> AuthenticatorDescription::new_object(ref<java::lang::String> type, ref<java::lang::String> packageName, jint labelId, jint iconId, jint smallIconId, jint prefId) { return base_::new_object(type, packageName, labelId, iconId, smallIconId, prefId); }
inline ref<android::accounts::AuthenticatorDescription> AuthenticatorDescription::newKey(ref<java::lang::String> type) { return call_static_method<SCAPIX_META_STRING("newKey"), ref<android::accounts::AuthenticatorDescription>>(type); }
inline jint AuthenticatorDescription::describeContents() { return call_method<SCAPIX_META_STRING("describeContents"), jint>(); }
inline jint AuthenticatorDescription::hashCode() { return call_method<SCAPIX_META_STRING("hashCode"), jint>(); }
inline jboolean AuthenticatorDescription::equals(ref<java::lang::Object> o) { return call_method<SCAPIX_META_STRING("equals"), jboolean>(o); }
inline ref<java::lang::String> AuthenticatorDescription::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }
inline void AuthenticatorDescription::writeToParcel(ref<android::os::Parcel> dest, jint flags) { return call_method<SCAPIX_META_STRING("writeToParcel"), void>(dest, flags); }

} // namespace android::accounts
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_ACCOUNTS_AUTHENTICATORDESCRIPTION_H
