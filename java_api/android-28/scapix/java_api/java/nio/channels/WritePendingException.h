// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/IllegalStateException.h>

#ifndef SCAPIX_JAVA_NIO_CHANNELS_WRITEPENDINGEXCEPTION_H
#define SCAPIX_JAVA_NIO_CHANNELS_WRITEPENDINGEXCEPTION_H

namespace scapix::java_api {
namespace java::nio::channels {

class WritePendingException : public object_base<SCAPIX_META_STRING("java/nio/channels/WritePendingException"),
	java::lang::IllegalStateException>
{
public:

	static ref<WritePendingException> new_object();

protected:

	WritePendingException(handle_type h) : base_(h) {}

};

} // namespace java::nio::channels
} // namespace scapix::java_api


namespace scapix::java_api {
namespace java::nio::channels {

inline ref<WritePendingException> WritePendingException::new_object() { return base_::new_object(); }

} // namespace java::nio::channels
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_NIO_CHANNELS_WRITEPENDINGEXCEPTION_H
