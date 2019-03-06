// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/util/concurrent/ForkJoinTask.h>

#ifndef SCAPIX_JAVA_UTIL_CONCURRENT_RECURSIVETASK_H
#define SCAPIX_JAVA_UTIL_CONCURRENT_RECURSIVETASK_H

namespace scapix::java_api {

namespace java::lang { class Object; }

namespace java::util::concurrent {

class RecursiveTask : public object_base<SCAPIX_META_STRING("java/util/concurrent/RecursiveTask"),
	java::util::concurrent::ForkJoinTask>
{
public:

	static ref<RecursiveTask> new_object();
	ref<java::lang::Object> getRawResult();

protected:

	RecursiveTask(handle_type h) : base_(h) {}

};

} // namespace java::util::concurrent
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/Object.h>

namespace scapix::java_api {
namespace java::util::concurrent {

inline ref<RecursiveTask> RecursiveTask::new_object() { return base_::new_object(); }
inline ref<java::lang::Object> RecursiveTask::getRawResult() { return call_method<SCAPIX_META_STRING("getRawResult"), ref<java::lang::Object>>(); }

} // namespace java::util::concurrent
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_UTIL_CONCURRENT_RECURSIVETASK_H
