// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/android/icu/text/UFormat.h>

#ifndef SCAPIX_ANDROID_ICU_TEXT_NUMBERFORMAT_H
#define SCAPIX_ANDROID_ICU_TEXT_NUMBERFORMAT_H

namespace scapix::java_api {

namespace android::icu::math { class BigDecimal; }
namespace android::icu::text { class DisplayContext; }
namespace android::icu::text { class DisplayContext_Type; }
namespace android::icu::util { class Currency; }
namespace android::icu::util { class CurrencyAmount; }
namespace android::icu::util { class ULocale; }
namespace java::lang { class CharSequence; }
namespace java::lang { class Number; }
namespace java::lang { class Object; }
namespace java::lang { class String; }
namespace java::lang { class StringBuffer; }
namespace java::math { class BigDecimal; }
namespace java::math { class BigInteger; }
namespace java::text { class FieldPosition; }
namespace java::text { class ParsePosition; }
namespace java::util { class Locale; }
namespace android::icu::text { class NumberFormat_Field; }

namespace android::icu::text {

class NumberFormat : public object_base<SCAPIX_META_STRING("android/icu/text/NumberFormat"),
	android::icu::text::UFormat>
{
public:

	using Field = NumberFormat_Field;

	static jint ACCOUNTINGCURRENCYSTYLE_();
	static jint CASHCURRENCYSTYLE_();
	static jint CURRENCYSTYLE_();
	static jint FRACTION_FIELD_();
	static jint INTEGERSTYLE_();
	static jint INTEGER_FIELD_();
	static jint ISOCURRENCYSTYLE_();
	static jint NUMBERSTYLE_();
	static jint PERCENTSTYLE_();
	static jint PLURALCURRENCYSTYLE_();
	static jint SCIENTIFICSTYLE_();
	static jint STANDARDCURRENCYSTYLE_();

	static ref<NumberFormat> new_object();
	ref<java::lang::StringBuffer> format(ref<java::lang::Object> number, ref<java::lang::StringBuffer> toAppendTo, ref<java::text::FieldPosition> pos);
	ref<java::lang::Object> parseObject(ref<java::lang::String> source, ref<java::text::ParsePosition> parsePosition);
	ref<java::lang::String> format(jdouble number);
	ref<java::lang::String> format(jlong number);
	ref<java::lang::String> format(ref<java::math::BigInteger> number);
	ref<java::lang::String> format(ref<java::math::BigDecimal> number);
	ref<java::lang::String> format(ref<android::icu::math::BigDecimal> number);
	ref<java::lang::String> format(ref<android::icu::util::CurrencyAmount> currAmt);
	ref<java::lang::StringBuffer> format(jdouble p1, ref<java::lang::StringBuffer> p2, ref<java::text::FieldPosition> p3);
	ref<java::lang::StringBuffer> format(jlong p1, ref<java::lang::StringBuffer> p2, ref<java::text::FieldPosition> p3);
	ref<java::lang::StringBuffer> format(ref<java::math::BigInteger> p1, ref<java::lang::StringBuffer> p2, ref<java::text::FieldPosition> p3);
	ref<java::lang::StringBuffer> format(ref<java::math::BigDecimal> p1, ref<java::lang::StringBuffer> p2, ref<java::text::FieldPosition> p3);
	ref<java::lang::StringBuffer> format(ref<android::icu::math::BigDecimal> p1, ref<java::lang::StringBuffer> p2, ref<java::text::FieldPosition> p3);
	ref<java::lang::StringBuffer> format(ref<android::icu::util::CurrencyAmount> currAmt, ref<java::lang::StringBuffer> toAppendTo, ref<java::text::FieldPosition> pos);
	ref<java::lang::Number> parse(ref<java::lang::String> p1, ref<java::text::ParsePosition> p2);
	ref<java::lang::Number> parse(ref<java::lang::String> text);
	ref<android::icu::util::CurrencyAmount> parseCurrency(ref<java::lang::CharSequence> text, ref<java::text::ParsePosition> pos);
	jboolean isParseIntegerOnly();
	void setParseIntegerOnly(jboolean value);
	void setParseStrict(jboolean value);
	jboolean isParseStrict();
	void setContext(ref<android::icu::text::DisplayContext> context);
	ref<android::icu::text::DisplayContext> getContext(ref<android::icu::text::DisplayContext_Type> type);
	static ref<android::icu::text::NumberFormat> getInstance();
	static ref<android::icu::text::NumberFormat> getInstance(ref<java::util::Locale> inLocale);
	static ref<android::icu::text::NumberFormat> getInstance(ref<android::icu::util::ULocale> inLocale);
	static ref<android::icu::text::NumberFormat> getInstance(jint style);
	static ref<android::icu::text::NumberFormat> getInstance(ref<java::util::Locale> inLocale, jint style);
	static ref<android::icu::text::NumberFormat> getNumberInstance();
	static ref<android::icu::text::NumberFormat> getNumberInstance(ref<java::util::Locale> inLocale);
	static ref<android::icu::text::NumberFormat> getNumberInstance(ref<android::icu::util::ULocale> inLocale);
	static ref<android::icu::text::NumberFormat> getIntegerInstance();
	static ref<android::icu::text::NumberFormat> getIntegerInstance(ref<java::util::Locale> inLocale);
	static ref<android::icu::text::NumberFormat> getIntegerInstance(ref<android::icu::util::ULocale> inLocale);
	static ref<android::icu::text::NumberFormat> getCurrencyInstance();
	static ref<android::icu::text::NumberFormat> getCurrencyInstance(ref<java::util::Locale> inLocale);
	static ref<android::icu::text::NumberFormat> getCurrencyInstance(ref<android::icu::util::ULocale> inLocale);
	static ref<android::icu::text::NumberFormat> getPercentInstance();
	static ref<android::icu::text::NumberFormat> getPercentInstance(ref<java::util::Locale> inLocale);
	static ref<android::icu::text::NumberFormat> getPercentInstance(ref<android::icu::util::ULocale> inLocale);
	static ref<android::icu::text::NumberFormat> getScientificInstance();
	static ref<android::icu::text::NumberFormat> getScientificInstance(ref<java::util::Locale> inLocale);
	static ref<android::icu::text::NumberFormat> getScientificInstance(ref<android::icu::util::ULocale> inLocale);
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
	void setCurrency(ref<android::icu::util::Currency> theCurrency);
	ref<android::icu::util::Currency> getCurrency();
	jint getRoundingMode();
	void setRoundingMode(jint roundingMode);
	static ref<android::icu::text::NumberFormat> getInstance(ref<android::icu::util::ULocale> desiredLocale, jint choice);

protected:

	NumberFormat(handle_type h) : base_(h) {}

};

} // namespace android::icu::text
} // namespace scapix::java_api

#include <scapix/java_api/android/icu/math/BigDecimal.h>
#include <scapix/java_api/android/icu/text/DisplayContext.h>
#include <scapix/java_api/android/icu/text/DisplayContext_Type.h>
#include <scapix/java_api/android/icu/util/Currency.h>
#include <scapix/java_api/android/icu/util/CurrencyAmount.h>
#include <scapix/java_api/android/icu/util/ULocale.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/Number.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/StringBuffer.h>
#include <scapix/java_api/java/math/BigDecimal.h>
#include <scapix/java_api/java/math/BigInteger.h>
#include <scapix/java_api/java/text/FieldPosition.h>
#include <scapix/java_api/java/text/ParsePosition.h>
#include <scapix/java_api/java/util/Locale.h>

namespace scapix::java_api {
namespace android::icu::text {

inline jint NumberFormat::ACCOUNTINGCURRENCYSTYLE_() { return get_static_field<SCAPIX_META_STRING("ACCOUNTINGCURRENCYSTYLE"), jint>(); }
inline jint NumberFormat::CASHCURRENCYSTYLE_() { return get_static_field<SCAPIX_META_STRING("CASHCURRENCYSTYLE"), jint>(); }
inline jint NumberFormat::CURRENCYSTYLE_() { return get_static_field<SCAPIX_META_STRING("CURRENCYSTYLE"), jint>(); }
inline jint NumberFormat::FRACTION_FIELD_() { return get_static_field<SCAPIX_META_STRING("FRACTION_FIELD"), jint>(); }
inline jint NumberFormat::INTEGERSTYLE_() { return get_static_field<SCAPIX_META_STRING("INTEGERSTYLE"), jint>(); }
inline jint NumberFormat::INTEGER_FIELD_() { return get_static_field<SCAPIX_META_STRING("INTEGER_FIELD"), jint>(); }
inline jint NumberFormat::ISOCURRENCYSTYLE_() { return get_static_field<SCAPIX_META_STRING("ISOCURRENCYSTYLE"), jint>(); }
inline jint NumberFormat::NUMBERSTYLE_() { return get_static_field<SCAPIX_META_STRING("NUMBERSTYLE"), jint>(); }
inline jint NumberFormat::PERCENTSTYLE_() { return get_static_field<SCAPIX_META_STRING("PERCENTSTYLE"), jint>(); }
inline jint NumberFormat::PLURALCURRENCYSTYLE_() { return get_static_field<SCAPIX_META_STRING("PLURALCURRENCYSTYLE"), jint>(); }
inline jint NumberFormat::SCIENTIFICSTYLE_() { return get_static_field<SCAPIX_META_STRING("SCIENTIFICSTYLE"), jint>(); }
inline jint NumberFormat::STANDARDCURRENCYSTYLE_() { return get_static_field<SCAPIX_META_STRING("STANDARDCURRENCYSTYLE"), jint>(); }
inline ref<NumberFormat> NumberFormat::new_object() { return base_::new_object(); }
inline ref<java::lang::StringBuffer> NumberFormat::format(ref<java::lang::Object> number, ref<java::lang::StringBuffer> toAppendTo, ref<java::text::FieldPosition> pos) { return call_method<SCAPIX_META_STRING("format"), ref<java::lang::StringBuffer>>(number, toAppendTo, pos); }
inline ref<java::lang::Object> NumberFormat::parseObject(ref<java::lang::String> source, ref<java::text::ParsePosition> parsePosition) { return call_method<SCAPIX_META_STRING("parseObject"), ref<java::lang::Object>>(source, parsePosition); }
inline ref<java::lang::String> NumberFormat::format(jdouble number) { return call_method<SCAPIX_META_STRING("format"), ref<java::lang::String>>(number); }
inline ref<java::lang::String> NumberFormat::format(jlong number) { return call_method<SCAPIX_META_STRING("format"), ref<java::lang::String>>(number); }
inline ref<java::lang::String> NumberFormat::format(ref<java::math::BigInteger> number) { return call_method<SCAPIX_META_STRING("format"), ref<java::lang::String>>(number); }
inline ref<java::lang::String> NumberFormat::format(ref<java::math::BigDecimal> number) { return call_method<SCAPIX_META_STRING("format"), ref<java::lang::String>>(number); }
inline ref<java::lang::String> NumberFormat::format(ref<android::icu::math::BigDecimal> number) { return call_method<SCAPIX_META_STRING("format"), ref<java::lang::String>>(number); }
inline ref<java::lang::String> NumberFormat::format(ref<android::icu::util::CurrencyAmount> currAmt) { return call_method<SCAPIX_META_STRING("format"), ref<java::lang::String>>(currAmt); }
inline ref<java::lang::StringBuffer> NumberFormat::format(jdouble p1, ref<java::lang::StringBuffer> p2, ref<java::text::FieldPosition> p3) { return call_method<SCAPIX_META_STRING("format"), ref<java::lang::StringBuffer>>(p1, p2, p3); }
inline ref<java::lang::StringBuffer> NumberFormat::format(jlong p1, ref<java::lang::StringBuffer> p2, ref<java::text::FieldPosition> p3) { return call_method<SCAPIX_META_STRING("format"), ref<java::lang::StringBuffer>>(p1, p2, p3); }
inline ref<java::lang::StringBuffer> NumberFormat::format(ref<java::math::BigInteger> p1, ref<java::lang::StringBuffer> p2, ref<java::text::FieldPosition> p3) { return call_method<SCAPIX_META_STRING("format"), ref<java::lang::StringBuffer>>(p1, p2, p3); }
inline ref<java::lang::StringBuffer> NumberFormat::format(ref<java::math::BigDecimal> p1, ref<java::lang::StringBuffer> p2, ref<java::text::FieldPosition> p3) { return call_method<SCAPIX_META_STRING("format"), ref<java::lang::StringBuffer>>(p1, p2, p3); }
inline ref<java::lang::StringBuffer> NumberFormat::format(ref<android::icu::math::BigDecimal> p1, ref<java::lang::StringBuffer> p2, ref<java::text::FieldPosition> p3) { return call_method<SCAPIX_META_STRING("format"), ref<java::lang::StringBuffer>>(p1, p2, p3); }
inline ref<java::lang::StringBuffer> NumberFormat::format(ref<android::icu::util::CurrencyAmount> currAmt, ref<java::lang::StringBuffer> toAppendTo, ref<java::text::FieldPosition> pos) { return call_method<SCAPIX_META_STRING("format"), ref<java::lang::StringBuffer>>(currAmt, toAppendTo, pos); }
inline ref<java::lang::Number> NumberFormat::parse(ref<java::lang::String> p1, ref<java::text::ParsePosition> p2) { return call_method<SCAPIX_META_STRING("parse"), ref<java::lang::Number>>(p1, p2); }
inline ref<java::lang::Number> NumberFormat::parse(ref<java::lang::String> text) { return call_method<SCAPIX_META_STRING("parse"), ref<java::lang::Number>>(text); }
inline ref<android::icu::util::CurrencyAmount> NumberFormat::parseCurrency(ref<java::lang::CharSequence> text, ref<java::text::ParsePosition> pos) { return call_method<SCAPIX_META_STRING("parseCurrency"), ref<android::icu::util::CurrencyAmount>>(text, pos); }
inline jboolean NumberFormat::isParseIntegerOnly() { return call_method<SCAPIX_META_STRING("isParseIntegerOnly"), jboolean>(); }
inline void NumberFormat::setParseIntegerOnly(jboolean value) { return call_method<SCAPIX_META_STRING("setParseIntegerOnly"), void>(value); }
inline void NumberFormat::setParseStrict(jboolean value) { return call_method<SCAPIX_META_STRING("setParseStrict"), void>(value); }
inline jboolean NumberFormat::isParseStrict() { return call_method<SCAPIX_META_STRING("isParseStrict"), jboolean>(); }
inline void NumberFormat::setContext(ref<android::icu::text::DisplayContext> context) { return call_method<SCAPIX_META_STRING("setContext"), void>(context); }
inline ref<android::icu::text::DisplayContext> NumberFormat::getContext(ref<android::icu::text::DisplayContext_Type> type) { return call_method<SCAPIX_META_STRING("getContext"), ref<android::icu::text::DisplayContext>>(type); }
inline ref<android::icu::text::NumberFormat> NumberFormat::getInstance() { return call_static_method<SCAPIX_META_STRING("getInstance"), ref<android::icu::text::NumberFormat>>(); }
inline ref<android::icu::text::NumberFormat> NumberFormat::getInstance(ref<java::util::Locale> inLocale) { return call_static_method<SCAPIX_META_STRING("getInstance"), ref<android::icu::text::NumberFormat>>(inLocale); }
inline ref<android::icu::text::NumberFormat> NumberFormat::getInstance(ref<android::icu::util::ULocale> inLocale) { return call_static_method<SCAPIX_META_STRING("getInstance"), ref<android::icu::text::NumberFormat>>(inLocale); }
inline ref<android::icu::text::NumberFormat> NumberFormat::getInstance(jint style) { return call_static_method<SCAPIX_META_STRING("getInstance"), ref<android::icu::text::NumberFormat>>(style); }
inline ref<android::icu::text::NumberFormat> NumberFormat::getInstance(ref<java::util::Locale> inLocale, jint style) { return call_static_method<SCAPIX_META_STRING("getInstance"), ref<android::icu::text::NumberFormat>>(inLocale, style); }
inline ref<android::icu::text::NumberFormat> NumberFormat::getNumberInstance() { return call_static_method<SCAPIX_META_STRING("getNumberInstance"), ref<android::icu::text::NumberFormat>>(); }
inline ref<android::icu::text::NumberFormat> NumberFormat::getNumberInstance(ref<java::util::Locale> inLocale) { return call_static_method<SCAPIX_META_STRING("getNumberInstance"), ref<android::icu::text::NumberFormat>>(inLocale); }
inline ref<android::icu::text::NumberFormat> NumberFormat::getNumberInstance(ref<android::icu::util::ULocale> inLocale) { return call_static_method<SCAPIX_META_STRING("getNumberInstance"), ref<android::icu::text::NumberFormat>>(inLocale); }
inline ref<android::icu::text::NumberFormat> NumberFormat::getIntegerInstance() { return call_static_method<SCAPIX_META_STRING("getIntegerInstance"), ref<android::icu::text::NumberFormat>>(); }
inline ref<android::icu::text::NumberFormat> NumberFormat::getIntegerInstance(ref<java::util::Locale> inLocale) { return call_static_method<SCAPIX_META_STRING("getIntegerInstance"), ref<android::icu::text::NumberFormat>>(inLocale); }
inline ref<android::icu::text::NumberFormat> NumberFormat::getIntegerInstance(ref<android::icu::util::ULocale> inLocale) { return call_static_method<SCAPIX_META_STRING("getIntegerInstance"), ref<android::icu::text::NumberFormat>>(inLocale); }
inline ref<android::icu::text::NumberFormat> NumberFormat::getCurrencyInstance() { return call_static_method<SCAPIX_META_STRING("getCurrencyInstance"), ref<android::icu::text::NumberFormat>>(); }
inline ref<android::icu::text::NumberFormat> NumberFormat::getCurrencyInstance(ref<java::util::Locale> inLocale) { return call_static_method<SCAPIX_META_STRING("getCurrencyInstance"), ref<android::icu::text::NumberFormat>>(inLocale); }
inline ref<android::icu::text::NumberFormat> NumberFormat::getCurrencyInstance(ref<android::icu::util::ULocale> inLocale) { return call_static_method<SCAPIX_META_STRING("getCurrencyInstance"), ref<android::icu::text::NumberFormat>>(inLocale); }
inline ref<android::icu::text::NumberFormat> NumberFormat::getPercentInstance() { return call_static_method<SCAPIX_META_STRING("getPercentInstance"), ref<android::icu::text::NumberFormat>>(); }
inline ref<android::icu::text::NumberFormat> NumberFormat::getPercentInstance(ref<java::util::Locale> inLocale) { return call_static_method<SCAPIX_META_STRING("getPercentInstance"), ref<android::icu::text::NumberFormat>>(inLocale); }
inline ref<android::icu::text::NumberFormat> NumberFormat::getPercentInstance(ref<android::icu::util::ULocale> inLocale) { return call_static_method<SCAPIX_META_STRING("getPercentInstance"), ref<android::icu::text::NumberFormat>>(inLocale); }
inline ref<android::icu::text::NumberFormat> NumberFormat::getScientificInstance() { return call_static_method<SCAPIX_META_STRING("getScientificInstance"), ref<android::icu::text::NumberFormat>>(); }
inline ref<android::icu::text::NumberFormat> NumberFormat::getScientificInstance(ref<java::util::Locale> inLocale) { return call_static_method<SCAPIX_META_STRING("getScientificInstance"), ref<android::icu::text::NumberFormat>>(inLocale); }
inline ref<android::icu::text::NumberFormat> NumberFormat::getScientificInstance(ref<android::icu::util::ULocale> inLocale) { return call_static_method<SCAPIX_META_STRING("getScientificInstance"), ref<android::icu::text::NumberFormat>>(inLocale); }
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
inline void NumberFormat::setCurrency(ref<android::icu::util::Currency> theCurrency) { return call_method<SCAPIX_META_STRING("setCurrency"), void>(theCurrency); }
inline ref<android::icu::util::Currency> NumberFormat::getCurrency() { return call_method<SCAPIX_META_STRING("getCurrency"), ref<android::icu::util::Currency>>(); }
inline jint NumberFormat::getRoundingMode() { return call_method<SCAPIX_META_STRING("getRoundingMode"), jint>(); }
inline void NumberFormat::setRoundingMode(jint roundingMode) { return call_method<SCAPIX_META_STRING("setRoundingMode"), void>(roundingMode); }
inline ref<android::icu::text::NumberFormat> NumberFormat::getInstance(ref<android::icu::util::ULocale> desiredLocale, jint choice) { return call_static_method<SCAPIX_META_STRING("getInstance"), ref<android::icu::text::NumberFormat>>(desiredLocale, choice); }

} // namespace android::icu::text
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_ICU_TEXT_NUMBERFORMAT_H
