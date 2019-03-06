// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/android/icu/text/NumberFormat.h>

#ifndef SCAPIX_ANDROID_ICU_TEXT_DECIMALFORMAT_H
#define SCAPIX_ANDROID_ICU_TEXT_DECIMALFORMAT_H

namespace scapix::java_api {

namespace android::icu::math { class BigDecimal; }
namespace android::icu::math { class MathContext; }
namespace android::icu::text { class CurrencyPluralInfo; }
namespace android::icu::text { class DecimalFormatSymbols; }
namespace android::icu::util { class Currency; }
namespace android::icu::util { class Currency_CurrencyUsage; }
namespace android::icu::util { class CurrencyAmount; }
namespace java::lang { class CharSequence; }
namespace java::lang { class Number; }
namespace java::lang { class Object; }
namespace java::lang { class String; }
namespace java::lang { class StringBuffer; }
namespace java::math { class BigDecimal; }
namespace java::math { class BigInteger; }
namespace java::math { class MathContext; }
namespace java::text { class AttributedCharacterIterator; }
namespace java::text { class FieldPosition; }
namespace java::text { class ParsePosition; }

namespace android::icu::text {

class DecimalFormat : public object_base<SCAPIX_META_STRING("android/icu/text/DecimalFormat"),
	android::icu::text::NumberFormat>
{
public:

	static jint PAD_AFTER_PREFIX_();
	static jint PAD_AFTER_SUFFIX_();
	static jint PAD_BEFORE_PREFIX_();
	static jint PAD_BEFORE_SUFFIX_();

	static ref<DecimalFormat> new_object();
	static ref<DecimalFormat> new_object(ref<java::lang::String> pattern);
	static ref<DecimalFormat> new_object(ref<java::lang::String> pattern, ref<android::icu::text::DecimalFormatSymbols> symbols);
	static ref<DecimalFormat> new_object(ref<java::lang::String> pattern, ref<android::icu::text::DecimalFormatSymbols> symbols, ref<android::icu::text::CurrencyPluralInfo> infoInput, jint style);
	void applyPattern(ref<java::lang::String> pattern);
	void applyLocalizedPattern(ref<java::lang::String> localizedPattern);
	ref<java::lang::Object> clone();
	ref<java::lang::StringBuffer> format(jdouble number, ref<java::lang::StringBuffer> p2, ref<java::text::FieldPosition> result);
	ref<java::lang::StringBuffer> format(jlong number, ref<java::lang::StringBuffer> p2, ref<java::text::FieldPosition> result);
	ref<java::lang::StringBuffer> format(ref<java::math::BigInteger> number, ref<java::lang::StringBuffer> result, ref<java::text::FieldPosition> fieldPosition);
	ref<java::lang::StringBuffer> format(ref<java::math::BigDecimal> number, ref<java::lang::StringBuffer> result, ref<java::text::FieldPosition> fieldPosition);
	ref<java::lang::StringBuffer> format(ref<android::icu::math::BigDecimal> number, ref<java::lang::StringBuffer> result, ref<java::text::FieldPosition> fieldPosition);
	ref<java::text::AttributedCharacterIterator> formatToCharacterIterator(ref<java::lang::Object> obj);
	ref<java::lang::StringBuffer> format(ref<android::icu::util::CurrencyAmount> currAmt, ref<java::lang::StringBuffer> toAppendTo, ref<java::text::FieldPosition> pos);
	ref<java::lang::Number> parse(ref<java::lang::String> text, ref<java::text::ParsePosition> parsePosition);
	ref<android::icu::util::CurrencyAmount> parseCurrency(ref<java::lang::CharSequence> text, ref<java::text::ParsePosition> parsePosition);
	ref<android::icu::text::DecimalFormatSymbols> getDecimalFormatSymbols();
	void setDecimalFormatSymbols(ref<android::icu::text::DecimalFormatSymbols> newSymbols);
	ref<java::lang::String> getPositivePrefix();
	void setPositivePrefix(ref<java::lang::String> prefix);
	ref<java::lang::String> getNegativePrefix();
	void setNegativePrefix(ref<java::lang::String> prefix);
	ref<java::lang::String> getPositiveSuffix();
	void setPositiveSuffix(ref<java::lang::String> suffix);
	ref<java::lang::String> getNegativeSuffix();
	void setNegativeSuffix(ref<java::lang::String> suffix);
	jint getMultiplier();
	void setMultiplier(jint multiplier);
	ref<java::math::BigDecimal> getRoundingIncrement();
	void setRoundingIncrement(ref<java::math::BigDecimal> increment);
	void setRoundingIncrement(ref<android::icu::math::BigDecimal> increment);
	void setRoundingIncrement(jdouble increment);
	jint getRoundingMode();
	void setRoundingMode(jint roundingMode);
	ref<java::math::MathContext> getMathContext();
	void setMathContext(ref<java::math::MathContext> mathContext);
	ref<android::icu::math::MathContext> getMathContextICU();
	void setMathContextICU(ref<android::icu::math::MathContext> mathContextICU);
	jint getMinimumIntegerDigits();
	void setMinimumIntegerDigits(jint value);
	jint getMaximumIntegerDigits();
	void setMaximumIntegerDigits(jint value);
	jint getMinimumFractionDigits();
	void setMinimumFractionDigits(jint value);
	jint getMaximumFractionDigits();
	void setMaximumFractionDigits(jint value);
	jboolean areSignificantDigitsUsed();
	void setSignificantDigitsUsed(jboolean useSignificantDigits);
	jint getMinimumSignificantDigits();
	void setMinimumSignificantDigits(jint value);
	jint getMaximumSignificantDigits();
	void setMaximumSignificantDigits(jint value);
	jint getFormatWidth();
	void setFormatWidth(jint width);
	jchar getPadCharacter();
	void setPadCharacter(jchar padChar);
	jint getPadPosition();
	void setPadPosition(jint padPos);
	jboolean isScientificNotation();
	void setScientificNotation(jboolean useScientific);
	jbyte getMinimumExponentDigits();
	void setMinimumExponentDigits(jbyte minExpDig);
	jboolean isExponentSignAlwaysShown();
	void setExponentSignAlwaysShown(jboolean expSignAlways);
	jboolean isGroupingUsed();
	void setGroupingUsed(jboolean enabled);
	jint getGroupingSize();
	void setGroupingSize(jint width);
	jint getSecondaryGroupingSize();
	void setSecondaryGroupingSize(jint width);
	jboolean isDecimalSeparatorAlwaysShown();
	void setDecimalSeparatorAlwaysShown(jboolean value);
	ref<android::icu::util::Currency> getCurrency();
	void setCurrency(ref<android::icu::util::Currency> currency);
	ref<android::icu::util::Currency_CurrencyUsage> getCurrencyUsage();
	void setCurrencyUsage(ref<android::icu::util::Currency_CurrencyUsage> usage);
	ref<android::icu::text::CurrencyPluralInfo> getCurrencyPluralInfo();
	void setCurrencyPluralInfo(ref<android::icu::text::CurrencyPluralInfo> newInfo);
	jboolean isParseBigDecimal();
	void setParseBigDecimal(jboolean value);
	jint getParseMaxDigits();
	void setParseMaxDigits(jint maxDigits);
	jboolean isParseStrict();
	void setParseStrict(jboolean parseStrict);
	jboolean isParseIntegerOnly();
	void setParseIntegerOnly(jboolean parseIntegerOnly);
	jboolean isDecimalPatternMatchRequired();
	void setDecimalPatternMatchRequired(jboolean value);
	jboolean equals(ref<java::lang::Object> obj);
	jint hashCode();
	ref<java::lang::String> toString();
	ref<java::lang::String> toPattern();
	ref<java::lang::String> toLocalizedPattern();

protected:

	DecimalFormat(handle_type h) : base_(h) {}

};

} // namespace android::icu::text
} // namespace scapix::java_api

#include <scapix/java_api/android/icu/math/BigDecimal.h>
#include <scapix/java_api/android/icu/math/MathContext.h>
#include <scapix/java_api/android/icu/text/CurrencyPluralInfo.h>
#include <scapix/java_api/android/icu/text/DecimalFormatSymbols.h>
#include <scapix/java_api/android/icu/util/Currency.h>
#include <scapix/java_api/android/icu/util/Currency_CurrencyUsage.h>
#include <scapix/java_api/android/icu/util/CurrencyAmount.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/Number.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/StringBuffer.h>
#include <scapix/java_api/java/math/BigDecimal.h>
#include <scapix/java_api/java/math/BigInteger.h>
#include <scapix/java_api/java/math/MathContext.h>
#include <scapix/java_api/java/text/AttributedCharacterIterator.h>
#include <scapix/java_api/java/text/FieldPosition.h>
#include <scapix/java_api/java/text/ParsePosition.h>

namespace scapix::java_api {
namespace android::icu::text {

inline jint DecimalFormat::PAD_AFTER_PREFIX_() { return get_static_field<SCAPIX_META_STRING("PAD_AFTER_PREFIX"), jint>(); }
inline jint DecimalFormat::PAD_AFTER_SUFFIX_() { return get_static_field<SCAPIX_META_STRING("PAD_AFTER_SUFFIX"), jint>(); }
inline jint DecimalFormat::PAD_BEFORE_PREFIX_() { return get_static_field<SCAPIX_META_STRING("PAD_BEFORE_PREFIX"), jint>(); }
inline jint DecimalFormat::PAD_BEFORE_SUFFIX_() { return get_static_field<SCAPIX_META_STRING("PAD_BEFORE_SUFFIX"), jint>(); }
inline ref<DecimalFormat> DecimalFormat::new_object() { return base_::new_object(); }
inline ref<DecimalFormat> DecimalFormat::new_object(ref<java::lang::String> pattern) { return base_::new_object(pattern); }
inline ref<DecimalFormat> DecimalFormat::new_object(ref<java::lang::String> pattern, ref<android::icu::text::DecimalFormatSymbols> symbols) { return base_::new_object(pattern, symbols); }
inline ref<DecimalFormat> DecimalFormat::new_object(ref<java::lang::String> pattern, ref<android::icu::text::DecimalFormatSymbols> symbols, ref<android::icu::text::CurrencyPluralInfo> infoInput, jint style) { return base_::new_object(pattern, symbols, infoInput, style); }
inline void DecimalFormat::applyPattern(ref<java::lang::String> pattern) { return call_method<SCAPIX_META_STRING("applyPattern"), void>(pattern); }
inline void DecimalFormat::applyLocalizedPattern(ref<java::lang::String> localizedPattern) { return call_method<SCAPIX_META_STRING("applyLocalizedPattern"), void>(localizedPattern); }
inline ref<java::lang::Object> DecimalFormat::clone() { return call_method<SCAPIX_META_STRING("clone"), ref<java::lang::Object>>(); }
inline ref<java::lang::StringBuffer> DecimalFormat::format(jdouble number, ref<java::lang::StringBuffer> p2, ref<java::text::FieldPosition> result) { return call_method<SCAPIX_META_STRING("format"), ref<java::lang::StringBuffer>>(number, p2, result); }
inline ref<java::lang::StringBuffer> DecimalFormat::format(jlong number, ref<java::lang::StringBuffer> p2, ref<java::text::FieldPosition> result) { return call_method<SCAPIX_META_STRING("format"), ref<java::lang::StringBuffer>>(number, p2, result); }
inline ref<java::lang::StringBuffer> DecimalFormat::format(ref<java::math::BigInteger> number, ref<java::lang::StringBuffer> result, ref<java::text::FieldPosition> fieldPosition) { return call_method<SCAPIX_META_STRING("format"), ref<java::lang::StringBuffer>>(number, result, fieldPosition); }
inline ref<java::lang::StringBuffer> DecimalFormat::format(ref<java::math::BigDecimal> number, ref<java::lang::StringBuffer> result, ref<java::text::FieldPosition> fieldPosition) { return call_method<SCAPIX_META_STRING("format"), ref<java::lang::StringBuffer>>(number, result, fieldPosition); }
inline ref<java::lang::StringBuffer> DecimalFormat::format(ref<android::icu::math::BigDecimal> number, ref<java::lang::StringBuffer> result, ref<java::text::FieldPosition> fieldPosition) { return call_method<SCAPIX_META_STRING("format"), ref<java::lang::StringBuffer>>(number, result, fieldPosition); }
inline ref<java::text::AttributedCharacterIterator> DecimalFormat::formatToCharacterIterator(ref<java::lang::Object> obj) { return call_method<SCAPIX_META_STRING("formatToCharacterIterator"), ref<java::text::AttributedCharacterIterator>>(obj); }
inline ref<java::lang::StringBuffer> DecimalFormat::format(ref<android::icu::util::CurrencyAmount> currAmt, ref<java::lang::StringBuffer> toAppendTo, ref<java::text::FieldPosition> pos) { return call_method<SCAPIX_META_STRING("format"), ref<java::lang::StringBuffer>>(currAmt, toAppendTo, pos); }
inline ref<java::lang::Number> DecimalFormat::parse(ref<java::lang::String> text, ref<java::text::ParsePosition> parsePosition) { return call_method<SCAPIX_META_STRING("parse"), ref<java::lang::Number>>(text, parsePosition); }
inline ref<android::icu::util::CurrencyAmount> DecimalFormat::parseCurrency(ref<java::lang::CharSequence> text, ref<java::text::ParsePosition> parsePosition) { return call_method<SCAPIX_META_STRING("parseCurrency"), ref<android::icu::util::CurrencyAmount>>(text, parsePosition); }
inline ref<android::icu::text::DecimalFormatSymbols> DecimalFormat::getDecimalFormatSymbols() { return call_method<SCAPIX_META_STRING("getDecimalFormatSymbols"), ref<android::icu::text::DecimalFormatSymbols>>(); }
inline void DecimalFormat::setDecimalFormatSymbols(ref<android::icu::text::DecimalFormatSymbols> newSymbols) { return call_method<SCAPIX_META_STRING("setDecimalFormatSymbols"), void>(newSymbols); }
inline ref<java::lang::String> DecimalFormat::getPositivePrefix() { return call_method<SCAPIX_META_STRING("getPositivePrefix"), ref<java::lang::String>>(); }
inline void DecimalFormat::setPositivePrefix(ref<java::lang::String> prefix) { return call_method<SCAPIX_META_STRING("setPositivePrefix"), void>(prefix); }
inline ref<java::lang::String> DecimalFormat::getNegativePrefix() { return call_method<SCAPIX_META_STRING("getNegativePrefix"), ref<java::lang::String>>(); }
inline void DecimalFormat::setNegativePrefix(ref<java::lang::String> prefix) { return call_method<SCAPIX_META_STRING("setNegativePrefix"), void>(prefix); }
inline ref<java::lang::String> DecimalFormat::getPositiveSuffix() { return call_method<SCAPIX_META_STRING("getPositiveSuffix"), ref<java::lang::String>>(); }
inline void DecimalFormat::setPositiveSuffix(ref<java::lang::String> suffix) { return call_method<SCAPIX_META_STRING("setPositiveSuffix"), void>(suffix); }
inline ref<java::lang::String> DecimalFormat::getNegativeSuffix() { return call_method<SCAPIX_META_STRING("getNegativeSuffix"), ref<java::lang::String>>(); }
inline void DecimalFormat::setNegativeSuffix(ref<java::lang::String> suffix) { return call_method<SCAPIX_META_STRING("setNegativeSuffix"), void>(suffix); }
inline jint DecimalFormat::getMultiplier() { return call_method<SCAPIX_META_STRING("getMultiplier"), jint>(); }
inline void DecimalFormat::setMultiplier(jint multiplier) { return call_method<SCAPIX_META_STRING("setMultiplier"), void>(multiplier); }
inline ref<java::math::BigDecimal> DecimalFormat::getRoundingIncrement() { return call_method<SCAPIX_META_STRING("getRoundingIncrement"), ref<java::math::BigDecimal>>(); }
inline void DecimalFormat::setRoundingIncrement(ref<java::math::BigDecimal> increment) { return call_method<SCAPIX_META_STRING("setRoundingIncrement"), void>(increment); }
inline void DecimalFormat::setRoundingIncrement(ref<android::icu::math::BigDecimal> increment) { return call_method<SCAPIX_META_STRING("setRoundingIncrement"), void>(increment); }
inline void DecimalFormat::setRoundingIncrement(jdouble increment) { return call_method<SCAPIX_META_STRING("setRoundingIncrement"), void>(increment); }
inline jint DecimalFormat::getRoundingMode() { return call_method<SCAPIX_META_STRING("getRoundingMode"), jint>(); }
inline void DecimalFormat::setRoundingMode(jint roundingMode) { return call_method<SCAPIX_META_STRING("setRoundingMode"), void>(roundingMode); }
inline ref<java::math::MathContext> DecimalFormat::getMathContext() { return call_method<SCAPIX_META_STRING("getMathContext"), ref<java::math::MathContext>>(); }
inline void DecimalFormat::setMathContext(ref<java::math::MathContext> mathContext) { return call_method<SCAPIX_META_STRING("setMathContext"), void>(mathContext); }
inline ref<android::icu::math::MathContext> DecimalFormat::getMathContextICU() { return call_method<SCAPIX_META_STRING("getMathContextICU"), ref<android::icu::math::MathContext>>(); }
inline void DecimalFormat::setMathContextICU(ref<android::icu::math::MathContext> mathContextICU) { return call_method<SCAPIX_META_STRING("setMathContextICU"), void>(mathContextICU); }
inline jint DecimalFormat::getMinimumIntegerDigits() { return call_method<SCAPIX_META_STRING("getMinimumIntegerDigits"), jint>(); }
inline void DecimalFormat::setMinimumIntegerDigits(jint value) { return call_method<SCAPIX_META_STRING("setMinimumIntegerDigits"), void>(value); }
inline jint DecimalFormat::getMaximumIntegerDigits() { return call_method<SCAPIX_META_STRING("getMaximumIntegerDigits"), jint>(); }
inline void DecimalFormat::setMaximumIntegerDigits(jint value) { return call_method<SCAPIX_META_STRING("setMaximumIntegerDigits"), void>(value); }
inline jint DecimalFormat::getMinimumFractionDigits() { return call_method<SCAPIX_META_STRING("getMinimumFractionDigits"), jint>(); }
inline void DecimalFormat::setMinimumFractionDigits(jint value) { return call_method<SCAPIX_META_STRING("setMinimumFractionDigits"), void>(value); }
inline jint DecimalFormat::getMaximumFractionDigits() { return call_method<SCAPIX_META_STRING("getMaximumFractionDigits"), jint>(); }
inline void DecimalFormat::setMaximumFractionDigits(jint value) { return call_method<SCAPIX_META_STRING("setMaximumFractionDigits"), void>(value); }
inline jboolean DecimalFormat::areSignificantDigitsUsed() { return call_method<SCAPIX_META_STRING("areSignificantDigitsUsed"), jboolean>(); }
inline void DecimalFormat::setSignificantDigitsUsed(jboolean useSignificantDigits) { return call_method<SCAPIX_META_STRING("setSignificantDigitsUsed"), void>(useSignificantDigits); }
inline jint DecimalFormat::getMinimumSignificantDigits() { return call_method<SCAPIX_META_STRING("getMinimumSignificantDigits"), jint>(); }
inline void DecimalFormat::setMinimumSignificantDigits(jint value) { return call_method<SCAPIX_META_STRING("setMinimumSignificantDigits"), void>(value); }
inline jint DecimalFormat::getMaximumSignificantDigits() { return call_method<SCAPIX_META_STRING("getMaximumSignificantDigits"), jint>(); }
inline void DecimalFormat::setMaximumSignificantDigits(jint value) { return call_method<SCAPIX_META_STRING("setMaximumSignificantDigits"), void>(value); }
inline jint DecimalFormat::getFormatWidth() { return call_method<SCAPIX_META_STRING("getFormatWidth"), jint>(); }
inline void DecimalFormat::setFormatWidth(jint width) { return call_method<SCAPIX_META_STRING("setFormatWidth"), void>(width); }
inline jchar DecimalFormat::getPadCharacter() { return call_method<SCAPIX_META_STRING("getPadCharacter"), jchar>(); }
inline void DecimalFormat::setPadCharacter(jchar padChar) { return call_method<SCAPIX_META_STRING("setPadCharacter"), void>(padChar); }
inline jint DecimalFormat::getPadPosition() { return call_method<SCAPIX_META_STRING("getPadPosition"), jint>(); }
inline void DecimalFormat::setPadPosition(jint padPos) { return call_method<SCAPIX_META_STRING("setPadPosition"), void>(padPos); }
inline jboolean DecimalFormat::isScientificNotation() { return call_method<SCAPIX_META_STRING("isScientificNotation"), jboolean>(); }
inline void DecimalFormat::setScientificNotation(jboolean useScientific) { return call_method<SCAPIX_META_STRING("setScientificNotation"), void>(useScientific); }
inline jbyte DecimalFormat::getMinimumExponentDigits() { return call_method<SCAPIX_META_STRING("getMinimumExponentDigits"), jbyte>(); }
inline void DecimalFormat::setMinimumExponentDigits(jbyte minExpDig) { return call_method<SCAPIX_META_STRING("setMinimumExponentDigits"), void>(minExpDig); }
inline jboolean DecimalFormat::isExponentSignAlwaysShown() { return call_method<SCAPIX_META_STRING("isExponentSignAlwaysShown"), jboolean>(); }
inline void DecimalFormat::setExponentSignAlwaysShown(jboolean expSignAlways) { return call_method<SCAPIX_META_STRING("setExponentSignAlwaysShown"), void>(expSignAlways); }
inline jboolean DecimalFormat::isGroupingUsed() { return call_method<SCAPIX_META_STRING("isGroupingUsed"), jboolean>(); }
inline void DecimalFormat::setGroupingUsed(jboolean enabled) { return call_method<SCAPIX_META_STRING("setGroupingUsed"), void>(enabled); }
inline jint DecimalFormat::getGroupingSize() { return call_method<SCAPIX_META_STRING("getGroupingSize"), jint>(); }
inline void DecimalFormat::setGroupingSize(jint width) { return call_method<SCAPIX_META_STRING("setGroupingSize"), void>(width); }
inline jint DecimalFormat::getSecondaryGroupingSize() { return call_method<SCAPIX_META_STRING("getSecondaryGroupingSize"), jint>(); }
inline void DecimalFormat::setSecondaryGroupingSize(jint width) { return call_method<SCAPIX_META_STRING("setSecondaryGroupingSize"), void>(width); }
inline jboolean DecimalFormat::isDecimalSeparatorAlwaysShown() { return call_method<SCAPIX_META_STRING("isDecimalSeparatorAlwaysShown"), jboolean>(); }
inline void DecimalFormat::setDecimalSeparatorAlwaysShown(jboolean value) { return call_method<SCAPIX_META_STRING("setDecimalSeparatorAlwaysShown"), void>(value); }
inline ref<android::icu::util::Currency> DecimalFormat::getCurrency() { return call_method<SCAPIX_META_STRING("getCurrency"), ref<android::icu::util::Currency>>(); }
inline void DecimalFormat::setCurrency(ref<android::icu::util::Currency> currency) { return call_method<SCAPIX_META_STRING("setCurrency"), void>(currency); }
inline ref<android::icu::util::Currency_CurrencyUsage> DecimalFormat::getCurrencyUsage() { return call_method<SCAPIX_META_STRING("getCurrencyUsage"), ref<android::icu::util::Currency_CurrencyUsage>>(); }
inline void DecimalFormat::setCurrencyUsage(ref<android::icu::util::Currency_CurrencyUsage> usage) { return call_method<SCAPIX_META_STRING("setCurrencyUsage"), void>(usage); }
inline ref<android::icu::text::CurrencyPluralInfo> DecimalFormat::getCurrencyPluralInfo() { return call_method<SCAPIX_META_STRING("getCurrencyPluralInfo"), ref<android::icu::text::CurrencyPluralInfo>>(); }
inline void DecimalFormat::setCurrencyPluralInfo(ref<android::icu::text::CurrencyPluralInfo> newInfo) { return call_method<SCAPIX_META_STRING("setCurrencyPluralInfo"), void>(newInfo); }
inline jboolean DecimalFormat::isParseBigDecimal() { return call_method<SCAPIX_META_STRING("isParseBigDecimal"), jboolean>(); }
inline void DecimalFormat::setParseBigDecimal(jboolean value) { return call_method<SCAPIX_META_STRING("setParseBigDecimal"), void>(value); }
inline jint DecimalFormat::getParseMaxDigits() { return call_method<SCAPIX_META_STRING("getParseMaxDigits"), jint>(); }
inline void DecimalFormat::setParseMaxDigits(jint maxDigits) { return call_method<SCAPIX_META_STRING("setParseMaxDigits"), void>(maxDigits); }
inline jboolean DecimalFormat::isParseStrict() { return call_method<SCAPIX_META_STRING("isParseStrict"), jboolean>(); }
inline void DecimalFormat::setParseStrict(jboolean parseStrict) { return call_method<SCAPIX_META_STRING("setParseStrict"), void>(parseStrict); }
inline jboolean DecimalFormat::isParseIntegerOnly() { return call_method<SCAPIX_META_STRING("isParseIntegerOnly"), jboolean>(); }
inline void DecimalFormat::setParseIntegerOnly(jboolean parseIntegerOnly) { return call_method<SCAPIX_META_STRING("setParseIntegerOnly"), void>(parseIntegerOnly); }
inline jboolean DecimalFormat::isDecimalPatternMatchRequired() { return call_method<SCAPIX_META_STRING("isDecimalPatternMatchRequired"), jboolean>(); }
inline void DecimalFormat::setDecimalPatternMatchRequired(jboolean value) { return call_method<SCAPIX_META_STRING("setDecimalPatternMatchRequired"), void>(value); }
inline jboolean DecimalFormat::equals(ref<java::lang::Object> obj) { return call_method<SCAPIX_META_STRING("equals"), jboolean>(obj); }
inline jint DecimalFormat::hashCode() { return call_method<SCAPIX_META_STRING("hashCode"), jint>(); }
inline ref<java::lang::String> DecimalFormat::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }
inline ref<java::lang::String> DecimalFormat::toPattern() { return call_method<SCAPIX_META_STRING("toPattern"), ref<java::lang::String>>(); }
inline ref<java::lang::String> DecimalFormat::toLocalizedPattern() { return call_method<SCAPIX_META_STRING("toLocalizedPattern"), ref<java::lang::String>>(); }

} // namespace android::icu::text
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_ICU_TEXT_DECIMALFORMAT_H
