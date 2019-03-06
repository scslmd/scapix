// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/provider/BaseColumns.h>
#include <scapix/java_api/android/provider/OpenableColumns.h>

#ifndef SCAPIX_ANDROID_PROVIDER_VOICEMAILCONTRACT_VOICEMAILS_H
#define SCAPIX_ANDROID_PROVIDER_VOICEMAILCONTRACT_VOICEMAILS_H

namespace scapix::java_api {

namespace android::net { class Uri; }
namespace java::lang { class String; }

namespace android::provider {

class VoicemailContract_Voicemails : public object_base<SCAPIX_META_STRING("android/provider/VoicemailContract$Voicemails"),
	java::lang::Object,
	android::provider::BaseColumns,
	android::provider::OpenableColumns>
{
public:

	static ref<java::lang::String> ARCHIVED_();
	static ref<java::lang::String> BACKED_UP_();
	static ref<android::net::Uri> CONTENT_URI_();
	static ref<java::lang::String> DATE_();
	static ref<java::lang::String> DELETED_();
	static ref<java::lang::String> DIRTY_();
	static jint DIRTY_RETAIN_();
	static ref<java::lang::String> DIR_TYPE_();
	static ref<java::lang::String> DURATION_();
	static ref<java::lang::String> HAS_CONTENT_();
	static ref<java::lang::String> IS_OMTP_VOICEMAIL_();
	static ref<java::lang::String> IS_READ_();
	static ref<java::lang::String> ITEM_TYPE_();
	static ref<java::lang::String> LAST_MODIFIED_();
	static ref<java::lang::String> MIME_TYPE_();
	static ref<java::lang::String> NEW_();
	static ref<java::lang::String> NUMBER_();
	static ref<java::lang::String> PHONE_ACCOUNT_COMPONENT_NAME_();
	static ref<java::lang::String> PHONE_ACCOUNT_ID_();
	static ref<java::lang::String> RESTORED_();
	static ref<java::lang::String> SOURCE_DATA_();
	static ref<java::lang::String> SOURCE_PACKAGE_();
	static ref<java::lang::String> TRANSCRIPTION_();

	static ref<android::net::Uri> buildSourceUri(ref<java::lang::String> packageName);

protected:

	VoicemailContract_Voicemails(handle_type h) : base_(h) {}

};

} // namespace android::provider
} // namespace scapix::java_api

#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::provider {

inline ref<java::lang::String> VoicemailContract_Voicemails::ARCHIVED_() { return get_static_field<SCAPIX_META_STRING("ARCHIVED"), ref<java::lang::String>>(); }
inline ref<java::lang::String> VoicemailContract_Voicemails::BACKED_UP_() { return get_static_field<SCAPIX_META_STRING("BACKED_UP"), ref<java::lang::String>>(); }
inline ref<android::net::Uri> VoicemailContract_Voicemails::CONTENT_URI_() { return get_static_field<SCAPIX_META_STRING("CONTENT_URI"), ref<android::net::Uri>>(); }
inline ref<java::lang::String> VoicemailContract_Voicemails::DATE_() { return get_static_field<SCAPIX_META_STRING("DATE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> VoicemailContract_Voicemails::DELETED_() { return get_static_field<SCAPIX_META_STRING("DELETED"), ref<java::lang::String>>(); }
inline ref<java::lang::String> VoicemailContract_Voicemails::DIRTY_() { return get_static_field<SCAPIX_META_STRING("DIRTY"), ref<java::lang::String>>(); }
inline jint VoicemailContract_Voicemails::DIRTY_RETAIN_() { return get_static_field<SCAPIX_META_STRING("DIRTY_RETAIN"), jint>(); }
inline ref<java::lang::String> VoicemailContract_Voicemails::DIR_TYPE_() { return get_static_field<SCAPIX_META_STRING("DIR_TYPE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> VoicemailContract_Voicemails::DURATION_() { return get_static_field<SCAPIX_META_STRING("DURATION"), ref<java::lang::String>>(); }
inline ref<java::lang::String> VoicemailContract_Voicemails::HAS_CONTENT_() { return get_static_field<SCAPIX_META_STRING("HAS_CONTENT"), ref<java::lang::String>>(); }
inline ref<java::lang::String> VoicemailContract_Voicemails::IS_OMTP_VOICEMAIL_() { return get_static_field<SCAPIX_META_STRING("IS_OMTP_VOICEMAIL"), ref<java::lang::String>>(); }
inline ref<java::lang::String> VoicemailContract_Voicemails::IS_READ_() { return get_static_field<SCAPIX_META_STRING("IS_READ"), ref<java::lang::String>>(); }
inline ref<java::lang::String> VoicemailContract_Voicemails::ITEM_TYPE_() { return get_static_field<SCAPIX_META_STRING("ITEM_TYPE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> VoicemailContract_Voicemails::LAST_MODIFIED_() { return get_static_field<SCAPIX_META_STRING("LAST_MODIFIED"), ref<java::lang::String>>(); }
inline ref<java::lang::String> VoicemailContract_Voicemails::MIME_TYPE_() { return get_static_field<SCAPIX_META_STRING("MIME_TYPE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> VoicemailContract_Voicemails::NEW_() { return get_static_field<SCAPIX_META_STRING("NEW"), ref<java::lang::String>>(); }
inline ref<java::lang::String> VoicemailContract_Voicemails::NUMBER_() { return get_static_field<SCAPIX_META_STRING("NUMBER"), ref<java::lang::String>>(); }
inline ref<java::lang::String> VoicemailContract_Voicemails::PHONE_ACCOUNT_COMPONENT_NAME_() { return get_static_field<SCAPIX_META_STRING("PHONE_ACCOUNT_COMPONENT_NAME"), ref<java::lang::String>>(); }
inline ref<java::lang::String> VoicemailContract_Voicemails::PHONE_ACCOUNT_ID_() { return get_static_field<SCAPIX_META_STRING("PHONE_ACCOUNT_ID"), ref<java::lang::String>>(); }
inline ref<java::lang::String> VoicemailContract_Voicemails::RESTORED_() { return get_static_field<SCAPIX_META_STRING("RESTORED"), ref<java::lang::String>>(); }
inline ref<java::lang::String> VoicemailContract_Voicemails::SOURCE_DATA_() { return get_static_field<SCAPIX_META_STRING("SOURCE_DATA"), ref<java::lang::String>>(); }
inline ref<java::lang::String> VoicemailContract_Voicemails::SOURCE_PACKAGE_() { return get_static_field<SCAPIX_META_STRING("SOURCE_PACKAGE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> VoicemailContract_Voicemails::TRANSCRIPTION_() { return get_static_field<SCAPIX_META_STRING("TRANSCRIPTION"), ref<java::lang::String>>(); }
inline ref<android::net::Uri> VoicemailContract_Voicemails::buildSourceUri(ref<java::lang::String> packageName) { return call_static_method<SCAPIX_META_STRING("buildSourceUri"), ref<android::net::Uri>>(packageName); }

} // namespace android::provider
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_PROVIDER_VOICEMAILCONTRACT_VOICEMAILS_H
