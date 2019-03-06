// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_OPENGL_GLUTILS_H
#define SCAPIX_ANDROID_OPENGL_GLUTILS_H

namespace scapix::java_api {

namespace android::graphics { class Bitmap; }
namespace java::lang { class String; }

namespace android::opengl {

class GLUtils : public object_base<SCAPIX_META_STRING("android/opengl/GLUtils"),
	java::lang::Object>
{
public:

	static jint getInternalFormat(ref<android::graphics::Bitmap> bitmap);
	static jint getType(ref<android::graphics::Bitmap> bitmap);
	static void texImage2D(jint target, jint level, jint internalformat, ref<android::graphics::Bitmap> bitmap, jint border);
	static void texImage2D(jint target, jint level, jint internalformat, ref<android::graphics::Bitmap> bitmap, jint type, jint border);
	static void texImage2D(jint target, jint level, ref<android::graphics::Bitmap> bitmap, jint border);
	static void texSubImage2D(jint target, jint level, jint xoffset, jint yoffset, ref<android::graphics::Bitmap> bitmap);
	static void texSubImage2D(jint target, jint level, jint xoffset, jint yoffset, ref<android::graphics::Bitmap> bitmap, jint format, jint type);
	static ref<java::lang::String> getEGLErrorString(jint error);

protected:

	GLUtils(handle_type h) : base_(h) {}

};

} // namespace android::opengl
} // namespace scapix::java_api

#include <scapix/java_api/android/graphics/Bitmap.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::opengl {

inline jint GLUtils::getInternalFormat(ref<android::graphics::Bitmap> bitmap) { return call_static_method<SCAPIX_META_STRING("getInternalFormat"), jint>(bitmap); }
inline jint GLUtils::getType(ref<android::graphics::Bitmap> bitmap) { return call_static_method<SCAPIX_META_STRING("getType"), jint>(bitmap); }
inline void GLUtils::texImage2D(jint target, jint level, jint internalformat, ref<android::graphics::Bitmap> bitmap, jint border) { return call_static_method<SCAPIX_META_STRING("texImage2D"), void>(target, level, internalformat, bitmap, border); }
inline void GLUtils::texImage2D(jint target, jint level, jint internalformat, ref<android::graphics::Bitmap> bitmap, jint type, jint border) { return call_static_method<SCAPIX_META_STRING("texImage2D"), void>(target, level, internalformat, bitmap, type, border); }
inline void GLUtils::texImage2D(jint target, jint level, ref<android::graphics::Bitmap> bitmap, jint border) { return call_static_method<SCAPIX_META_STRING("texImage2D"), void>(target, level, bitmap, border); }
inline void GLUtils::texSubImage2D(jint target, jint level, jint xoffset, jint yoffset, ref<android::graphics::Bitmap> bitmap) { return call_static_method<SCAPIX_META_STRING("texSubImage2D"), void>(target, level, xoffset, yoffset, bitmap); }
inline void GLUtils::texSubImage2D(jint target, jint level, jint xoffset, jint yoffset, ref<android::graphics::Bitmap> bitmap, jint format, jint type) { return call_static_method<SCAPIX_META_STRING("texSubImage2D"), void>(target, level, xoffset, yoffset, bitmap, format, type); }
inline ref<java::lang::String> GLUtils::getEGLErrorString(jint error) { return call_static_method<SCAPIX_META_STRING("getEGLErrorString"), ref<java::lang::String>>(error); }

} // namespace android::opengl
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_OPENGL_GLUTILS_H
