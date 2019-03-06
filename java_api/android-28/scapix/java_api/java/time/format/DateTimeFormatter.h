// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_TIME_FORMAT_DATETIMEFORMATTER_H
#define SCAPIX_JAVA_TIME_FORMAT_DATETIMEFORMATTER_H

namespace scapix::java_api {

namespace java::lang { class Appendable; }
namespace java::lang { class CharSequence; }
namespace java::lang { class String; }
namespace java::text { class Format; }
namespace java::text { class ParsePosition; }
namespace java::time { class ZoneId; }
namespace java::time::chrono { class Chronology; }
namespace java::time::format { class DecimalStyle; }
namespace java::time::format { class FormatStyle; }
namespace java::time::format { class ResolverStyle; }
namespace java::time::temporal { class TemporalAccessor; }
namespace java::time::temporal { class TemporalField; }
namespace java::time::temporal { class TemporalQuery; }
namespace java::util { class Locale; }
namespace java::util { class Set; }

namespace java::time::format {

class DateTimeFormatter : public object_base<SCAPIX_META_STRING("java/time/format/DateTimeFormatter"),
	java::lang::Object>
{
public:

	static ref<java::time::format::DateTimeFormatter> BASIC_ISO_DATE_();
	static ref<java::time::format::DateTimeFormatter> ISO_DATE_();
	static ref<java::time::format::DateTimeFormatter> ISO_DATE_TIME_();
	static ref<java::time::format::DateTimeFormatter> ISO_INSTANT_();
	static ref<java::time::format::DateTimeFormatter> ISO_LOCAL_DATE_();
	static ref<java::time::format::DateTimeFormatter> ISO_LOCAL_DATE_TIME_();
	static ref<java::time::format::DateTimeFormatter> ISO_LOCAL_TIME_();
	static ref<java::time::format::DateTimeFormatter> ISO_OFFSET_DATE_();
	static ref<java::time::format::DateTimeFormatter> ISO_OFFSET_DATE_TIME_();
	static ref<java::time::format::DateTimeFormatter> ISO_OFFSET_TIME_();
	static ref<java::time::format::DateTimeFormatter> ISO_ORDINAL_DATE_();
	static ref<java::time::format::DateTimeFormatter> ISO_TIME_();
	static ref<java::time::format::DateTimeFormatter> ISO_WEEK_DATE_();
	static ref<java::time::format::DateTimeFormatter> ISO_ZONED_DATE_TIME_();
	static ref<java::time::format::DateTimeFormatter> RFC_1123_DATE_TIME_();

	static ref<java::time::format::DateTimeFormatter> ofPattern(ref<java::lang::String> pattern);
	static ref<java::time::format::DateTimeFormatter> ofPattern(ref<java::lang::String> pattern, ref<java::util::Locale> locale);
	static ref<java::time::format::DateTimeFormatter> ofLocalizedDate(ref<java::time::format::FormatStyle> dateStyle);
	static ref<java::time::format::DateTimeFormatter> ofLocalizedTime(ref<java::time::format::FormatStyle> timeStyle);
	static ref<java::time::format::DateTimeFormatter> ofLocalizedDateTime(ref<java::time::format::FormatStyle> dateTimeStyle);
	static ref<java::time::format::DateTimeFormatter> ofLocalizedDateTime(ref<java::time::format::FormatStyle> dateStyle, ref<java::time::format::FormatStyle> timeStyle);
	static ref<java::time::temporal::TemporalQuery> parsedExcessDays();
	static ref<java::time::temporal::TemporalQuery> parsedLeapSecond();
	ref<java::util::Locale> getLocale();
	ref<java::time::format::DateTimeFormatter> withLocale(ref<java::util::Locale> locale);
	ref<java::time::format::DecimalStyle> getDecimalStyle();
	ref<java::time::format::DateTimeFormatter> withDecimalStyle(ref<java::time::format::DecimalStyle> decimalStyle);
	ref<java::time::chrono::Chronology> getChronology();
	ref<java::time::format::DateTimeFormatter> withChronology(ref<java::time::chrono::Chronology> chrono);
	ref<java::time::ZoneId> getZone();
	ref<java::time::format::DateTimeFormatter> withZone(ref<java::time::ZoneId> zone);
	ref<java::time::format::ResolverStyle> getResolverStyle();
	ref<java::time::format::DateTimeFormatter> withResolverStyle(ref<java::time::format::ResolverStyle> resolverStyle);
	ref<java::util::Set> getResolverFields();
	ref<java::time::format::DateTimeFormatter> withResolverFields(ref<link::java::array<java::time::temporal::TemporalField>> resolverFields);
	ref<java::time::format::DateTimeFormatter> withResolverFields(ref<java::util::Set> resolverFields);
	ref<java::lang::String> format(ref<java::time::temporal::TemporalAccessor> temporal);
	void formatTo(ref<java::time::temporal::TemporalAccessor> temporal, ref<java::lang::Appendable> appendable);
	ref<java::time::temporal::TemporalAccessor> parse(ref<java::lang::CharSequence> text);
	ref<java::time::temporal::TemporalAccessor> parse(ref<java::lang::CharSequence> text, ref<java::text::ParsePosition> position);
	ref<java::lang::Object> parse(ref<java::lang::CharSequence> text, ref<java::time::temporal::TemporalQuery> query);
	ref<java::time::temporal::TemporalAccessor> parseBest(ref<java::lang::CharSequence> text, ref<link::java::array<java::time::temporal::TemporalQuery>> queries);
	ref<java::time::temporal::TemporalAccessor> parseUnresolved(ref<java::lang::CharSequence> text, ref<java::text::ParsePosition> position);
	ref<java::text::Format> toFormat();
	ref<java::text::Format> toFormat(ref<java::time::temporal::TemporalQuery> parseQuery);
	ref<java::lang::String> toString();

protected:

	DateTimeFormatter(handle_type h) : base_(h) {}

};

} // namespace java::time::format
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/Appendable.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/text/Format.h>
#include <scapix/java_api/java/text/ParsePosition.h>
#include <scapix/java_api/java/time/ZoneId.h>
#include <scapix/java_api/java/time/chrono/Chronology.h>
#include <scapix/java_api/java/time/format/DecimalStyle.h>
#include <scapix/java_api/java/time/format/FormatStyle.h>
#include <scapix/java_api/java/time/format/ResolverStyle.h>
#include <scapix/java_api/java/time/temporal/TemporalAccessor.h>
#include <scapix/java_api/java/time/temporal/TemporalField.h>
#include <scapix/java_api/java/time/temporal/TemporalQuery.h>
#include <scapix/java_api/java/util/Locale.h>
#include <scapix/java_api/java/util/Set.h>

namespace scapix::java_api {
namespace java::time::format {

inline ref<java::time::format::DateTimeFormatter> DateTimeFormatter::BASIC_ISO_DATE_() { return get_static_field<SCAPIX_META_STRING("BASIC_ISO_DATE"), ref<java::time::format::DateTimeFormatter>>(); }
inline ref<java::time::format::DateTimeFormatter> DateTimeFormatter::ISO_DATE_() { return get_static_field<SCAPIX_META_STRING("ISO_DATE"), ref<java::time::format::DateTimeFormatter>>(); }
inline ref<java::time::format::DateTimeFormatter> DateTimeFormatter::ISO_DATE_TIME_() { return get_static_field<SCAPIX_META_STRING("ISO_DATE_TIME"), ref<java::time::format::DateTimeFormatter>>(); }
inline ref<java::time::format::DateTimeFormatter> DateTimeFormatter::ISO_INSTANT_() { return get_static_field<SCAPIX_META_STRING("ISO_INSTANT"), ref<java::time::format::DateTimeFormatter>>(); }
inline ref<java::time::format::DateTimeFormatter> DateTimeFormatter::ISO_LOCAL_DATE_() { return get_static_field<SCAPIX_META_STRING("ISO_LOCAL_DATE"), ref<java::time::format::DateTimeFormatter>>(); }
inline ref<java::time::format::DateTimeFormatter> DateTimeFormatter::ISO_LOCAL_DATE_TIME_() { return get_static_field<SCAPIX_META_STRING("ISO_LOCAL_DATE_TIME"), ref<java::time::format::DateTimeFormatter>>(); }
inline ref<java::time::format::DateTimeFormatter> DateTimeFormatter::ISO_LOCAL_TIME_() { return get_static_field<SCAPIX_META_STRING("ISO_LOCAL_TIME"), ref<java::time::format::DateTimeFormatter>>(); }
inline ref<java::time::format::DateTimeFormatter> DateTimeFormatter::ISO_OFFSET_DATE_() { return get_static_field<SCAPIX_META_STRING("ISO_OFFSET_DATE"), ref<java::time::format::DateTimeFormatter>>(); }
inline ref<java::time::format::DateTimeFormatter> DateTimeFormatter::ISO_OFFSET_DATE_TIME_() { return get_static_field<SCAPIX_META_STRING("ISO_OFFSET_DATE_TIME"), ref<java::time::format::DateTimeFormatter>>(); }
inline ref<java::time::format::DateTimeFormatter> DateTimeFormatter::ISO_OFFSET_TIME_() { return get_static_field<SCAPIX_META_STRING("ISO_OFFSET_TIME"), ref<java::time::format::DateTimeFormatter>>(); }
inline ref<java::time::format::DateTimeFormatter> DateTimeFormatter::ISO_ORDINAL_DATE_() { return get_static_field<SCAPIX_META_STRING("ISO_ORDINAL_DATE"), ref<java::time::format::DateTimeFormatter>>(); }
inline ref<java::time::format::DateTimeFormatter> DateTimeFormatter::ISO_TIME_() { return get_static_field<SCAPIX_META_STRING("ISO_TIME"), ref<java::time::format::DateTimeFormatter>>(); }
inline ref<java::time::format::DateTimeFormatter> DateTimeFormatter::ISO_WEEK_DATE_() { return get_static_field<SCAPIX_META_STRING("ISO_WEEK_DATE"), ref<java::time::format::DateTimeFormatter>>(); }
inline ref<java::time::format::DateTimeFormatter> DateTimeFormatter::ISO_ZONED_DATE_TIME_() { return get_static_field<SCAPIX_META_STRING("ISO_ZONED_DATE_TIME"), ref<java::time::format::DateTimeFormatter>>(); }
inline ref<java::time::format::DateTimeFormatter> DateTimeFormatter::RFC_1123_DATE_TIME_() { return get_static_field<SCAPIX_META_STRING("RFC_1123_DATE_TIME"), ref<java::time::format::DateTimeFormatter>>(); }
inline ref<java::time::format::DateTimeFormatter> DateTimeFormatter::ofPattern(ref<java::lang::String> pattern) { return call_static_method<SCAPIX_META_STRING("ofPattern"), ref<java::time::format::DateTimeFormatter>>(pattern); }
inline ref<java::time::format::DateTimeFormatter> DateTimeFormatter::ofPattern(ref<java::lang::String> pattern, ref<java::util::Locale> locale) { return call_static_method<SCAPIX_META_STRING("ofPattern"), ref<java::time::format::DateTimeFormatter>>(pattern, locale); }
inline ref<java::time::format::DateTimeFormatter> DateTimeFormatter::ofLocalizedDate(ref<java::time::format::FormatStyle> dateStyle) { return call_static_method<SCAPIX_META_STRING("ofLocalizedDate"), ref<java::time::format::DateTimeFormatter>>(dateStyle); }
inline ref<java::time::format::DateTimeFormatter> DateTimeFormatter::ofLocalizedTime(ref<java::time::format::FormatStyle> timeStyle) { return call_static_method<SCAPIX_META_STRING("ofLocalizedTime"), ref<java::time::format::DateTimeFormatter>>(timeStyle); }
inline ref<java::time::format::DateTimeFormatter> DateTimeFormatter::ofLocalizedDateTime(ref<java::time::format::FormatStyle> dateTimeStyle) { return call_static_method<SCAPIX_META_STRING("ofLocalizedDateTime"), ref<java::time::format::DateTimeFormatter>>(dateTimeStyle); }
inline ref<java::time::format::DateTimeFormatter> DateTimeFormatter::ofLocalizedDateTime(ref<java::time::format::FormatStyle> dateStyle, ref<java::time::format::FormatStyle> timeStyle) { return call_static_method<SCAPIX_META_STRING("ofLocalizedDateTime"), ref<java::time::format::DateTimeFormatter>>(dateStyle, timeStyle); }
inline ref<java::time::temporal::TemporalQuery> DateTimeFormatter::parsedExcessDays() { return call_static_method<SCAPIX_META_STRING("parsedExcessDays"), ref<java::time::temporal::TemporalQuery>>(); }
inline ref<java::time::temporal::TemporalQuery> DateTimeFormatter::parsedLeapSecond() { return call_static_method<SCAPIX_META_STRING("parsedLeapSecond"), ref<java::time::temporal::TemporalQuery>>(); }
inline ref<java::util::Locale> DateTimeFormatter::getLocale() { return call_method<SCAPIX_META_STRING("getLocale"), ref<java::util::Locale>>(); }
inline ref<java::time::format::DateTimeFormatter> DateTimeFormatter::withLocale(ref<java::util::Locale> locale) { return call_method<SCAPIX_META_STRING("withLocale"), ref<java::time::format::DateTimeFormatter>>(locale); }
inline ref<java::time::format::DecimalStyle> DateTimeFormatter::getDecimalStyle() { return call_method<SCAPIX_META_STRING("getDecimalStyle"), ref<java::time::format::DecimalStyle>>(); }
inline ref<java::time::format::DateTimeFormatter> DateTimeFormatter::withDecimalStyle(ref<java::time::format::DecimalStyle> decimalStyle) { return call_method<SCAPIX_META_STRING("withDecimalStyle"), ref<java::time::format::DateTimeFormatter>>(decimalStyle); }
inline ref<java::time::chrono::Chronology> DateTimeFormatter::getChronology() { return call_method<SCAPIX_META_STRING("getChronology"), ref<java::time::chrono::Chronology>>(); }
inline ref<java::time::format::DateTimeFormatter> DateTimeFormatter::withChronology(ref<java::time::chrono::Chronology> chrono) { return call_method<SCAPIX_META_STRING("withChronology"), ref<java::time::format::DateTimeFormatter>>(chrono); }
inline ref<java::time::ZoneId> DateTimeFormatter::getZone() { return call_method<SCAPIX_META_STRING("getZone"), ref<java::time::ZoneId>>(); }
inline ref<java::time::format::DateTimeFormatter> DateTimeFormatter::withZone(ref<java::time::ZoneId> zone) { return call_method<SCAPIX_META_STRING("withZone"), ref<java::time::format::DateTimeFormatter>>(zone); }
inline ref<java::time::format::ResolverStyle> DateTimeFormatter::getResolverStyle() { return call_method<SCAPIX_META_STRING("getResolverStyle"), ref<java::time::format::ResolverStyle>>(); }
inline ref<java::time::format::DateTimeFormatter> DateTimeFormatter::withResolverStyle(ref<java::time::format::ResolverStyle> resolverStyle) { return call_method<SCAPIX_META_STRING("withResolverStyle"), ref<java::time::format::DateTimeFormatter>>(resolverStyle); }
inline ref<java::util::Set> DateTimeFormatter::getResolverFields() { return call_method<SCAPIX_META_STRING("getResolverFields"), ref<java::util::Set>>(); }
inline ref<java::time::format::DateTimeFormatter> DateTimeFormatter::withResolverFields(ref<link::java::array<java::time::temporal::TemporalField>> resolverFields) { return call_method<SCAPIX_META_STRING("withResolverFields"), ref<java::time::format::DateTimeFormatter>>(resolverFields); }
inline ref<java::time::format::DateTimeFormatter> DateTimeFormatter::withResolverFields(ref<java::util::Set> resolverFields) { return call_method<SCAPIX_META_STRING("withResolverFields"), ref<java::time::format::DateTimeFormatter>>(resolverFields); }
inline ref<java::lang::String> DateTimeFormatter::format(ref<java::time::temporal::TemporalAccessor> temporal) { return call_method<SCAPIX_META_STRING("format"), ref<java::lang::String>>(temporal); }
inline void DateTimeFormatter::formatTo(ref<java::time::temporal::TemporalAccessor> temporal, ref<java::lang::Appendable> appendable) { return call_method<SCAPIX_META_STRING("formatTo"), void>(temporal, appendable); }
inline ref<java::time::temporal::TemporalAccessor> DateTimeFormatter::parse(ref<java::lang::CharSequence> text) { return call_method<SCAPIX_META_STRING("parse"), ref<java::time::temporal::TemporalAccessor>>(text); }
inline ref<java::time::temporal::TemporalAccessor> DateTimeFormatter::parse(ref<java::lang::CharSequence> text, ref<java::text::ParsePosition> position) { return call_method<SCAPIX_META_STRING("parse"), ref<java::time::temporal::TemporalAccessor>>(text, position); }
inline ref<java::lang::Object> DateTimeFormatter::parse(ref<java::lang::CharSequence> text, ref<java::time::temporal::TemporalQuery> query) { return call_method<SCAPIX_META_STRING("parse"), ref<java::lang::Object>>(text, query); }
inline ref<java::time::temporal::TemporalAccessor> DateTimeFormatter::parseBest(ref<java::lang::CharSequence> text, ref<link::java::array<java::time::temporal::TemporalQuery>> queries) { return call_method<SCAPIX_META_STRING("parseBest"), ref<java::time::temporal::TemporalAccessor>>(text, queries); }
inline ref<java::time::temporal::TemporalAccessor> DateTimeFormatter::parseUnresolved(ref<java::lang::CharSequence> text, ref<java::text::ParsePosition> position) { return call_method<SCAPIX_META_STRING("parseUnresolved"), ref<java::time::temporal::TemporalAccessor>>(text, position); }
inline ref<java::text::Format> DateTimeFormatter::toFormat() { return call_method<SCAPIX_META_STRING("toFormat"), ref<java::text::Format>>(); }
inline ref<java::text::Format> DateTimeFormatter::toFormat(ref<java::time::temporal::TemporalQuery> parseQuery) { return call_method<SCAPIX_META_STRING("toFormat"), ref<java::text::Format>>(parseQuery); }
inline ref<java::lang::String> DateTimeFormatter::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }

} // namespace java::time::format
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_TIME_FORMAT_DATETIMEFORMATTER_H
