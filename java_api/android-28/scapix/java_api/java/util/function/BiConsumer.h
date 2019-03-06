// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_UTIL_FUNCTION_BICONSUMER_H
#define SCAPIX_JAVA_UTIL_FUNCTION_BICONSUMER_H

namespace scapix::java_api {
namespace java::util::function {

class BiConsumer : public object_base<SCAPIX_META_STRING("java/util/function/BiConsumer"),
	java::lang::Object>
{
public:

	void accept(ref<java::lang::Object> p1, ref<java::lang::Object> p2);
	ref<java::util::function::BiConsumer> andThen(ref<java::util::function::BiConsumer> after);

protected:

	BiConsumer(handle_type h) : base_(h) {}

};

} // namespace java::util::function
} // namespace scapix::java_api


namespace scapix::java_api {
namespace java::util::function {

inline void BiConsumer::accept(ref<java::lang::Object> p1, ref<java::lang::Object> p2) { return call_method<SCAPIX_META_STRING("accept"), void>(p1, p2); }
inline ref<java::util::function::BiConsumer> BiConsumer::andThen(ref<java::util::function::BiConsumer> after) { return call_method<SCAPIX_META_STRING("andThen"), ref<java::util::function::BiConsumer>>(after); }

} // namespace java::util::function
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_UTIL_FUNCTION_BICONSUMER_H
