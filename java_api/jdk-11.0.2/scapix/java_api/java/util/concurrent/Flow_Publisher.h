// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_UTIL_CONCURRENT_FLOW_PUBLISHER_H
#define SCAPIX_JAVA_UTIL_CONCURRENT_FLOW_PUBLISHER_H

namespace scapix::java_api {

namespace java::util::concurrent { class Flow_Subscriber; }

namespace java::util::concurrent {

class Flow_Publisher : public object_base<SCAPIX_META_STRING("java/util/concurrent/Flow$Publisher"),
	java::lang::Object>
{
public:

	void subscribe(ref<java::util::concurrent::Flow_Subscriber> p1);

protected:

	Flow_Publisher(handle_type h) : base_(h) {}

};

} // namespace java::util::concurrent
} // namespace scapix::java_api

#include <scapix/java_api/java/util/concurrent/Flow_Subscriber.h>

namespace scapix::java_api {
namespace java::util::concurrent {

inline void Flow_Publisher::subscribe(ref<java::util::concurrent::Flow_Subscriber> p1) { return call_method<SCAPIX_META_STRING("subscribe"), void>(p1); }

} // namespace java::util::concurrent
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_UTIL_CONCURRENT_FLOW_PUBLISHER_H
