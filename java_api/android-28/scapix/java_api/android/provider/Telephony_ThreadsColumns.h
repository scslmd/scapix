// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/provider/BaseColumns.h>

#ifndef SCAPIX_ANDROID_PROVIDER_TELEPHONY_THREADSCOLUMNS_H
#define SCAPIX_ANDROID_PROVIDER_TELEPHONY_THREADSCOLUMNS_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace android::provider {

class Telephony_ThreadsColumns : public object_base<SCAPIX_META_STRING("android/provider/Telephony$ThreadsColumns"),
	java::lang::Object,
	android::provider::BaseColumns>
{
public:

	static ref<java::lang::String> ARCHIVED_();
	static ref<java::lang::String> DATE_();
	static ref<java::lang::String> ERROR_();
	static ref<java::lang::String> HAS_ATTACHMENT_();
	static ref<java::lang::String> MESSAGE_COUNT_();
	static ref<java::lang::String> READ_();
	static ref<java::lang::String> RECIPIENT_IDS_();
	static ref<java::lang::String> SNIPPET_();
	static ref<java::lang::String> SNIPPET_CHARSET_();
	static ref<java::lang::String> TYPE_();


protected:

	Telephony_ThreadsColumns(handle_type h) : base_(h) {}

};

} // namespace android::provider
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::provider {

inline ref<java::lang::String> Telephony_ThreadsColumns::ARCHIVED_() { return get_static_field<SCAPIX_META_STRING("ARCHIVED"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Telephony_ThreadsColumns::DATE_() { return get_static_field<SCAPIX_META_STRING("DATE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Telephony_ThreadsColumns::ERROR_() { return get_static_field<SCAPIX_META_STRING("ERROR"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Telephony_ThreadsColumns::HAS_ATTACHMENT_() { return get_static_field<SCAPIX_META_STRING("HAS_ATTACHMENT"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Telephony_ThreadsColumns::MESSAGE_COUNT_() { return get_static_field<SCAPIX_META_STRING("MESSAGE_COUNT"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Telephony_ThreadsColumns::READ_() { return get_static_field<SCAPIX_META_STRING("READ"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Telephony_ThreadsColumns::RECIPIENT_IDS_() { return get_static_field<SCAPIX_META_STRING("RECIPIENT_IDS"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Telephony_ThreadsColumns::SNIPPET_() { return get_static_field<SCAPIX_META_STRING("SNIPPET"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Telephony_ThreadsColumns::SNIPPET_CHARSET_() { return get_static_field<SCAPIX_META_STRING("SNIPPET_CHARSET"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Telephony_ThreadsColumns::TYPE_() { return get_static_field<SCAPIX_META_STRING("TYPE"), ref<java::lang::String>>(); }

} // namespace android::provider
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_PROVIDER_TELEPHONY_THREADSCOLUMNS_H
