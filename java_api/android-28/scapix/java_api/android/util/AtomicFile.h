// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_UTIL_ATOMICFILE_H
#define SCAPIX_ANDROID_UTIL_ATOMICFILE_H

namespace scapix::java_api {

namespace java::io { class File; }
namespace java::io { class FileInputStream; }
namespace java::io { class FileOutputStream; }

namespace android::util {

class AtomicFile : public object_base<SCAPIX_META_STRING("android/util/AtomicFile"),
	java::lang::Object>
{
public:

	static ref<AtomicFile> new_object(ref<java::io::File> baseName);
	ref<java::io::File> getBaseFile();
	void delete_();
	ref<java::io::FileOutputStream> startWrite();
	void finishWrite(ref<java::io::FileOutputStream> str);
	void failWrite(ref<java::io::FileOutputStream> str);
	ref<java::io::FileInputStream> openRead();
	ref<link::java::array<jbyte>> readFully();

protected:

	AtomicFile(handle_type h) : base_(h) {}

};

} // namespace android::util
} // namespace scapix::java_api

#include <scapix/java_api/java/io/File.h>
#include <scapix/java_api/java/io/FileInputStream.h>
#include <scapix/java_api/java/io/FileOutputStream.h>

namespace scapix::java_api {
namespace android::util {

inline ref<AtomicFile> AtomicFile::new_object(ref<java::io::File> baseName) { return base_::new_object(baseName); }
inline ref<java::io::File> AtomicFile::getBaseFile() { return call_method<SCAPIX_META_STRING("getBaseFile"), ref<java::io::File>>(); }
inline void AtomicFile::delete_() { return call_method<SCAPIX_META_STRING("delete"), void>(); }
inline ref<java::io::FileOutputStream> AtomicFile::startWrite() { return call_method<SCAPIX_META_STRING("startWrite"), ref<java::io::FileOutputStream>>(); }
inline void AtomicFile::finishWrite(ref<java::io::FileOutputStream> str) { return call_method<SCAPIX_META_STRING("finishWrite"), void>(str); }
inline void AtomicFile::failWrite(ref<java::io::FileOutputStream> str) { return call_method<SCAPIX_META_STRING("failWrite"), void>(str); }
inline ref<java::io::FileInputStream> AtomicFile::openRead() { return call_method<SCAPIX_META_STRING("openRead"), ref<java::io::FileInputStream>>(); }
inline ref<link::java::array<jbyte>> AtomicFile::readFully() { return call_method<SCAPIX_META_STRING("readFully"), ref<link::java::array<jbyte>>>(); }

} // namespace android::util
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_UTIL_ATOMICFILE_H
