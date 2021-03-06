// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/Cloneable.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_TEXT_DECIMALFORMATSYMBOLS_H
#define SCAPIX_JAVA_TEXT_DECIMALFORMATSYMBOLS_H

namespace scapix::java_api {

namespace java::lang { class String; }
namespace java::util { class Currency; }
namespace java::util { class Locale; }

namespace java::text {

class DecimalFormatSymbols : public object_base<SCAPIX_META_STRING("java/text/DecimalFormatSymbols"),
	java::lang::Object,
	java::lang::Cloneable,
	java::io::Serializable>
{
public:

	static ref<DecimalFormatSymbols> new_object();
	static ref<DecimalFormatSymbols> new_object(ref<java::util::Locale> locale);
	static ref<link::java::array<java::util::Locale>> getAvailableLocales();
	static ref<java::text::DecimalFormatSymbols> getInstance();
	static ref<java::text::DecimalFormatSymbols> getInstance(ref<java::util::Locale> locale);
	jchar getZeroDigit();
	void setZeroDigit(jchar zeroDigit);
	jchar getGroupingSeparator();
	void setGroupingSeparator(jchar groupingSeparator);
	jchar getDecimalSeparator();
	void setDecimalSeparator(jchar decimalSeparator);
	jchar getPerMill();
	void setPerMill(jchar perMill);
	jchar getPercent();
	void setPercent(jchar percent);
	jchar getDigit();
	void setDigit(jchar digit);
	jchar getPatternSeparator();
	void setPatternSeparator(jchar patternSeparator);
	ref<java::lang::String> getInfinity();
	void setInfinity(ref<java::lang::String> infinity);
	ref<java::lang::String> getNaN();
	void setNaN(ref<java::lang::String> NaN);
	jchar getMinusSign();
	void setMinusSign(jchar minusSign);
	ref<java::lang::String> getCurrencySymbol();
	void setCurrencySymbol(ref<java::lang::String> currency);
	ref<java::lang::String> getInternationalCurrencySymbol();
	void setInternationalCurrencySymbol(ref<java::lang::String> currencyCode);
	ref<java::util::Currency> getCurrency();
	void setCurrency(ref<java::util::Currency> currency);
	jchar getMonetaryDecimalSeparator();
	void setMonetaryDecimalSeparator(jchar sep);
	ref<java::lang::String> getExponentSeparator();
	void setExponentSeparator(ref<java::lang::String> exp);
	ref<java::lang::Object> clone();
	jboolean equals(ref<java::lang::Object> obj);
	jint hashCode();

protected:

	DecimalFormatSymbols(handle_type h) : base_(h) {}

};

} // namespace java::text
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Currency.h>
#include <scapix/java_api/java/util/Locale.h>

namespace scapix::java_api {
namespace java::text {

inline ref<DecimalFormatSymbols> DecimalFormatSymbols::new_object() { return base_::new_object(); }
inline ref<DecimalFormatSymbols> DecimalFormatSymbols::new_object(ref<java::util::Locale> locale) { return base_::new_object(locale); }
inline ref<link::java::array<java::util::Locale>> DecimalFormatSymbols::getAvailableLocales() { return call_static_method<SCAPIX_META_STRING("getAvailableLocales"), ref<link::java::array<java::util::Locale>>>(); }
inline ref<java::text::DecimalFormatSymbols> DecimalFormatSymbols::getInstance() { return call_static_method<SCAPIX_META_STRING("getInstance"), ref<java::text::DecimalFormatSymbols>>(); }
inline ref<java::text::DecimalFormatSymbols> DecimalFormatSymbols::getInstance(ref<java::util::Locale> locale) { return call_static_method<SCAPIX_META_STRING("getInstance"), ref<java::text::DecimalFormatSymbols>>(locale); }
inline jchar DecimalFormatSymbols::getZeroDigit() { return call_method<SCAPIX_META_STRING("getZeroDigit"), jchar>(); }
inline void DecimalFormatSymbols::setZeroDigit(jchar zeroDigit) { return call_method<SCAPIX_META_STRING("setZeroDigit"), void>(zeroDigit); }
inline jchar DecimalFormatSymbols::getGroupingSeparator() { return call_method<SCAPIX_META_STRING("getGroupingSeparator"), jchar>(); }
inline void DecimalFormatSymbols::setGroupingSeparator(jchar groupingSeparator) { return call_method<SCAPIX_META_STRING("setGroupingSeparator"), void>(groupingSeparator); }
inline jchar DecimalFormatSymbols::getDecimalSeparator() { return call_method<SCAPIX_META_STRING("getDecimalSeparator"), jchar>(); }
inline void DecimalFormatSymbols::setDecimalSeparator(jchar decimalSeparator) { return call_method<SCAPIX_META_STRING("setDecimalSeparator"), void>(decimalSeparator); }
inline jchar DecimalFormatSymbols::getPerMill() { return call_method<SCAPIX_META_STRING("getPerMill"), jchar>(); }
inline void DecimalFormatSymbols::setPerMill(jchar perMill) { return call_method<SCAPIX_META_STRING("setPerMill"), void>(perMill); }
inline jchar DecimalFormatSymbols::getPercent() { return call_method<SCAPIX_META_STRING("getPercent"), jchar>(); }
inline void DecimalFormatSymbols::setPercent(jchar percent) { return call_method<SCAPIX_META_STRING("setPercent"), void>(percent); }
inline jchar DecimalFormatSymbols::getDigit() { return call_method<SCAPIX_META_STRING("getDigit"), jchar>(); }
inline void DecimalFormatSymbols::setDigit(jchar digit) { return call_method<SCAPIX_META_STRING("setDigit"), void>(digit); }
inline jchar DecimalFormatSymbols::getPatternSeparator() { return call_method<SCAPIX_META_STRING("getPatternSeparator"), jchar>(); }
inline void DecimalFormatSymbols::setPatternSeparator(jchar patternSeparator) { return call_method<SCAPIX_META_STRING("setPatternSeparator"), void>(patternSeparator); }
inline ref<java::lang::String> DecimalFormatSymbols::getInfinity() { return call_method<SCAPIX_META_STRING("getInfinity"), ref<java::lang::String>>(); }
inline void DecimalFormatSymbols::setInfinity(ref<java::lang::String> infinity) { return call_method<SCAPIX_META_STRING("setInfinity"), void>(infinity); }
inline ref<java::lang::String> DecimalFormatSymbols::getNaN() { return call_method<SCAPIX_META_STRING("getNaN"), ref<java::lang::String>>(); }
inline void DecimalFormatSymbols::setNaN(ref<java::lang::String> NaN) { return call_method<SCAPIX_META_STRING("setNaN"), void>(NaN); }
inline jchar DecimalFormatSymbols::getMinusSign() { return call_method<SCAPIX_META_STRING("getMinusSign"), jchar>(); }
inline void DecimalFormatSymbols::setMinusSign(jchar minusSign) { return call_method<SCAPIX_META_STRING("setMinusSign"), void>(minusSign); }
inline ref<java::lang::String> DecimalFormatSymbols::getCurrencySymbol() { return call_method<SCAPIX_META_STRING("getCurrencySymbol"), ref<java::lang::String>>(); }
inline void DecimalFormatSymbols::setCurrencySymbol(ref<java::lang::String> currency) { return call_method<SCAPIX_META_STRING("setCurrencySymbol"), void>(currency); }
inline ref<java::lang::String> DecimalFormatSymbols::getInternationalCurrencySymbol() { return call_method<SCAPIX_META_STRING("getInternationalCurrencySymbol"), ref<java::lang::String>>(); }
inline void DecimalFormatSymbols::setInternationalCurrencySymbol(ref<java::lang::String> currencyCode) { return call_method<SCAPIX_META_STRING("setInternationalCurrencySymbol"), void>(currencyCode); }
inline ref<java::util::Currency> DecimalFormatSymbols::getCurrency() { return call_method<SCAPIX_META_STRING("getCurrency"), ref<java::util::Currency>>(); }
inline void DecimalFormatSymbols::setCurrency(ref<java::util::Currency> currency) { return call_method<SCAPIX_META_STRING("setCurrency"), void>(currency); }
inline jchar DecimalFormatSymbols::getMonetaryDecimalSeparator() { return call_method<SCAPIX_META_STRING("getMonetaryDecimalSeparator"), jchar>(); }
inline void DecimalFormatSymbols::setMonetaryDecimalSeparator(jchar sep) { return call_method<SCAPIX_META_STRING("setMonetaryDecimalSeparator"), void>(sep); }
inline ref<java::lang::String> DecimalFormatSymbols::getExponentSeparator() { return call_method<SCAPIX_META_STRING("getExponentSeparator"), ref<java::lang::String>>(); }
inline void DecimalFormatSymbols::setExponentSeparator(ref<java::lang::String> exp) { return call_method<SCAPIX_META_STRING("setExponentSeparator"), void>(exp); }
inline ref<java::lang::Object> DecimalFormatSymbols::clone() { return call_method<SCAPIX_META_STRING("clone"), ref<java::lang::Object>>(); }
inline jboolean DecimalFormatSymbols::equals(ref<java::lang::Object> obj) { return call_method<SCAPIX_META_STRING("equals"), jboolean>(obj); }
inline jint DecimalFormatSymbols::hashCode() { return call_method<SCAPIX_META_STRING("hashCode"), jint>(); }

} // namespace java::text
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_TEXT_DECIMALFORMATSYMBOLS_H
