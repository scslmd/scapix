// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_UTIL_FUNCTION_INTPREDICATE_H
#define SCAPIX_JAVA_UTIL_FUNCTION_INTPREDICATE_H

namespace scapix::java_api {
namespace java::util::function {

class IntPredicate : public object_base<SCAPIX_META_STRING("java/util/function/IntPredicate"),
	java::lang::Object>
{
public:

	jboolean test(jint p1);
	ref<java::util::function::IntPredicate> and_(ref<java::util::function::IntPredicate> other);
	ref<java::util::function::IntPredicate> negate();
	ref<java::util::function::IntPredicate> or_(ref<java::util::function::IntPredicate> other);

protected:

	IntPredicate(handle_type h) : base_(h) {}

};

} // namespace java::util::function
} // namespace scapix::java_api


namespace scapix::java_api {
namespace java::util::function {

inline jboolean IntPredicate::test(jint p1) { return call_method<SCAPIX_META_STRING("test"), jboolean>(p1); }
inline ref<java::util::function::IntPredicate> IntPredicate::and_(ref<java::util::function::IntPredicate> other) { return call_method<SCAPIX_META_STRING("and"), ref<java::util::function::IntPredicate>>(other); }
inline ref<java::util::function::IntPredicate> IntPredicate::negate() { return call_method<SCAPIX_META_STRING("negate"), ref<java::util::function::IntPredicate>>(); }
inline ref<java::util::function::IntPredicate> IntPredicate::or_(ref<java::util::function::IntPredicate> other) { return call_method<SCAPIX_META_STRING("or"), ref<java::util::function::IntPredicate>>(other); }

} // namespace java::util::function
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_UTIL_FUNCTION_INTPREDICATE_H
