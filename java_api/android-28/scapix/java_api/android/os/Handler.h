// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_OS_HANDLER_H
#define SCAPIX_ANDROID_OS_HANDLER_H

namespace scapix::java_api {

namespace android::os { class Handler_Callback; }
namespace android::os { class Looper; }
namespace android::os { class Message; }
namespace android::util { class Printer; }
namespace java::lang { class Runnable; }
namespace java::lang { class String; }

namespace android::os {

class Handler : public object_base<SCAPIX_META_STRING("android/os/Handler"),
	java::lang::Object>
{
public:

	using Callback = Handler_Callback;

	static ref<Handler> new_object();
	static ref<Handler> new_object(ref<android::os::Handler_Callback> callback);
	static ref<Handler> new_object(ref<android::os::Looper> looper);
	static ref<Handler> new_object(ref<android::os::Looper> looper, ref<android::os::Handler_Callback> callback);
	void handleMessage(ref<android::os::Message> msg);
	void dispatchMessage(ref<android::os::Message> msg);
	static ref<android::os::Handler> createAsync(ref<android::os::Looper> looper);
	static ref<android::os::Handler> createAsync(ref<android::os::Looper> looper, ref<android::os::Handler_Callback> callback);
	ref<java::lang::String> getMessageName(ref<android::os::Message> message);
	ref<android::os::Message> obtainMessage();
	ref<android::os::Message> obtainMessage(jint what);
	ref<android::os::Message> obtainMessage(jint what, ref<java::lang::Object> obj);
	ref<android::os::Message> obtainMessage(jint what, jint arg1, jint arg2);
	ref<android::os::Message> obtainMessage(jint what, jint arg1, jint arg2, ref<java::lang::Object> obj);
	jboolean post(ref<java::lang::Runnable> r);
	jboolean postAtTime(ref<java::lang::Runnable> r, jlong uptimeMillis);
	jboolean postAtTime(ref<java::lang::Runnable> r, ref<java::lang::Object> token, jlong uptimeMillis);
	jboolean postDelayed(ref<java::lang::Runnable> r, jlong delayMillis);
	jboolean postDelayed(ref<java::lang::Runnable> r, ref<java::lang::Object> token, jlong delayMillis);
	jboolean postAtFrontOfQueue(ref<java::lang::Runnable> r);
	void removeCallbacks(ref<java::lang::Runnable> r);
	void removeCallbacks(ref<java::lang::Runnable> r, ref<java::lang::Object> token);
	jboolean sendMessage(ref<android::os::Message> msg);
	jboolean sendEmptyMessage(jint what);
	jboolean sendEmptyMessageDelayed(jint what, jlong delayMillis);
	jboolean sendEmptyMessageAtTime(jint what, jlong uptimeMillis);
	jboolean sendMessageDelayed(ref<android::os::Message> msg, jlong delayMillis);
	jboolean sendMessageAtTime(ref<android::os::Message> msg, jlong uptimeMillis);
	jboolean sendMessageAtFrontOfQueue(ref<android::os::Message> msg);
	void removeMessages(jint what);
	void removeMessages(jint what, ref<java::lang::Object> object);
	void removeCallbacksAndMessages(ref<java::lang::Object> token);
	jboolean hasMessages(jint what);
	jboolean hasMessages(jint what, ref<java::lang::Object> object);
	ref<android::os::Looper> getLooper();
	void dump(ref<android::util::Printer> pw, ref<java::lang::String> prefix);
	ref<java::lang::String> toString();

protected:

	Handler(handle_type h) : base_(h) {}

};

} // namespace android::os
} // namespace scapix::java_api

#include <scapix/java_api/android/os/Handler_Callback.h>
#include <scapix/java_api/android/os/Looper.h>
#include <scapix/java_api/android/os/Message.h>
#include <scapix/java_api/android/util/Printer.h>
#include <scapix/java_api/java/lang/Runnable.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::os {

inline ref<Handler> Handler::new_object() { return base_::new_object(); }
inline ref<Handler> Handler::new_object(ref<android::os::Handler_Callback> callback) { return base_::new_object(callback); }
inline ref<Handler> Handler::new_object(ref<android::os::Looper> looper) { return base_::new_object(looper); }
inline ref<Handler> Handler::new_object(ref<android::os::Looper> looper, ref<android::os::Handler_Callback> callback) { return base_::new_object(looper, callback); }
inline void Handler::handleMessage(ref<android::os::Message> msg) { return call_method<SCAPIX_META_STRING("handleMessage"), void>(msg); }
inline void Handler::dispatchMessage(ref<android::os::Message> msg) { return call_method<SCAPIX_META_STRING("dispatchMessage"), void>(msg); }
inline ref<android::os::Handler> Handler::createAsync(ref<android::os::Looper> looper) { return call_static_method<SCAPIX_META_STRING("createAsync"), ref<android::os::Handler>>(looper); }
inline ref<android::os::Handler> Handler::createAsync(ref<android::os::Looper> looper, ref<android::os::Handler_Callback> callback) { return call_static_method<SCAPIX_META_STRING("createAsync"), ref<android::os::Handler>>(looper, callback); }
inline ref<java::lang::String> Handler::getMessageName(ref<android::os::Message> message) { return call_method<SCAPIX_META_STRING("getMessageName"), ref<java::lang::String>>(message); }
inline ref<android::os::Message> Handler::obtainMessage() { return call_method<SCAPIX_META_STRING("obtainMessage"), ref<android::os::Message>>(); }
inline ref<android::os::Message> Handler::obtainMessage(jint what) { return call_method<SCAPIX_META_STRING("obtainMessage"), ref<android::os::Message>>(what); }
inline ref<android::os::Message> Handler::obtainMessage(jint what, ref<java::lang::Object> obj) { return call_method<SCAPIX_META_STRING("obtainMessage"), ref<android::os::Message>>(what, obj); }
inline ref<android::os::Message> Handler::obtainMessage(jint what, jint arg1, jint arg2) { return call_method<SCAPIX_META_STRING("obtainMessage"), ref<android::os::Message>>(what, arg1, arg2); }
inline ref<android::os::Message> Handler::obtainMessage(jint what, jint arg1, jint arg2, ref<java::lang::Object> obj) { return call_method<SCAPIX_META_STRING("obtainMessage"), ref<android::os::Message>>(what, arg1, arg2, obj); }
inline jboolean Handler::post(ref<java::lang::Runnable> r) { return call_method<SCAPIX_META_STRING("post"), jboolean>(r); }
inline jboolean Handler::postAtTime(ref<java::lang::Runnable> r, jlong uptimeMillis) { return call_method<SCAPIX_META_STRING("postAtTime"), jboolean>(r, uptimeMillis); }
inline jboolean Handler::postAtTime(ref<java::lang::Runnable> r, ref<java::lang::Object> token, jlong uptimeMillis) { return call_method<SCAPIX_META_STRING("postAtTime"), jboolean>(r, token, uptimeMillis); }
inline jboolean Handler::postDelayed(ref<java::lang::Runnable> r, jlong delayMillis) { return call_method<SCAPIX_META_STRING("postDelayed"), jboolean>(r, delayMillis); }
inline jboolean Handler::postDelayed(ref<java::lang::Runnable> r, ref<java::lang::Object> token, jlong delayMillis) { return call_method<SCAPIX_META_STRING("postDelayed"), jboolean>(r, token, delayMillis); }
inline jboolean Handler::postAtFrontOfQueue(ref<java::lang::Runnable> r) { return call_method<SCAPIX_META_STRING("postAtFrontOfQueue"), jboolean>(r); }
inline void Handler::removeCallbacks(ref<java::lang::Runnable> r) { return call_method<SCAPIX_META_STRING("removeCallbacks"), void>(r); }
inline void Handler::removeCallbacks(ref<java::lang::Runnable> r, ref<java::lang::Object> token) { return call_method<SCAPIX_META_STRING("removeCallbacks"), void>(r, token); }
inline jboolean Handler::sendMessage(ref<android::os::Message> msg) { return call_method<SCAPIX_META_STRING("sendMessage"), jboolean>(msg); }
inline jboolean Handler::sendEmptyMessage(jint what) { return call_method<SCAPIX_META_STRING("sendEmptyMessage"), jboolean>(what); }
inline jboolean Handler::sendEmptyMessageDelayed(jint what, jlong delayMillis) { return call_method<SCAPIX_META_STRING("sendEmptyMessageDelayed"), jboolean>(what, delayMillis); }
inline jboolean Handler::sendEmptyMessageAtTime(jint what, jlong uptimeMillis) { return call_method<SCAPIX_META_STRING("sendEmptyMessageAtTime"), jboolean>(what, uptimeMillis); }
inline jboolean Handler::sendMessageDelayed(ref<android::os::Message> msg, jlong delayMillis) { return call_method<SCAPIX_META_STRING("sendMessageDelayed"), jboolean>(msg, delayMillis); }
inline jboolean Handler::sendMessageAtTime(ref<android::os::Message> msg, jlong uptimeMillis) { return call_method<SCAPIX_META_STRING("sendMessageAtTime"), jboolean>(msg, uptimeMillis); }
inline jboolean Handler::sendMessageAtFrontOfQueue(ref<android::os::Message> msg) { return call_method<SCAPIX_META_STRING("sendMessageAtFrontOfQueue"), jboolean>(msg); }
inline void Handler::removeMessages(jint what) { return call_method<SCAPIX_META_STRING("removeMessages"), void>(what); }
inline void Handler::removeMessages(jint what, ref<java::lang::Object> object) { return call_method<SCAPIX_META_STRING("removeMessages"), void>(what, object); }
inline void Handler::removeCallbacksAndMessages(ref<java::lang::Object> token) { return call_method<SCAPIX_META_STRING("removeCallbacksAndMessages"), void>(token); }
inline jboolean Handler::hasMessages(jint what) { return call_method<SCAPIX_META_STRING("hasMessages"), jboolean>(what); }
inline jboolean Handler::hasMessages(jint what, ref<java::lang::Object> object) { return call_method<SCAPIX_META_STRING("hasMessages"), jboolean>(what, object); }
inline ref<android::os::Looper> Handler::getLooper() { return call_method<SCAPIX_META_STRING("getLooper"), ref<android::os::Looper>>(); }
inline void Handler::dump(ref<android::util::Printer> pw, ref<java::lang::String> prefix) { return call_method<SCAPIX_META_STRING("dump"), void>(pw, prefix); }
inline ref<java::lang::String> Handler::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }

} // namespace android::os
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_OS_HANDLER_H
