// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_SQL_SAVEPOINT_H
#define SCAPIX_JAVA_SQL_SAVEPOINT_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace java::sql {

class Savepoint : public object_base<SCAPIX_META_STRING("java/sql/Savepoint"),
	java::lang::Object>
{
public:

	jint getSavepointId();
	ref<java::lang::String> getSavepointName();

protected:

	Savepoint(handle_type h) : base_(h) {}

};

} // namespace java::sql
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace java::sql {

inline jint Savepoint::getSavepointId() { return call_method<SCAPIX_META_STRING("getSavepointId"), jint>(); }
inline ref<java::lang::String> Savepoint::getSavepointName() { return call_method<SCAPIX_META_STRING("getSavepointName"), ref<java::lang::String>>(); }

} // namespace java::sql
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_SQL_SAVEPOINT_H
