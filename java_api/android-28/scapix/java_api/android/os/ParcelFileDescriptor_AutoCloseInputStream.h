// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/io/FileInputStream.h>

#ifndef SCAPIX_ANDROID_OS_PARCELFILEDESCRIPTOR_AUTOCLOSEINPUTSTREAM_H
#define SCAPIX_ANDROID_OS_PARCELFILEDESCRIPTOR_AUTOCLOSEINPUTSTREAM_H

namespace scapix::java_api {

namespace android::os { class ParcelFileDescriptor; }

namespace android::os {

class ParcelFileDescriptor_AutoCloseInputStream : public object_base<SCAPIX_META_STRING("android/os/ParcelFileDescriptor$AutoCloseInputStream"),
	java::io::FileInputStream>
{
public:

	static ref<ParcelFileDescriptor_AutoCloseInputStream> new_object(ref<android::os::ParcelFileDescriptor> pfd);
	void close();
	jint read();
	jint read(ref<link::java::array<jbyte>> b);
	jint read(ref<link::java::array<jbyte>> b, jint off, jint len);

protected:

	ParcelFileDescriptor_AutoCloseInputStream(handle_type h) : base_(h) {}

};

} // namespace android::os
} // namespace scapix::java_api

#include <scapix/java_api/android/os/ParcelFileDescriptor.h>

namespace scapix::java_api {
namespace android::os {

inline ref<ParcelFileDescriptor_AutoCloseInputStream> ParcelFileDescriptor_AutoCloseInputStream::new_object(ref<android::os::ParcelFileDescriptor> pfd) { return base_::new_object(pfd); }
inline void ParcelFileDescriptor_AutoCloseInputStream::close() { return call_method<SCAPIX_META_STRING("close"), void>(); }
inline jint ParcelFileDescriptor_AutoCloseInputStream::read() { return call_method<SCAPIX_META_STRING("read"), jint>(); }
inline jint ParcelFileDescriptor_AutoCloseInputStream::read(ref<link::java::array<jbyte>> b) { return call_method<SCAPIX_META_STRING("read"), jint>(b); }
inline jint ParcelFileDescriptor_AutoCloseInputStream::read(ref<link::java::array<jbyte>> b, jint off, jint len) { return call_method<SCAPIX_META_STRING("read"), jint>(b, off, len); }

} // namespace android::os
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_OS_PARCELFILEDESCRIPTOR_AUTOCLOSEINPUTSTREAM_H
