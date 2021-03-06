// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/provider/BaseColumns.h>

#ifndef SCAPIX_ANDROID_PROVIDER_VOICEMAILCONTRACT_STATUS_H
#define SCAPIX_ANDROID_PROVIDER_VOICEMAILCONTRACT_STATUS_H

namespace scapix::java_api {

namespace android::net { class Uri; }
namespace java::lang { class String; }

namespace android::provider {

class VoicemailContract_Status : public object_base<SCAPIX_META_STRING("android/provider/VoicemailContract$Status"),
	java::lang::Object,
	android::provider::BaseColumns>
{
public:

	static ref<java::lang::String> CONFIGURATION_STATE_();
	static jint CONFIGURATION_STATE_CAN_BE_CONFIGURED_();
	static jint CONFIGURATION_STATE_CONFIGURING_();
	static jint CONFIGURATION_STATE_DISABLED_();
	static jint CONFIGURATION_STATE_FAILED_();
	static jint CONFIGURATION_STATE_NOT_CONFIGURED_();
	static jint CONFIGURATION_STATE_OK_();
	static ref<android::net::Uri> CONTENT_URI_();
	static ref<java::lang::String> DATA_CHANNEL_STATE_();
	static jint DATA_CHANNEL_STATE_BAD_CONFIGURATION_();
	static jint DATA_CHANNEL_STATE_COMMUNICATION_ERROR_();
	static jint DATA_CHANNEL_STATE_NO_CONNECTION_();
	static jint DATA_CHANNEL_STATE_NO_CONNECTION_CELLULAR_REQUIRED_();
	static jint DATA_CHANNEL_STATE_OK_();
	static jint DATA_CHANNEL_STATE_SERVER_CONNECTION_ERROR_();
	static jint DATA_CHANNEL_STATE_SERVER_ERROR_();
	static ref<java::lang::String> DIR_TYPE_();
	static ref<java::lang::String> ITEM_TYPE_();
	static ref<java::lang::String> NOTIFICATION_CHANNEL_STATE_();
	static jint NOTIFICATION_CHANNEL_STATE_MESSAGE_WAITING_();
	static jint NOTIFICATION_CHANNEL_STATE_NO_CONNECTION_();
	static jint NOTIFICATION_CHANNEL_STATE_OK_();
	static ref<java::lang::String> PHONE_ACCOUNT_COMPONENT_NAME_();
	static ref<java::lang::String> PHONE_ACCOUNT_ID_();
	static ref<java::lang::String> QUOTA_OCCUPIED_();
	static ref<java::lang::String> QUOTA_TOTAL_();
	static jint QUOTA_UNAVAILABLE_();
	static ref<java::lang::String> SETTINGS_URI_();
	static ref<java::lang::String> SOURCE_PACKAGE_();
	static ref<java::lang::String> SOURCE_TYPE_();
	static ref<java::lang::String> VOICEMAIL_ACCESS_URI_();

	static ref<android::net::Uri> buildSourceUri(ref<java::lang::String> packageName);

protected:

	VoicemailContract_Status(handle_type h) : base_(h) {}

};

} // namespace android::provider
} // namespace scapix::java_api

#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::provider {

inline ref<java::lang::String> VoicemailContract_Status::CONFIGURATION_STATE_() { return get_static_field<SCAPIX_META_STRING("CONFIGURATION_STATE"), ref<java::lang::String>>(); }
inline jint VoicemailContract_Status::CONFIGURATION_STATE_CAN_BE_CONFIGURED_() { return get_static_field<SCAPIX_META_STRING("CONFIGURATION_STATE_CAN_BE_CONFIGURED"), jint>(); }
inline jint VoicemailContract_Status::CONFIGURATION_STATE_CONFIGURING_() { return get_static_field<SCAPIX_META_STRING("CONFIGURATION_STATE_CONFIGURING"), jint>(); }
inline jint VoicemailContract_Status::CONFIGURATION_STATE_DISABLED_() { return get_static_field<SCAPIX_META_STRING("CONFIGURATION_STATE_DISABLED"), jint>(); }
inline jint VoicemailContract_Status::CONFIGURATION_STATE_FAILED_() { return get_static_field<SCAPIX_META_STRING("CONFIGURATION_STATE_FAILED"), jint>(); }
inline jint VoicemailContract_Status::CONFIGURATION_STATE_NOT_CONFIGURED_() { return get_static_field<SCAPIX_META_STRING("CONFIGURATION_STATE_NOT_CONFIGURED"), jint>(); }
inline jint VoicemailContract_Status::CONFIGURATION_STATE_OK_() { return get_static_field<SCAPIX_META_STRING("CONFIGURATION_STATE_OK"), jint>(); }
inline ref<android::net::Uri> VoicemailContract_Status::CONTENT_URI_() { return get_static_field<SCAPIX_META_STRING("CONTENT_URI"), ref<android::net::Uri>>(); }
inline ref<java::lang::String> VoicemailContract_Status::DATA_CHANNEL_STATE_() { return get_static_field<SCAPIX_META_STRING("DATA_CHANNEL_STATE"), ref<java::lang::String>>(); }
inline jint VoicemailContract_Status::DATA_CHANNEL_STATE_BAD_CONFIGURATION_() { return get_static_field<SCAPIX_META_STRING("DATA_CHANNEL_STATE_BAD_CONFIGURATION"), jint>(); }
inline jint VoicemailContract_Status::DATA_CHANNEL_STATE_COMMUNICATION_ERROR_() { return get_static_field<SCAPIX_META_STRING("DATA_CHANNEL_STATE_COMMUNICATION_ERROR"), jint>(); }
inline jint VoicemailContract_Status::DATA_CHANNEL_STATE_NO_CONNECTION_() { return get_static_field<SCAPIX_META_STRING("DATA_CHANNEL_STATE_NO_CONNECTION"), jint>(); }
inline jint VoicemailContract_Status::DATA_CHANNEL_STATE_NO_CONNECTION_CELLULAR_REQUIRED_() { return get_static_field<SCAPIX_META_STRING("DATA_CHANNEL_STATE_NO_CONNECTION_CELLULAR_REQUIRED"), jint>(); }
inline jint VoicemailContract_Status::DATA_CHANNEL_STATE_OK_() { return get_static_field<SCAPIX_META_STRING("DATA_CHANNEL_STATE_OK"), jint>(); }
inline jint VoicemailContract_Status::DATA_CHANNEL_STATE_SERVER_CONNECTION_ERROR_() { return get_static_field<SCAPIX_META_STRING("DATA_CHANNEL_STATE_SERVER_CONNECTION_ERROR"), jint>(); }
inline jint VoicemailContract_Status::DATA_CHANNEL_STATE_SERVER_ERROR_() { return get_static_field<SCAPIX_META_STRING("DATA_CHANNEL_STATE_SERVER_ERROR"), jint>(); }
inline ref<java::lang::String> VoicemailContract_Status::DIR_TYPE_() { return get_static_field<SCAPIX_META_STRING("DIR_TYPE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> VoicemailContract_Status::ITEM_TYPE_() { return get_static_field<SCAPIX_META_STRING("ITEM_TYPE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> VoicemailContract_Status::NOTIFICATION_CHANNEL_STATE_() { return get_static_field<SCAPIX_META_STRING("NOTIFICATION_CHANNEL_STATE"), ref<java::lang::String>>(); }
inline jint VoicemailContract_Status::NOTIFICATION_CHANNEL_STATE_MESSAGE_WAITING_() { return get_static_field<SCAPIX_META_STRING("NOTIFICATION_CHANNEL_STATE_MESSAGE_WAITING"), jint>(); }
inline jint VoicemailContract_Status::NOTIFICATION_CHANNEL_STATE_NO_CONNECTION_() { return get_static_field<SCAPIX_META_STRING("NOTIFICATION_CHANNEL_STATE_NO_CONNECTION"), jint>(); }
inline jint VoicemailContract_Status::NOTIFICATION_CHANNEL_STATE_OK_() { return get_static_field<SCAPIX_META_STRING("NOTIFICATION_CHANNEL_STATE_OK"), jint>(); }
inline ref<java::lang::String> VoicemailContract_Status::PHONE_ACCOUNT_COMPONENT_NAME_() { return get_static_field<SCAPIX_META_STRING("PHONE_ACCOUNT_COMPONENT_NAME"), ref<java::lang::String>>(); }
inline ref<java::lang::String> VoicemailContract_Status::PHONE_ACCOUNT_ID_() { return get_static_field<SCAPIX_META_STRING("PHONE_ACCOUNT_ID"), ref<java::lang::String>>(); }
inline ref<java::lang::String> VoicemailContract_Status::QUOTA_OCCUPIED_() { return get_static_field<SCAPIX_META_STRING("QUOTA_OCCUPIED"), ref<java::lang::String>>(); }
inline ref<java::lang::String> VoicemailContract_Status::QUOTA_TOTAL_() { return get_static_field<SCAPIX_META_STRING("QUOTA_TOTAL"), ref<java::lang::String>>(); }
inline jint VoicemailContract_Status::QUOTA_UNAVAILABLE_() { return get_static_field<SCAPIX_META_STRING("QUOTA_UNAVAILABLE"), jint>(); }
inline ref<java::lang::String> VoicemailContract_Status::SETTINGS_URI_() { return get_static_field<SCAPIX_META_STRING("SETTINGS_URI"), ref<java::lang::String>>(); }
inline ref<java::lang::String> VoicemailContract_Status::SOURCE_PACKAGE_() { return get_static_field<SCAPIX_META_STRING("SOURCE_PACKAGE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> VoicemailContract_Status::SOURCE_TYPE_() { return get_static_field<SCAPIX_META_STRING("SOURCE_TYPE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> VoicemailContract_Status::VOICEMAIL_ACCESS_URI_() { return get_static_field<SCAPIX_META_STRING("VOICEMAIL_ACCESS_URI"), ref<java::lang::String>>(); }
inline ref<android::net::Uri> VoicemailContract_Status::buildSourceUri(ref<java::lang::String> packageName) { return call_static_method<SCAPIX_META_STRING("buildSourceUri"), ref<android::net::Uri>>(packageName); }

} // namespace android::provider
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_PROVIDER_VOICEMAILCONTRACT_STATUS_H
