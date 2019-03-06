// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_UTIL_CONCURRENT_THREADFACTORY_H
#define SCAPIX_JAVA_UTIL_CONCURRENT_THREADFACTORY_H

namespace scapix::java_api {

namespace java::lang { class Runnable; }
namespace java::lang { class Thread; }

namespace java::util::concurrent {

class ThreadFactory : public object_base<SCAPIX_META_STRING("java/util/concurrent/ThreadFactory"),
	java::lang::Object>
{
public:

	ref<java::lang::Thread> newThread(ref<java::lang::Runnable> p1);

protected:

	ThreadFactory(handle_type h) : base_(h) {}

};

} // namespace java::util::concurrent
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/Runnable.h>
#include <scapix/java_api/java/lang/Thread.h>

namespace scapix::java_api {
namespace java::util::concurrent {

inline ref<java::lang::Thread> ThreadFactory::newThread(ref<java::lang::Runnable> p1) { return call_method<SCAPIX_META_STRING("newThread"), ref<java::lang::Thread>>(p1); }

} // namespace java::util::concurrent
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_UTIL_CONCURRENT_THREADFACTORY_H
