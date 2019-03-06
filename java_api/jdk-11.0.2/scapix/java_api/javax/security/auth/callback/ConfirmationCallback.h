// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/security/auth/callback/Callback.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVAX_SECURITY_AUTH_CALLBACK_CONFIRMATIONCALLBACK_H
#define SCAPIX_JAVAX_SECURITY_AUTH_CALLBACK_CONFIRMATIONCALLBACK_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace javax::security::auth::callback {

class ConfirmationCallback : public object_base<SCAPIX_META_STRING("javax/security/auth/callback/ConfirmationCallback"),
	java::lang::Object,
	javax::security::auth::callback::Callback,
	java::io::Serializable>
{
public:

	static jint UNSPECIFIED_OPTION_();
	static jint YES_NO_OPTION_();
	static jint YES_NO_CANCEL_OPTION_();
	static jint OK_CANCEL_OPTION_();
	static jint YES_();
	static jint NO_();
	static jint CANCEL_();
	static jint OK_();
	static jint INFORMATION_();
	static jint WARNING_();
	static jint ERROR_();

	static ref<ConfirmationCallback> new_object(jint messageType, jint optionType, jint defaultOption);
	static ref<ConfirmationCallback> new_object(jint messageType, ref<link::java::array<java::lang::String>> options, jint defaultOption);
	static ref<ConfirmationCallback> new_object(ref<java::lang::String> prompt, jint messageType, jint optionType, jint defaultOption);
	static ref<ConfirmationCallback> new_object(ref<java::lang::String> prompt, jint messageType, ref<link::java::array<java::lang::String>> options, jint defaultOption);
	ref<java::lang::String> getPrompt();
	jint getMessageType();
	jint getOptionType();
	ref<link::java::array<java::lang::String>> getOptions();
	jint getDefaultOption();
	void setSelectedIndex(jint selection);
	jint getSelectedIndex();

protected:

	ConfirmationCallback(handle_type h) : base_(h) {}

};

} // namespace javax::security::auth::callback
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace javax::security::auth::callback {

inline jint ConfirmationCallback::UNSPECIFIED_OPTION_() { return get_static_field<SCAPIX_META_STRING("UNSPECIFIED_OPTION"), jint>(); }
inline jint ConfirmationCallback::YES_NO_OPTION_() { return get_static_field<SCAPIX_META_STRING("YES_NO_OPTION"), jint>(); }
inline jint ConfirmationCallback::YES_NO_CANCEL_OPTION_() { return get_static_field<SCAPIX_META_STRING("YES_NO_CANCEL_OPTION"), jint>(); }
inline jint ConfirmationCallback::OK_CANCEL_OPTION_() { return get_static_field<SCAPIX_META_STRING("OK_CANCEL_OPTION"), jint>(); }
inline jint ConfirmationCallback::YES_() { return get_static_field<SCAPIX_META_STRING("YES"), jint>(); }
inline jint ConfirmationCallback::NO_() { return get_static_field<SCAPIX_META_STRING("NO"), jint>(); }
inline jint ConfirmationCallback::CANCEL_() { return get_static_field<SCAPIX_META_STRING("CANCEL"), jint>(); }
inline jint ConfirmationCallback::OK_() { return get_static_field<SCAPIX_META_STRING("OK"), jint>(); }
inline jint ConfirmationCallback::INFORMATION_() { return get_static_field<SCAPIX_META_STRING("INFORMATION"), jint>(); }
inline jint ConfirmationCallback::WARNING_() { return get_static_field<SCAPIX_META_STRING("WARNING"), jint>(); }
inline jint ConfirmationCallback::ERROR_() { return get_static_field<SCAPIX_META_STRING("ERROR"), jint>(); }
inline ref<ConfirmationCallback> ConfirmationCallback::new_object(jint messageType, jint optionType, jint defaultOption) { return base_::new_object(messageType, optionType, defaultOption); }
inline ref<ConfirmationCallback> ConfirmationCallback::new_object(jint messageType, ref<link::java::array<java::lang::String>> options, jint defaultOption) { return base_::new_object(messageType, options, defaultOption); }
inline ref<ConfirmationCallback> ConfirmationCallback::new_object(ref<java::lang::String> prompt, jint messageType, jint optionType, jint defaultOption) { return base_::new_object(prompt, messageType, optionType, defaultOption); }
inline ref<ConfirmationCallback> ConfirmationCallback::new_object(ref<java::lang::String> prompt, jint messageType, ref<link::java::array<java::lang::String>> options, jint defaultOption) { return base_::new_object(prompt, messageType, options, defaultOption); }
inline ref<java::lang::String> ConfirmationCallback::getPrompt() { return call_method<SCAPIX_META_STRING("getPrompt"), ref<java::lang::String>>(); }
inline jint ConfirmationCallback::getMessageType() { return call_method<SCAPIX_META_STRING("getMessageType"), jint>(); }
inline jint ConfirmationCallback::getOptionType() { return call_method<SCAPIX_META_STRING("getOptionType"), jint>(); }
inline ref<link::java::array<java::lang::String>> ConfirmationCallback::getOptions() { return call_method<SCAPIX_META_STRING("getOptions"), ref<link::java::array<java::lang::String>>>(); }
inline jint ConfirmationCallback::getDefaultOption() { return call_method<SCAPIX_META_STRING("getDefaultOption"), jint>(); }
inline void ConfirmationCallback::setSelectedIndex(jint selection) { return call_method<SCAPIX_META_STRING("setSelectedIndex"), void>(selection); }
inline jint ConfirmationCallback::getSelectedIndex() { return call_method<SCAPIX_META_STRING("getSelectedIndex"), jint>(); }

} // namespace javax::security::auth::callback
} // namespace scapix::java_api

#endif // SCAPIX_JAVAX_SECURITY_AUTH_CALLBACK_CONFIRMATIONCALLBACK_H
