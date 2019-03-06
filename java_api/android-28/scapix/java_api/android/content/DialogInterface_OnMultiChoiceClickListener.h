// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_CONTENT_DIALOGINTERFACE_ONMULTICHOICECLICKLISTENER_H
#define SCAPIX_ANDROID_CONTENT_DIALOGINTERFACE_ONMULTICHOICECLICKLISTENER_H

namespace scapix::java_api {

namespace android::content { class DialogInterface; }

namespace android::content {

class DialogInterface_OnMultiChoiceClickListener : public object_base<SCAPIX_META_STRING("android/content/DialogInterface$OnMultiChoiceClickListener"),
	java::lang::Object>
{
public:

	void onClick(ref<android::content::DialogInterface> p1, jint p2, jboolean p3);

protected:

	DialogInterface_OnMultiChoiceClickListener(handle_type h) : base_(h) {}

};

} // namespace android::content
} // namespace scapix::java_api

#include <scapix/java_api/android/content/DialogInterface.h>

namespace scapix::java_api {
namespace android::content {

inline void DialogInterface_OnMultiChoiceClickListener::onClick(ref<android::content::DialogInterface> p1, jint p2, jboolean p3) { return call_method<SCAPIX_META_STRING("onClick"), void>(p1, p2, p3); }

} // namespace android::content
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_CONTENT_DIALOGINTERFACE_ONMULTICHOICECLICKLISTENER_H
