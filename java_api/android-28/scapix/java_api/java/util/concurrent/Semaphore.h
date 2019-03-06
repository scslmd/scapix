// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_UTIL_CONCURRENT_SEMAPHORE_H
#define SCAPIX_JAVA_UTIL_CONCURRENT_SEMAPHORE_H

namespace scapix::java_api {

namespace java::lang { class String; }
namespace java::util::concurrent { class TimeUnit; }

namespace java::util::concurrent {

class Semaphore : public object_base<SCAPIX_META_STRING("java/util/concurrent/Semaphore"),
	java::lang::Object,
	java::io::Serializable>
{
public:

	static ref<Semaphore> new_object(jint permits);
	static ref<Semaphore> new_object(jint permits, jboolean fair);
	void acquire();
	void acquireUninterruptibly();
	jboolean tryAcquire();
	jboolean tryAcquire(jlong timeout, ref<java::util::concurrent::TimeUnit> p2);
	void release();
	void acquire(jint permits);
	void acquireUninterruptibly(jint permits);
	jboolean tryAcquire(jint permits);
	jboolean tryAcquire(jint permits, jlong timeout, ref<java::util::concurrent::TimeUnit> p3);
	void release(jint permits);
	jint availablePermits();
	jint drainPermits();
	jboolean isFair();
	jboolean hasQueuedThreads();
	jint getQueueLength();
	ref<java::lang::String> toString();

protected:

	Semaphore(handle_type h) : base_(h) {}

};

} // namespace java::util::concurrent
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/concurrent/TimeUnit.h>

namespace scapix::java_api {
namespace java::util::concurrent {

inline ref<Semaphore> Semaphore::new_object(jint permits) { return base_::new_object(permits); }
inline ref<Semaphore> Semaphore::new_object(jint permits, jboolean fair) { return base_::new_object(permits, fair); }
inline void Semaphore::acquire() { return call_method<SCAPIX_META_STRING("acquire"), void>(); }
inline void Semaphore::acquireUninterruptibly() { return call_method<SCAPIX_META_STRING("acquireUninterruptibly"), void>(); }
inline jboolean Semaphore::tryAcquire() { return call_method<SCAPIX_META_STRING("tryAcquire"), jboolean>(); }
inline jboolean Semaphore::tryAcquire(jlong timeout, ref<java::util::concurrent::TimeUnit> p2) { return call_method<SCAPIX_META_STRING("tryAcquire"), jboolean>(timeout, p2); }
inline void Semaphore::release() { return call_method<SCAPIX_META_STRING("release"), void>(); }
inline void Semaphore::acquire(jint permits) { return call_method<SCAPIX_META_STRING("acquire"), void>(permits); }
inline void Semaphore::acquireUninterruptibly(jint permits) { return call_method<SCAPIX_META_STRING("acquireUninterruptibly"), void>(permits); }
inline jboolean Semaphore::tryAcquire(jint permits) { return call_method<SCAPIX_META_STRING("tryAcquire"), jboolean>(permits); }
inline jboolean Semaphore::tryAcquire(jint permits, jlong timeout, ref<java::util::concurrent::TimeUnit> p3) { return call_method<SCAPIX_META_STRING("tryAcquire"), jboolean>(permits, timeout, p3); }
inline void Semaphore::release(jint permits) { return call_method<SCAPIX_META_STRING("release"), void>(permits); }
inline jint Semaphore::availablePermits() { return call_method<SCAPIX_META_STRING("availablePermits"), jint>(); }
inline jint Semaphore::drainPermits() { return call_method<SCAPIX_META_STRING("drainPermits"), jint>(); }
inline jboolean Semaphore::isFair() { return call_method<SCAPIX_META_STRING("isFair"), jboolean>(); }
inline jboolean Semaphore::hasQueuedThreads() { return call_method<SCAPIX_META_STRING("hasQueuedThreads"), jboolean>(); }
inline jint Semaphore::getQueueLength() { return call_method<SCAPIX_META_STRING("getQueueLength"), jint>(); }
inline ref<java::lang::String> Semaphore::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }

} // namespace java::util::concurrent
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_UTIL_CONCURRENT_SEMAPHORE_H
