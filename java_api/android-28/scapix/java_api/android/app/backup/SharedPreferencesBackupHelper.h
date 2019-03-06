// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/app/backup/BackupHelper.h>

#ifndef SCAPIX_ANDROID_APP_BACKUP_SHAREDPREFERENCESBACKUPHELPER_H
#define SCAPIX_ANDROID_APP_BACKUP_SHAREDPREFERENCESBACKUPHELPER_H

namespace scapix::java_api {

namespace android::app::backup { class BackupDataInputStream; }
namespace android::app::backup { class BackupDataOutput; }
namespace android::content { class Context; }
namespace android::os { class ParcelFileDescriptor; }
namespace java::lang { class String; }

namespace android::app::backup {

class SharedPreferencesBackupHelper : public object_base<SCAPIX_META_STRING("android/app/backup/SharedPreferencesBackupHelper"),
	java::lang::Object,
	android::app::backup::BackupHelper>
{
public:

	static ref<SharedPreferencesBackupHelper> new_object(ref<android::content::Context> context, ref<link::java::array<java::lang::String>> prefGroups);
	void performBackup(ref<android::os::ParcelFileDescriptor> oldState, ref<android::app::backup::BackupDataOutput> data, ref<android::os::ParcelFileDescriptor> newState);
	void restoreEntity(ref<android::app::backup::BackupDataInputStream> data);
	void writeNewStateDescription(ref<android::os::ParcelFileDescriptor> fd);

protected:

	SharedPreferencesBackupHelper(handle_type h) : base_(h) {}

};

} // namespace android::app::backup
} // namespace scapix::java_api

#include <scapix/java_api/android/app/backup/BackupDataInputStream.h>
#include <scapix/java_api/android/app/backup/BackupDataOutput.h>
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/os/ParcelFileDescriptor.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::app::backup {

inline ref<SharedPreferencesBackupHelper> SharedPreferencesBackupHelper::new_object(ref<android::content::Context> context, ref<link::java::array<java::lang::String>> prefGroups) { return base_::new_object(context, prefGroups); }
inline void SharedPreferencesBackupHelper::performBackup(ref<android::os::ParcelFileDescriptor> oldState, ref<android::app::backup::BackupDataOutput> data, ref<android::os::ParcelFileDescriptor> newState) { return call_method<SCAPIX_META_STRING("performBackup"), void>(oldState, data, newState); }
inline void SharedPreferencesBackupHelper::restoreEntity(ref<android::app::backup::BackupDataInputStream> data) { return call_method<SCAPIX_META_STRING("restoreEntity"), void>(data); }
inline void SharedPreferencesBackupHelper::writeNewStateDescription(ref<android::os::ParcelFileDescriptor> fd) { return call_method<SCAPIX_META_STRING("writeNewStateDescription"), void>(fd); }

} // namespace android::app::backup
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_APP_BACKUP_SHAREDPREFERENCESBACKUPHELPER_H
