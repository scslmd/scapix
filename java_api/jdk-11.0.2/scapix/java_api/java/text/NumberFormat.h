// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/text/Format.h>

#ifndef SCAPIX_JAVA_TEXT_NUMBERFORMAT_H
#define SCAPIX_JAVA_TEXT_NUMBERFORMAT_H

namespace scapix::java_api {

namespace java::lang { class Number; }
namespace java::lang { class Object; }
namespace java::lang { class String; }
namespace java::lang { class StringBuffer; }
namespace java::math { class RoundingMode; }
namespace java::text { class FieldPosition; }
namespace java::text { class ParsePosition; }
namespace java::util { class Currency; }
namespace java::util { class Locale; }
namespace java::text { class NumberFormat_Field; }

namespace java::text {

class NumberFormat : public object_base<SCAPIX_META_STRING("java/text/NumberFormat"),
	java::text::Format>
{
public:

	using Field = NumberFormat_Field;

	static jint INTEGER_FIELD_();
	static jint FRACTION_FIELD_();

	ref<java::lang::StringBuffer> format(ref<java::lang::Object> number, ref<java::lang::StringBuffer> toAppendTo, ref<java::text::FieldPosition> pos);
	ref<java::lang::Object> parseObject(ref<java::lang::String> source, ref<java::text::ParsePosition> pos);
	ref<java::lang::String> format(jdouble number);
	ref<java::lang::String> format(jlong number);
	ref<java::lang::StringBuffer> format(jdouble p1, ref<java::lang::StringBuffer> p2, ref<java::text::FieldPosition> p3);
	ref<java::lang::StringBuffer> format(jlong p1, ref<java::lang::StringBuffer> p2, ref<java::text::FieldPosition> p3);
	ref<java::lang::Number> parse(ref<java::lang::String> p1, ref<java::text::ParsePosition> p2);
	ref<java::lang::Number> parse(ref<java::lang::String> source);
	jboolean isParseIntegerOnly();
	void setParseIntegerOnly(jboolean value);
	static ref<java::text::NumberFormat> getInstance();
	static ref<java::text::NumberFormat> getInstance(ref<java::util::Locale> inLocale);
	static ref<java::text::NumberFormat> getNumberInstance();
	static ref<java::text::NumberFormat> getNumberInstance(ref<java::util::Locale> inLocale);
	static ref<java::text::NumberFormat> getIntegerInstance();
	static ref<java::text::NumberFormat> getIntegerInstance(ref<java::util::Locale> inLocale);
	static ref<java::text::NumberFormat> getCurrencyInstance();
	static ref<java::text::NumberFormat> getCurrencyInstance(ref<java::util::Locale> inLocale);
	static ref<java::text::NumberFormat> getPercentInstance();
	static ref<java::text::NumberFormat> getPercentInstance(ref<java::util::Locale> inLocale);
	static ref<link::java::array<java::util::Locale>> getAvailableLocales();
	jint hashCode();
	jboolean equals(ref<java::lang::Object> obj);
	ref<java::lang::Object> clone();
	jboolean isGroupingUsed();
	void setGroupingUsed(jboolean newValue);
	jint getMaximumIntegerDigits();
	void setMaximumIntegerDigits(jint newValue);
	jint getMinimumIntegerDigits();
	void setMinimumIntegerDigits(jint newValue);
	jint getMaximumFractionDigits();
	void setMaximumFractionDigits(jint newValue);
	jint getMinimumFractionDigits();
	void setMinimumFractionDigits(jint newValue);
	ref<java::util::Currency> getCurrency();
	void setCurrency(ref<java::util::Currency> currency);
	ref<java::math::RoundingMode> getRoundingMode();
	void setRoundingMode(ref<java::math::RoundingMode> roundingMode);

protected:

	NumberFormat(handle_type h) : base_(h) {}

};

} // namespace java::text
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/Number.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/StringBuffer.h>
#include <scapix/java_api/java/math/RoundingMode.h>
#include <scapix/java_api/java/text/FieldPosition.h>
#include <scapix/java_api/java/text/ParsePosition.h>
#include <scapix/java_api/java/util/Currency.h>
#include <scapix/java_api/java/util/Locale.h>

namespace scapix::java_api {
namespace java::text {

inline jint NumberFormat::INTEGER_FIELD_() { return get_static_field<SCAPIX_META_STRING("INTEGER_FIELD"), jint>(); }
inline jint NumberFormat::FRACTION_FIELD_() { return get_static_field<SCAPIX_META_STRING("FRACTION_FIELD"), jint>(); }
inline ref<java::lang::StringBuffer> NumberFormat::format(ref<java::lang::Object> number, ref<java::lang::StringBuffer> toAppendTo, ref<java::text::FieldPosition> pos) { return call_method<SCAPIX_META_STRING("format"), ref<java::lang::StringBuffer>>(number, toAppendTo, pos); }
inline ref<java::lang::Object> NumberFormat::parseObject(ref<java::lang::String> source, ref<java::text::ParsePosition> pos) { return call_method<SCAPIX_META_STRING("parseObject"), ref<java::lang::Object>>(source, pos); }
inline ref<java::lang::String> NumberFormat::format(jdouble number) { return call_method<SCAPIX_META_STRING("format"), ref<java::lang::String>>(number); }
inline ref<java::lang::String> NumberFormat::format(jlong number) { return call_method<SCAPIX_META_STRING("format"), ref<java::lang::String>>(number); }
inline ref<java::lang::StringBuffer> NumberFormat::format(jdouble p1, ref<java::lang::StringBuffer> p2, ref<java::text::FieldPosition> p3) { return call_method<SCAPIX_META_STRING("format"), ref<java::lang::StringBuffer>>(p1, p2, p3); }
inline ref<java::lang::StringBuffer> NumberFormat::format(jlong p1, ref<java::lang::StringBuffer> p2, ref<java::text::FieldPosition> p3) { return call_method<SCAPIX_META_STRING("format"), ref<java::lang::StringBuffer>>(p1, p2, p3); }
inline ref<java::lang::Number> NumberFormat::parse(ref<java::lang::String> p1, ref<java::text::ParsePosition> p2) { return call_method<SCAPIX_META_STRING("parse"), ref<java::lang::Number>>(p1, p2); }
inline ref<java::lang::Number> NumberFormat::parse(ref<java::lang::String> source) { return call_method<SCAPIX_META_STRING("parse"), ref<java::lang::Number>>(source); }
inline jboolean NumberFormat::isParseIntegerOnly() { return call_method<SCAPIX_META_STRING("isParseIntegerOnly"), jboolean>(); }
inline void NumberFormat::setParseIntegerOnly(jboolean value) { return call_method<SCAPIX_META_STRING("setParseIntegerOnly"), void>(value); }
inline ref<java::text::NumberFormat> NumberFormat::getInstance() { return call_static_method<SCAPIX_META_STRING("getInstance"), ref<java::text::NumberFormat>>(); }
inline ref<java::text::NumberFormat> NumberFormat::getInstance(ref<java::util::Locale> inLocale) { return call_static_method<SCAPIX_META_STRING("getInstance"), ref<java::text::NumberFormat>>(inLocale); }
inline ref<java::text::NumberFormat> NumberFormat::getNumberInstance() { return call_static_method<SCAPIX_META_STRING("getNumberInstance"), ref<java::text::NumberFormat>>(); }
inline ref<java::text::NumberFormat> NumberFormat::getNumberInstance(ref<java::util::Locale> inLocale) { return call_static_method<SCAPIX_META_STRING("getNumberInstance"), ref<java::text::NumberFormat>>(inLocale); }
inline ref<java::text::NumberFormat> NumberFormat::getIntegerInstance() { return call_static_method<SCAPIX_META_STRING("getIntegerInstance"), ref<java::text::NumberFormat>>(); }
inline ref<java::text::NumberFormat> NumberFormat::getIntegerInstance(ref<java::util::Locale> inLocale) { return call_static_method<SCAPIX_META_STRING("getIntegerInstance"), ref<java::text::NumberFormat>>(inLocale); }
inline ref<java::text::NumberFormat> NumberFormat::getCurrencyInstance() { return call_static_method<SCAPIX_META_STRING("getCurrencyInstance"), ref<java::text::NumberFormat>>(); }
inline ref<java::text::NumberFormat> NumberFormat::getCurrencyInstance(ref<java::util::Locale> inLocale) { return call_static_method<SCAPIX_META_STRING("getCurrencyInstance"), ref<java::text::NumberFormat>>(inLocale); }
inline ref<java::text::NumberFormat> NumberFormat::getPercentInstance() { return call_static_method<SCAPIX_META_STRING("getPercentInstance"), ref<java::text::NumberFormat>>(); }
inline ref<java::text::NumberFormat> NumberFormat::getPercentInstance(ref<java::util::Locale> inLocale) { return call_static_method<SCAPIX_META_STRING("getPercentInstance"), ref<java::text::NumberFormat>>(inLocale); }
inline ref<link::java::array<java::util::Locale>> NumberFormat::getAvailableLocales() { return call_static_method<SCAPIX_META_STRING("getAvailableLocales"), ref<link::java::array<java::util::Locale>>>(); }
inline jint NumberFormat::hashCode() { return call_method<SCAPIX_META_STRING("hashCode"), jint>(); }
inline jboolean NumberFormat::equals(ref<java::lang::Object> obj) { return call_method<SCAPIX_META_STRING("equals"), jboolean>(obj); }
inline ref<java::lang::Object> NumberFormat::clone() { return call_method<SCAPIX_META_STRING("clone"), ref<java::lang::Object>>(); }
inline jboolean NumberFormat::isGroupingUsed() { return call_method<SCAPIX_META_STRING("isGroupingUsed"), jboolean>(); }
inline void NumberFormat::setGroupingUsed(jboolean newValue) { return call_method<SCAPIX_META_STRING("setGroupingUsed"), void>(newValue); }
inline jint NumberFormat::getMaximumIntegerDigits() { return call_method<SCAPIX_META_STRING("getMaximumIntegerDigits"), jint>(); }
inline void NumberFormat::setMaximumIntegerDigits(jint newValue) { return call_method<SCAPIX_META_STRING("setMaximumIntegerDigits"), void>(newValue); }
inline jint NumberFormat::getMinimumIntegerDigits() { return call_method<SCAPIX_META_STRING("getMinimumIntegerDigits"), jint>(); }
inline void NumberFormat::setMinimumIntegerDigits(jint newValue) { return call_method<SCAPIX_META_STRING("setMinimumIntegerDigits"), void>(newValue); }
inline jint NumberFormat::getMaximumFractionDigits() { return call_method<SCAPIX_META_STRING("getMaximumFractionDigits"), jint>(); }
inline void NumberFormat::setMaximumFractionDigits(jint newValue) { return call_method<SCAPIX_META_STRING("setMaximumFractionDigits"), void>(newValue); }
inline jint NumberFormat::getMinimumFractionDigits() { return call_method<SCAPIX_META_STRING("getMinimumFractionDigits"), jint>(); }
inline void NumberFormat::setMinimumFractionDigits(jint newValue) { return call_method<SCAPIX_META_STRING("setMinimumFractionDigits"), void>(newValue); }
inline ref<java::util::Currency> NumberFormat::getCurrency() { return call_method<SCAPIX_META_STRING("getCurrency"), ref<java::util::Currency>>(); }
inline void NumberFormat::setCurrency(ref<java::util::Currency> currency) { return call_method<SCAPIX_META_STRING("setCurrency"), void>(currency); }
inline ref<java::math::RoundingMode> NumberFormat::getRoundingMode() { return call_method<SCAPIX_META_STRING("getRoundingMode"), ref<java::math::RoundingMode>>(); }
inline void NumberFormat::setRoundingMode(ref<java::math::RoundingMode> roundingMode) { return call_method<SCAPIX_META_STRING("setRoundingMode"), void>(roundingMode); }

} // namespace java::text
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_TEXT_NUMBERFORMAT_H
