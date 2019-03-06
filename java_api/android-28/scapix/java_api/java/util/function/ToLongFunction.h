// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_UTIL_FUNCTION_TOLONGFUNCTION_H
#define SCAPIX_JAVA_UTIL_FUNCTION_TOLONGFUNCTION_H

namespace scapix::java_api {
namespace java::util::function {

class ToLongFunction : public object_base<SCAPIX_META_STRING("java/util/function/ToLongFunction"),
	java::lang::Object>
{
public:

	jlong applyAsLong(ref<java::lang::Object> p1);

protected:

	ToLongFunction(handle_type h) : base_(h) {}

};

} // namespace java::util::function
} // namespace scapix::java_api


namespace scapix::java_api {
namespace java::util::function {

inline jlong ToLongFunction::applyAsLong(ref<java::lang::Object> p1) { return call_method<SCAPIX_META_STRING("applyAsLong"), jlong>(p1); }

} // namespace java::util::function
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_UTIL_FUNCTION_TOLONGFUNCTION_H
