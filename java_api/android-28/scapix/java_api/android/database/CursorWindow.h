// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/android/database/sqlite/SQLiteClosable.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_ANDROID_DATABASE_CURSORWINDOW_H
#define SCAPIX_ANDROID_DATABASE_CURSORWINDOW_H

namespace scapix::java_api {

namespace android::database { class CharArrayBuffer; }
namespace android::os { class Parcel; }
namespace android::os { class Parcelable_Creator; }
namespace java::lang { class String; }

namespace android::database {

class CursorWindow : public object_base<SCAPIX_META_STRING("android/database/CursorWindow"),
	android::database::sqlite::SQLiteClosable,
	android::os::Parcelable>
{
public:

	static ref<android::os::Parcelable_Creator> CREATOR_();

	static ref<CursorWindow> new_object(ref<java::lang::String> name);
	static ref<CursorWindow> new_object(ref<java::lang::String> name, jlong windowSizeBytes);
	static ref<CursorWindow> new_object(jboolean localWindow);
	void clear();
	jint getStartPosition();
	void setStartPosition(jint pos);
	jint getNumRows();
	jboolean setNumColumns(jint columnNum);
	jboolean allocRow();
	void freeLastRow();
	jboolean isNull(jint row, jint column);
	jboolean isBlob(jint row, jint column);
	jboolean isLong(jint row, jint column);
	jboolean isFloat(jint row, jint column);
	jboolean isString(jint row, jint column);
	jint getType(jint row, jint column);
	ref<link::java::array<jbyte>> getBlob(jint row, jint column);
	ref<java::lang::String> getString(jint row, jint column);
	void copyStringToBuffer(jint row, jint column, ref<android::database::CharArrayBuffer> buffer);
	jlong getLong(jint row, jint column);
	jdouble getDouble(jint row, jint column);
	jshort getShort(jint row, jint column);
	jint getInt(jint row, jint column);
	jfloat getFloat(jint row, jint column);
	jboolean putBlob(ref<link::java::array<jbyte>> value, jint row, jint column);
	jboolean putString(ref<java::lang::String> value, jint row, jint column);
	jboolean putLong(jlong value, jint p2, jint row);
	jboolean putDouble(jdouble value, jint p2, jint row);
	jboolean putNull(jint row, jint column);
	static ref<android::database::CursorWindow> newFromParcel(ref<android::os::Parcel> p);
	jint describeContents();
	void writeToParcel(ref<android::os::Parcel> dest, jint flags);
	ref<java::lang::String> toString();

protected:

	CursorWindow(handle_type h) : base_(h) {}

};

} // namespace android::database
} // namespace scapix::java_api

#include <scapix/java_api/android/database/CharArrayBuffer.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::database {

inline ref<android::os::Parcelable_Creator> CursorWindow::CREATOR_() { return get_static_field<SCAPIX_META_STRING("CREATOR"), ref<android::os::Parcelable_Creator>>(); }
inline ref<CursorWindow> CursorWindow::new_object(ref<java::lang::String> name) { return base_::new_object(name); }
inline ref<CursorWindow> CursorWindow::new_object(ref<java::lang::String> name, jlong windowSizeBytes) { return base_::new_object(name, windowSizeBytes); }
inline ref<CursorWindow> CursorWindow::new_object(jboolean localWindow) { return base_::new_object(localWindow); }
inline void CursorWindow::clear() { return call_method<SCAPIX_META_STRING("clear"), void>(); }
inline jint CursorWindow::getStartPosition() { return call_method<SCAPIX_META_STRING("getStartPosition"), jint>(); }
inline void CursorWindow::setStartPosition(jint pos) { return call_method<SCAPIX_META_STRING("setStartPosition"), void>(pos); }
inline jint CursorWindow::getNumRows() { return call_method<SCAPIX_META_STRING("getNumRows"), jint>(); }
inline jboolean CursorWindow::setNumColumns(jint columnNum) { return call_method<SCAPIX_META_STRING("setNumColumns"), jboolean>(columnNum); }
inline jboolean CursorWindow::allocRow() { return call_method<SCAPIX_META_STRING("allocRow"), jboolean>(); }
inline void CursorWindow::freeLastRow() { return call_method<SCAPIX_META_STRING("freeLastRow"), void>(); }
inline jboolean CursorWindow::isNull(jint row, jint column) { return call_method<SCAPIX_META_STRING("isNull"), jboolean>(row, column); }
inline jboolean CursorWindow::isBlob(jint row, jint column) { return call_method<SCAPIX_META_STRING("isBlob"), jboolean>(row, column); }
inline jboolean CursorWindow::isLong(jint row, jint column) { return call_method<SCAPIX_META_STRING("isLong"), jboolean>(row, column); }
inline jboolean CursorWindow::isFloat(jint row, jint column) { return call_method<SCAPIX_META_STRING("isFloat"), jboolean>(row, column); }
inline jboolean CursorWindow::isString(jint row, jint column) { return call_method<SCAPIX_META_STRING("isString"), jboolean>(row, column); }
inline jint CursorWindow::getType(jint row, jint column) { return call_method<SCAPIX_META_STRING("getType"), jint>(row, column); }
inline ref<link::java::array<jbyte>> CursorWindow::getBlob(jint row, jint column) { return call_method<SCAPIX_META_STRING("getBlob"), ref<link::java::array<jbyte>>>(row, column); }
inline ref<java::lang::String> CursorWindow::getString(jint row, jint column) { return call_method<SCAPIX_META_STRING("getString"), ref<java::lang::String>>(row, column); }
inline void CursorWindow::copyStringToBuffer(jint row, jint column, ref<android::database::CharArrayBuffer> buffer) { return call_method<SCAPIX_META_STRING("copyStringToBuffer"), void>(row, column, buffer); }
inline jlong CursorWindow::getLong(jint row, jint column) { return call_method<SCAPIX_META_STRING("getLong"), jlong>(row, column); }
inline jdouble CursorWindow::getDouble(jint row, jint column) { return call_method<SCAPIX_META_STRING("getDouble"), jdouble>(row, column); }
inline jshort CursorWindow::getShort(jint row, jint column) { return call_method<SCAPIX_META_STRING("getShort"), jshort>(row, column); }
inline jint CursorWindow::getInt(jint row, jint column) { return call_method<SCAPIX_META_STRING("getInt"), jint>(row, column); }
inline jfloat CursorWindow::getFloat(jint row, jint column) { return call_method<SCAPIX_META_STRING("getFloat"), jfloat>(row, column); }
inline jboolean CursorWindow::putBlob(ref<link::java::array<jbyte>> value, jint row, jint column) { return call_method<SCAPIX_META_STRING("putBlob"), jboolean>(value, row, column); }
inline jboolean CursorWindow::putString(ref<java::lang::String> value, jint row, jint column) { return call_method<SCAPIX_META_STRING("putString"), jboolean>(value, row, column); }
inline jboolean CursorWindow::putLong(jlong value, jint p2, jint row) { return call_method<SCAPIX_META_STRING("putLong"), jboolean>(value, p2, row); }
inline jboolean CursorWindow::putDouble(jdouble value, jint p2, jint row) { return call_method<SCAPIX_META_STRING("putDouble"), jboolean>(value, p2, row); }
inline jboolean CursorWindow::putNull(jint row, jint column) { return call_method<SCAPIX_META_STRING("putNull"), jboolean>(row, column); }
inline ref<android::database::CursorWindow> CursorWindow::newFromParcel(ref<android::os::Parcel> p) { return call_static_method<SCAPIX_META_STRING("newFromParcel"), ref<android::database::CursorWindow>>(p); }
inline jint CursorWindow::describeContents() { return call_method<SCAPIX_META_STRING("describeContents"), jint>(); }
inline void CursorWindow::writeToParcel(ref<android::os::Parcel> dest, jint flags) { return call_method<SCAPIX_META_STRING("writeToParcel"), void>(dest, flags); }
inline ref<java::lang::String> CursorWindow::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }

} // namespace android::database
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_DATABASE_CURSORWINDOW_H
