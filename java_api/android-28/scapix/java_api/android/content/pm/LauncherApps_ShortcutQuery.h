// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_CONTENT_PM_LAUNCHERAPPS_SHORTCUTQUERY_H
#define SCAPIX_ANDROID_CONTENT_PM_LAUNCHERAPPS_SHORTCUTQUERY_H

namespace scapix::java_api {

namespace android::content { class ComponentName; }
namespace java::lang { class String; }
namespace java::util { class List; }

namespace android::content::pm {

class LauncherApps_ShortcutQuery : public object_base<SCAPIX_META_STRING("android/content/pm/LauncherApps$ShortcutQuery"),
	java::lang::Object>
{
public:

	static jint FLAG_GET_KEY_FIELDS_ONLY_();
	static jint FLAG_MATCH_DYNAMIC_();
	static jint FLAG_MATCH_MANIFEST_();
	static jint FLAG_MATCH_PINNED_();
	static jint FLAG_MATCH_PINNED_BY_ANY_LAUNCHER_();

	static ref<LauncherApps_ShortcutQuery> new_object();
	ref<android::content::pm::LauncherApps_ShortcutQuery> setChangedSince(jlong changedSince);
	ref<android::content::pm::LauncherApps_ShortcutQuery> setPackage(ref<java::lang::String> packageName);
	ref<android::content::pm::LauncherApps_ShortcutQuery> setShortcutIds(ref<java::util::List> shortcutIds);
	ref<android::content::pm::LauncherApps_ShortcutQuery> setActivity(ref<android::content::ComponentName> activity);
	ref<android::content::pm::LauncherApps_ShortcutQuery> setQueryFlags(jint queryFlags);

protected:

	LauncherApps_ShortcutQuery(handle_type h) : base_(h) {}

};

} // namespace android::content::pm
} // namespace scapix::java_api

#include <scapix/java_api/android/content/ComponentName.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>

namespace scapix::java_api {
namespace android::content::pm {

inline jint LauncherApps_ShortcutQuery::FLAG_GET_KEY_FIELDS_ONLY_() { return get_static_field<SCAPIX_META_STRING("FLAG_GET_KEY_FIELDS_ONLY"), jint>(); }
inline jint LauncherApps_ShortcutQuery::FLAG_MATCH_DYNAMIC_() { return get_static_field<SCAPIX_META_STRING("FLAG_MATCH_DYNAMIC"), jint>(); }
inline jint LauncherApps_ShortcutQuery::FLAG_MATCH_MANIFEST_() { return get_static_field<SCAPIX_META_STRING("FLAG_MATCH_MANIFEST"), jint>(); }
inline jint LauncherApps_ShortcutQuery::FLAG_MATCH_PINNED_() { return get_static_field<SCAPIX_META_STRING("FLAG_MATCH_PINNED"), jint>(); }
inline jint LauncherApps_ShortcutQuery::FLAG_MATCH_PINNED_BY_ANY_LAUNCHER_() { return get_static_field<SCAPIX_META_STRING("FLAG_MATCH_PINNED_BY_ANY_LAUNCHER"), jint>(); }
inline ref<LauncherApps_ShortcutQuery> LauncherApps_ShortcutQuery::new_object() { return base_::new_object(); }
inline ref<android::content::pm::LauncherApps_ShortcutQuery> LauncherApps_ShortcutQuery::setChangedSince(jlong changedSince) { return call_method<SCAPIX_META_STRING("setChangedSince"), ref<android::content::pm::LauncherApps_ShortcutQuery>>(changedSince); }
inline ref<android::content::pm::LauncherApps_ShortcutQuery> LauncherApps_ShortcutQuery::setPackage(ref<java::lang::String> packageName) { return call_method<SCAPIX_META_STRING("setPackage"), ref<android::content::pm::LauncherApps_ShortcutQuery>>(packageName); }
inline ref<android::content::pm::LauncherApps_ShortcutQuery> LauncherApps_ShortcutQuery::setShortcutIds(ref<java::util::List> shortcutIds) { return call_method<SCAPIX_META_STRING("setShortcutIds"), ref<android::content::pm::LauncherApps_ShortcutQuery>>(shortcutIds); }
inline ref<android::content::pm::LauncherApps_ShortcutQuery> LauncherApps_ShortcutQuery::setActivity(ref<android::content::ComponentName> activity) { return call_method<SCAPIX_META_STRING("setActivity"), ref<android::content::pm::LauncherApps_ShortcutQuery>>(activity); }
inline ref<android::content::pm::LauncherApps_ShortcutQuery> LauncherApps_ShortcutQuery::setQueryFlags(jint queryFlags) { return call_method<SCAPIX_META_STRING("setQueryFlags"), ref<android::content::pm::LauncherApps_ShortcutQuery>>(queryFlags); }

} // namespace android::content::pm
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_CONTENT_PM_LAUNCHERAPPS_SHORTCUTQUERY_H
