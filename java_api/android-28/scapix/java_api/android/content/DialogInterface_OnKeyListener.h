// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_CONTENT_DIALOGINTERFACE_ONKEYLISTENER_H
#define SCAPIX_ANDROID_CONTENT_DIALOGINTERFACE_ONKEYLISTENER_H

namespace scapix::java_api {

namespace android::content { class DialogInterface; }
namespace android::view { class KeyEvent; }

namespace android::content {

class DialogInterface_OnKeyListener : public object_base<SCAPIX_META_STRING("android/content/DialogInterface$OnKeyListener"),
	java::lang::Object>
{
public:

	jboolean onKey(ref<android::content::DialogInterface> p1, jint p2, ref<android::view::KeyEvent> p3);

protected:

	DialogInterface_OnKeyListener(handle_type h) : base_(h) {}

};

} // namespace android::content
} // namespace scapix::java_api

#include <scapix/java_api/android/content/DialogInterface.h>
#include <scapix/java_api/android/view/KeyEvent.h>

namespace scapix::java_api {
namespace android::content {

inline jboolean DialogInterface_OnKeyListener::onKey(ref<android::content::DialogInterface> p1, jint p2, ref<android::view::KeyEvent> p3) { return call_method<SCAPIX_META_STRING("onKey"), jboolean>(p1, p2, p3); }

} // namespace android::content
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_CONTENT_DIALOGINTERFACE_ONKEYLISTENER_H
