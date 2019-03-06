// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/text/Format_Field.h>

#ifndef SCAPIX_JAVA_TEXT_NUMBERFORMAT_FIELD_H
#define SCAPIX_JAVA_TEXT_NUMBERFORMAT_FIELD_H

namespace scapix::java_api {


namespace java::text {

class NumberFormat_Field : public object_base<SCAPIX_META_STRING("java/text/NumberFormat$Field"),
	java::text::Format_Field>
{
public:

	static ref<java::text::NumberFormat_Field> CURRENCY_();
	static ref<java::text::NumberFormat_Field> DECIMAL_SEPARATOR_();
	static ref<java::text::NumberFormat_Field> EXPONENT_();
	static ref<java::text::NumberFormat_Field> EXPONENT_SIGN_();
	static ref<java::text::NumberFormat_Field> EXPONENT_SYMBOL_();
	static ref<java::text::NumberFormat_Field> FRACTION_();
	static ref<java::text::NumberFormat_Field> GROUPING_SEPARATOR_();
	static ref<java::text::NumberFormat_Field> INTEGER_();
	static ref<java::text::NumberFormat_Field> PERCENT_();
	static ref<java::text::NumberFormat_Field> PERMILLE_();
	static ref<java::text::NumberFormat_Field> SIGN_();


protected:

	NumberFormat_Field(handle_type h) : base_(h) {}

};

} // namespace java::text
} // namespace scapix::java_api


namespace scapix::java_api {
namespace java::text {

inline ref<java::text::NumberFormat_Field> NumberFormat_Field::CURRENCY_() { return get_static_field<SCAPIX_META_STRING("CURRENCY"), ref<java::text::NumberFormat_Field>>(); }
inline ref<java::text::NumberFormat_Field> NumberFormat_Field::DECIMAL_SEPARATOR_() { return get_static_field<SCAPIX_META_STRING("DECIMAL_SEPARATOR"), ref<java::text::NumberFormat_Field>>(); }
inline ref<java::text::NumberFormat_Field> NumberFormat_Field::EXPONENT_() { return get_static_field<SCAPIX_META_STRING("EXPONENT"), ref<java::text::NumberFormat_Field>>(); }
inline ref<java::text::NumberFormat_Field> NumberFormat_Field::EXPONENT_SIGN_() { return get_static_field<SCAPIX_META_STRING("EXPONENT_SIGN"), ref<java::text::NumberFormat_Field>>(); }
inline ref<java::text::NumberFormat_Field> NumberFormat_Field::EXPONENT_SYMBOL_() { return get_static_field<SCAPIX_META_STRING("EXPONENT_SYMBOL"), ref<java::text::NumberFormat_Field>>(); }
inline ref<java::text::NumberFormat_Field> NumberFormat_Field::FRACTION_() { return get_static_field<SCAPIX_META_STRING("FRACTION"), ref<java::text::NumberFormat_Field>>(); }
inline ref<java::text::NumberFormat_Field> NumberFormat_Field::GROUPING_SEPARATOR_() { return get_static_field<SCAPIX_META_STRING("GROUPING_SEPARATOR"), ref<java::text::NumberFormat_Field>>(); }
inline ref<java::text::NumberFormat_Field> NumberFormat_Field::INTEGER_() { return get_static_field<SCAPIX_META_STRING("INTEGER"), ref<java::text::NumberFormat_Field>>(); }
inline ref<java::text::NumberFormat_Field> NumberFormat_Field::PERCENT_() { return get_static_field<SCAPIX_META_STRING("PERCENT"), ref<java::text::NumberFormat_Field>>(); }
inline ref<java::text::NumberFormat_Field> NumberFormat_Field::PERMILLE_() { return get_static_field<SCAPIX_META_STRING("PERMILLE"), ref<java::text::NumberFormat_Field>>(); }
inline ref<java::text::NumberFormat_Field> NumberFormat_Field::SIGN_() { return get_static_field<SCAPIX_META_STRING("SIGN"), ref<java::text::NumberFormat_Field>>(); }

} // namespace java::text
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_TEXT_NUMBERFORMAT_FIELD_H
