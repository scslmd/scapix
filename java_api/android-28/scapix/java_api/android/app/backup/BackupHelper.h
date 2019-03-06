// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_APP_BACKUP_BACKUPHELPER_H
#define SCAPIX_ANDROID_APP_BACKUP_BACKUPHELPER_H

namespace scapix::java_api {

namespace android::app::backup { class BackupDataInputStream; }
namespace android::app::backup { class BackupDataOutput; }
namespace android::os { class ParcelFileDescriptor; }

namespace android::app::backup {

class BackupHelper : public object_base<SCAPIX_META_STRING("android/app/backup/BackupHelper"),
	java::lang::Object>
{
public:

	void performBackup(ref<android::os::ParcelFileDescriptor> p1, ref<android::app::backup::BackupDataOutput> p2, ref<android::os::ParcelFileDescriptor> p3);
	void restoreEntity(ref<android::app::backup::BackupDataInputStream> p1);
	void writeNewStateDescription(ref<android::os::ParcelFileDescriptor> p1);

protected:

	BackupHelper(handle_type h) : base_(h) {}

};

} // namespace android::app::backup
} // namespace scapix::java_api

#include <scapix/java_api/android/app/backup/BackupDataInputStream.h>
#include <scapix/java_api/android/app/backup/BackupDataOutput.h>
#include <scapix/java_api/android/os/ParcelFileDescriptor.h>

namespace scapix::java_api {
namespace android::app::backup {

inline void BackupHelper::performBackup(ref<android::os::ParcelFileDescriptor> p1, ref<android::app::backup::BackupDataOutput> p2, ref<android::os::ParcelFileDescriptor> p3) { return call_method<SCAPIX_META_STRING("performBackup"), void>(p1, p2, p3); }
inline void BackupHelper::restoreEntity(ref<android::app::backup::BackupDataInputStream> p1) { return call_method<SCAPIX_META_STRING("restoreEntity"), void>(p1); }
inline void BackupHelper::writeNewStateDescription(ref<android::os::ParcelFileDescriptor> p1) { return call_method<SCAPIX_META_STRING("writeNewStateDescription"), void>(p1); }

} // namespace android::app::backup
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_APP_BACKUP_BACKUPHELPER_H
