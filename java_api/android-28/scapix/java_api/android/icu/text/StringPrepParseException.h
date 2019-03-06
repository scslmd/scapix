// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/text/ParseException.h>

#ifndef SCAPIX_ANDROID_ICU_TEXT_STRINGPREPPARSEEXCEPTION_H
#define SCAPIX_ANDROID_ICU_TEXT_STRINGPREPPARSEEXCEPTION_H

namespace scapix::java_api {

namespace java::lang { class Object; }
namespace java::lang { class String; }

namespace android::icu::text {

class StringPrepParseException : public object_base<SCAPIX_META_STRING("android/icu/text/StringPrepParseException"),
	java::text::ParseException>
{
public:

	static jint ACE_PREFIX_ERROR_();
	static jint BUFFER_OVERFLOW_ERROR_();
	static jint CHECK_BIDI_ERROR_();
	static jint DOMAIN_NAME_TOO_LONG_ERROR_();
	static jint ILLEGAL_CHAR_FOUND_();
	static jint INVALID_CHAR_FOUND_();
	static jint LABEL_TOO_LONG_ERROR_();
	static jint PROHIBITED_ERROR_();
	static jint STD3_ASCII_RULES_ERROR_();
	static jint UNASSIGNED_ERROR_();
	static jint VERIFICATION_ERROR_();
	static jint ZERO_LENGTH_LABEL_();

	static ref<StringPrepParseException> new_object(ref<java::lang::String> message, jint error);
	static ref<StringPrepParseException> new_object(ref<java::lang::String> message, jint error, ref<java::lang::String> rules, jint pos);
	static ref<StringPrepParseException> new_object(ref<java::lang::String> message, jint error, ref<java::lang::String> rules, jint pos, jint lineNumber);
	jboolean equals(ref<java::lang::Object> other);
	jint hashCode();
	ref<java::lang::String> toString();
	jint getError();

protected:

	StringPrepParseException(handle_type h) : base_(h) {}

};

} // namespace android::icu::text
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::icu::text {

inline jint StringPrepParseException::ACE_PREFIX_ERROR_() { return get_static_field<SCAPIX_META_STRING("ACE_PREFIX_ERROR"), jint>(); }
inline jint StringPrepParseException::BUFFER_OVERFLOW_ERROR_() { return get_static_field<SCAPIX_META_STRING("BUFFER_OVERFLOW_ERROR"), jint>(); }
inline jint StringPrepParseException::CHECK_BIDI_ERROR_() { return get_static_field<SCAPIX_META_STRING("CHECK_BIDI_ERROR"), jint>(); }
inline jint StringPrepParseException::DOMAIN_NAME_TOO_LONG_ERROR_() { return get_static_field<SCAPIX_META_STRING("DOMAIN_NAME_TOO_LONG_ERROR"), jint>(); }
inline jint StringPrepParseException::ILLEGAL_CHAR_FOUND_() { return get_static_field<SCAPIX_META_STRING("ILLEGAL_CHAR_FOUND"), jint>(); }
inline jint StringPrepParseException::INVALID_CHAR_FOUND_() { return get_static_field<SCAPIX_META_STRING("INVALID_CHAR_FOUND"), jint>(); }
inline jint StringPrepParseException::LABEL_TOO_LONG_ERROR_() { return get_static_field<SCAPIX_META_STRING("LABEL_TOO_LONG_ERROR"), jint>(); }
inline jint StringPrepParseException::PROHIBITED_ERROR_() { return get_static_field<SCAPIX_META_STRING("PROHIBITED_ERROR"), jint>(); }
inline jint StringPrepParseException::STD3_ASCII_RULES_ERROR_() { return get_static_field<SCAPIX_META_STRING("STD3_ASCII_RULES_ERROR"), jint>(); }
inline jint StringPrepParseException::UNASSIGNED_ERROR_() { return get_static_field<SCAPIX_META_STRING("UNASSIGNED_ERROR"), jint>(); }
inline jint StringPrepParseException::VERIFICATION_ERROR_() { return get_static_field<SCAPIX_META_STRING("VERIFICATION_ERROR"), jint>(); }
inline jint StringPrepParseException::ZERO_LENGTH_LABEL_() { return get_static_field<SCAPIX_META_STRING("ZERO_LENGTH_LABEL"), jint>(); }
inline ref<StringPrepParseException> StringPrepParseException::new_object(ref<java::lang::String> message, jint error) { return base_::new_object(message, error); }
inline ref<StringPrepParseException> StringPrepParseException::new_object(ref<java::lang::String> message, jint error, ref<java::lang::String> rules, jint pos) { return base_::new_object(message, error, rules, pos); }
inline ref<StringPrepParseException> StringPrepParseException::new_object(ref<java::lang::String> message, jint error, ref<java::lang::String> rules, jint pos, jint lineNumber) { return base_::new_object(message, error, rules, pos, lineNumber); }
inline jboolean StringPrepParseException::equals(ref<java::lang::Object> other) { return call_method<SCAPIX_META_STRING("equals"), jboolean>(other); }
inline jint StringPrepParseException::hashCode() { return call_method<SCAPIX_META_STRING("hashCode"), jint>(); }
inline ref<java::lang::String> StringPrepParseException::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }
inline jint StringPrepParseException::getError() { return call_method<SCAPIX_META_STRING("getError"), jint>(); }

} // namespace android::icu::text
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_ICU_TEXT_STRINGPREPPARSEEXCEPTION_H
