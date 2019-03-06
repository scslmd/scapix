// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_UTIL_FUNCTION_DOUBLETOINTFUNCTION_H
#define SCAPIX_JAVA_UTIL_FUNCTION_DOUBLETOINTFUNCTION_H

namespace scapix::java_api {
namespace java::util::function {

class DoubleToIntFunction : public object_base<SCAPIX_META_STRING("java/util/function/DoubleToIntFunction"),
	java::lang::Object>
{
public:

	jint applyAsInt(jdouble p1);

protected:

	DoubleToIntFunction(handle_type h) : base_(h) {}

};

} // namespace java::util::function
} // namespace scapix::java_api


namespace scapix::java_api {
namespace java::util::function {

inline jint DoubleToIntFunction::applyAsInt(jdouble p1) { return call_method<SCAPIX_META_STRING("applyAsInt"), jint>(p1); }

} // namespace java::util::function
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_UTIL_FUNCTION_DOUBLETOINTFUNCTION_H
