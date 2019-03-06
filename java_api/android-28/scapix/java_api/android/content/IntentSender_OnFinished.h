// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_CONTENT_INTENTSENDER_ONFINISHED_H
#define SCAPIX_ANDROID_CONTENT_INTENTSENDER_ONFINISHED_H

namespace scapix::java_api {

namespace android::content { class Intent; }
namespace android::content { class IntentSender; }
namespace android::os { class Bundle; }
namespace java::lang { class String; }

namespace android::content {

class IntentSender_OnFinished : public object_base<SCAPIX_META_STRING("android/content/IntentSender$OnFinished"),
	java::lang::Object>
{
public:

	void onSendFinished(ref<android::content::IntentSender> p1, ref<android::content::Intent> p2, jint p3, ref<java::lang::String> p4, ref<android::os::Bundle> p5);

protected:

	IntentSender_OnFinished(handle_type h) : base_(h) {}

};

} // namespace android::content
} // namespace scapix::java_api

#include <scapix/java_api/android/content/Intent.h>
#include <scapix/java_api/android/content/IntentSender.h>
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::content {

inline void IntentSender_OnFinished::onSendFinished(ref<android::content::IntentSender> p1, ref<android::content::Intent> p2, jint p3, ref<java::lang::String> p4, ref<android::os::Bundle> p5) { return call_method<SCAPIX_META_STRING("onSendFinished"), void>(p1, p2, p3, p4, p5); }

} // namespace android::content
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_CONTENT_INTENTSENDER_ONFINISHED_H
