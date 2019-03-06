// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_APP_NOTIFICATION_BUILDER_H
#define SCAPIX_ANDROID_APP_NOTIFICATION_BUILDER_H

namespace scapix::java_api {

namespace android::app { class Notification; }
namespace android::app { class Notification_Action; }
namespace android::app { class Notification_Extender; }
namespace android::app { class Notification_Style; }
namespace android::app { class PendingIntent; }
namespace android::app { class Person; }
namespace android::content { class Context; }
namespace android::graphics { class Bitmap; }
namespace android::graphics::drawable { class Icon; }
namespace android::media { class AudioAttributes; }
namespace android::net { class Uri; }
namespace android::os { class Bundle; }
namespace android::widget { class RemoteViews; }
namespace java::lang { class CharSequence; }
namespace java::lang { class String; }

namespace android::app {

class Notification_Builder : public object_base<SCAPIX_META_STRING("android/app/Notification$Builder"),
	java::lang::Object>
{
public:

	static ref<Notification_Builder> new_object(ref<android::content::Context> context, ref<java::lang::String> channelId);
	static ref<Notification_Builder> new_object(ref<android::content::Context> context);
	ref<android::app::Notification_Builder> setShortcutId(ref<java::lang::String> shortcutId);
	ref<android::app::Notification_Builder> setBadgeIconType(jint icon);
	ref<android::app::Notification_Builder> setGroupAlertBehavior(jint groupAlertBehavior);
	ref<android::app::Notification_Builder> setChannelId(ref<java::lang::String> channelId);
	ref<android::app::Notification_Builder> setTimeoutAfter(jlong durationMs);
	ref<android::app::Notification_Builder> setWhen(jlong when);
	ref<android::app::Notification_Builder> setShowWhen(jboolean show);
	ref<android::app::Notification_Builder> setUsesChronometer(jboolean b);
	ref<android::app::Notification_Builder> setChronometerCountDown(jboolean countDown);
	ref<android::app::Notification_Builder> setSmallIcon(jint icon);
	ref<android::app::Notification_Builder> setSmallIcon(jint icon, jint level);
	ref<android::app::Notification_Builder> setSmallIcon(ref<android::graphics::drawable::Icon> icon);
	ref<android::app::Notification_Builder> setContentTitle(ref<java::lang::CharSequence> title);
	ref<android::app::Notification_Builder> setContentText(ref<java::lang::CharSequence> text);
	ref<android::app::Notification_Builder> setSubText(ref<java::lang::CharSequence> text);
	ref<android::app::Notification_Builder> setSettingsText(ref<java::lang::CharSequence> text);
	ref<android::app::Notification_Builder> setRemoteInputHistory(ref<link::java::array<java::lang::CharSequence>> text);
	ref<android::app::Notification_Builder> setNumber(jint number);
	ref<android::app::Notification_Builder> setContentInfo(ref<java::lang::CharSequence> info);
	ref<android::app::Notification_Builder> setProgress(jint max, jint progress, jboolean indeterminate);
	ref<android::app::Notification_Builder> setContent(ref<android::widget::RemoteViews> views);
	ref<android::app::Notification_Builder> setCustomContentView(ref<android::widget::RemoteViews> contentView);
	ref<android::app::Notification_Builder> setCustomBigContentView(ref<android::widget::RemoteViews> contentView);
	ref<android::app::Notification_Builder> setCustomHeadsUpContentView(ref<android::widget::RemoteViews> contentView);
	ref<android::app::Notification_Builder> setContentIntent(ref<android::app::PendingIntent> intent);
	ref<android::app::Notification_Builder> setDeleteIntent(ref<android::app::PendingIntent> intent);
	ref<android::app::Notification_Builder> setFullScreenIntent(ref<android::app::PendingIntent> intent, jboolean highPriority);
	ref<android::app::Notification_Builder> setTicker(ref<java::lang::CharSequence> tickerText);
	ref<android::app::Notification_Builder> setTicker(ref<java::lang::CharSequence> tickerText, ref<android::widget::RemoteViews> views);
	ref<android::app::Notification_Builder> setLargeIcon(ref<android::graphics::Bitmap> b);
	ref<android::app::Notification_Builder> setLargeIcon(ref<android::graphics::drawable::Icon> icon);
	ref<android::app::Notification_Builder> setSound(ref<android::net::Uri> sound);
	ref<android::app::Notification_Builder> setSound(ref<android::net::Uri> sound, jint streamType);
	ref<android::app::Notification_Builder> setSound(ref<android::net::Uri> sound, ref<android::media::AudioAttributes> audioAttributes);
	ref<android::app::Notification_Builder> setVibrate(ref<link::java::array<jlong>> pattern);
	ref<android::app::Notification_Builder> setLights(jint argb, jint onMs, jint offMs);
	ref<android::app::Notification_Builder> setOngoing(jboolean ongoing);
	ref<android::app::Notification_Builder> setColorized(jboolean colorize);
	ref<android::app::Notification_Builder> setOnlyAlertOnce(jboolean onlyAlertOnce);
	ref<android::app::Notification_Builder> setAutoCancel(jboolean autoCancel);
	ref<android::app::Notification_Builder> setLocalOnly(jboolean localOnly);
	ref<android::app::Notification_Builder> setDefaults(jint defaults);
	ref<android::app::Notification_Builder> setPriority(jint pri);
	ref<android::app::Notification_Builder> setCategory(ref<java::lang::String> category);
	ref<android::app::Notification_Builder> addPerson(ref<java::lang::String> uri);
	ref<android::app::Notification_Builder> addPerson(ref<android::app::Person> person);
	ref<android::app::Notification_Builder> setGroup(ref<java::lang::String> groupKey);
	ref<android::app::Notification_Builder> setGroupSummary(jboolean isGroupSummary);
	ref<android::app::Notification_Builder> setSortKey(ref<java::lang::String> sortKey);
	ref<android::app::Notification_Builder> addExtras(ref<android::os::Bundle> extras);
	ref<android::app::Notification_Builder> setExtras(ref<android::os::Bundle> extras);
	ref<android::os::Bundle> getExtras();
	ref<android::app::Notification_Builder> addAction(jint icon, ref<java::lang::CharSequence> title, ref<android::app::PendingIntent> intent);
	ref<android::app::Notification_Builder> addAction(ref<android::app::Notification_Action> action);
	ref<android::app::Notification_Builder> setActions(ref<link::java::array<android::app::Notification_Action>> actions);
	ref<android::app::Notification_Builder> setStyle(ref<android::app::Notification_Style> style);
	ref<android::app::Notification_Style> getStyle();
	ref<android::app::Notification_Builder> setVisibility(jint visibility);
	ref<android::app::Notification_Builder> setPublicVersion(ref<android::app::Notification> n);
	ref<android::app::Notification_Builder> extend(ref<android::app::Notification_Extender> extender);
	ref<android::app::Notification_Builder> setColor(jint argb);
	ref<android::widget::RemoteViews> createContentView();
	ref<android::widget::RemoteViews> createBigContentView();
	ref<android::widget::RemoteViews> createHeadsUpContentView();
	static ref<android::app::Notification_Builder> recoverBuilder(ref<android::content::Context> context, ref<android::app::Notification> n);
	ref<android::app::Notification> getNotification();
	ref<android::app::Notification> build();

protected:

	Notification_Builder(handle_type h) : base_(h) {}

};

} // namespace android::app
} // namespace scapix::java_api

#include <scapix/java_api/android/app/Notification.h>
#include <scapix/java_api/android/app/Notification_Action.h>
#include <scapix/java_api/android/app/Notification_Extender.h>
#include <scapix/java_api/android/app/Notification_Style.h>
#include <scapix/java_api/android/app/PendingIntent.h>
#include <scapix/java_api/android/app/Person.h>
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/graphics/Bitmap.h>
#include <scapix/java_api/android/graphics/drawable/Icon.h>
#include <scapix/java_api/android/media/AudioAttributes.h>
#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/android/widget/RemoteViews.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::app {

inline ref<Notification_Builder> Notification_Builder::new_object(ref<android::content::Context> context, ref<java::lang::String> channelId) { return base_::new_object(context, channelId); }
inline ref<Notification_Builder> Notification_Builder::new_object(ref<android::content::Context> context) { return base_::new_object(context); }
inline ref<android::app::Notification_Builder> Notification_Builder::setShortcutId(ref<java::lang::String> shortcutId) { return call_method<SCAPIX_META_STRING("setShortcutId"), ref<android::app::Notification_Builder>>(shortcutId); }
inline ref<android::app::Notification_Builder> Notification_Builder::setBadgeIconType(jint icon) { return call_method<SCAPIX_META_STRING("setBadgeIconType"), ref<android::app::Notification_Builder>>(icon); }
inline ref<android::app::Notification_Builder> Notification_Builder::setGroupAlertBehavior(jint groupAlertBehavior) { return call_method<SCAPIX_META_STRING("setGroupAlertBehavior"), ref<android::app::Notification_Builder>>(groupAlertBehavior); }
inline ref<android::app::Notification_Builder> Notification_Builder::setChannelId(ref<java::lang::String> channelId) { return call_method<SCAPIX_META_STRING("setChannelId"), ref<android::app::Notification_Builder>>(channelId); }
inline ref<android::app::Notification_Builder> Notification_Builder::setTimeoutAfter(jlong durationMs) { return call_method<SCAPIX_META_STRING("setTimeoutAfter"), ref<android::app::Notification_Builder>>(durationMs); }
inline ref<android::app::Notification_Builder> Notification_Builder::setWhen(jlong when) { return call_method<SCAPIX_META_STRING("setWhen"), ref<android::app::Notification_Builder>>(when); }
inline ref<android::app::Notification_Builder> Notification_Builder::setShowWhen(jboolean show) { return call_method<SCAPIX_META_STRING("setShowWhen"), ref<android::app::Notification_Builder>>(show); }
inline ref<android::app::Notification_Builder> Notification_Builder::setUsesChronometer(jboolean b) { return call_method<SCAPIX_META_STRING("setUsesChronometer"), ref<android::app::Notification_Builder>>(b); }
inline ref<android::app::Notification_Builder> Notification_Builder::setChronometerCountDown(jboolean countDown) { return call_method<SCAPIX_META_STRING("setChronometerCountDown"), ref<android::app::Notification_Builder>>(countDown); }
inline ref<android::app::Notification_Builder> Notification_Builder::setSmallIcon(jint icon) { return call_method<SCAPIX_META_STRING("setSmallIcon"), ref<android::app::Notification_Builder>>(icon); }
inline ref<android::app::Notification_Builder> Notification_Builder::setSmallIcon(jint icon, jint level) { return call_method<SCAPIX_META_STRING("setSmallIcon"), ref<android::app::Notification_Builder>>(icon, level); }
inline ref<android::app::Notification_Builder> Notification_Builder::setSmallIcon(ref<android::graphics::drawable::Icon> icon) { return call_method<SCAPIX_META_STRING("setSmallIcon"), ref<android::app::Notification_Builder>>(icon); }
inline ref<android::app::Notification_Builder> Notification_Builder::setContentTitle(ref<java::lang::CharSequence> title) { return call_method<SCAPIX_META_STRING("setContentTitle"), ref<android::app::Notification_Builder>>(title); }
inline ref<android::app::Notification_Builder> Notification_Builder::setContentText(ref<java::lang::CharSequence> text) { return call_method<SCAPIX_META_STRING("setContentText"), ref<android::app::Notification_Builder>>(text); }
inline ref<android::app::Notification_Builder> Notification_Builder::setSubText(ref<java::lang::CharSequence> text) { return call_method<SCAPIX_META_STRING("setSubText"), ref<android::app::Notification_Builder>>(text); }
inline ref<android::app::Notification_Builder> Notification_Builder::setSettingsText(ref<java::lang::CharSequence> text) { return call_method<SCAPIX_META_STRING("setSettingsText"), ref<android::app::Notification_Builder>>(text); }
inline ref<android::app::Notification_Builder> Notification_Builder::setRemoteInputHistory(ref<link::java::array<java::lang::CharSequence>> text) { return call_method<SCAPIX_META_STRING("setRemoteInputHistory"), ref<android::app::Notification_Builder>>(text); }
inline ref<android::app::Notification_Builder> Notification_Builder::setNumber(jint number) { return call_method<SCAPIX_META_STRING("setNumber"), ref<android::app::Notification_Builder>>(number); }
inline ref<android::app::Notification_Builder> Notification_Builder::setContentInfo(ref<java::lang::CharSequence> info) { return call_method<SCAPIX_META_STRING("setContentInfo"), ref<android::app::Notification_Builder>>(info); }
inline ref<android::app::Notification_Builder> Notification_Builder::setProgress(jint max, jint progress, jboolean indeterminate) { return call_method<SCAPIX_META_STRING("setProgress"), ref<android::app::Notification_Builder>>(max, progress, indeterminate); }
inline ref<android::app::Notification_Builder> Notification_Builder::setContent(ref<android::widget::RemoteViews> views) { return call_method<SCAPIX_META_STRING("setContent"), ref<android::app::Notification_Builder>>(views); }
inline ref<android::app::Notification_Builder> Notification_Builder::setCustomContentView(ref<android::widget::RemoteViews> contentView) { return call_method<SCAPIX_META_STRING("setCustomContentView"), ref<android::app::Notification_Builder>>(contentView); }
inline ref<android::app::Notification_Builder> Notification_Builder::setCustomBigContentView(ref<android::widget::RemoteViews> contentView) { return call_method<SCAPIX_META_STRING("setCustomBigContentView"), ref<android::app::Notification_Builder>>(contentView); }
inline ref<android::app::Notification_Builder> Notification_Builder::setCustomHeadsUpContentView(ref<android::widget::RemoteViews> contentView) { return call_method<SCAPIX_META_STRING("setCustomHeadsUpContentView"), ref<android::app::Notification_Builder>>(contentView); }
inline ref<android::app::Notification_Builder> Notification_Builder::setContentIntent(ref<android::app::PendingIntent> intent) { return call_method<SCAPIX_META_STRING("setContentIntent"), ref<android::app::Notification_Builder>>(intent); }
inline ref<android::app::Notification_Builder> Notification_Builder::setDeleteIntent(ref<android::app::PendingIntent> intent) { return call_method<SCAPIX_META_STRING("setDeleteIntent"), ref<android::app::Notification_Builder>>(intent); }
inline ref<android::app::Notification_Builder> Notification_Builder::setFullScreenIntent(ref<android::app::PendingIntent> intent, jboolean highPriority) { return call_method<SCAPIX_META_STRING("setFullScreenIntent"), ref<android::app::Notification_Builder>>(intent, highPriority); }
inline ref<android::app::Notification_Builder> Notification_Builder::setTicker(ref<java::lang::CharSequence> tickerText) { return call_method<SCAPIX_META_STRING("setTicker"), ref<android::app::Notification_Builder>>(tickerText); }
inline ref<android::app::Notification_Builder> Notification_Builder::setTicker(ref<java::lang::CharSequence> tickerText, ref<android::widget::RemoteViews> views) { return call_method<SCAPIX_META_STRING("setTicker"), ref<android::app::Notification_Builder>>(tickerText, views); }
inline ref<android::app::Notification_Builder> Notification_Builder::setLargeIcon(ref<android::graphics::Bitmap> b) { return call_method<SCAPIX_META_STRING("setLargeIcon"), ref<android::app::Notification_Builder>>(b); }
inline ref<android::app::Notification_Builder> Notification_Builder::setLargeIcon(ref<android::graphics::drawable::Icon> icon) { return call_method<SCAPIX_META_STRING("setLargeIcon"), ref<android::app::Notification_Builder>>(icon); }
inline ref<android::app::Notification_Builder> Notification_Builder::setSound(ref<android::net::Uri> sound) { return call_method<SCAPIX_META_STRING("setSound"), ref<android::app::Notification_Builder>>(sound); }
inline ref<android::app::Notification_Builder> Notification_Builder::setSound(ref<android::net::Uri> sound, jint streamType) { return call_method<SCAPIX_META_STRING("setSound"), ref<android::app::Notification_Builder>>(sound, streamType); }
inline ref<android::app::Notification_Builder> Notification_Builder::setSound(ref<android::net::Uri> sound, ref<android::media::AudioAttributes> audioAttributes) { return call_method<SCAPIX_META_STRING("setSound"), ref<android::app::Notification_Builder>>(sound, audioAttributes); }
inline ref<android::app::Notification_Builder> Notification_Builder::setVibrate(ref<link::java::array<jlong>> pattern) { return call_method<SCAPIX_META_STRING("setVibrate"), ref<android::app::Notification_Builder>>(pattern); }
inline ref<android::app::Notification_Builder> Notification_Builder::setLights(jint argb, jint onMs, jint offMs) { return call_method<SCAPIX_META_STRING("setLights"), ref<android::app::Notification_Builder>>(argb, onMs, offMs); }
inline ref<android::app::Notification_Builder> Notification_Builder::setOngoing(jboolean ongoing) { return call_method<SCAPIX_META_STRING("setOngoing"), ref<android::app::Notification_Builder>>(ongoing); }
inline ref<android::app::Notification_Builder> Notification_Builder::setColorized(jboolean colorize) { return call_method<SCAPIX_META_STRING("setColorized"), ref<android::app::Notification_Builder>>(colorize); }
inline ref<android::app::Notification_Builder> Notification_Builder::setOnlyAlertOnce(jboolean onlyAlertOnce) { return call_method<SCAPIX_META_STRING("setOnlyAlertOnce"), ref<android::app::Notification_Builder>>(onlyAlertOnce); }
inline ref<android::app::Notification_Builder> Notification_Builder::setAutoCancel(jboolean autoCancel) { return call_method<SCAPIX_META_STRING("setAutoCancel"), ref<android::app::Notification_Builder>>(autoCancel); }
inline ref<android::app::Notification_Builder> Notification_Builder::setLocalOnly(jboolean localOnly) { return call_method<SCAPIX_META_STRING("setLocalOnly"), ref<android::app::Notification_Builder>>(localOnly); }
inline ref<android::app::Notification_Builder> Notification_Builder::setDefaults(jint defaults) { return call_method<SCAPIX_META_STRING("setDefaults"), ref<android::app::Notification_Builder>>(defaults); }
inline ref<android::app::Notification_Builder> Notification_Builder::setPriority(jint pri) { return call_method<SCAPIX_META_STRING("setPriority"), ref<android::app::Notification_Builder>>(pri); }
inline ref<android::app::Notification_Builder> Notification_Builder::setCategory(ref<java::lang::String> category) { return call_method<SCAPIX_META_STRING("setCategory"), ref<android::app::Notification_Builder>>(category); }
inline ref<android::app::Notification_Builder> Notification_Builder::addPerson(ref<java::lang::String> uri) { return call_method<SCAPIX_META_STRING("addPerson"), ref<android::app::Notification_Builder>>(uri); }
inline ref<android::app::Notification_Builder> Notification_Builder::addPerson(ref<android::app::Person> person) { return call_method<SCAPIX_META_STRING("addPerson"), ref<android::app::Notification_Builder>>(person); }
inline ref<android::app::Notification_Builder> Notification_Builder::setGroup(ref<java::lang::String> groupKey) { return call_method<SCAPIX_META_STRING("setGroup"), ref<android::app::Notification_Builder>>(groupKey); }
inline ref<android::app::Notification_Builder> Notification_Builder::setGroupSummary(jboolean isGroupSummary) { return call_method<SCAPIX_META_STRING("setGroupSummary"), ref<android::app::Notification_Builder>>(isGroupSummary); }
inline ref<android::app::Notification_Builder> Notification_Builder::setSortKey(ref<java::lang::String> sortKey) { return call_method<SCAPIX_META_STRING("setSortKey"), ref<android::app::Notification_Builder>>(sortKey); }
inline ref<android::app::Notification_Builder> Notification_Builder::addExtras(ref<android::os::Bundle> extras) { return call_method<SCAPIX_META_STRING("addExtras"), ref<android::app::Notification_Builder>>(extras); }
inline ref<android::app::Notification_Builder> Notification_Builder::setExtras(ref<android::os::Bundle> extras) { return call_method<SCAPIX_META_STRING("setExtras"), ref<android::app::Notification_Builder>>(extras); }
inline ref<android::os::Bundle> Notification_Builder::getExtras() { return call_method<SCAPIX_META_STRING("getExtras"), ref<android::os::Bundle>>(); }
inline ref<android::app::Notification_Builder> Notification_Builder::addAction(jint icon, ref<java::lang::CharSequence> title, ref<android::app::PendingIntent> intent) { return call_method<SCAPIX_META_STRING("addAction"), ref<android::app::Notification_Builder>>(icon, title, intent); }
inline ref<android::app::Notification_Builder> Notification_Builder::addAction(ref<android::app::Notification_Action> action) { return call_method<SCAPIX_META_STRING("addAction"), ref<android::app::Notification_Builder>>(action); }
inline ref<android::app::Notification_Builder> Notification_Builder::setActions(ref<link::java::array<android::app::Notification_Action>> actions) { return call_method<SCAPIX_META_STRING("setActions"), ref<android::app::Notification_Builder>>(actions); }
inline ref<android::app::Notification_Builder> Notification_Builder::setStyle(ref<android::app::Notification_Style> style) { return call_method<SCAPIX_META_STRING("setStyle"), ref<android::app::Notification_Builder>>(style); }
inline ref<android::app::Notification_Style> Notification_Builder::getStyle() { return call_method<SCAPIX_META_STRING("getStyle"), ref<android::app::Notification_Style>>(); }
inline ref<android::app::Notification_Builder> Notification_Builder::setVisibility(jint visibility) { return call_method<SCAPIX_META_STRING("setVisibility"), ref<android::app::Notification_Builder>>(visibility); }
inline ref<android::app::Notification_Builder> Notification_Builder::setPublicVersion(ref<android::app::Notification> n) { return call_method<SCAPIX_META_STRING("setPublicVersion"), ref<android::app::Notification_Builder>>(n); }
inline ref<android::app::Notification_Builder> Notification_Builder::extend(ref<android::app::Notification_Extender> extender) { return call_method<SCAPIX_META_STRING("extend"), ref<android::app::Notification_Builder>>(extender); }
inline ref<android::app::Notification_Builder> Notification_Builder::setColor(jint argb) { return call_method<SCAPIX_META_STRING("setColor"), ref<android::app::Notification_Builder>>(argb); }
inline ref<android::widget::RemoteViews> Notification_Builder::createContentView() { return call_method<SCAPIX_META_STRING("createContentView"), ref<android::widget::RemoteViews>>(); }
inline ref<android::widget::RemoteViews> Notification_Builder::createBigContentView() { return call_method<SCAPIX_META_STRING("createBigContentView"), ref<android::widget::RemoteViews>>(); }
inline ref<android::widget::RemoteViews> Notification_Builder::createHeadsUpContentView() { return call_method<SCAPIX_META_STRING("createHeadsUpContentView"), ref<android::widget::RemoteViews>>(); }
inline ref<android::app::Notification_Builder> Notification_Builder::recoverBuilder(ref<android::content::Context> context, ref<android::app::Notification> n) { return call_static_method<SCAPIX_META_STRING("recoverBuilder"), ref<android::app::Notification_Builder>>(context, n); }
inline ref<android::app::Notification> Notification_Builder::getNotification() { return call_method<SCAPIX_META_STRING("getNotification"), ref<android::app::Notification>>(); }
inline ref<android::app::Notification> Notification_Builder::build() { return call_method<SCAPIX_META_STRING("build"), ref<android::app::Notification>>(); }

} // namespace android::app
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_APP_NOTIFICATION_BUILDER_H
