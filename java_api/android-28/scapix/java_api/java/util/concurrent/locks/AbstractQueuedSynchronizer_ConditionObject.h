// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/concurrent/locks/Condition.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_UTIL_CONCURRENT_LOCKS_ABSTRACTQUEUEDSYNCHRONIZER_CONDITIONOBJECT_H
#define SCAPIX_JAVA_UTIL_CONCURRENT_LOCKS_ABSTRACTQUEUEDSYNCHRONIZER_CONDITIONOBJECT_H

namespace scapix::java_api {

namespace java::util { class Date; }
namespace java::util::concurrent { class TimeUnit; }
namespace java::util::concurrent::locks { class AbstractQueuedSynchronizer; }

namespace java::util::concurrent::locks {

class AbstractQueuedSynchronizer_ConditionObject : public object_base<SCAPIX_META_STRING("java/util/concurrent/locks/AbstractQueuedSynchronizer$ConditionObject"),
	java::lang::Object,
	java::util::concurrent::locks::Condition,
	java::io::Serializable>
{
public:

	static ref<AbstractQueuedSynchronizer_ConditionObject> new_object(ref<java::util::concurrent::locks::AbstractQueuedSynchronizer> this_0);
	void signal();
	void signalAll();
	void awaitUninterruptibly();
	void await();
	jlong awaitNanos(jlong nanosTimeout);
	jboolean awaitUntil(ref<java::util::Date> deadline);
	jboolean await(jlong time, ref<java::util::concurrent::TimeUnit> p2);

protected:

	AbstractQueuedSynchronizer_ConditionObject(handle_type h) : base_(h) {}

};

} // namespace java::util::concurrent::locks
} // namespace scapix::java_api

#include <scapix/java_api/java/util/Date.h>
#include <scapix/java_api/java/util/concurrent/TimeUnit.h>
#include <scapix/java_api/java/util/concurrent/locks/AbstractQueuedSynchronizer.h>

namespace scapix::java_api {
namespace java::util::concurrent::locks {

inline ref<AbstractQueuedSynchronizer_ConditionObject> AbstractQueuedSynchronizer_ConditionObject::new_object(ref<java::util::concurrent::locks::AbstractQueuedSynchronizer> this_0) { return base_::new_object(this_0); }
inline void AbstractQueuedSynchronizer_ConditionObject::signal() { return call_method<SCAPIX_META_STRING("signal"), void>(); }
inline void AbstractQueuedSynchronizer_ConditionObject::signalAll() { return call_method<SCAPIX_META_STRING("signalAll"), void>(); }
inline void AbstractQueuedSynchronizer_ConditionObject::awaitUninterruptibly() { return call_method<SCAPIX_META_STRING("awaitUninterruptibly"), void>(); }
inline void AbstractQueuedSynchronizer_ConditionObject::await() { return call_method<SCAPIX_META_STRING("await"), void>(); }
inline jlong AbstractQueuedSynchronizer_ConditionObject::awaitNanos(jlong nanosTimeout) { return call_method<SCAPIX_META_STRING("awaitNanos"), jlong>(nanosTimeout); }
inline jboolean AbstractQueuedSynchronizer_ConditionObject::awaitUntil(ref<java::util::Date> deadline) { return call_method<SCAPIX_META_STRING("awaitUntil"), jboolean>(deadline); }
inline jboolean AbstractQueuedSynchronizer_ConditionObject::await(jlong time, ref<java::util::concurrent::TimeUnit> p2) { return call_method<SCAPIX_META_STRING("await"), jboolean>(time, p2); }

} // namespace java::util::concurrent::locks
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_UTIL_CONCURRENT_LOCKS_ABSTRACTQUEUEDSYNCHRONIZER_CONDITIONOBJECT_H
