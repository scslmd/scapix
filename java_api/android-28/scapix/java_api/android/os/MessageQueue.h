// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_OS_MESSAGEQUEUE_H
#define SCAPIX_ANDROID_OS_MESSAGEQUEUE_H

namespace scapix::java_api {

namespace android::os { class MessageQueue_IdleHandler; }
namespace android::os { class MessageQueue_OnFileDescriptorEventListener; }
namespace java::io { class FileDescriptor; }

namespace android::os {

class MessageQueue : public object_base<SCAPIX_META_STRING("android/os/MessageQueue"),
	java::lang::Object>
{
public:

	using OnFileDescriptorEventListener = MessageQueue_OnFileDescriptorEventListener;
	using IdleHandler = MessageQueue_IdleHandler;

	jboolean isIdle();
	void addIdleHandler(ref<android::os::MessageQueue_IdleHandler> handler);
	void removeIdleHandler(ref<android::os::MessageQueue_IdleHandler> handler);
	void addOnFileDescriptorEventListener(ref<java::io::FileDescriptor> fd, jint events, ref<android::os::MessageQueue_OnFileDescriptorEventListener> listener);
	void removeOnFileDescriptorEventListener(ref<java::io::FileDescriptor> fd);

protected:

	MessageQueue(handle_type h) : base_(h) {}

};

} // namespace android::os
} // namespace scapix::java_api

#include <scapix/java_api/android/os/MessageQueue_IdleHandler.h>
#include <scapix/java_api/android/os/MessageQueue_OnFileDescriptorEventListener.h>
#include <scapix/java_api/java/io/FileDescriptor.h>

namespace scapix::java_api {
namespace android::os {

inline jboolean MessageQueue::isIdle() { return call_method<SCAPIX_META_STRING("isIdle"), jboolean>(); }
inline void MessageQueue::addIdleHandler(ref<android::os::MessageQueue_IdleHandler> handler) { return call_method<SCAPIX_META_STRING("addIdleHandler"), void>(handler); }
inline void MessageQueue::removeIdleHandler(ref<android::os::MessageQueue_IdleHandler> handler) { return call_method<SCAPIX_META_STRING("removeIdleHandler"), void>(handler); }
inline void MessageQueue::addOnFileDescriptorEventListener(ref<java::io::FileDescriptor> fd, jint events, ref<android::os::MessageQueue_OnFileDescriptorEventListener> listener) { return call_method<SCAPIX_META_STRING("addOnFileDescriptorEventListener"), void>(fd, events, listener); }
inline void MessageQueue::removeOnFileDescriptorEventListener(ref<java::io::FileDescriptor> fd) { return call_method<SCAPIX_META_STRING("removeOnFileDescriptorEventListener"), void>(fd); }

} // namespace android::os
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_OS_MESSAGEQUEUE_H
