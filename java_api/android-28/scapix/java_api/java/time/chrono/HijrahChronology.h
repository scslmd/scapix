// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/time/chrono/AbstractChronology.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_TIME_CHRONO_HIJRAHCHRONOLOGY_H
#define SCAPIX_JAVA_TIME_CHRONO_HIJRAHCHRONOLOGY_H

namespace scapix::java_api {

namespace java::lang { class String; }
namespace java::time { class Clock; }
namespace java::time { class Instant; }
namespace java::time { class ZoneId; }
namespace java::time::chrono { class ChronoLocalDateTime; }
namespace java::time::chrono { class ChronoZonedDateTime; }
namespace java::time::chrono { class Era; }
namespace java::time::chrono { class HijrahDate; }
namespace java::time::chrono { class HijrahEra; }
namespace java::time::format { class ResolverStyle; }
namespace java::time::temporal { class ChronoField; }
namespace java::time::temporal { class TemporalAccessor; }
namespace java::time::temporal { class ValueRange; }
namespace java::util { class List; }
namespace java::util { class Map; }

namespace java::time::chrono {

class HijrahChronology : public object_base<SCAPIX_META_STRING("java/time/chrono/HijrahChronology"),
	java::time::chrono::AbstractChronology,
	java::io::Serializable>
{
public:

	static ref<java::time::chrono::HijrahChronology> INSTANCE_();

	ref<java::lang::String> getId();
	ref<java::lang::String> getCalendarType();
	ref<java::time::chrono::HijrahDate> date(ref<java::time::chrono::Era> era, jint yearOfEra, jint month, jint dayOfMonth);
	ref<java::time::chrono::HijrahDate> date(jint prolepticYear, jint month, jint dayOfMonth);
	ref<java::time::chrono::HijrahDate> dateYearDay(ref<java::time::chrono::Era> era, jint yearOfEra, jint dayOfYear);
	ref<java::time::chrono::HijrahDate> dateYearDay(jint prolepticYear, jint dayOfYear);
	ref<java::time::chrono::HijrahDate> dateEpochDay(jlong epochDay);
	ref<java::time::chrono::HijrahDate> dateNow();
	ref<java::time::chrono::HijrahDate> dateNow(ref<java::time::ZoneId> zone);
	ref<java::time::chrono::HijrahDate> dateNow(ref<java::time::Clock> clock);
	ref<java::time::chrono::HijrahDate> date(ref<java::time::temporal::TemporalAccessor> temporal);
	ref<java::time::chrono::ChronoLocalDateTime> localDateTime(ref<java::time::temporal::TemporalAccessor> temporal);
	ref<java::time::chrono::ChronoZonedDateTime> zonedDateTime(ref<java::time::temporal::TemporalAccessor> temporal);
	ref<java::time::chrono::ChronoZonedDateTime> zonedDateTime(ref<java::time::Instant> instant, ref<java::time::ZoneId> zone);
	jboolean isLeapYear(jlong prolepticYear);
	jint prolepticYear(ref<java::time::chrono::Era> era, jint yearOfEra);
	ref<java::time::chrono::HijrahEra> eraOf(jint eraValue);
	ref<java::util::List> eras();
	ref<java::time::temporal::ValueRange> range(ref<java::time::temporal::ChronoField> field);
	ref<java::time::chrono::HijrahDate> resolveDate(ref<java::util::Map> fieldValues, ref<java::time::format::ResolverStyle> resolverStyle);

protected:

	HijrahChronology(handle_type h) : base_(h) {}

};

} // namespace java::time::chrono
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/time/Clock.h>
#include <scapix/java_api/java/time/Instant.h>
#include <scapix/java_api/java/time/ZoneId.h>
#include <scapix/java_api/java/time/chrono/ChronoLocalDateTime.h>
#include <scapix/java_api/java/time/chrono/ChronoZonedDateTime.h>
#include <scapix/java_api/java/time/chrono/Era.h>
#include <scapix/java_api/java/time/chrono/HijrahDate.h>
#include <scapix/java_api/java/time/chrono/HijrahEra.h>
#include <scapix/java_api/java/time/format/ResolverStyle.h>
#include <scapix/java_api/java/time/temporal/ChronoField.h>
#include <scapix/java_api/java/time/temporal/TemporalAccessor.h>
#include <scapix/java_api/java/time/temporal/ValueRange.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/java/util/Map.h>

namespace scapix::java_api {
namespace java::time::chrono {

inline ref<java::time::chrono::HijrahChronology> HijrahChronology::INSTANCE_() { return get_static_field<SCAPIX_META_STRING("INSTANCE"), ref<java::time::chrono::HijrahChronology>>(); }
inline ref<java::lang::String> HijrahChronology::getId() { return call_method<SCAPIX_META_STRING("getId"), ref<java::lang::String>>(); }
inline ref<java::lang::String> HijrahChronology::getCalendarType() { return call_method<SCAPIX_META_STRING("getCalendarType"), ref<java::lang::String>>(); }
inline ref<java::time::chrono::HijrahDate> HijrahChronology::date(ref<java::time::chrono::Era> era, jint yearOfEra, jint month, jint dayOfMonth) { return call_method<SCAPIX_META_STRING("date"), ref<java::time::chrono::HijrahDate>>(era, yearOfEra, month, dayOfMonth); }
inline ref<java::time::chrono::HijrahDate> HijrahChronology::date(jint prolepticYear, jint month, jint dayOfMonth) { return call_method<SCAPIX_META_STRING("date"), ref<java::time::chrono::HijrahDate>>(prolepticYear, month, dayOfMonth); }
inline ref<java::time::chrono::HijrahDate> HijrahChronology::dateYearDay(ref<java::time::chrono::Era> era, jint yearOfEra, jint dayOfYear) { return call_method<SCAPIX_META_STRING("dateYearDay"), ref<java::time::chrono::HijrahDate>>(era, yearOfEra, dayOfYear); }
inline ref<java::time::chrono::HijrahDate> HijrahChronology::dateYearDay(jint prolepticYear, jint dayOfYear) { return call_method<SCAPIX_META_STRING("dateYearDay"), ref<java::time::chrono::HijrahDate>>(prolepticYear, dayOfYear); }
inline ref<java::time::chrono::HijrahDate> HijrahChronology::dateEpochDay(jlong epochDay) { return call_method<SCAPIX_META_STRING("dateEpochDay"), ref<java::time::chrono::HijrahDate>>(epochDay); }
inline ref<java::time::chrono::HijrahDate> HijrahChronology::dateNow() { return call_method<SCAPIX_META_STRING("dateNow"), ref<java::time::chrono::HijrahDate>>(); }
inline ref<java::time::chrono::HijrahDate> HijrahChronology::dateNow(ref<java::time::ZoneId> zone) { return call_method<SCAPIX_META_STRING("dateNow"), ref<java::time::chrono::HijrahDate>>(zone); }
inline ref<java::time::chrono::HijrahDate> HijrahChronology::dateNow(ref<java::time::Clock> clock) { return call_method<SCAPIX_META_STRING("dateNow"), ref<java::time::chrono::HijrahDate>>(clock); }
inline ref<java::time::chrono::HijrahDate> HijrahChronology::date(ref<java::time::temporal::TemporalAccessor> temporal) { return call_method<SCAPIX_META_STRING("date"), ref<java::time::chrono::HijrahDate>>(temporal); }
inline ref<java::time::chrono::ChronoLocalDateTime> HijrahChronology::localDateTime(ref<java::time::temporal::TemporalAccessor> temporal) { return call_method<SCAPIX_META_STRING("localDateTime"), ref<java::time::chrono::ChronoLocalDateTime>>(temporal); }
inline ref<java::time::chrono::ChronoZonedDateTime> HijrahChronology::zonedDateTime(ref<java::time::temporal::TemporalAccessor> temporal) { return call_method<SCAPIX_META_STRING("zonedDateTime"), ref<java::time::chrono::ChronoZonedDateTime>>(temporal); }
inline ref<java::time::chrono::ChronoZonedDateTime> HijrahChronology::zonedDateTime(ref<java::time::Instant> instant, ref<java::time::ZoneId> zone) { return call_method<SCAPIX_META_STRING("zonedDateTime"), ref<java::time::chrono::ChronoZonedDateTime>>(instant, zone); }
inline jboolean HijrahChronology::isLeapYear(jlong prolepticYear) { return call_method<SCAPIX_META_STRING("isLeapYear"), jboolean>(prolepticYear); }
inline jint HijrahChronology::prolepticYear(ref<java::time::chrono::Era> era, jint yearOfEra) { return call_method<SCAPIX_META_STRING("prolepticYear"), jint>(era, yearOfEra); }
inline ref<java::time::chrono::HijrahEra> HijrahChronology::eraOf(jint eraValue) { return call_method<SCAPIX_META_STRING("eraOf"), ref<java::time::chrono::HijrahEra>>(eraValue); }
inline ref<java::util::List> HijrahChronology::eras() { return call_method<SCAPIX_META_STRING("eras"), ref<java::util::List>>(); }
inline ref<java::time::temporal::ValueRange> HijrahChronology::range(ref<java::time::temporal::ChronoField> field) { return call_method<SCAPIX_META_STRING("range"), ref<java::time::temporal::ValueRange>>(field); }
inline ref<java::time::chrono::HijrahDate> HijrahChronology::resolveDate(ref<java::util::Map> fieldValues, ref<java::time::format::ResolverStyle> resolverStyle) { return call_method<SCAPIX_META_STRING("resolveDate"), ref<java::time::chrono::HijrahDate>>(fieldValues, resolverStyle); }

} // namespace java::time::chrono
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_TIME_CHRONO_HIJRAHCHRONOLOGY_H
