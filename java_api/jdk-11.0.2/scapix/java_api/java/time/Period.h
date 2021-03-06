// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/time/chrono/ChronoPeriod.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_TIME_PERIOD_H
#define SCAPIX_JAVA_TIME_PERIOD_H

namespace scapix::java_api {

namespace java::lang { class CharSequence; }
namespace java::lang { class String; }
namespace java::time { class LocalDate; }
namespace java::time::chrono { class IsoChronology; }
namespace java::time::temporal { class Temporal; }
namespace java::time::temporal { class TemporalAmount; }
namespace java::time::temporal { class TemporalUnit; }
namespace java::util { class List; }

namespace java::time {

class Period : public object_base<SCAPIX_META_STRING("java/time/Period"),
	java::lang::Object,
	java::time::chrono::ChronoPeriod,
	java::io::Serializable>
{
public:

	static ref<java::time::Period> ZERO_();

	static ref<java::time::Period> ofYears(jint years);
	static ref<java::time::Period> ofMonths(jint months);
	static ref<java::time::Period> ofWeeks(jint weeks);
	static ref<java::time::Period> ofDays(jint days);
	static ref<java::time::Period> of(jint years, jint months, jint days);
	static ref<java::time::Period> from(ref<java::time::temporal::TemporalAmount> amount);
	static ref<java::time::Period> parse(ref<java::lang::CharSequence> text);
	static ref<java::time::Period> between(ref<java::time::LocalDate> startDateInclusive, ref<java::time::LocalDate> endDateExclusive);
	jlong get(ref<java::time::temporal::TemporalUnit> unit);
	ref<java::util::List> getUnits();
	ref<java::time::chrono::IsoChronology> getChronology();
	jboolean isZero();
	jboolean isNegative();
	jint getYears();
	jint getMonths();
	jint getDays();
	ref<java::time::Period> withYears(jint years);
	ref<java::time::Period> withMonths(jint months);
	ref<java::time::Period> withDays(jint days);
	ref<java::time::Period> plus(ref<java::time::temporal::TemporalAmount> amountToAdd);
	ref<java::time::Period> plusYears(jlong yearsToAdd);
	ref<java::time::Period> plusMonths(jlong monthsToAdd);
	ref<java::time::Period> plusDays(jlong daysToAdd);
	ref<java::time::Period> minus(ref<java::time::temporal::TemporalAmount> amountToSubtract);
	ref<java::time::Period> minusYears(jlong yearsToSubtract);
	ref<java::time::Period> minusMonths(jlong monthsToSubtract);
	ref<java::time::Period> minusDays(jlong daysToSubtract);
	ref<java::time::Period> multipliedBy(jint scalar);
	ref<java::time::Period> negated();
	ref<java::time::Period> normalized();
	jlong toTotalMonths();
	ref<java::time::temporal::Temporal> addTo(ref<java::time::temporal::Temporal> temporal);
	ref<java::time::temporal::Temporal> subtractFrom(ref<java::time::temporal::Temporal> temporal);
	jboolean equals(ref<java::lang::Object> obj);
	jint hashCode();
	ref<java::lang::String> toString();

protected:

	Period(handle_type h) : base_(h) {}

};

} // namespace java::time
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/time/LocalDate.h>
#include <scapix/java_api/java/time/chrono/IsoChronology.h>
#include <scapix/java_api/java/time/temporal/Temporal.h>
#include <scapix/java_api/java/time/temporal/TemporalAmount.h>
#include <scapix/java_api/java/time/temporal/TemporalUnit.h>
#include <scapix/java_api/java/util/List.h>

namespace scapix::java_api {
namespace java::time {

inline ref<java::time::Period> Period::ZERO_() { return get_static_field<SCAPIX_META_STRING("ZERO"), ref<java::time::Period>>(); }
inline ref<java::time::Period> Period::ofYears(jint years) { return call_static_method<SCAPIX_META_STRING("ofYears"), ref<java::time::Period>>(years); }
inline ref<java::time::Period> Period::ofMonths(jint months) { return call_static_method<SCAPIX_META_STRING("ofMonths"), ref<java::time::Period>>(months); }
inline ref<java::time::Period> Period::ofWeeks(jint weeks) { return call_static_method<SCAPIX_META_STRING("ofWeeks"), ref<java::time::Period>>(weeks); }
inline ref<java::time::Period> Period::ofDays(jint days) { return call_static_method<SCAPIX_META_STRING("ofDays"), ref<java::time::Period>>(days); }
inline ref<java::time::Period> Period::of(jint years, jint months, jint days) { return call_static_method<SCAPIX_META_STRING("of"), ref<java::time::Period>>(years, months, days); }
inline ref<java::time::Period> Period::from(ref<java::time::temporal::TemporalAmount> amount) { return call_static_method<SCAPIX_META_STRING("from"), ref<java::time::Period>>(amount); }
inline ref<java::time::Period> Period::parse(ref<java::lang::CharSequence> text) { return call_static_method<SCAPIX_META_STRING("parse"), ref<java::time::Period>>(text); }
inline ref<java::time::Period> Period::between(ref<java::time::LocalDate> startDateInclusive, ref<java::time::LocalDate> endDateExclusive) { return call_static_method<SCAPIX_META_STRING("between"), ref<java::time::Period>>(startDateInclusive, endDateExclusive); }
inline jlong Period::get(ref<java::time::temporal::TemporalUnit> unit) { return call_method<SCAPIX_META_STRING("get"), jlong>(unit); }
inline ref<java::util::List> Period::getUnits() { return call_method<SCAPIX_META_STRING("getUnits"), ref<java::util::List>>(); }
inline ref<java::time::chrono::IsoChronology> Period::getChronology() { return call_method<SCAPIX_META_STRING("getChronology"), ref<java::time::chrono::IsoChronology>>(); }
inline jboolean Period::isZero() { return call_method<SCAPIX_META_STRING("isZero"), jboolean>(); }
inline jboolean Period::isNegative() { return call_method<SCAPIX_META_STRING("isNegative"), jboolean>(); }
inline jint Period::getYears() { return call_method<SCAPIX_META_STRING("getYears"), jint>(); }
inline jint Period::getMonths() { return call_method<SCAPIX_META_STRING("getMonths"), jint>(); }
inline jint Period::getDays() { return call_method<SCAPIX_META_STRING("getDays"), jint>(); }
inline ref<java::time::Period> Period::withYears(jint years) { return call_method<SCAPIX_META_STRING("withYears"), ref<java::time::Period>>(years); }
inline ref<java::time::Period> Period::withMonths(jint months) { return call_method<SCAPIX_META_STRING("withMonths"), ref<java::time::Period>>(months); }
inline ref<java::time::Period> Period::withDays(jint days) { return call_method<SCAPIX_META_STRING("withDays"), ref<java::time::Period>>(days); }
inline ref<java::time::Period> Period::plus(ref<java::time::temporal::TemporalAmount> amountToAdd) { return call_method<SCAPIX_META_STRING("plus"), ref<java::time::Period>>(amountToAdd); }
inline ref<java::time::Period> Period::plusYears(jlong yearsToAdd) { return call_method<SCAPIX_META_STRING("plusYears"), ref<java::time::Period>>(yearsToAdd); }
inline ref<java::time::Period> Period::plusMonths(jlong monthsToAdd) { return call_method<SCAPIX_META_STRING("plusMonths"), ref<java::time::Period>>(monthsToAdd); }
inline ref<java::time::Period> Period::plusDays(jlong daysToAdd) { return call_method<SCAPIX_META_STRING("plusDays"), ref<java::time::Period>>(daysToAdd); }
inline ref<java::time::Period> Period::minus(ref<java::time::temporal::TemporalAmount> amountToSubtract) { return call_method<SCAPIX_META_STRING("minus"), ref<java::time::Period>>(amountToSubtract); }
inline ref<java::time::Period> Period::minusYears(jlong yearsToSubtract) { return call_method<SCAPIX_META_STRING("minusYears"), ref<java::time::Period>>(yearsToSubtract); }
inline ref<java::time::Period> Period::minusMonths(jlong monthsToSubtract) { return call_method<SCAPIX_META_STRING("minusMonths"), ref<java::time::Period>>(monthsToSubtract); }
inline ref<java::time::Period> Period::minusDays(jlong daysToSubtract) { return call_method<SCAPIX_META_STRING("minusDays"), ref<java::time::Period>>(daysToSubtract); }
inline ref<java::time::Period> Period::multipliedBy(jint scalar) { return call_method<SCAPIX_META_STRING("multipliedBy"), ref<java::time::Period>>(scalar); }
inline ref<java::time::Period> Period::negated() { return call_method<SCAPIX_META_STRING("negated"), ref<java::time::Period>>(); }
inline ref<java::time::Period> Period::normalized() { return call_method<SCAPIX_META_STRING("normalized"), ref<java::time::Period>>(); }
inline jlong Period::toTotalMonths() { return call_method<SCAPIX_META_STRING("toTotalMonths"), jlong>(); }
inline ref<java::time::temporal::Temporal> Period::addTo(ref<java::time::temporal::Temporal> temporal) { return call_method<SCAPIX_META_STRING("addTo"), ref<java::time::temporal::Temporal>>(temporal); }
inline ref<java::time::temporal::Temporal> Period::subtractFrom(ref<java::time::temporal::Temporal> temporal) { return call_method<SCAPIX_META_STRING("subtractFrom"), ref<java::time::temporal::Temporal>>(temporal); }
inline jboolean Period::equals(ref<java::lang::Object> obj) { return call_method<SCAPIX_META_STRING("equals"), jboolean>(obj); }
inline jint Period::hashCode() { return call_method<SCAPIX_META_STRING("hashCode"), jint>(); }
inline ref<java::lang::String> Period::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }

} // namespace java::time
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_TIME_PERIOD_H
