// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/time/temporal/Temporal.h>
#include <scapix/java_api/java/time/temporal/TemporalAdjuster.h>
#include <scapix/java_api/java/lang/Comparable.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_TIME_INSTANT_H
#define SCAPIX_JAVA_TIME_INSTANT_H

namespace scapix::java_api {

namespace java::lang { class CharSequence; }
namespace java::lang { class String; }
namespace java::time { class Clock; }
namespace java::time { class OffsetDateTime; }
namespace java::time { class ZoneId; }
namespace java::time { class ZoneOffset; }
namespace java::time { class ZonedDateTime; }
namespace java::time::temporal { class TemporalAccessor; }
namespace java::time::temporal { class TemporalAmount; }
namespace java::time::temporal { class TemporalField; }
namespace java::time::temporal { class TemporalQuery; }
namespace java::time::temporal { class TemporalUnit; }
namespace java::time::temporal { class ValueRange; }

namespace java::time {

class Instant : public object_base<SCAPIX_META_STRING("java/time/Instant"),
	java::lang::Object,
	java::time::temporal::Temporal,
	java::time::temporal::TemporalAdjuster,
	java::lang::Comparable,
	java::io::Serializable>
{
public:

	static ref<java::time::Instant> EPOCH_();
	static ref<java::time::Instant> MAX_();
	static ref<java::time::Instant> MIN_();

	static ref<java::time::Instant> now();
	static ref<java::time::Instant> now(ref<java::time::Clock> clock);
	static ref<java::time::Instant> ofEpochSecond(jlong epochSecond);
	static ref<java::time::Instant> ofEpochSecond(jlong epochSecond, jlong p2);
	static ref<java::time::Instant> ofEpochMilli(jlong epochMilli);
	static ref<java::time::Instant> from(ref<java::time::temporal::TemporalAccessor> temporal);
	static ref<java::time::Instant> parse(ref<java::lang::CharSequence> text);
	jboolean isSupported(ref<java::time::temporal::TemporalField> field);
	jboolean isSupported(ref<java::time::temporal::TemporalUnit> unit);
	ref<java::time::temporal::ValueRange> range(ref<java::time::temporal::TemporalField> field);
	jint get(ref<java::time::temporal::TemporalField> field);
	jlong getLong(ref<java::time::temporal::TemporalField> field);
	jlong getEpochSecond();
	jint getNano();
	ref<java::time::Instant> with(ref<java::time::temporal::TemporalAdjuster> adjuster);
	ref<java::time::Instant> with(ref<java::time::temporal::TemporalField> field, jlong newValue);
	ref<java::time::Instant> truncatedTo(ref<java::time::temporal::TemporalUnit> unit);
	ref<java::time::Instant> plus(ref<java::time::temporal::TemporalAmount> amountToAdd);
	ref<java::time::Instant> plus(jlong amountToAdd, ref<java::time::temporal::TemporalUnit> p2);
	ref<java::time::Instant> plusSeconds(jlong secondsToAdd);
	ref<java::time::Instant> plusMillis(jlong millisToAdd);
	ref<java::time::Instant> plusNanos(jlong nanosToAdd);
	ref<java::time::Instant> minus(ref<java::time::temporal::TemporalAmount> amountToSubtract);
	ref<java::time::Instant> minus(jlong amountToSubtract, ref<java::time::temporal::TemporalUnit> p2);
	ref<java::time::Instant> minusSeconds(jlong secondsToSubtract);
	ref<java::time::Instant> minusMillis(jlong millisToSubtract);
	ref<java::time::Instant> minusNanos(jlong nanosToSubtract);
	ref<java::lang::Object> query(ref<java::time::temporal::TemporalQuery> query);
	ref<java::time::temporal::Temporal> adjustInto(ref<java::time::temporal::Temporal> temporal);
	jlong until(ref<java::time::temporal::Temporal> endExclusive, ref<java::time::temporal::TemporalUnit> unit);
	ref<java::time::OffsetDateTime> atOffset(ref<java::time::ZoneOffset> offset);
	ref<java::time::ZonedDateTime> atZone(ref<java::time::ZoneId> zone);
	jlong toEpochMilli();
	jint compareTo(ref<java::time::Instant> otherInstant);
	jboolean isAfter(ref<java::time::Instant> otherInstant);
	jboolean isBefore(ref<java::time::Instant> otherInstant);
	jboolean equals(ref<java::lang::Object> otherInstant);
	jint hashCode();
	ref<java::lang::String> toString();

protected:

	Instant(handle_type h) : base_(h) {}

};

} // namespace java::time
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/time/Clock.h>
#include <scapix/java_api/java/time/OffsetDateTime.h>
#include <scapix/java_api/java/time/ZoneId.h>
#include <scapix/java_api/java/time/ZoneOffset.h>
#include <scapix/java_api/java/time/ZonedDateTime.h>
#include <scapix/java_api/java/time/temporal/TemporalAccessor.h>
#include <scapix/java_api/java/time/temporal/TemporalAmount.h>
#include <scapix/java_api/java/time/temporal/TemporalField.h>
#include <scapix/java_api/java/time/temporal/TemporalQuery.h>
#include <scapix/java_api/java/time/temporal/TemporalUnit.h>
#include <scapix/java_api/java/time/temporal/ValueRange.h>

namespace scapix::java_api {
namespace java::time {

inline ref<java::time::Instant> Instant::EPOCH_() { return get_static_field<SCAPIX_META_STRING("EPOCH"), ref<java::time::Instant>>(); }
inline ref<java::time::Instant> Instant::MAX_() { return get_static_field<SCAPIX_META_STRING("MAX"), ref<java::time::Instant>>(); }
inline ref<java::time::Instant> Instant::MIN_() { return get_static_field<SCAPIX_META_STRING("MIN"), ref<java::time::Instant>>(); }
inline ref<java::time::Instant> Instant::now() { return call_static_method<SCAPIX_META_STRING("now"), ref<java::time::Instant>>(); }
inline ref<java::time::Instant> Instant::now(ref<java::time::Clock> clock) { return call_static_method<SCAPIX_META_STRING("now"), ref<java::time::Instant>>(clock); }
inline ref<java::time::Instant> Instant::ofEpochSecond(jlong epochSecond) { return call_static_method<SCAPIX_META_STRING("ofEpochSecond"), ref<java::time::Instant>>(epochSecond); }
inline ref<java::time::Instant> Instant::ofEpochSecond(jlong epochSecond, jlong p2) { return call_static_method<SCAPIX_META_STRING("ofEpochSecond"), ref<java::time::Instant>>(epochSecond, p2); }
inline ref<java::time::Instant> Instant::ofEpochMilli(jlong epochMilli) { return call_static_method<SCAPIX_META_STRING("ofEpochMilli"), ref<java::time::Instant>>(epochMilli); }
inline ref<java::time::Instant> Instant::from(ref<java::time::temporal::TemporalAccessor> temporal) { return call_static_method<SCAPIX_META_STRING("from"), ref<java::time::Instant>>(temporal); }
inline ref<java::time::Instant> Instant::parse(ref<java::lang::CharSequence> text) { return call_static_method<SCAPIX_META_STRING("parse"), ref<java::time::Instant>>(text); }
inline jboolean Instant::isSupported(ref<java::time::temporal::TemporalField> field) { return call_method<SCAPIX_META_STRING("isSupported"), jboolean>(field); }
inline jboolean Instant::isSupported(ref<java::time::temporal::TemporalUnit> unit) { return call_method<SCAPIX_META_STRING("isSupported"), jboolean>(unit); }
inline ref<java::time::temporal::ValueRange> Instant::range(ref<java::time::temporal::TemporalField> field) { return call_method<SCAPIX_META_STRING("range"), ref<java::time::temporal::ValueRange>>(field); }
inline jint Instant::get(ref<java::time::temporal::TemporalField> field) { return call_method<SCAPIX_META_STRING("get"), jint>(field); }
inline jlong Instant::getLong(ref<java::time::temporal::TemporalField> field) { return call_method<SCAPIX_META_STRING("getLong"), jlong>(field); }
inline jlong Instant::getEpochSecond() { return call_method<SCAPIX_META_STRING("getEpochSecond"), jlong>(); }
inline jint Instant::getNano() { return call_method<SCAPIX_META_STRING("getNano"), jint>(); }
inline ref<java::time::Instant> Instant::with(ref<java::time::temporal::TemporalAdjuster> adjuster) { return call_method<SCAPIX_META_STRING("with"), ref<java::time::Instant>>(adjuster); }
inline ref<java::time::Instant> Instant::with(ref<java::time::temporal::TemporalField> field, jlong newValue) { return call_method<SCAPIX_META_STRING("with"), ref<java::time::Instant>>(field, newValue); }
inline ref<java::time::Instant> Instant::truncatedTo(ref<java::time::temporal::TemporalUnit> unit) { return call_method<SCAPIX_META_STRING("truncatedTo"), ref<java::time::Instant>>(unit); }
inline ref<java::time::Instant> Instant::plus(ref<java::time::temporal::TemporalAmount> amountToAdd) { return call_method<SCAPIX_META_STRING("plus"), ref<java::time::Instant>>(amountToAdd); }
inline ref<java::time::Instant> Instant::plus(jlong amountToAdd, ref<java::time::temporal::TemporalUnit> p2) { return call_method<SCAPIX_META_STRING("plus"), ref<java::time::Instant>>(amountToAdd, p2); }
inline ref<java::time::Instant> Instant::plusSeconds(jlong secondsToAdd) { return call_method<SCAPIX_META_STRING("plusSeconds"), ref<java::time::Instant>>(secondsToAdd); }
inline ref<java::time::Instant> Instant::plusMillis(jlong millisToAdd) { return call_method<SCAPIX_META_STRING("plusMillis"), ref<java::time::Instant>>(millisToAdd); }
inline ref<java::time::Instant> Instant::plusNanos(jlong nanosToAdd) { return call_method<SCAPIX_META_STRING("plusNanos"), ref<java::time::Instant>>(nanosToAdd); }
inline ref<java::time::Instant> Instant::minus(ref<java::time::temporal::TemporalAmount> amountToSubtract) { return call_method<SCAPIX_META_STRING("minus"), ref<java::time::Instant>>(amountToSubtract); }
inline ref<java::time::Instant> Instant::minus(jlong amountToSubtract, ref<java::time::temporal::TemporalUnit> p2) { return call_method<SCAPIX_META_STRING("minus"), ref<java::time::Instant>>(amountToSubtract, p2); }
inline ref<java::time::Instant> Instant::minusSeconds(jlong secondsToSubtract) { return call_method<SCAPIX_META_STRING("minusSeconds"), ref<java::time::Instant>>(secondsToSubtract); }
inline ref<java::time::Instant> Instant::minusMillis(jlong millisToSubtract) { return call_method<SCAPIX_META_STRING("minusMillis"), ref<java::time::Instant>>(millisToSubtract); }
inline ref<java::time::Instant> Instant::minusNanos(jlong nanosToSubtract) { return call_method<SCAPIX_META_STRING("minusNanos"), ref<java::time::Instant>>(nanosToSubtract); }
inline ref<java::lang::Object> Instant::query(ref<java::time::temporal::TemporalQuery> query) { return call_method<SCAPIX_META_STRING("query"), ref<java::lang::Object>>(query); }
inline ref<java::time::temporal::Temporal> Instant::adjustInto(ref<java::time::temporal::Temporal> temporal) { return call_method<SCAPIX_META_STRING("adjustInto"), ref<java::time::temporal::Temporal>>(temporal); }
inline jlong Instant::until(ref<java::time::temporal::Temporal> endExclusive, ref<java::time::temporal::TemporalUnit> unit) { return call_method<SCAPIX_META_STRING("until"), jlong>(endExclusive, unit); }
inline ref<java::time::OffsetDateTime> Instant::atOffset(ref<java::time::ZoneOffset> offset) { return call_method<SCAPIX_META_STRING("atOffset"), ref<java::time::OffsetDateTime>>(offset); }
inline ref<java::time::ZonedDateTime> Instant::atZone(ref<java::time::ZoneId> zone) { return call_method<SCAPIX_META_STRING("atZone"), ref<java::time::ZonedDateTime>>(zone); }
inline jlong Instant::toEpochMilli() { return call_method<SCAPIX_META_STRING("toEpochMilli"), jlong>(); }
inline jint Instant::compareTo(ref<java::time::Instant> otherInstant) { return call_method<SCAPIX_META_STRING("compareTo"), jint>(otherInstant); }
inline jboolean Instant::isAfter(ref<java::time::Instant> otherInstant) { return call_method<SCAPIX_META_STRING("isAfter"), jboolean>(otherInstant); }
inline jboolean Instant::isBefore(ref<java::time::Instant> otherInstant) { return call_method<SCAPIX_META_STRING("isBefore"), jboolean>(otherInstant); }
inline jboolean Instant::equals(ref<java::lang::Object> otherInstant) { return call_method<SCAPIX_META_STRING("equals"), jboolean>(otherInstant); }
inline jint Instant::hashCode() { return call_method<SCAPIX_META_STRING("hashCode"), jint>(); }
inline ref<java::lang::String> Instant::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }

} // namespace java::time
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_TIME_INSTANT_H
