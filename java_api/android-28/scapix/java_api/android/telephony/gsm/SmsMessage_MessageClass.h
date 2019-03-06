// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_ANDROID_TELEPHONY_GSM_SMSMESSAGE_MESSAGECLASS_H
#define SCAPIX_ANDROID_TELEPHONY_GSM_SMSMESSAGE_MESSAGECLASS_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace android::telephony::gsm {

class SmsMessage_MessageClass : public object_base<SCAPIX_META_STRING("android/telephony/gsm/SmsMessage$MessageClass"),
	java::lang::Enum>
{
public:

	static ref<android::telephony::gsm::SmsMessage_MessageClass> UNKNOWN_();
	static ref<android::telephony::gsm::SmsMessage_MessageClass> CLASS_0_();
	static ref<android::telephony::gsm::SmsMessage_MessageClass> CLASS_1_();
	static ref<android::telephony::gsm::SmsMessage_MessageClass> CLASS_2_();
	static ref<android::telephony::gsm::SmsMessage_MessageClass> CLASS_3_();

	static ref<link::java::array<android::telephony::gsm::SmsMessage_MessageClass>> values();
	static ref<android::telephony::gsm::SmsMessage_MessageClass> valueOf(ref<java::lang::String> name);

protected:

	SmsMessage_MessageClass(handle_type h) : base_(h) {}

};

} // namespace android::telephony::gsm
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::telephony::gsm {

inline ref<android::telephony::gsm::SmsMessage_MessageClass> SmsMessage_MessageClass::UNKNOWN_() { return get_static_field<SCAPIX_META_STRING("UNKNOWN"), ref<android::telephony::gsm::SmsMessage_MessageClass>>(); }
inline ref<android::telephony::gsm::SmsMessage_MessageClass> SmsMessage_MessageClass::CLASS_0_() { return get_static_field<SCAPIX_META_STRING("CLASS_0"), ref<android::telephony::gsm::SmsMessage_MessageClass>>(); }
inline ref<android::telephony::gsm::SmsMessage_MessageClass> SmsMessage_MessageClass::CLASS_1_() { return get_static_field<SCAPIX_META_STRING("CLASS_1"), ref<android::telephony::gsm::SmsMessage_MessageClass>>(); }
inline ref<android::telephony::gsm::SmsMessage_MessageClass> SmsMessage_MessageClass::CLASS_2_() { return get_static_field<SCAPIX_META_STRING("CLASS_2"), ref<android::telephony::gsm::SmsMessage_MessageClass>>(); }
inline ref<android::telephony::gsm::SmsMessage_MessageClass> SmsMessage_MessageClass::CLASS_3_() { return get_static_field<SCAPIX_META_STRING("CLASS_3"), ref<android::telephony::gsm::SmsMessage_MessageClass>>(); }
inline ref<link::java::array<android::telephony::gsm::SmsMessage_MessageClass>> SmsMessage_MessageClass::values() { return call_static_method<SCAPIX_META_STRING("values"), ref<link::java::array<android::telephony::gsm::SmsMessage_MessageClass>>>(); }
inline ref<android::telephony::gsm::SmsMessage_MessageClass> SmsMessage_MessageClass::valueOf(ref<java::lang::String> name) { return call_static_method<SCAPIX_META_STRING("valueOf"), ref<android::telephony::gsm::SmsMessage_MessageClass>>(name); }

} // namespace android::telephony::gsm
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_TELEPHONY_GSM_SMSMESSAGE_MESSAGECLASS_H
