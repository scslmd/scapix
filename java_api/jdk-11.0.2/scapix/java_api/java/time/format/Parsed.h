// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/time/temporal/TemporalAccessor.h>

#ifndef SCAPIX_JAVA_TIME_FORMAT_PARSED_H
#define SCAPIX_JAVA_TIME_FORMAT_PARSED_H

namespace scapix::java_api {

namespace java::lang { class String; }
namespace java::time::temporal { class TemporalField; }
namespace java::time::temporal { class TemporalQuery; }

namespace java::time::format {

// private
class Parsed : public object_base<SCAPIX_META_STRING("java/time/format/Parsed"),
	java::lang::Object,
	java::time::temporal::TemporalAccessor>
{
public:

	jboolean isSupported(ref<java::time::temporal::TemporalField> field);
	jlong getLong(ref<java::time::temporal::TemporalField> field);
	ref<java::lang::Object> query(ref<java::time::temporal::TemporalQuery> query);
	ref<java::lang::String> toString();

protected:

	Parsed(handle_type h) : base_(h) {}

};

} // namespace java::time::format
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/time/temporal/TemporalField.h>
#include <scapix/java_api/java/time/temporal/TemporalQuery.h>

namespace scapix::java_api {
namespace java::time::format {

inline jboolean Parsed::isSupported(ref<java::time::temporal::TemporalField> field) { return call_method<SCAPIX_META_STRING("isSupported"), jboolean>(field); }
inline jlong Parsed::getLong(ref<java::time::temporal::TemporalField> field) { return call_method<SCAPIX_META_STRING("getLong"), jlong>(field); }
inline ref<java::lang::Object> Parsed::query(ref<java::time::temporal::TemporalQuery> query) { return call_method<SCAPIX_META_STRING("query"), ref<java::lang::Object>>(query); }
inline ref<java::lang::String> Parsed::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }

} // namespace java::time::format
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_TIME_FORMAT_PARSED_H
