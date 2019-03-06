// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_ANDROID_APP_ACTIVITYMANAGER_RECENTTASKINFO_H
#define SCAPIX_ANDROID_APP_ACTIVITYMANAGER_RECENTTASKINFO_H

namespace scapix::java_api {

namespace android::app { class ActivityManager_TaskDescription; }
namespace android::content { class ComponentName; }
namespace android::content { class Intent; }
namespace android::os { class Parcel; }
namespace android::os { class Parcelable_Creator; }
namespace java::lang { class CharSequence; }

namespace android::app {

class ActivityManager_RecentTaskInfo : public object_base<SCAPIX_META_STRING("android/app/ActivityManager$RecentTaskInfo"),
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static ref<android::os::Parcelable_Creator> CREATOR_();
	jint affiliatedTaskId();
	void affiliatedTaskId(jint);
	ref<android::content::ComponentName> baseActivity();
	void baseActivity(ref<android::content::ComponentName>);
	ref<android::content::Intent> baseIntent();
	void baseIntent(ref<android::content::Intent>);
	ref<java::lang::CharSequence> description();
	void description(ref<java::lang::CharSequence>);
	jint id();
	void id(jint);
	jint numActivities();
	void numActivities(jint);
	ref<android::content::ComponentName> origActivity();
	void origActivity(ref<android::content::ComponentName>);
	jint persistentId();
	void persistentId(jint);
	ref<android::app::ActivityManager_TaskDescription> taskDescription();
	void taskDescription(ref<android::app::ActivityManager_TaskDescription>);
	ref<android::content::ComponentName> topActivity();
	void topActivity(ref<android::content::ComponentName>);

	static ref<ActivityManager_RecentTaskInfo> new_object();
	jint describeContents();
	void writeToParcel(ref<android::os::Parcel> dest, jint flags);
	void readFromParcel(ref<android::os::Parcel> source);

protected:

	ActivityManager_RecentTaskInfo(handle_type h) : base_(h) {}

};

} // namespace android::app
} // namespace scapix::java_api

#include <scapix/java_api/android/app/ActivityManager_TaskDescription.h>
#include <scapix/java_api/android/content/ComponentName.h>
#include <scapix/java_api/android/content/Intent.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/CharSequence.h>

namespace scapix::java_api {
namespace android::app {

inline ref<android::os::Parcelable_Creator> ActivityManager_RecentTaskInfo::CREATOR_() { return get_static_field<SCAPIX_META_STRING("CREATOR"), ref<android::os::Parcelable_Creator>>(); }
inline jint ActivityManager_RecentTaskInfo::affiliatedTaskId() { return get_field<SCAPIX_META_STRING("affiliatedTaskId"), jint>(); }
inline void ActivityManager_RecentTaskInfo::affiliatedTaskId(jint v) { set_field<SCAPIX_META_STRING("affiliatedTaskId"), jint>(v); }
inline ref<android::content::ComponentName> ActivityManager_RecentTaskInfo::baseActivity() { return get_field<SCAPIX_META_STRING("baseActivity"), ref<android::content::ComponentName>>(); }
inline void ActivityManager_RecentTaskInfo::baseActivity(ref<android::content::ComponentName> v) { set_field<SCAPIX_META_STRING("baseActivity"), ref<android::content::ComponentName>>(v); }
inline ref<android::content::Intent> ActivityManager_RecentTaskInfo::baseIntent() { return get_field<SCAPIX_META_STRING("baseIntent"), ref<android::content::Intent>>(); }
inline void ActivityManager_RecentTaskInfo::baseIntent(ref<android::content::Intent> v) { set_field<SCAPIX_META_STRING("baseIntent"), ref<android::content::Intent>>(v); }
inline ref<java::lang::CharSequence> ActivityManager_RecentTaskInfo::description() { return get_field<SCAPIX_META_STRING("description"), ref<java::lang::CharSequence>>(); }
inline void ActivityManager_RecentTaskInfo::description(ref<java::lang::CharSequence> v) { set_field<SCAPIX_META_STRING("description"), ref<java::lang::CharSequence>>(v); }
inline jint ActivityManager_RecentTaskInfo::id() { return get_field<SCAPIX_META_STRING("id"), jint>(); }
inline void ActivityManager_RecentTaskInfo::id(jint v) { set_field<SCAPIX_META_STRING("id"), jint>(v); }
inline jint ActivityManager_RecentTaskInfo::numActivities() { return get_field<SCAPIX_META_STRING("numActivities"), jint>(); }
inline void ActivityManager_RecentTaskInfo::numActivities(jint v) { set_field<SCAPIX_META_STRING("numActivities"), jint>(v); }
inline ref<android::content::ComponentName> ActivityManager_RecentTaskInfo::origActivity() { return get_field<SCAPIX_META_STRING("origActivity"), ref<android::content::ComponentName>>(); }
inline void ActivityManager_RecentTaskInfo::origActivity(ref<android::content::ComponentName> v) { set_field<SCAPIX_META_STRING("origActivity"), ref<android::content::ComponentName>>(v); }
inline jint ActivityManager_RecentTaskInfo::persistentId() { return get_field<SCAPIX_META_STRING("persistentId"), jint>(); }
inline void ActivityManager_RecentTaskInfo::persistentId(jint v) { set_field<SCAPIX_META_STRING("persistentId"), jint>(v); }
inline ref<android::app::ActivityManager_TaskDescription> ActivityManager_RecentTaskInfo::taskDescription() { return get_field<SCAPIX_META_STRING("taskDescription"), ref<android::app::ActivityManager_TaskDescription>>(); }
inline void ActivityManager_RecentTaskInfo::taskDescription(ref<android::app::ActivityManager_TaskDescription> v) { set_field<SCAPIX_META_STRING("taskDescription"), ref<android::app::ActivityManager_TaskDescription>>(v); }
inline ref<android::content::ComponentName> ActivityManager_RecentTaskInfo::topActivity() { return get_field<SCAPIX_META_STRING("topActivity"), ref<android::content::ComponentName>>(); }
inline void ActivityManager_RecentTaskInfo::topActivity(ref<android::content::ComponentName> v) { set_field<SCAPIX_META_STRING("topActivity"), ref<android::content::ComponentName>>(v); }
inline ref<ActivityManager_RecentTaskInfo> ActivityManager_RecentTaskInfo::new_object() { return base_::new_object(); }
inline jint ActivityManager_RecentTaskInfo::describeContents() { return call_method<SCAPIX_META_STRING("describeContents"), jint>(); }
inline void ActivityManager_RecentTaskInfo::writeToParcel(ref<android::os::Parcel> dest, jint flags) { return call_method<SCAPIX_META_STRING("writeToParcel"), void>(dest, flags); }
inline void ActivityManager_RecentTaskInfo::readFromParcel(ref<android::os::Parcel> source) { return call_method<SCAPIX_META_STRING("readFromParcel"), void>(source); }

} // namespace android::app
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_APP_ACTIVITYMANAGER_RECENTTASKINFO_H
