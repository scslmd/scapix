// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_APP_USAGE_STORAGESTATSMANAGER_H
#define SCAPIX_ANDROID_APP_USAGE_STORAGESTATSMANAGER_H

namespace scapix::java_api {

namespace android::app::usage { class ExternalStorageStats; }
namespace android::app::usage { class StorageStats; }
namespace android::os { class UserHandle; }
namespace java::lang { class String; }
namespace java::util { class UUID; }

namespace android::app::usage {

class StorageStatsManager : public object_base<SCAPIX_META_STRING("android/app/usage/StorageStatsManager"),
	java::lang::Object>
{
public:

	jlong getTotalBytes(ref<java::util::UUID> storageUuid);
	jlong getFreeBytes(ref<java::util::UUID> storageUuid);
	ref<android::app::usage::StorageStats> queryStatsForPackage(ref<java::util::UUID> storageUuid, ref<java::lang::String> packageName, ref<android::os::UserHandle> user);
	ref<android::app::usage::StorageStats> queryStatsForUid(ref<java::util::UUID> storageUuid, jint uid);
	ref<android::app::usage::StorageStats> queryStatsForUser(ref<java::util::UUID> storageUuid, ref<android::os::UserHandle> user);
	ref<android::app::usage::ExternalStorageStats> queryExternalStatsForUser(ref<java::util::UUID> storageUuid, ref<android::os::UserHandle> user);

protected:

	StorageStatsManager(handle_type h) : base_(h) {}

};

} // namespace android::app::usage
} // namespace scapix::java_api

#include <scapix/java_api/android/app/usage/ExternalStorageStats.h>
#include <scapix/java_api/android/app/usage/StorageStats.h>
#include <scapix/java_api/android/os/UserHandle.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/UUID.h>

namespace scapix::java_api {
namespace android::app::usage {

inline jlong StorageStatsManager::getTotalBytes(ref<java::util::UUID> storageUuid) { return call_method<SCAPIX_META_STRING("getTotalBytes"), jlong>(storageUuid); }
inline jlong StorageStatsManager::getFreeBytes(ref<java::util::UUID> storageUuid) { return call_method<SCAPIX_META_STRING("getFreeBytes"), jlong>(storageUuid); }
inline ref<android::app::usage::StorageStats> StorageStatsManager::queryStatsForPackage(ref<java::util::UUID> storageUuid, ref<java::lang::String> packageName, ref<android::os::UserHandle> user) { return call_method<SCAPIX_META_STRING("queryStatsForPackage"), ref<android::app::usage::StorageStats>>(storageUuid, packageName, user); }
inline ref<android::app::usage::StorageStats> StorageStatsManager::queryStatsForUid(ref<java::util::UUID> storageUuid, jint uid) { return call_method<SCAPIX_META_STRING("queryStatsForUid"), ref<android::app::usage::StorageStats>>(storageUuid, uid); }
inline ref<android::app::usage::StorageStats> StorageStatsManager::queryStatsForUser(ref<java::util::UUID> storageUuid, ref<android::os::UserHandle> user) { return call_method<SCAPIX_META_STRING("queryStatsForUser"), ref<android::app::usage::StorageStats>>(storageUuid, user); }
inline ref<android::app::usage::ExternalStorageStats> StorageStatsManager::queryExternalStatsForUser(ref<java::util::UUID> storageUuid, ref<android::os::UserHandle> user) { return call_method<SCAPIX_META_STRING("queryExternalStatsForUser"), ref<android::app::usage::ExternalStorageStats>>(storageUuid, user); }

} // namespace android::app::usage
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_APP_USAGE_STORAGESTATSMANAGER_H
