// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_OS_HANDLER_CALLBACK_H
#define SCAPIX_ANDROID_OS_HANDLER_CALLBACK_H

namespace scapix::java_api {

namespace android::os { class Message; }

namespace android::os {

class Handler_Callback : public object_base<SCAPIX_META_STRING("android/os/Handler$Callback"),
	java::lang::Object>
{
public:

	jboolean handleMessage(ref<android::os::Message> p1);

protected:

	Handler_Callback(handle_type h) : base_(h) {}

};

} // namespace android::os
} // namespace scapix::java_api

#include <scapix/java_api/android/os/Message.h>

namespace scapix::java_api {
namespace android::os {

inline jboolean Handler_Callback::handleMessage(ref<android::os::Message> p1) { return call_method<SCAPIX_META_STRING("handleMessage"), jboolean>(p1); }

} // namespace android::os
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_OS_HANDLER_CALLBACK_H
