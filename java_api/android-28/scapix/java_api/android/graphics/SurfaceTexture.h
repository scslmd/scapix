// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_GRAPHICS_SURFACETEXTURE_H
#define SCAPIX_ANDROID_GRAPHICS_SURFACETEXTURE_H

namespace scapix::java_api {

namespace android::graphics { class SurfaceTexture_OnFrameAvailableListener; }
namespace android::os { class Handler; }
namespace android::graphics { class SurfaceTexture_OutOfResourcesException; }

namespace android::graphics {

class SurfaceTexture : public object_base<SCAPIX_META_STRING("android/graphics/SurfaceTexture"),
	java::lang::Object>
{
public:

	using OutOfResourcesException = SurfaceTexture_OutOfResourcesException;
	using OnFrameAvailableListener = SurfaceTexture_OnFrameAvailableListener;

	static ref<SurfaceTexture> new_object(jint texName);
	static ref<SurfaceTexture> new_object(jint texName, jboolean singleBufferMode);
	static ref<SurfaceTexture> new_object(jboolean singleBufferMode);
	void setOnFrameAvailableListener(ref<android::graphics::SurfaceTexture_OnFrameAvailableListener> listener);
	void setOnFrameAvailableListener(ref<android::graphics::SurfaceTexture_OnFrameAvailableListener> listener, ref<android::os::Handler> handler);
	void setDefaultBufferSize(jint width, jint height);
	void updateTexImage();
	void releaseTexImage();
	void detachFromGLContext();
	void attachToGLContext(jint texName);
	void getTransformMatrix(ref<link::java::array<jfloat>> mtx);
	jlong getTimestamp();
	void release();
	jboolean isReleased();

protected:

	SurfaceTexture(handle_type h) : base_(h) {}

};

} // namespace android::graphics
} // namespace scapix::java_api

#include <scapix/java_api/android/graphics/SurfaceTexture_OnFrameAvailableListener.h>
#include <scapix/java_api/android/os/Handler.h>

namespace scapix::java_api {
namespace android::graphics {

inline ref<SurfaceTexture> SurfaceTexture::new_object(jint texName) { return base_::new_object(texName); }
inline ref<SurfaceTexture> SurfaceTexture::new_object(jint texName, jboolean singleBufferMode) { return base_::new_object(texName, singleBufferMode); }
inline ref<SurfaceTexture> SurfaceTexture::new_object(jboolean singleBufferMode) { return base_::new_object(singleBufferMode); }
inline void SurfaceTexture::setOnFrameAvailableListener(ref<android::graphics::SurfaceTexture_OnFrameAvailableListener> listener) { return call_method<SCAPIX_META_STRING("setOnFrameAvailableListener"), void>(listener); }
inline void SurfaceTexture::setOnFrameAvailableListener(ref<android::graphics::SurfaceTexture_OnFrameAvailableListener> listener, ref<android::os::Handler> handler) { return call_method<SCAPIX_META_STRING("setOnFrameAvailableListener"), void>(listener, handler); }
inline void SurfaceTexture::setDefaultBufferSize(jint width, jint height) { return call_method<SCAPIX_META_STRING("setDefaultBufferSize"), void>(width, height); }
inline void SurfaceTexture::updateTexImage() { return call_method<SCAPIX_META_STRING("updateTexImage"), void>(); }
inline void SurfaceTexture::releaseTexImage() { return call_method<SCAPIX_META_STRING("releaseTexImage"), void>(); }
inline void SurfaceTexture::detachFromGLContext() { return call_method<SCAPIX_META_STRING("detachFromGLContext"), void>(); }
inline void SurfaceTexture::attachToGLContext(jint texName) { return call_method<SCAPIX_META_STRING("attachToGLContext"), void>(texName); }
inline void SurfaceTexture::getTransformMatrix(ref<link::java::array<jfloat>> mtx) { return call_method<SCAPIX_META_STRING("getTransformMatrix"), void>(mtx); }
inline jlong SurfaceTexture::getTimestamp() { return call_method<SCAPIX_META_STRING("getTimestamp"), jlong>(); }
inline void SurfaceTexture::release() { return call_method<SCAPIX_META_STRING("release"), void>(); }
inline jboolean SurfaceTexture::isReleased() { return call_method<SCAPIX_META_STRING("isReleased"), jboolean>(); }

} // namespace android::graphics
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_GRAPHICS_SURFACETEXTURE_H
