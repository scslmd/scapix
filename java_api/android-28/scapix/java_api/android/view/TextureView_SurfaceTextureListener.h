// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_VIEW_TEXTUREVIEW_SURFACETEXTURELISTENER_H
#define SCAPIX_ANDROID_VIEW_TEXTUREVIEW_SURFACETEXTURELISTENER_H

namespace scapix::java_api {

namespace android::graphics { class SurfaceTexture; }

namespace android::view {

class TextureView_SurfaceTextureListener : public object_base<SCAPIX_META_STRING("android/view/TextureView$SurfaceTextureListener"),
	java::lang::Object>
{
public:

	void onSurfaceTextureAvailable(ref<android::graphics::SurfaceTexture> p1, jint p2, jint p3);
	void onSurfaceTextureSizeChanged(ref<android::graphics::SurfaceTexture> p1, jint p2, jint p3);
	jboolean onSurfaceTextureDestroyed(ref<android::graphics::SurfaceTexture> p1);
	void onSurfaceTextureUpdated(ref<android::graphics::SurfaceTexture> p1);

protected:

	TextureView_SurfaceTextureListener(handle_type h) : base_(h) {}

};

} // namespace android::view
} // namespace scapix::java_api

#include <scapix/java_api/android/graphics/SurfaceTexture.h>

namespace scapix::java_api {
namespace android::view {

inline void TextureView_SurfaceTextureListener::onSurfaceTextureAvailable(ref<android::graphics::SurfaceTexture> p1, jint p2, jint p3) { return call_method<SCAPIX_META_STRING("onSurfaceTextureAvailable"), void>(p1, p2, p3); }
inline void TextureView_SurfaceTextureListener::onSurfaceTextureSizeChanged(ref<android::graphics::SurfaceTexture> p1, jint p2, jint p3) { return call_method<SCAPIX_META_STRING("onSurfaceTextureSizeChanged"), void>(p1, p2, p3); }
inline jboolean TextureView_SurfaceTextureListener::onSurfaceTextureDestroyed(ref<android::graphics::SurfaceTexture> p1) { return call_method<SCAPIX_META_STRING("onSurfaceTextureDestroyed"), jboolean>(p1); }
inline void TextureView_SurfaceTextureListener::onSurfaceTextureUpdated(ref<android::graphics::SurfaceTexture> p1) { return call_method<SCAPIX_META_STRING("onSurfaceTextureUpdated"), void>(p1); }

} // namespace android::view
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_VIEW_TEXTUREVIEW_SURFACETEXTURELISTENER_H
