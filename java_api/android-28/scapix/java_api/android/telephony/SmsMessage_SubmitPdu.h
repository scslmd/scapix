// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_TELEPHONY_SMSMESSAGE_SUBMITPDU_H
#define SCAPIX_ANDROID_TELEPHONY_SMSMESSAGE_SUBMITPDU_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace android::telephony {

class SmsMessage_SubmitPdu : public object_base<SCAPIX_META_STRING("android/telephony/SmsMessage$SubmitPdu"),
	java::lang::Object>
{
public:

	ref<link::java::array<jbyte>> encodedMessage();
	void encodedMessage(ref<link::java::array<jbyte>>);
	ref<link::java::array<jbyte>> encodedScAddress();
	void encodedScAddress(ref<link::java::array<jbyte>>);

	ref<java::lang::String> toString();

protected:

	SmsMessage_SubmitPdu(handle_type h) : base_(h) {}

};

} // namespace android::telephony
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::telephony {

inline ref<link::java::array<jbyte>> SmsMessage_SubmitPdu::encodedMessage() { return get_field<SCAPIX_META_STRING("encodedMessage"), ref<link::java::array<jbyte>>>(); }
inline void SmsMessage_SubmitPdu::encodedMessage(ref<link::java::array<jbyte>> v) { set_field<SCAPIX_META_STRING("encodedMessage"), ref<link::java::array<jbyte>>>(v); }
inline ref<link::java::array<jbyte>> SmsMessage_SubmitPdu::encodedScAddress() { return get_field<SCAPIX_META_STRING("encodedScAddress"), ref<link::java::array<jbyte>>>(); }
inline void SmsMessage_SubmitPdu::encodedScAddress(ref<link::java::array<jbyte>> v) { set_field<SCAPIX_META_STRING("encodedScAddress"), ref<link::java::array<jbyte>>>(v); }
inline ref<java::lang::String> SmsMessage_SubmitPdu::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }

} // namespace android::telephony
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_TELEPHONY_SMSMESSAGE_SUBMITPDU_H
