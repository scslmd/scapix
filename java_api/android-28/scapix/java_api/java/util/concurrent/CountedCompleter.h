// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/util/concurrent/ForkJoinTask.h>

#ifndef SCAPIX_JAVA_UTIL_CONCURRENT_COUNTEDCOMPLETER_H
#define SCAPIX_JAVA_UTIL_CONCURRENT_COUNTEDCOMPLETER_H

namespace scapix::java_api {

namespace java::lang { class Object; }
namespace java::lang { class Throwable; }

namespace java::util::concurrent {

class CountedCompleter : public object_base<SCAPIX_META_STRING("java/util/concurrent/CountedCompleter"),
	java::util::concurrent::ForkJoinTask>
{
public:

	void compute();
	void onCompletion(ref<java::util::concurrent::CountedCompleter> caller);
	jboolean onExceptionalCompletion(ref<java::lang::Throwable> ex, ref<java::util::concurrent::CountedCompleter> caller);
	ref<java::util::concurrent::CountedCompleter> getCompleter();
	jint getPendingCount();
	void setPendingCount(jint count);
	void addToPendingCount(jint delta);
	jboolean compareAndSetPendingCount(jint expected, jint count);
	jint decrementPendingCountUnlessZero();
	ref<java::util::concurrent::CountedCompleter> getRoot();
	void tryComplete();
	void propagateCompletion();
	void complete(ref<java::lang::Object> rawResult);
	ref<java::util::concurrent::CountedCompleter> firstComplete();
	ref<java::util::concurrent::CountedCompleter> nextComplete();
	void quietlyCompleteRoot();
	void helpComplete(jint maxTasks);
	ref<java::lang::Object> getRawResult();

protected:

	CountedCompleter(handle_type h) : base_(h) {}

};

} // namespace java::util::concurrent
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/Throwable.h>

namespace scapix::java_api {
namespace java::util::concurrent {

inline void CountedCompleter::compute() { return call_method<SCAPIX_META_STRING("compute"), void>(); }
inline void CountedCompleter::onCompletion(ref<java::util::concurrent::CountedCompleter> caller) { return call_method<SCAPIX_META_STRING("onCompletion"), void>(caller); }
inline jboolean CountedCompleter::onExceptionalCompletion(ref<java::lang::Throwable> ex, ref<java::util::concurrent::CountedCompleter> caller) { return call_method<SCAPIX_META_STRING("onExceptionalCompletion"), jboolean>(ex, caller); }
inline ref<java::util::concurrent::CountedCompleter> CountedCompleter::getCompleter() { return call_method<SCAPIX_META_STRING("getCompleter"), ref<java::util::concurrent::CountedCompleter>>(); }
inline jint CountedCompleter::getPendingCount() { return call_method<SCAPIX_META_STRING("getPendingCount"), jint>(); }
inline void CountedCompleter::setPendingCount(jint count) { return call_method<SCAPIX_META_STRING("setPendingCount"), void>(count); }
inline void CountedCompleter::addToPendingCount(jint delta) { return call_method<SCAPIX_META_STRING("addToPendingCount"), void>(delta); }
inline jboolean CountedCompleter::compareAndSetPendingCount(jint expected, jint count) { return call_method<SCAPIX_META_STRING("compareAndSetPendingCount"), jboolean>(expected, count); }
inline jint CountedCompleter::decrementPendingCountUnlessZero() { return call_method<SCAPIX_META_STRING("decrementPendingCountUnlessZero"), jint>(); }
inline ref<java::util::concurrent::CountedCompleter> CountedCompleter::getRoot() { return call_method<SCAPIX_META_STRING("getRoot"), ref<java::util::concurrent::CountedCompleter>>(); }
inline void CountedCompleter::tryComplete() { return call_method<SCAPIX_META_STRING("tryComplete"), void>(); }
inline void CountedCompleter::propagateCompletion() { return call_method<SCAPIX_META_STRING("propagateCompletion"), void>(); }
inline void CountedCompleter::complete(ref<java::lang::Object> rawResult) { return call_method<SCAPIX_META_STRING("complete"), void>(rawResult); }
inline ref<java::util::concurrent::CountedCompleter> CountedCompleter::firstComplete() { return call_method<SCAPIX_META_STRING("firstComplete"), ref<java::util::concurrent::CountedCompleter>>(); }
inline ref<java::util::concurrent::CountedCompleter> CountedCompleter::nextComplete() { return call_method<SCAPIX_META_STRING("nextComplete"), ref<java::util::concurrent::CountedCompleter>>(); }
inline void CountedCompleter::quietlyCompleteRoot() { return call_method<SCAPIX_META_STRING("quietlyCompleteRoot"), void>(); }
inline void CountedCompleter::helpComplete(jint maxTasks) { return call_method<SCAPIX_META_STRING("helpComplete"), void>(maxTasks); }
inline ref<java::lang::Object> CountedCompleter::getRawResult() { return call_method<SCAPIX_META_STRING("getRawResult"), ref<java::lang::Object>>(); }

} // namespace java::util::concurrent
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_UTIL_CONCURRENT_COUNTEDCOMPLETER_H
