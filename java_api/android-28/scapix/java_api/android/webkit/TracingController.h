// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_WEBKIT_TRACINGCONTROLLER_H
#define SCAPIX_ANDROID_WEBKIT_TRACINGCONTROLLER_H

namespace scapix::java_api {

namespace android::webkit { class TracingConfig; }
namespace java::io { class OutputStream; }
namespace java::util::concurrent { class Executor; }

namespace android::webkit {

class TracingController : public object_base<SCAPIX_META_STRING("android/webkit/TracingController"),
	java::lang::Object>
{
public:

	static ref<TracingController> new_object();
	static ref<android::webkit::TracingController> getInstance();
	void start(ref<android::webkit::TracingConfig> p1);
	jboolean stop(ref<java::io::OutputStream> p1, ref<java::util::concurrent::Executor> p2);
	jboolean isTracing();

protected:

	TracingController(handle_type h) : base_(h) {}

};

} // namespace android::webkit
} // namespace scapix::java_api

#include <scapix/java_api/android/webkit/TracingConfig.h>
#include <scapix/java_api/java/io/OutputStream.h>
#include <scapix/java_api/java/util/concurrent/Executor.h>

namespace scapix::java_api {
namespace android::webkit {

inline ref<TracingController> TracingController::new_object() { return base_::new_object(); }
inline ref<android::webkit::TracingController> TracingController::getInstance() { return call_static_method<SCAPIX_META_STRING("getInstance"), ref<android::webkit::TracingController>>(); }
inline void TracingController::start(ref<android::webkit::TracingConfig> p1) { return call_method<SCAPIX_META_STRING("start"), void>(p1); }
inline jboolean TracingController::stop(ref<java::io::OutputStream> p1, ref<java::util::concurrent::Executor> p2) { return call_method<SCAPIX_META_STRING("stop"), jboolean>(p1, p2); }
inline jboolean TracingController::isTracing() { return call_method<SCAPIX_META_STRING("isTracing"), jboolean>(); }

} // namespace android::webkit
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_WEBKIT_TRACINGCONTROLLER_H
