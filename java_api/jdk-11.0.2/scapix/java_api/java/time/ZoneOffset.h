// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/time/ZoneId.h>
#include <scapix/java_api/java/time/temporal/TemporalAccessor.h>
#include <scapix/java_api/java/time/temporal/TemporalAdjuster.h>
#include <scapix/java_api/java/lang/Comparable.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_TIME_ZONEOFFSET_H
#define SCAPIX_JAVA_TIME_ZONEOFFSET_H

namespace scapix::java_api {

namespace java::lang { class Object; }
namespace java::lang { class String; }
namespace java::time::temporal { class Temporal; }
namespace java::time::temporal { class TemporalField; }
namespace java::time::temporal { class TemporalQuery; }
namespace java::time::temporal { class ValueRange; }
namespace java::time::zone { class ZoneRules; }

namespace java::time {

class ZoneOffset : public object_base<SCAPIX_META_STRING("java/time/ZoneOffset"),
	java::time::ZoneId,
	java::time::temporal::TemporalAccessor,
	java::time::temporal::TemporalAdjuster,
	java::lang::Comparable,
	java::io::Serializable>
{
public:

	static ref<java::time::ZoneOffset> UTC_();
	static ref<java::time::ZoneOffset> MIN_();
	static ref<java::time::ZoneOffset> MAX_();

	static ref<java::time::ZoneOffset> of(ref<java::lang::String> offsetId);
	static ref<java::time::ZoneOffset> ofHours(jint hours);
	static ref<java::time::ZoneOffset> ofHoursMinutes(jint hours, jint minutes);
	static ref<java::time::ZoneOffset> ofHoursMinutesSeconds(jint hours, jint minutes, jint seconds);
	static ref<java::time::ZoneOffset> from(ref<java::time::temporal::TemporalAccessor> temporal);
	static ref<java::time::ZoneOffset> ofTotalSeconds(jint totalSeconds);
	jint getTotalSeconds();
	ref<java::lang::String> getId();
	ref<java::time::zone::ZoneRules> getRules();
	jboolean isSupported(ref<java::time::temporal::TemporalField> field);
	ref<java::time::temporal::ValueRange> range(ref<java::time::temporal::TemporalField> field);
	jint get(ref<java::time::temporal::TemporalField> field);
	jlong getLong(ref<java::time::temporal::TemporalField> field);
	ref<java::lang::Object> query(ref<java::time::temporal::TemporalQuery> query);
	ref<java::time::temporal::Temporal> adjustInto(ref<java::time::temporal::Temporal> temporal);
	jint compareTo(ref<java::time::ZoneOffset> other);
	jboolean equals(ref<java::lang::Object> obj);
	jint hashCode();
	ref<java::lang::String> toString();

protected:

	ZoneOffset(handle_type h) : base_(h) {}

};

} // namespace java::time
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/time/temporal/Temporal.h>
#include <scapix/java_api/java/time/temporal/TemporalField.h>
#include <scapix/java_api/java/time/temporal/TemporalQuery.h>
#include <scapix/java_api/java/time/temporal/ValueRange.h>
#include <scapix/java_api/java/time/zone/ZoneRules.h>

namespace scapix::java_api {
namespace java::time {

inline ref<java::time::ZoneOffset> ZoneOffset::UTC_() { return get_static_field<SCAPIX_META_STRING("UTC"), ref<java::time::ZoneOffset>>(); }
inline ref<java::time::ZoneOffset> ZoneOffset::MIN_() { return get_static_field<SCAPIX_META_STRING("MIN"), ref<java::time::ZoneOffset>>(); }
inline ref<java::time::ZoneOffset> ZoneOffset::MAX_() { return get_static_field<SCAPIX_META_STRING("MAX"), ref<java::time::ZoneOffset>>(); }
inline ref<java::time::ZoneOffset> ZoneOffset::of(ref<java::lang::String> offsetId) { return call_static_method<SCAPIX_META_STRING("of"), ref<java::time::ZoneOffset>>(offsetId); }
inline ref<java::time::ZoneOffset> ZoneOffset::ofHours(jint hours) { return call_static_method<SCAPIX_META_STRING("ofHours"), ref<java::time::ZoneOffset>>(hours); }
inline ref<java::time::ZoneOffset> ZoneOffset::ofHoursMinutes(jint hours, jint minutes) { return call_static_method<SCAPIX_META_STRING("ofHoursMinutes"), ref<java::time::ZoneOffset>>(hours, minutes); }
inline ref<java::time::ZoneOffset> ZoneOffset::ofHoursMinutesSeconds(jint hours, jint minutes, jint seconds) { return call_static_method<SCAPIX_META_STRING("ofHoursMinutesSeconds"), ref<java::time::ZoneOffset>>(hours, minutes, seconds); }
inline ref<java::time::ZoneOffset> ZoneOffset::from(ref<java::time::temporal::TemporalAccessor> temporal) { return call_static_method<SCAPIX_META_STRING("from"), ref<java::time::ZoneOffset>>(temporal); }
inline ref<java::time::ZoneOffset> ZoneOffset::ofTotalSeconds(jint totalSeconds) { return call_static_method<SCAPIX_META_STRING("ofTotalSeconds"), ref<java::time::ZoneOffset>>(totalSeconds); }
inline jint ZoneOffset::getTotalSeconds() { return call_method<SCAPIX_META_STRING("getTotalSeconds"), jint>(); }
inline ref<java::lang::String> ZoneOffset::getId() { return call_method<SCAPIX_META_STRING("getId"), ref<java::lang::String>>(); }
inline ref<java::time::zone::ZoneRules> ZoneOffset::getRules() { return call_method<SCAPIX_META_STRING("getRules"), ref<java::time::zone::ZoneRules>>(); }
inline jboolean ZoneOffset::isSupported(ref<java::time::temporal::TemporalField> field) { return call_method<SCAPIX_META_STRING("isSupported"), jboolean>(field); }
inline ref<java::time::temporal::ValueRange> ZoneOffset::range(ref<java::time::temporal::TemporalField> field) { return call_method<SCAPIX_META_STRING("range"), ref<java::time::temporal::ValueRange>>(field); }
inline jint ZoneOffset::get(ref<java::time::temporal::TemporalField> field) { return call_method<SCAPIX_META_STRING("get"), jint>(field); }
inline jlong ZoneOffset::getLong(ref<java::time::temporal::TemporalField> field) { return call_method<SCAPIX_META_STRING("getLong"), jlong>(field); }
inline ref<java::lang::Object> ZoneOffset::query(ref<java::time::temporal::TemporalQuery> query) { return call_method<SCAPIX_META_STRING("query"), ref<java::lang::Object>>(query); }
inline ref<java::time::temporal::Temporal> ZoneOffset::adjustInto(ref<java::time::temporal::Temporal> temporal) { return call_method<SCAPIX_META_STRING("adjustInto"), ref<java::time::temporal::Temporal>>(temporal); }
inline jint ZoneOffset::compareTo(ref<java::time::ZoneOffset> other) { return call_method<SCAPIX_META_STRING("compareTo"), jint>(other); }
inline jboolean ZoneOffset::equals(ref<java::lang::Object> obj) { return call_method<SCAPIX_META_STRING("equals"), jboolean>(obj); }
inline jint ZoneOffset::hashCode() { return call_method<SCAPIX_META_STRING("hashCode"), jint>(); }
inline ref<java::lang::String> ZoneOffset::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }

} // namespace java::time
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_TIME_ZONEOFFSET_H
