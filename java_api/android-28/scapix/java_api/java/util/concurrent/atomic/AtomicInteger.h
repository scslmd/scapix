// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Number.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICINTEGER_H
#define SCAPIX_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICINTEGER_H

namespace scapix::java_api {

namespace java::lang { class String; }
namespace java::util::function { class IntBinaryOperator; }
namespace java::util::function { class IntUnaryOperator; }

namespace java::util::concurrent::atomic {

class AtomicInteger : public object_base<SCAPIX_META_STRING("java/util/concurrent/atomic/AtomicInteger"),
	java::lang::Number,
	java::io::Serializable>
{
public:

	static ref<AtomicInteger> new_object(jint initialValue);
	static ref<AtomicInteger> new_object();
	jint get();
	void set(jint newValue);
	void lazySet(jint newValue);
	jint getAndSet(jint newValue);
	jboolean compareAndSet(jint expect, jint update);
	jboolean weakCompareAndSet(jint expect, jint update);
	jint getAndIncrement();
	jint getAndDecrement();
	jint getAndAdd(jint delta);
	jint incrementAndGet();
	jint decrementAndGet();
	jint addAndGet(jint delta);
	jint getAndUpdate(ref<java::util::function::IntUnaryOperator> updateFunction);
	jint updateAndGet(ref<java::util::function::IntUnaryOperator> updateFunction);
	jint getAndAccumulate(jint x, ref<java::util::function::IntBinaryOperator> accumulatorFunction);
	jint accumulateAndGet(jint x, ref<java::util::function::IntBinaryOperator> accumulatorFunction);
	ref<java::lang::String> toString();
	jint intValue();
	jlong longValue();
	jfloat floatValue();
	jdouble doubleValue();

protected:

	AtomicInteger(handle_type h) : base_(h) {}

};

} // namespace java::util::concurrent::atomic
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/function/IntBinaryOperator.h>
#include <scapix/java_api/java/util/function/IntUnaryOperator.h>

namespace scapix::java_api {
namespace java::util::concurrent::atomic {

inline ref<AtomicInteger> AtomicInteger::new_object(jint initialValue) { return base_::new_object(initialValue); }
inline ref<AtomicInteger> AtomicInteger::new_object() { return base_::new_object(); }
inline jint AtomicInteger::get() { return call_method<SCAPIX_META_STRING("get"), jint>(); }
inline void AtomicInteger::set(jint newValue) { return call_method<SCAPIX_META_STRING("set"), void>(newValue); }
inline void AtomicInteger::lazySet(jint newValue) { return call_method<SCAPIX_META_STRING("lazySet"), void>(newValue); }
inline jint AtomicInteger::getAndSet(jint newValue) { return call_method<SCAPIX_META_STRING("getAndSet"), jint>(newValue); }
inline jboolean AtomicInteger::compareAndSet(jint expect, jint update) { return call_method<SCAPIX_META_STRING("compareAndSet"), jboolean>(expect, update); }
inline jboolean AtomicInteger::weakCompareAndSet(jint expect, jint update) { return call_method<SCAPIX_META_STRING("weakCompareAndSet"), jboolean>(expect, update); }
inline jint AtomicInteger::getAndIncrement() { return call_method<SCAPIX_META_STRING("getAndIncrement"), jint>(); }
inline jint AtomicInteger::getAndDecrement() { return call_method<SCAPIX_META_STRING("getAndDecrement"), jint>(); }
inline jint AtomicInteger::getAndAdd(jint delta) { return call_method<SCAPIX_META_STRING("getAndAdd"), jint>(delta); }
inline jint AtomicInteger::incrementAndGet() { return call_method<SCAPIX_META_STRING("incrementAndGet"), jint>(); }
inline jint AtomicInteger::decrementAndGet() { return call_method<SCAPIX_META_STRING("decrementAndGet"), jint>(); }
inline jint AtomicInteger::addAndGet(jint delta) { return call_method<SCAPIX_META_STRING("addAndGet"), jint>(delta); }
inline jint AtomicInteger::getAndUpdate(ref<java::util::function::IntUnaryOperator> updateFunction) { return call_method<SCAPIX_META_STRING("getAndUpdate"), jint>(updateFunction); }
inline jint AtomicInteger::updateAndGet(ref<java::util::function::IntUnaryOperator> updateFunction) { return call_method<SCAPIX_META_STRING("updateAndGet"), jint>(updateFunction); }
inline jint AtomicInteger::getAndAccumulate(jint x, ref<java::util::function::IntBinaryOperator> accumulatorFunction) { return call_method<SCAPIX_META_STRING("getAndAccumulate"), jint>(x, accumulatorFunction); }
inline jint AtomicInteger::accumulateAndGet(jint x, ref<java::util::function::IntBinaryOperator> accumulatorFunction) { return call_method<SCAPIX_META_STRING("accumulateAndGet"), jint>(x, accumulatorFunction); }
inline ref<java::lang::String> AtomicInteger::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }
inline jint AtomicInteger::intValue() { return call_method<SCAPIX_META_STRING("intValue"), jint>(); }
inline jlong AtomicInteger::longValue() { return call_method<SCAPIX_META_STRING("longValue"), jlong>(); }
inline jfloat AtomicInteger::floatValue() { return call_method<SCAPIX_META_STRING("floatValue"), jfloat>(); }
inline jdouble AtomicInteger::doubleValue() { return call_method<SCAPIX_META_STRING("doubleValue"), jdouble>(); }

} // namespace java::util::concurrent::atomic
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICINTEGER_H
