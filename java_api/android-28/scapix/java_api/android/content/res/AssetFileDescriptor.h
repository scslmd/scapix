// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>
#include <scapix/java_api/java/io/Closeable.h>

#ifndef SCAPIX_ANDROID_CONTENT_RES_ASSETFILEDESCRIPTOR_H
#define SCAPIX_ANDROID_CONTENT_RES_ASSETFILEDESCRIPTOR_H

namespace scapix::java_api {

namespace android::os { class Bundle; }
namespace android::os { class Parcel; }
namespace android::os { class ParcelFileDescriptor; }
namespace android::os { class Parcelable_Creator; }
namespace java::io { class FileDescriptor; }
namespace java::io { class FileInputStream; }
namespace java::io { class FileOutputStream; }
namespace java::lang { class String; }
namespace android::content::res { class AssetFileDescriptor_AutoCloseOutputStream; }
namespace android::content::res { class AssetFileDescriptor_AutoCloseInputStream; }

namespace android::content::res {

class AssetFileDescriptor : public object_base<SCAPIX_META_STRING("android/content/res/AssetFileDescriptor"),
	java::lang::Object,
	android::os::Parcelable,
	java::io::Closeable>
{
public:

	using AutoCloseOutputStream = AssetFileDescriptor_AutoCloseOutputStream;
	using AutoCloseInputStream = AssetFileDescriptor_AutoCloseInputStream;

	static ref<android::os::Parcelable_Creator> CREATOR_();
	static jlong UNKNOWN_LENGTH_();

	static ref<AssetFileDescriptor> new_object(ref<android::os::ParcelFileDescriptor> fd, jlong startOffset, jlong p3);
	static ref<AssetFileDescriptor> new_object(ref<android::os::ParcelFileDescriptor> fd, jlong startOffset, jlong p3, ref<android::os::Bundle> length);
	ref<android::os::ParcelFileDescriptor> getParcelFileDescriptor();
	ref<java::io::FileDescriptor> getFileDescriptor();
	jlong getStartOffset();
	ref<android::os::Bundle> getExtras();
	jlong getLength();
	jlong getDeclaredLength();
	void close();
	ref<java::io::FileInputStream> createInputStream();
	ref<java::io::FileOutputStream> createOutputStream();
	ref<java::lang::String> toString();
	jint describeContents();
	void writeToParcel(ref<android::os::Parcel> out, jint flags);

protected:

	AssetFileDescriptor(handle_type h) : base_(h) {}

};

} // namespace android::content::res
} // namespace scapix::java_api

#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/ParcelFileDescriptor.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/io/FileDescriptor.h>
#include <scapix/java_api/java/io/FileInputStream.h>
#include <scapix/java_api/java/io/FileOutputStream.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::content::res {

inline ref<android::os::Parcelable_Creator> AssetFileDescriptor::CREATOR_() { return get_static_field<SCAPIX_META_STRING("CREATOR"), ref<android::os::Parcelable_Creator>>(); }
inline jlong AssetFileDescriptor::UNKNOWN_LENGTH_() { return get_static_field<SCAPIX_META_STRING("UNKNOWN_LENGTH"), jlong>(); }
inline ref<AssetFileDescriptor> AssetFileDescriptor::new_object(ref<android::os::ParcelFileDescriptor> fd, jlong startOffset, jlong p3) { return base_::new_object(fd, startOffset, p3); }
inline ref<AssetFileDescriptor> AssetFileDescriptor::new_object(ref<android::os::ParcelFileDescriptor> fd, jlong startOffset, jlong p3, ref<android::os::Bundle> length) { return base_::new_object(fd, startOffset, p3, length); }
inline ref<android::os::ParcelFileDescriptor> AssetFileDescriptor::getParcelFileDescriptor() { return call_method<SCAPIX_META_STRING("getParcelFileDescriptor"), ref<android::os::ParcelFileDescriptor>>(); }
inline ref<java::io::FileDescriptor> AssetFileDescriptor::getFileDescriptor() { return call_method<SCAPIX_META_STRING("getFileDescriptor"), ref<java::io::FileDescriptor>>(); }
inline jlong AssetFileDescriptor::getStartOffset() { return call_method<SCAPIX_META_STRING("getStartOffset"), jlong>(); }
inline ref<android::os::Bundle> AssetFileDescriptor::getExtras() { return call_method<SCAPIX_META_STRING("getExtras"), ref<android::os::Bundle>>(); }
inline jlong AssetFileDescriptor::getLength() { return call_method<SCAPIX_META_STRING("getLength"), jlong>(); }
inline jlong AssetFileDescriptor::getDeclaredLength() { return call_method<SCAPIX_META_STRING("getDeclaredLength"), jlong>(); }
inline void AssetFileDescriptor::close() { return call_method<SCAPIX_META_STRING("close"), void>(); }
inline ref<java::io::FileInputStream> AssetFileDescriptor::createInputStream() { return call_method<SCAPIX_META_STRING("createInputStream"), ref<java::io::FileInputStream>>(); }
inline ref<java::io::FileOutputStream> AssetFileDescriptor::createOutputStream() { return call_method<SCAPIX_META_STRING("createOutputStream"), ref<java::io::FileOutputStream>>(); }
inline ref<java::lang::String> AssetFileDescriptor::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }
inline jint AssetFileDescriptor::describeContents() { return call_method<SCAPIX_META_STRING("describeContents"), jint>(); }
inline void AssetFileDescriptor::writeToParcel(ref<android::os::Parcel> out, jint flags) { return call_method<SCAPIX_META_STRING("writeToParcel"), void>(out, flags); }

} // namespace android::content::res
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_CONTENT_RES_ASSETFILEDESCRIPTOR_H
