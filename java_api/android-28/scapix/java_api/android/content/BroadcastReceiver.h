// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_CONTENT_BROADCASTRECEIVER_H
#define SCAPIX_ANDROID_CONTENT_BROADCASTRECEIVER_H

namespace scapix::java_api {

namespace android::content { class BroadcastReceiver_PendingResult; }
namespace android::content { class Context; }
namespace android::content { class Intent; }
namespace android::os { class Bundle; }
namespace android::os { class IBinder; }
namespace java::lang { class String; }

namespace android::content {

class BroadcastReceiver : public object_base<SCAPIX_META_STRING("android/content/BroadcastReceiver"),
	java::lang::Object>
{
public:

	using PendingResult = BroadcastReceiver_PendingResult;

	static ref<BroadcastReceiver> new_object();
	void onReceive(ref<android::content::Context> p1, ref<android::content::Intent> p2);
	ref<android::content::BroadcastReceiver_PendingResult> goAsync();
	ref<android::os::IBinder> peekService(ref<android::content::Context> myContext, ref<android::content::Intent> service);
	void setResultCode(jint code);
	jint getResultCode();
	void setResultData(ref<java::lang::String> data);
	ref<java::lang::String> getResultData();
	void setResultExtras(ref<android::os::Bundle> extras);
	ref<android::os::Bundle> getResultExtras(jboolean makeMap);
	void setResult(jint code, ref<java::lang::String> data, ref<android::os::Bundle> extras);
	jboolean getAbortBroadcast();
	void abortBroadcast();
	void clearAbortBroadcast();
	jboolean isOrderedBroadcast();
	jboolean isInitialStickyBroadcast();
	void setOrderedHint(jboolean isOrdered);
	void setDebugUnregister(jboolean debug);
	jboolean getDebugUnregister();

protected:

	BroadcastReceiver(handle_type h) : base_(h) {}

};

} // namespace android::content
} // namespace scapix::java_api

#include <scapix/java_api/android/content/BroadcastReceiver_PendingResult.h>
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/content/Intent.h>
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/android/os/IBinder.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::content {

inline ref<BroadcastReceiver> BroadcastReceiver::new_object() { return base_::new_object(); }
inline void BroadcastReceiver::onReceive(ref<android::content::Context> p1, ref<android::content::Intent> p2) { return call_method<SCAPIX_META_STRING("onReceive"), void>(p1, p2); }
inline ref<android::content::BroadcastReceiver_PendingResult> BroadcastReceiver::goAsync() { return call_method<SCAPIX_META_STRING("goAsync"), ref<android::content::BroadcastReceiver_PendingResult>>(); }
inline ref<android::os::IBinder> BroadcastReceiver::peekService(ref<android::content::Context> myContext, ref<android::content::Intent> service) { return call_method<SCAPIX_META_STRING("peekService"), ref<android::os::IBinder>>(myContext, service); }
inline void BroadcastReceiver::setResultCode(jint code) { return call_method<SCAPIX_META_STRING("setResultCode"), void>(code); }
inline jint BroadcastReceiver::getResultCode() { return call_method<SCAPIX_META_STRING("getResultCode"), jint>(); }
inline void BroadcastReceiver::setResultData(ref<java::lang::String> data) { return call_method<SCAPIX_META_STRING("setResultData"), void>(data); }
inline ref<java::lang::String> BroadcastReceiver::getResultData() { return call_method<SCAPIX_META_STRING("getResultData"), ref<java::lang::String>>(); }
inline void BroadcastReceiver::setResultExtras(ref<android::os::Bundle> extras) { return call_method<SCAPIX_META_STRING("setResultExtras"), void>(extras); }
inline ref<android::os::Bundle> BroadcastReceiver::getResultExtras(jboolean makeMap) { return call_method<SCAPIX_META_STRING("getResultExtras"), ref<android::os::Bundle>>(makeMap); }
inline void BroadcastReceiver::setResult(jint code, ref<java::lang::String> data, ref<android::os::Bundle> extras) { return call_method<SCAPIX_META_STRING("setResult"), void>(code, data, extras); }
inline jboolean BroadcastReceiver::getAbortBroadcast() { return call_method<SCAPIX_META_STRING("getAbortBroadcast"), jboolean>(); }
inline void BroadcastReceiver::abortBroadcast() { return call_method<SCAPIX_META_STRING("abortBroadcast"), void>(); }
inline void BroadcastReceiver::clearAbortBroadcast() { return call_method<SCAPIX_META_STRING("clearAbortBroadcast"), void>(); }
inline jboolean BroadcastReceiver::isOrderedBroadcast() { return call_method<SCAPIX_META_STRING("isOrderedBroadcast"), jboolean>(); }
inline jboolean BroadcastReceiver::isInitialStickyBroadcast() { return call_method<SCAPIX_META_STRING("isInitialStickyBroadcast"), jboolean>(); }
inline void BroadcastReceiver::setOrderedHint(jboolean isOrdered) { return call_method<SCAPIX_META_STRING("setOrderedHint"), void>(isOrdered); }
inline void BroadcastReceiver::setDebugUnregister(jboolean debug) { return call_method<SCAPIX_META_STRING("setDebugUnregister"), void>(debug); }
inline jboolean BroadcastReceiver::getDebugUnregister() { return call_method<SCAPIX_META_STRING("getDebugUnregister"), jboolean>(); }

} // namespace android::content
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_CONTENT_BROADCASTRECEIVER_H
