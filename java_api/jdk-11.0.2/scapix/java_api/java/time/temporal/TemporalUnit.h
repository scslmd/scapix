// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_TIME_TEMPORAL_TEMPORALUNIT_H
#define SCAPIX_JAVA_TIME_TEMPORAL_TEMPORALUNIT_H

namespace scapix::java_api {

namespace java::lang { class String; }
namespace java::time { class Duration; }
namespace java::time::temporal { class Temporal; }

namespace java::time::temporal {

class TemporalUnit : public object_base<SCAPIX_META_STRING("java/time/temporal/TemporalUnit"),
	java::lang::Object>
{
public:

	ref<java::time::Duration> getDuration();
	jboolean isDurationEstimated();
	jboolean isDateBased();
	jboolean isTimeBased();
	jboolean isSupportedBy(ref<java::time::temporal::Temporal> temporal);
	ref<java::time::temporal::Temporal> addTo(ref<java::time::temporal::Temporal> p1, jlong p2);
	jlong between(ref<java::time::temporal::Temporal> p1, ref<java::time::temporal::Temporal> p2);
	ref<java::lang::String> toString();

protected:

	TemporalUnit(handle_type h) : base_(h) {}

};

} // namespace java::time::temporal
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/time/Duration.h>
#include <scapix/java_api/java/time/temporal/Temporal.h>

namespace scapix::java_api {
namespace java::time::temporal {

inline ref<java::time::Duration> TemporalUnit::getDuration() { return call_method<SCAPIX_META_STRING("getDuration"), ref<java::time::Duration>>(); }
inline jboolean TemporalUnit::isDurationEstimated() { return call_method<SCAPIX_META_STRING("isDurationEstimated"), jboolean>(); }
inline jboolean TemporalUnit::isDateBased() { return call_method<SCAPIX_META_STRING("isDateBased"), jboolean>(); }
inline jboolean TemporalUnit::isTimeBased() { return call_method<SCAPIX_META_STRING("isTimeBased"), jboolean>(); }
inline jboolean TemporalUnit::isSupportedBy(ref<java::time::temporal::Temporal> temporal) { return call_method<SCAPIX_META_STRING("isSupportedBy"), jboolean>(temporal); }
inline ref<java::time::temporal::Temporal> TemporalUnit::addTo(ref<java::time::temporal::Temporal> p1, jlong p2) { return call_method<SCAPIX_META_STRING("addTo"), ref<java::time::temporal::Temporal>>(p1, p2); }
inline jlong TemporalUnit::between(ref<java::time::temporal::Temporal> p1, ref<java::time::temporal::Temporal> p2) { return call_method<SCAPIX_META_STRING("between"), jlong>(p1, p2); }
inline ref<java::lang::String> TemporalUnit::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }

} // namespace java::time::temporal
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_TIME_TEMPORAL_TEMPORALUNIT_H
