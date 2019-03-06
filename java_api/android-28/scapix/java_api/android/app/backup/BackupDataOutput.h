// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_APP_BACKUP_BACKUPDATAOUTPUT_H
#define SCAPIX_ANDROID_APP_BACKUP_BACKUPDATAOUTPUT_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace android::app::backup {

class BackupDataOutput : public object_base<SCAPIX_META_STRING("android/app/backup/BackupDataOutput"),
	java::lang::Object>
{
public:

	jlong getQuota();
	jint getTransportFlags();
	jint writeEntityHeader(ref<java::lang::String> key, jint dataSize);
	jint writeEntityData(ref<link::java::array<jbyte>> data, jint size);

protected:

	BackupDataOutput(handle_type h) : base_(h) {}

};

} // namespace android::app::backup
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::app::backup {

inline jlong BackupDataOutput::getQuota() { return call_method<SCAPIX_META_STRING("getQuota"), jlong>(); }
inline jint BackupDataOutput::getTransportFlags() { return call_method<SCAPIX_META_STRING("getTransportFlags"), jint>(); }
inline jint BackupDataOutput::writeEntityHeader(ref<java::lang::String> key, jint dataSize) { return call_method<SCAPIX_META_STRING("writeEntityHeader"), jint>(key, dataSize); }
inline jint BackupDataOutput::writeEntityData(ref<link::java::array<jbyte>> data, jint size) { return call_method<SCAPIX_META_STRING("writeEntityData"), jint>(data, size); }

} // namespace android::app::backup
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_APP_BACKUP_BACKUPDATAOUTPUT_H
