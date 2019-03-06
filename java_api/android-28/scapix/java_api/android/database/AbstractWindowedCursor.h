// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/android/database/AbstractCursor.h>

#ifndef SCAPIX_ANDROID_DATABASE_ABSTRACTWINDOWEDCURSOR_H
#define SCAPIX_ANDROID_DATABASE_ABSTRACTWINDOWEDCURSOR_H

namespace scapix::java_api {

namespace android::database { class CharArrayBuffer; }
namespace android::database { class CursorWindow; }
namespace java::lang { class String; }

namespace android::database {

class AbstractWindowedCursor : public object_base<SCAPIX_META_STRING("android/database/AbstractWindowedCursor"),
	android::database::AbstractCursor>
{
public:

	static ref<AbstractWindowedCursor> new_object();
	ref<link::java::array<jbyte>> getBlob(jint columnIndex);
	ref<java::lang::String> getString(jint columnIndex);
	void copyStringToBuffer(jint columnIndex, ref<android::database::CharArrayBuffer> buffer);
	jshort getShort(jint columnIndex);
	jint getInt(jint columnIndex);
	jlong getLong(jint columnIndex);
	jfloat getFloat(jint columnIndex);
	jdouble getDouble(jint columnIndex);
	jboolean isNull(jint columnIndex);
	jboolean isBlob(jint columnIndex);
	jboolean isString(jint columnIndex);
	jboolean isLong(jint columnIndex);
	jboolean isFloat(jint columnIndex);
	jint getType(jint columnIndex);
	ref<android::database::CursorWindow> getWindow();
	void setWindow(ref<android::database::CursorWindow> window);
	jboolean hasWindow();

protected:

	AbstractWindowedCursor(handle_type h) : base_(h) {}

};

} // namespace android::database
} // namespace scapix::java_api

#include <scapix/java_api/android/database/CharArrayBuffer.h>
#include <scapix/java_api/android/database/CursorWindow.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::database {

inline ref<AbstractWindowedCursor> AbstractWindowedCursor::new_object() { return base_::new_object(); }
inline ref<link::java::array<jbyte>> AbstractWindowedCursor::getBlob(jint columnIndex) { return call_method<SCAPIX_META_STRING("getBlob"), ref<link::java::array<jbyte>>>(columnIndex); }
inline ref<java::lang::String> AbstractWindowedCursor::getString(jint columnIndex) { return call_method<SCAPIX_META_STRING("getString"), ref<java::lang::String>>(columnIndex); }
inline void AbstractWindowedCursor::copyStringToBuffer(jint columnIndex, ref<android::database::CharArrayBuffer> buffer) { return call_method<SCAPIX_META_STRING("copyStringToBuffer"), void>(columnIndex, buffer); }
inline jshort AbstractWindowedCursor::getShort(jint columnIndex) { return call_method<SCAPIX_META_STRING("getShort"), jshort>(columnIndex); }
inline jint AbstractWindowedCursor::getInt(jint columnIndex) { return call_method<SCAPIX_META_STRING("getInt"), jint>(columnIndex); }
inline jlong AbstractWindowedCursor::getLong(jint columnIndex) { return call_method<SCAPIX_META_STRING("getLong"), jlong>(columnIndex); }
inline jfloat AbstractWindowedCursor::getFloat(jint columnIndex) { return call_method<SCAPIX_META_STRING("getFloat"), jfloat>(columnIndex); }
inline jdouble AbstractWindowedCursor::getDouble(jint columnIndex) { return call_method<SCAPIX_META_STRING("getDouble"), jdouble>(columnIndex); }
inline jboolean AbstractWindowedCursor::isNull(jint columnIndex) { return call_method<SCAPIX_META_STRING("isNull"), jboolean>(columnIndex); }
inline jboolean AbstractWindowedCursor::isBlob(jint columnIndex) { return call_method<SCAPIX_META_STRING("isBlob"), jboolean>(columnIndex); }
inline jboolean AbstractWindowedCursor::isString(jint columnIndex) { return call_method<SCAPIX_META_STRING("isString"), jboolean>(columnIndex); }
inline jboolean AbstractWindowedCursor::isLong(jint columnIndex) { return call_method<SCAPIX_META_STRING("isLong"), jboolean>(columnIndex); }
inline jboolean AbstractWindowedCursor::isFloat(jint columnIndex) { return call_method<SCAPIX_META_STRING("isFloat"), jboolean>(columnIndex); }
inline jint AbstractWindowedCursor::getType(jint columnIndex) { return call_method<SCAPIX_META_STRING("getType"), jint>(columnIndex); }
inline ref<android::database::CursorWindow> AbstractWindowedCursor::getWindow() { return call_method<SCAPIX_META_STRING("getWindow"), ref<android::database::CursorWindow>>(); }
inline void AbstractWindowedCursor::setWindow(ref<android::database::CursorWindow> window) { return call_method<SCAPIX_META_STRING("setWindow"), void>(window); }
inline jboolean AbstractWindowedCursor::hasWindow() { return call_method<SCAPIX_META_STRING("hasWindow"), jboolean>(); }

} // namespace android::database
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_DATABASE_ABSTRACTWINDOWEDCURSOR_H
