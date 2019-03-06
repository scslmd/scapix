// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_UTIL_STREAM_ABSTRACTSPINEDBUFFER_H
#define SCAPIX_JAVA_UTIL_STREAM_ABSTRACTSPINEDBUFFER_H

namespace scapix::java_api {
namespace java::util::stream {

// private
class AbstractSpinedBuffer : public object_base<SCAPIX_META_STRING("java/util/stream/AbstractSpinedBuffer"),
	java::lang::Object>
{
public:

	static jint MIN_CHUNK_POWER_();
	static jint MIN_CHUNK_SIZE_();
	static jint MAX_CHUNK_POWER_();
	static jint MIN_SPINE_SIZE_();

	jboolean isEmpty();
	jlong count();
	void clear();

protected:

	AbstractSpinedBuffer(handle_type h) : base_(h) {}

};

} // namespace java::util::stream
} // namespace scapix::java_api


namespace scapix::java_api {
namespace java::util::stream {

inline jint AbstractSpinedBuffer::MIN_CHUNK_POWER_() { return get_static_field<SCAPIX_META_STRING("MIN_CHUNK_POWER"), jint>(); }
inline jint AbstractSpinedBuffer::MIN_CHUNK_SIZE_() { return get_static_field<SCAPIX_META_STRING("MIN_CHUNK_SIZE"), jint>(); }
inline jint AbstractSpinedBuffer::MAX_CHUNK_POWER_() { return get_static_field<SCAPIX_META_STRING("MAX_CHUNK_POWER"), jint>(); }
inline jint AbstractSpinedBuffer::MIN_SPINE_SIZE_() { return get_static_field<SCAPIX_META_STRING("MIN_SPINE_SIZE"), jint>(); }
inline jboolean AbstractSpinedBuffer::isEmpty() { return call_method<SCAPIX_META_STRING("isEmpty"), jboolean>(); }
inline jlong AbstractSpinedBuffer::count() { return call_method<SCAPIX_META_STRING("count"), jlong>(); }
inline void AbstractSpinedBuffer::clear() { return call_method<SCAPIX_META_STRING("clear"), void>(); }

} // namespace java::util::stream
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_UTIL_STREAM_ABSTRACTSPINEDBUFFER_H
