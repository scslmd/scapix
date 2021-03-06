// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Spliterator.h>

#ifndef SCAPIX_JAVA_NIO_FILE_FILECHANNELLINESSPLITERATOR_H
#define SCAPIX_JAVA_NIO_FILE_FILECHANNELLINESSPLITERATOR_H

namespace scapix::java_api {

namespace java::util::function { class Consumer; }

namespace java::nio::file {

// private
class FileChannelLinesSpliterator : public object_base<SCAPIX_META_STRING("java/nio/file/FileChannelLinesSpliterator"),
	java::lang::Object,
	java::util::Spliterator>
{
public:

	jboolean tryAdvance(ref<java::util::function::Consumer> action);
	void forEachRemaining(ref<java::util::function::Consumer> action);
	ref<java::util::Spliterator> trySplit();
	jlong estimateSize();
	jlong getExactSizeIfKnown();
	jint characteristics();

protected:

	FileChannelLinesSpliterator(handle_type h) : base_(h) {}

};

} // namespace java::nio::file
} // namespace scapix::java_api

#include <scapix/java_api/java/util/function/Consumer.h>

namespace scapix::java_api {
namespace java::nio::file {

inline jboolean FileChannelLinesSpliterator::tryAdvance(ref<java::util::function::Consumer> action) { return call_method<SCAPIX_META_STRING("tryAdvance"), jboolean>(action); }
inline void FileChannelLinesSpliterator::forEachRemaining(ref<java::util::function::Consumer> action) { return call_method<SCAPIX_META_STRING("forEachRemaining"), void>(action); }
inline ref<java::util::Spliterator> FileChannelLinesSpliterator::trySplit() { return call_method<SCAPIX_META_STRING("trySplit"), ref<java::util::Spliterator>>(); }
inline jlong FileChannelLinesSpliterator::estimateSize() { return call_method<SCAPIX_META_STRING("estimateSize"), jlong>(); }
inline jlong FileChannelLinesSpliterator::getExactSizeIfKnown() { return call_method<SCAPIX_META_STRING("getExactSizeIfKnown"), jlong>(); }
inline jint FileChannelLinesSpliterator::characteristics() { return call_method<SCAPIX_META_STRING("characteristics"), jint>(); }

} // namespace java::nio::file
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_NIO_FILE_FILECHANNELLINESSPLITERATOR_H
