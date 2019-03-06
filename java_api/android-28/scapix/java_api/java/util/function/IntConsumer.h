// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_UTIL_FUNCTION_INTCONSUMER_H
#define SCAPIX_JAVA_UTIL_FUNCTION_INTCONSUMER_H

namespace scapix::java_api {
namespace java::util::function {

class IntConsumer : public object_base<SCAPIX_META_STRING("java/util/function/IntConsumer"),
	java::lang::Object>
{
public:

	void accept(jint p1);
	ref<java::util::function::IntConsumer> andThen(ref<java::util::function::IntConsumer> after);

protected:

	IntConsumer(handle_type h) : base_(h) {}

};

} // namespace java::util::function
} // namespace scapix::java_api


namespace scapix::java_api {
namespace java::util::function {

inline void IntConsumer::accept(jint p1) { return call_method<SCAPIX_META_STRING("accept"), void>(p1); }
inline ref<java::util::function::IntConsumer> IntConsumer::andThen(ref<java::util::function::IntConsumer> after) { return call_method<SCAPIX_META_STRING("andThen"), ref<java::util::function::IntConsumer>>(after); }

} // namespace java::util::function
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_UTIL_FUNCTION_INTCONSUMER_H
