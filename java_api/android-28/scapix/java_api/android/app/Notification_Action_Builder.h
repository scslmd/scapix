// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_APP_NOTIFICATION_ACTION_BUILDER_H
#define SCAPIX_ANDROID_APP_NOTIFICATION_ACTION_BUILDER_H

namespace scapix::java_api {

namespace android::app { class Notification_Action; }
namespace android::app { class Notification_Action_Extender; }
namespace android::app { class PendingIntent; }
namespace android::app { class RemoteInput; }
namespace android::graphics::drawable { class Icon; }
namespace android::os { class Bundle; }
namespace java::lang { class CharSequence; }

namespace android::app {

class Notification_Action_Builder : public object_base<SCAPIX_META_STRING("android/app/Notification$Action$Builder"),
	java::lang::Object>
{
public:

	static ref<Notification_Action_Builder> new_object(jint icon, ref<java::lang::CharSequence> title, ref<android::app::PendingIntent> intent);
	static ref<Notification_Action_Builder> new_object(ref<android::graphics::drawable::Icon> icon, ref<java::lang::CharSequence> title, ref<android::app::PendingIntent> intent);
	static ref<Notification_Action_Builder> new_object(ref<android::app::Notification_Action> action);
	ref<android::app::Notification_Action_Builder> addExtras(ref<android::os::Bundle> extras);
	ref<android::os::Bundle> getExtras();
	ref<android::app::Notification_Action_Builder> addRemoteInput(ref<android::app::RemoteInput> remoteInput);
	ref<android::app::Notification_Action_Builder> setAllowGeneratedReplies(jboolean allowGeneratedReplies);
	ref<android::app::Notification_Action_Builder> setSemanticAction(jint semanticAction);
	ref<android::app::Notification_Action_Builder> extend(ref<android::app::Notification_Action_Extender> extender);
	ref<android::app::Notification_Action> build();

protected:

	Notification_Action_Builder(handle_type h) : base_(h) {}

};

} // namespace android::app
} // namespace scapix::java_api

#include <scapix/java_api/android/app/Notification_Action.h>
#include <scapix/java_api/android/app/Notification_Action_Extender.h>
#include <scapix/java_api/android/app/PendingIntent.h>
#include <scapix/java_api/android/app/RemoteInput.h>
#include <scapix/java_api/android/graphics/drawable/Icon.h>
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/java/lang/CharSequence.h>

namespace scapix::java_api {
namespace android::app {

inline ref<Notification_Action_Builder> Notification_Action_Builder::new_object(jint icon, ref<java::lang::CharSequence> title, ref<android::app::PendingIntent> intent) { return base_::new_object(icon, title, intent); }
inline ref<Notification_Action_Builder> Notification_Action_Builder::new_object(ref<android::graphics::drawable::Icon> icon, ref<java::lang::CharSequence> title, ref<android::app::PendingIntent> intent) { return base_::new_object(icon, title, intent); }
inline ref<Notification_Action_Builder> Notification_Action_Builder::new_object(ref<android::app::Notification_Action> action) { return base_::new_object(action); }
inline ref<android::app::Notification_Action_Builder> Notification_Action_Builder::addExtras(ref<android::os::Bundle> extras) { return call_method<SCAPIX_META_STRING("addExtras"), ref<android::app::Notification_Action_Builder>>(extras); }
inline ref<android::os::Bundle> Notification_Action_Builder::getExtras() { return call_method<SCAPIX_META_STRING("getExtras"), ref<android::os::Bundle>>(); }
inline ref<android::app::Notification_Action_Builder> Notification_Action_Builder::addRemoteInput(ref<android::app::RemoteInput> remoteInput) { return call_method<SCAPIX_META_STRING("addRemoteInput"), ref<android::app::Notification_Action_Builder>>(remoteInput); }
inline ref<android::app::Notification_Action_Builder> Notification_Action_Builder::setAllowGeneratedReplies(jboolean allowGeneratedReplies) { return call_method<SCAPIX_META_STRING("setAllowGeneratedReplies"), ref<android::app::Notification_Action_Builder>>(allowGeneratedReplies); }
inline ref<android::app::Notification_Action_Builder> Notification_Action_Builder::setSemanticAction(jint semanticAction) { return call_method<SCAPIX_META_STRING("setSemanticAction"), ref<android::app::Notification_Action_Builder>>(semanticAction); }
inline ref<android::app::Notification_Action_Builder> Notification_Action_Builder::extend(ref<android::app::Notification_Action_Extender> extender) { return call_method<SCAPIX_META_STRING("extend"), ref<android::app::Notification_Action_Builder>>(extender); }
inline ref<android::app::Notification_Action> Notification_Action_Builder::build() { return call_method<SCAPIX_META_STRING("build"), ref<android::app::Notification_Action>>(); }

} // namespace android::app
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_APP_NOTIFICATION_ACTION_BUILDER_H
