// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/util/concurrent/locks/AbstractOwnableSynchronizer.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_UTIL_CONCURRENT_LOCKS_ABSTRACTQUEUEDSYNCHRONIZER_H
#define SCAPIX_JAVA_UTIL_CONCURRENT_LOCKS_ABSTRACTQUEUEDSYNCHRONIZER_H

namespace scapix::java_api {

namespace java::lang { class String; }
namespace java::lang { class Thread; }
namespace java::util { class Collection; }
namespace java::util::concurrent::locks { class AbstractQueuedSynchronizer_ConditionObject; }

namespace java::util::concurrent::locks {

class AbstractQueuedSynchronizer : public object_base<SCAPIX_META_STRING("java/util/concurrent/locks/AbstractQueuedSynchronizer"),
	java::util::concurrent::locks::AbstractOwnableSynchronizer,
	java::io::Serializable>
{
public:

	using ConditionObject = AbstractQueuedSynchronizer_ConditionObject;

	void acquire(jint arg);
	void acquireInterruptibly(jint arg);
	jboolean tryAcquireNanos(jint arg, jlong nanosTimeout);
	jboolean release(jint arg);
	void acquireShared(jint arg);
	void acquireSharedInterruptibly(jint arg);
	jboolean tryAcquireSharedNanos(jint arg, jlong nanosTimeout);
	jboolean releaseShared(jint arg);
	jboolean hasQueuedThreads();
	jboolean hasContended();
	ref<java::lang::Thread> getFirstQueuedThread();
	jboolean isQueued(ref<java::lang::Thread> thread);
	jboolean hasQueuedPredecessors();
	jint getQueueLength();
	ref<java::util::Collection> getQueuedThreads();
	ref<java::util::Collection> getExclusiveQueuedThreads();
	ref<java::util::Collection> getSharedQueuedThreads();
	ref<java::lang::String> toString();
	jboolean owns(ref<java::util::concurrent::locks::AbstractQueuedSynchronizer_ConditionObject> condition);
	jboolean hasWaiters(ref<java::util::concurrent::locks::AbstractQueuedSynchronizer_ConditionObject> condition);
	jint getWaitQueueLength(ref<java::util::concurrent::locks::AbstractQueuedSynchronizer_ConditionObject> condition);
	ref<java::util::Collection> getWaitingThreads(ref<java::util::concurrent::locks::AbstractQueuedSynchronizer_ConditionObject> condition);

protected:

	AbstractQueuedSynchronizer(handle_type h) : base_(h) {}

};

} // namespace java::util::concurrent::locks
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Thread.h>
#include <scapix/java_api/java/util/Collection.h>
#include <scapix/java_api/java/util/concurrent/locks/AbstractQueuedSynchronizer_ConditionObject.h>

namespace scapix::java_api {
namespace java::util::concurrent::locks {

inline void AbstractQueuedSynchronizer::acquire(jint arg) { return call_method<SCAPIX_META_STRING("acquire"), void>(arg); }
inline void AbstractQueuedSynchronizer::acquireInterruptibly(jint arg) { return call_method<SCAPIX_META_STRING("acquireInterruptibly"), void>(arg); }
inline jboolean AbstractQueuedSynchronizer::tryAcquireNanos(jint arg, jlong nanosTimeout) { return call_method<SCAPIX_META_STRING("tryAcquireNanos"), jboolean>(arg, nanosTimeout); }
inline jboolean AbstractQueuedSynchronizer::release(jint arg) { return call_method<SCAPIX_META_STRING("release"), jboolean>(arg); }
inline void AbstractQueuedSynchronizer::acquireShared(jint arg) { return call_method<SCAPIX_META_STRING("acquireShared"), void>(arg); }
inline void AbstractQueuedSynchronizer::acquireSharedInterruptibly(jint arg) { return call_method<SCAPIX_META_STRING("acquireSharedInterruptibly"), void>(arg); }
inline jboolean AbstractQueuedSynchronizer::tryAcquireSharedNanos(jint arg, jlong nanosTimeout) { return call_method<SCAPIX_META_STRING("tryAcquireSharedNanos"), jboolean>(arg, nanosTimeout); }
inline jboolean AbstractQueuedSynchronizer::releaseShared(jint arg) { return call_method<SCAPIX_META_STRING("releaseShared"), jboolean>(arg); }
inline jboolean AbstractQueuedSynchronizer::hasQueuedThreads() { return call_method<SCAPIX_META_STRING("hasQueuedThreads"), jboolean>(); }
inline jboolean AbstractQueuedSynchronizer::hasContended() { return call_method<SCAPIX_META_STRING("hasContended"), jboolean>(); }
inline ref<java::lang::Thread> AbstractQueuedSynchronizer::getFirstQueuedThread() { return call_method<SCAPIX_META_STRING("getFirstQueuedThread"), ref<java::lang::Thread>>(); }
inline jboolean AbstractQueuedSynchronizer::isQueued(ref<java::lang::Thread> thread) { return call_method<SCAPIX_META_STRING("isQueued"), jboolean>(thread); }
inline jboolean AbstractQueuedSynchronizer::hasQueuedPredecessors() { return call_method<SCAPIX_META_STRING("hasQueuedPredecessors"), jboolean>(); }
inline jint AbstractQueuedSynchronizer::getQueueLength() { return call_method<SCAPIX_META_STRING("getQueueLength"), jint>(); }
inline ref<java::util::Collection> AbstractQueuedSynchronizer::getQueuedThreads() { return call_method<SCAPIX_META_STRING("getQueuedThreads"), ref<java::util::Collection>>(); }
inline ref<java::util::Collection> AbstractQueuedSynchronizer::getExclusiveQueuedThreads() { return call_method<SCAPIX_META_STRING("getExclusiveQueuedThreads"), ref<java::util::Collection>>(); }
inline ref<java::util::Collection> AbstractQueuedSynchronizer::getSharedQueuedThreads() { return call_method<SCAPIX_META_STRING("getSharedQueuedThreads"), ref<java::util::Collection>>(); }
inline ref<java::lang::String> AbstractQueuedSynchronizer::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }
inline jboolean AbstractQueuedSynchronizer::owns(ref<java::util::concurrent::locks::AbstractQueuedSynchronizer_ConditionObject> condition) { return call_method<SCAPIX_META_STRING("owns"), jboolean>(condition); }
inline jboolean AbstractQueuedSynchronizer::hasWaiters(ref<java::util::concurrent::locks::AbstractQueuedSynchronizer_ConditionObject> condition) { return call_method<SCAPIX_META_STRING("hasWaiters"), jboolean>(condition); }
inline jint AbstractQueuedSynchronizer::getWaitQueueLength(ref<java::util::concurrent::locks::AbstractQueuedSynchronizer_ConditionObject> condition) { return call_method<SCAPIX_META_STRING("getWaitQueueLength"), jint>(condition); }
inline ref<java::util::Collection> AbstractQueuedSynchronizer::getWaitingThreads(ref<java::util::concurrent::locks::AbstractQueuedSynchronizer_ConditionObject> condition) { return call_method<SCAPIX_META_STRING("getWaitingThreads"), ref<java::util::Collection>>(condition); }

} // namespace java::util::concurrent::locks
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_UTIL_CONCURRENT_LOCKS_ABSTRACTQUEUEDSYNCHRONIZER_H
