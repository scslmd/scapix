// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_OS_MESSAGEQUEUE_IDLEHANDLER_H
#define SCAPIX_ANDROID_OS_MESSAGEQUEUE_IDLEHANDLER_H

namespace scapix::java_api {


namespace android::os {

class MessageQueue_IdleHandler : public object_base<SCAPIX_META_STRING("android/os/MessageQueue$IdleHandler"),
	java::lang::Object>
{
public:

	jboolean queueIdle();

protected:

	MessageQueue_IdleHandler(handle_type h) : base_(h) {}

};

} // namespace android::os
} // namespace scapix::java_api


namespace scapix::java_api {
namespace android::os {

inline jboolean MessageQueue_IdleHandler::queueIdle() { return call_method<SCAPIX_META_STRING("queueIdle"), jboolean>(); }

} // namespace android::os
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_OS_MESSAGEQUEUE_IDLEHANDLER_H
