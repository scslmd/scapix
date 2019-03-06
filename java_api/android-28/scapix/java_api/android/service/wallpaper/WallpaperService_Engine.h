// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_SERVICE_WALLPAPER_WALLPAPERSERVICE_ENGINE_H
#define SCAPIX_ANDROID_SERVICE_WALLPAPER_WALLPAPERSERVICE_ENGINE_H

namespace scapix::java_api {

namespace android::app { class WallpaperColors; }
namespace android::os { class Bundle; }
namespace android::service::wallpaper { class WallpaperService; }
namespace android::view { class MotionEvent; }
namespace android::view { class SurfaceHolder; }
namespace android::view { class WindowInsets; }
namespace java::lang { class String; }

namespace android::service::wallpaper {

class WallpaperService_Engine : public object_base<SCAPIX_META_STRING("android/service/wallpaper/WallpaperService$Engine"),
	java::lang::Object>
{
public:

	static ref<WallpaperService_Engine> new_object(ref<android::service::wallpaper::WallpaperService> this_0);
	ref<android::view::SurfaceHolder> getSurfaceHolder();
	jint getDesiredMinimumWidth();
	jint getDesiredMinimumHeight();
	jboolean isVisible();
	jboolean isPreview();
	void setTouchEventsEnabled(jboolean enabled);
	void setOffsetNotificationsEnabled(jboolean enabled);
	void onCreate(ref<android::view::SurfaceHolder> surfaceHolder);
	void onDestroy();
	void onVisibilityChanged(jboolean visible);
	void onApplyWindowInsets(ref<android::view::WindowInsets> insets);
	void onTouchEvent(ref<android::view::MotionEvent> event);
	void onOffsetsChanged(jfloat xOffset, jfloat yOffset, jfloat xOffsetStep, jfloat yOffsetStep, jint xPixelOffset, jint yPixelOffset);
	ref<android::os::Bundle> onCommand(ref<java::lang::String> action, jint x, jint y, jint z, ref<android::os::Bundle> extras, jboolean resultRequested);
	void onDesiredSizeChanged(jint desiredWidth, jint desiredHeight);
	void onSurfaceChanged(ref<android::view::SurfaceHolder> holder, jint format, jint width, jint height);
	void onSurfaceRedrawNeeded(ref<android::view::SurfaceHolder> holder);
	void onSurfaceCreated(ref<android::view::SurfaceHolder> holder);
	void onSurfaceDestroyed(ref<android::view::SurfaceHolder> holder);
	void notifyColorsChanged();
	ref<android::app::WallpaperColors> onComputeColors();

protected:

	WallpaperService_Engine(handle_type h) : base_(h) {}

};

} // namespace android::service::wallpaper
} // namespace scapix::java_api

#include <scapix/java_api/android/app/WallpaperColors.h>
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/android/service/wallpaper/WallpaperService.h>
#include <scapix/java_api/android/view/MotionEvent.h>
#include <scapix/java_api/android/view/SurfaceHolder.h>
#include <scapix/java_api/android/view/WindowInsets.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::service::wallpaper {

inline ref<WallpaperService_Engine> WallpaperService_Engine::new_object(ref<android::service::wallpaper::WallpaperService> this_0) { return base_::new_object(this_0); }
inline ref<android::view::SurfaceHolder> WallpaperService_Engine::getSurfaceHolder() { return call_method<SCAPIX_META_STRING("getSurfaceHolder"), ref<android::view::SurfaceHolder>>(); }
inline jint WallpaperService_Engine::getDesiredMinimumWidth() { return call_method<SCAPIX_META_STRING("getDesiredMinimumWidth"), jint>(); }
inline jint WallpaperService_Engine::getDesiredMinimumHeight() { return call_method<SCAPIX_META_STRING("getDesiredMinimumHeight"), jint>(); }
inline jboolean WallpaperService_Engine::isVisible() { return call_method<SCAPIX_META_STRING("isVisible"), jboolean>(); }
inline jboolean WallpaperService_Engine::isPreview() { return call_method<SCAPIX_META_STRING("isPreview"), jboolean>(); }
inline void WallpaperService_Engine::setTouchEventsEnabled(jboolean enabled) { return call_method<SCAPIX_META_STRING("setTouchEventsEnabled"), void>(enabled); }
inline void WallpaperService_Engine::setOffsetNotificationsEnabled(jboolean enabled) { return call_method<SCAPIX_META_STRING("setOffsetNotificationsEnabled"), void>(enabled); }
inline void WallpaperService_Engine::onCreate(ref<android::view::SurfaceHolder> surfaceHolder) { return call_method<SCAPIX_META_STRING("onCreate"), void>(surfaceHolder); }
inline void WallpaperService_Engine::onDestroy() { return call_method<SCAPIX_META_STRING("onDestroy"), void>(); }
inline void WallpaperService_Engine::onVisibilityChanged(jboolean visible) { return call_method<SCAPIX_META_STRING("onVisibilityChanged"), void>(visible); }
inline void WallpaperService_Engine::onApplyWindowInsets(ref<android::view::WindowInsets> insets) { return call_method<SCAPIX_META_STRING("onApplyWindowInsets"), void>(insets); }
inline void WallpaperService_Engine::onTouchEvent(ref<android::view::MotionEvent> event) { return call_method<SCAPIX_META_STRING("onTouchEvent"), void>(event); }
inline void WallpaperService_Engine::onOffsetsChanged(jfloat xOffset, jfloat yOffset, jfloat xOffsetStep, jfloat yOffsetStep, jint xPixelOffset, jint yPixelOffset) { return call_method<SCAPIX_META_STRING("onOffsetsChanged"), void>(xOffset, yOffset, xOffsetStep, yOffsetStep, xPixelOffset, yPixelOffset); }
inline ref<android::os::Bundle> WallpaperService_Engine::onCommand(ref<java::lang::String> action, jint x, jint y, jint z, ref<android::os::Bundle> extras, jboolean resultRequested) { return call_method<SCAPIX_META_STRING("onCommand"), ref<android::os::Bundle>>(action, x, y, z, extras, resultRequested); }
inline void WallpaperService_Engine::onDesiredSizeChanged(jint desiredWidth, jint desiredHeight) { return call_method<SCAPIX_META_STRING("onDesiredSizeChanged"), void>(desiredWidth, desiredHeight); }
inline void WallpaperService_Engine::onSurfaceChanged(ref<android::view::SurfaceHolder> holder, jint format, jint width, jint height) { return call_method<SCAPIX_META_STRING("onSurfaceChanged"), void>(holder, format, width, height); }
inline void WallpaperService_Engine::onSurfaceRedrawNeeded(ref<android::view::SurfaceHolder> holder) { return call_method<SCAPIX_META_STRING("onSurfaceRedrawNeeded"), void>(holder); }
inline void WallpaperService_Engine::onSurfaceCreated(ref<android::view::SurfaceHolder> holder) { return call_method<SCAPIX_META_STRING("onSurfaceCreated"), void>(holder); }
inline void WallpaperService_Engine::onSurfaceDestroyed(ref<android::view::SurfaceHolder> holder) { return call_method<SCAPIX_META_STRING("onSurfaceDestroyed"), void>(holder); }
inline void WallpaperService_Engine::notifyColorsChanged() { return call_method<SCAPIX_META_STRING("notifyColorsChanged"), void>(); }
inline ref<android::app::WallpaperColors> WallpaperService_Engine::onComputeColors() { return call_method<SCAPIX_META_STRING("onComputeColors"), ref<android::app::WallpaperColors>>(); }

} // namespace android::service::wallpaper
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_SERVICE_WALLPAPER_WALLPAPERSERVICE_ENGINE_H
