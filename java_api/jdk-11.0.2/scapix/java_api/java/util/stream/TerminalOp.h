// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_UTIL_STREAM_TERMINALOP_H
#define SCAPIX_JAVA_UTIL_STREAM_TERMINALOP_H

namespace scapix::java_api {

namespace java::util { class Spliterator; }
namespace java::util::stream { class PipelineHelper; }
namespace java::util::stream { class StreamShape; }

namespace java::util::stream {

// private
class TerminalOp : public object_base<SCAPIX_META_STRING("java/util/stream/TerminalOp"),
	java::lang::Object>
{
public:

	ref<java::util::stream::StreamShape> inputShape();
	jint getOpFlags();
	ref<java::lang::Object> evaluateParallel(ref<java::util::stream::PipelineHelper> helper, ref<java::util::Spliterator> spliterator);
	ref<java::lang::Object> evaluateSequential(ref<java::util::stream::PipelineHelper> p1, ref<java::util::Spliterator> p2);

protected:

	TerminalOp(handle_type h) : base_(h) {}

};

} // namespace java::util::stream
} // namespace scapix::java_api

#include <scapix/java_api/java/util/Spliterator.h>
#include <scapix/java_api/java/util/stream/PipelineHelper.h>
#include <scapix/java_api/java/util/stream/StreamShape.h>

namespace scapix::java_api {
namespace java::util::stream {

inline ref<java::util::stream::StreamShape> TerminalOp::inputShape() { return call_method<SCAPIX_META_STRING("inputShape"), ref<java::util::stream::StreamShape>>(); }
inline jint TerminalOp::getOpFlags() { return call_method<SCAPIX_META_STRING("getOpFlags"), jint>(); }
inline ref<java::lang::Object> TerminalOp::evaluateParallel(ref<java::util::stream::PipelineHelper> helper, ref<java::util::Spliterator> spliterator) { return call_method<SCAPIX_META_STRING("evaluateParallel"), ref<java::lang::Object>>(helper, spliterator); }
inline ref<java::lang::Object> TerminalOp::evaluateSequential(ref<java::util::stream::PipelineHelper> p1, ref<java::util::Spliterator> p2) { return call_method<SCAPIX_META_STRING("evaluateSequential"), ref<java::lang::Object>>(p1, p2); }

} // namespace java::util::stream
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_UTIL_STREAM_TERMINALOP_H
