// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/time/chrono/Chronology.h>

#ifndef SCAPIX_JAVA_TIME_CHRONO_ABSTRACTCHRONOLOGY_H
#define SCAPIX_JAVA_TIME_CHRONO_ABSTRACTCHRONOLOGY_H

namespace scapix::java_api {

namespace java::lang { class String; }
namespace java::time::chrono { class ChronoLocalDate; }
namespace java::time::format { class ResolverStyle; }
namespace java::util { class Map; }

namespace java::time::chrono {

class AbstractChronology : public object_base<SCAPIX_META_STRING("java/time/chrono/AbstractChronology"),
	java::lang::Object,
	java::time::chrono::Chronology>
{
public:

	ref<java::time::chrono::ChronoLocalDate> resolveDate(ref<java::util::Map> fieldValues, ref<java::time::format::ResolverStyle> resolverStyle);
	jint compareTo(ref<java::time::chrono::Chronology> other);
	jboolean equals(ref<java::lang::Object> obj);
	jint hashCode();
	ref<java::lang::String> toString();

protected:

	AbstractChronology(handle_type h) : base_(h) {}

};

} // namespace java::time::chrono
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/time/chrono/ChronoLocalDate.h>
#include <scapix/java_api/java/time/format/ResolverStyle.h>
#include <scapix/java_api/java/util/Map.h>

namespace scapix::java_api {
namespace java::time::chrono {

inline ref<java::time::chrono::ChronoLocalDate> AbstractChronology::resolveDate(ref<java::util::Map> fieldValues, ref<java::time::format::ResolverStyle> resolverStyle) { return call_method<SCAPIX_META_STRING("resolveDate"), ref<java::time::chrono::ChronoLocalDate>>(fieldValues, resolverStyle); }
inline jint AbstractChronology::compareTo(ref<java::time::chrono::Chronology> other) { return call_method<SCAPIX_META_STRING("compareTo"), jint>(other); }
inline jboolean AbstractChronology::equals(ref<java::lang::Object> obj) { return call_method<SCAPIX_META_STRING("equals"), jboolean>(obj); }
inline jint AbstractChronology::hashCode() { return call_method<SCAPIX_META_STRING("hashCode"), jint>(); }
inline ref<java::lang::String> AbstractChronology::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }

} // namespace java::time::chrono
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_TIME_CHRONO_ABSTRACTCHRONOLOGY_H
