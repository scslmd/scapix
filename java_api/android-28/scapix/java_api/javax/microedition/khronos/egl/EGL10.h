// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/microedition/khronos/egl/EGL.h>

#ifndef SCAPIX_JAVAX_MICROEDITION_KHRONOS_EGL_EGL10_H
#define SCAPIX_JAVAX_MICROEDITION_KHRONOS_EGL_EGL10_H

namespace scapix::java_api {

namespace java::lang { class String; }
namespace javax::microedition::khronos::egl { class EGLConfig; }
namespace javax::microedition::khronos::egl { class EGLContext; }
namespace javax::microedition::khronos::egl { class EGLDisplay; }
namespace javax::microedition::khronos::egl { class EGLSurface; }

namespace javax::microedition::khronos::egl {

class EGL10 : public object_base<SCAPIX_META_STRING("javax/microedition/khronos/egl/EGL10"),
	java::lang::Object,
	javax::microedition::khronos::egl::EGL>
{
public:

	static jint EGL_ALPHA_FORMAT_();
	static jint EGL_ALPHA_MASK_SIZE_();
	static jint EGL_ALPHA_SIZE_();
	static jint EGL_BAD_ACCESS_();
	static jint EGL_BAD_ALLOC_();
	static jint EGL_BAD_ATTRIBUTE_();
	static jint EGL_BAD_CONFIG_();
	static jint EGL_BAD_CONTEXT_();
	static jint EGL_BAD_CURRENT_SURFACE_();
	static jint EGL_BAD_DISPLAY_();
	static jint EGL_BAD_MATCH_();
	static jint EGL_BAD_NATIVE_PIXMAP_();
	static jint EGL_BAD_NATIVE_WINDOW_();
	static jint EGL_BAD_PARAMETER_();
	static jint EGL_BAD_SURFACE_();
	static jint EGL_BLUE_SIZE_();
	static jint EGL_BUFFER_SIZE_();
	static jint EGL_COLORSPACE_();
	static jint EGL_COLOR_BUFFER_TYPE_();
	static jint EGL_CONFIG_CAVEAT_();
	static jint EGL_CONFIG_ID_();
	static jint EGL_CORE_NATIVE_ENGINE_();
	static ref<java::lang::Object> EGL_DEFAULT_DISPLAY_();
	static jint EGL_DEPTH_SIZE_();
	static jint EGL_DONT_CARE_();
	static jint EGL_DRAW_();
	static jint EGL_EXTENSIONS_();
	static jint EGL_GREEN_SIZE_();
	static jint EGL_HEIGHT_();
	static jint EGL_HORIZONTAL_RESOLUTION_();
	static jint EGL_LARGEST_PBUFFER_();
	static jint EGL_LEVEL_();
	static jint EGL_LUMINANCE_BUFFER_();
	static jint EGL_LUMINANCE_SIZE_();
	static jint EGL_MAX_PBUFFER_HEIGHT_();
	static jint EGL_MAX_PBUFFER_PIXELS_();
	static jint EGL_MAX_PBUFFER_WIDTH_();
	static jint EGL_NATIVE_RENDERABLE_();
	static jint EGL_NATIVE_VISUAL_ID_();
	static jint EGL_NATIVE_VISUAL_TYPE_();
	static jint EGL_NONE_();
	static jint EGL_NON_CONFORMANT_CONFIG_();
	static jint EGL_NOT_INITIALIZED_();
	static ref<javax::microedition::khronos::egl::EGLContext> EGL_NO_CONTEXT_();
	static ref<javax::microedition::khronos::egl::EGLDisplay> EGL_NO_DISPLAY_();
	static ref<javax::microedition::khronos::egl::EGLSurface> EGL_NO_SURFACE_();
	static jint EGL_PBUFFER_BIT_();
	static jint EGL_PIXEL_ASPECT_RATIO_();
	static jint EGL_PIXMAP_BIT_();
	static jint EGL_READ_();
	static jint EGL_RED_SIZE_();
	static jint EGL_RENDERABLE_TYPE_();
	static jint EGL_RENDER_BUFFER_();
	static jint EGL_RGB_BUFFER_();
	static jint EGL_SAMPLES_();
	static jint EGL_SAMPLE_BUFFERS_();
	static jint EGL_SINGLE_BUFFER_();
	static jint EGL_SLOW_CONFIG_();
	static jint EGL_STENCIL_SIZE_();
	static jint EGL_SUCCESS_();
	static jint EGL_SURFACE_TYPE_();
	static jint EGL_TRANSPARENT_BLUE_VALUE_();
	static jint EGL_TRANSPARENT_GREEN_VALUE_();
	static jint EGL_TRANSPARENT_RED_VALUE_();
	static jint EGL_TRANSPARENT_RGB_();
	static jint EGL_TRANSPARENT_TYPE_();
	static jint EGL_VENDOR_();
	static jint EGL_VERSION_();
	static jint EGL_VERTICAL_RESOLUTION_();
	static jint EGL_WIDTH_();
	static jint EGL_WINDOW_BIT_();

	jboolean eglChooseConfig(ref<javax::microedition::khronos::egl::EGLDisplay> p1, ref<link::java::array<jint>> p2, ref<link::java::array<javax::microedition::khronos::egl::EGLConfig>> p3, jint p4, ref<link::java::array<jint>> p5);
	jboolean eglCopyBuffers(ref<javax::microedition::khronos::egl::EGLDisplay> p1, ref<javax::microedition::khronos::egl::EGLSurface> p2, ref<java::lang::Object> p3);
	ref<javax::microedition::khronos::egl::EGLContext> eglCreateContext(ref<javax::microedition::khronos::egl::EGLDisplay> p1, ref<javax::microedition::khronos::egl::EGLConfig> p2, ref<javax::microedition::khronos::egl::EGLContext> p3, ref<link::java::array<jint>> p4);
	ref<javax::microedition::khronos::egl::EGLSurface> eglCreatePbufferSurface(ref<javax::microedition::khronos::egl::EGLDisplay> p1, ref<javax::microedition::khronos::egl::EGLConfig> p2, ref<link::java::array<jint>> p3);
	ref<javax::microedition::khronos::egl::EGLSurface> eglCreatePixmapSurface(ref<javax::microedition::khronos::egl::EGLDisplay> p1, ref<javax::microedition::khronos::egl::EGLConfig> p2, ref<java::lang::Object> p3, ref<link::java::array<jint>> p4);
	ref<javax::microedition::khronos::egl::EGLSurface> eglCreateWindowSurface(ref<javax::microedition::khronos::egl::EGLDisplay> p1, ref<javax::microedition::khronos::egl::EGLConfig> p2, ref<java::lang::Object> p3, ref<link::java::array<jint>> p4);
	jboolean eglDestroyContext(ref<javax::microedition::khronos::egl::EGLDisplay> p1, ref<javax::microedition::khronos::egl::EGLContext> p2);
	jboolean eglDestroySurface(ref<javax::microedition::khronos::egl::EGLDisplay> p1, ref<javax::microedition::khronos::egl::EGLSurface> p2);
	jboolean eglGetConfigAttrib(ref<javax::microedition::khronos::egl::EGLDisplay> p1, ref<javax::microedition::khronos::egl::EGLConfig> p2, jint p3, ref<link::java::array<jint>> p4);
	jboolean eglGetConfigs(ref<javax::microedition::khronos::egl::EGLDisplay> p1, ref<link::java::array<javax::microedition::khronos::egl::EGLConfig>> p2, jint p3, ref<link::java::array<jint>> p4);
	ref<javax::microedition::khronos::egl::EGLContext> eglGetCurrentContext();
	ref<javax::microedition::khronos::egl::EGLDisplay> eglGetCurrentDisplay();
	ref<javax::microedition::khronos::egl::EGLSurface> eglGetCurrentSurface(jint p1);
	ref<javax::microedition::khronos::egl::EGLDisplay> eglGetDisplay(ref<java::lang::Object> p1);
	jint eglGetError();
	jboolean eglInitialize(ref<javax::microedition::khronos::egl::EGLDisplay> p1, ref<link::java::array<jint>> p2);
	jboolean eglMakeCurrent(ref<javax::microedition::khronos::egl::EGLDisplay> p1, ref<javax::microedition::khronos::egl::EGLSurface> p2, ref<javax::microedition::khronos::egl::EGLSurface> p3, ref<javax::microedition::khronos::egl::EGLContext> p4);
	jboolean eglQueryContext(ref<javax::microedition::khronos::egl::EGLDisplay> p1, ref<javax::microedition::khronos::egl::EGLContext> p2, jint p3, ref<link::java::array<jint>> p4);
	ref<java::lang::String> eglQueryString(ref<javax::microedition::khronos::egl::EGLDisplay> p1, jint p2);
	jboolean eglQuerySurface(ref<javax::microedition::khronos::egl::EGLDisplay> p1, ref<javax::microedition::khronos::egl::EGLSurface> p2, jint p3, ref<link::java::array<jint>> p4);
	jboolean eglSwapBuffers(ref<javax::microedition::khronos::egl::EGLDisplay> p1, ref<javax::microedition::khronos::egl::EGLSurface> p2);
	jboolean eglTerminate(ref<javax::microedition::khronos::egl::EGLDisplay> p1);
	jboolean eglWaitGL();
	jboolean eglWaitNative(jint p1, ref<java::lang::Object> p2);

protected:

	EGL10(handle_type h) : base_(h) {}

};

} // namespace javax::microedition::khronos::egl
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/microedition/khronos/egl/EGLConfig.h>
#include <scapix/java_api/javax/microedition/khronos/egl/EGLContext.h>
#include <scapix/java_api/javax/microedition/khronos/egl/EGLDisplay.h>
#include <scapix/java_api/javax/microedition/khronos/egl/EGLSurface.h>

namespace scapix::java_api {
namespace javax::microedition::khronos::egl {

inline jint EGL10::EGL_ALPHA_FORMAT_() { return get_static_field<SCAPIX_META_STRING("EGL_ALPHA_FORMAT"), jint>(); }
inline jint EGL10::EGL_ALPHA_MASK_SIZE_() { return get_static_field<SCAPIX_META_STRING("EGL_ALPHA_MASK_SIZE"), jint>(); }
inline jint EGL10::EGL_ALPHA_SIZE_() { return get_static_field<SCAPIX_META_STRING("EGL_ALPHA_SIZE"), jint>(); }
inline jint EGL10::EGL_BAD_ACCESS_() { return get_static_field<SCAPIX_META_STRING("EGL_BAD_ACCESS"), jint>(); }
inline jint EGL10::EGL_BAD_ALLOC_() { return get_static_field<SCAPIX_META_STRING("EGL_BAD_ALLOC"), jint>(); }
inline jint EGL10::EGL_BAD_ATTRIBUTE_() { return get_static_field<SCAPIX_META_STRING("EGL_BAD_ATTRIBUTE"), jint>(); }
inline jint EGL10::EGL_BAD_CONFIG_() { return get_static_field<SCAPIX_META_STRING("EGL_BAD_CONFIG"), jint>(); }
inline jint EGL10::EGL_BAD_CONTEXT_() { return get_static_field<SCAPIX_META_STRING("EGL_BAD_CONTEXT"), jint>(); }
inline jint EGL10::EGL_BAD_CURRENT_SURFACE_() { return get_static_field<SCAPIX_META_STRING("EGL_BAD_CURRENT_SURFACE"), jint>(); }
inline jint EGL10::EGL_BAD_DISPLAY_() { return get_static_field<SCAPIX_META_STRING("EGL_BAD_DISPLAY"), jint>(); }
inline jint EGL10::EGL_BAD_MATCH_() { return get_static_field<SCAPIX_META_STRING("EGL_BAD_MATCH"), jint>(); }
inline jint EGL10::EGL_BAD_NATIVE_PIXMAP_() { return get_static_field<SCAPIX_META_STRING("EGL_BAD_NATIVE_PIXMAP"), jint>(); }
inline jint EGL10::EGL_BAD_NATIVE_WINDOW_() { return get_static_field<SCAPIX_META_STRING("EGL_BAD_NATIVE_WINDOW"), jint>(); }
inline jint EGL10::EGL_BAD_PARAMETER_() { return get_static_field<SCAPIX_META_STRING("EGL_BAD_PARAMETER"), jint>(); }
inline jint EGL10::EGL_BAD_SURFACE_() { return get_static_field<SCAPIX_META_STRING("EGL_BAD_SURFACE"), jint>(); }
inline jint EGL10::EGL_BLUE_SIZE_() { return get_static_field<SCAPIX_META_STRING("EGL_BLUE_SIZE"), jint>(); }
inline jint EGL10::EGL_BUFFER_SIZE_() { return get_static_field<SCAPIX_META_STRING("EGL_BUFFER_SIZE"), jint>(); }
inline jint EGL10::EGL_COLORSPACE_() { return get_static_field<SCAPIX_META_STRING("EGL_COLORSPACE"), jint>(); }
inline jint EGL10::EGL_COLOR_BUFFER_TYPE_() { return get_static_field<SCAPIX_META_STRING("EGL_COLOR_BUFFER_TYPE"), jint>(); }
inline jint EGL10::EGL_CONFIG_CAVEAT_() { return get_static_field<SCAPIX_META_STRING("EGL_CONFIG_CAVEAT"), jint>(); }
inline jint EGL10::EGL_CONFIG_ID_() { return get_static_field<SCAPIX_META_STRING("EGL_CONFIG_ID"), jint>(); }
inline jint EGL10::EGL_CORE_NATIVE_ENGINE_() { return get_static_field<SCAPIX_META_STRING("EGL_CORE_NATIVE_ENGINE"), jint>(); }
inline ref<java::lang::Object> EGL10::EGL_DEFAULT_DISPLAY_() { return get_static_field<SCAPIX_META_STRING("EGL_DEFAULT_DISPLAY"), ref<java::lang::Object>>(); }
inline jint EGL10::EGL_DEPTH_SIZE_() { return get_static_field<SCAPIX_META_STRING("EGL_DEPTH_SIZE"), jint>(); }
inline jint EGL10::EGL_DONT_CARE_() { return get_static_field<SCAPIX_META_STRING("EGL_DONT_CARE"), jint>(); }
inline jint EGL10::EGL_DRAW_() { return get_static_field<SCAPIX_META_STRING("EGL_DRAW"), jint>(); }
inline jint EGL10::EGL_EXTENSIONS_() { return get_static_field<SCAPIX_META_STRING("EGL_EXTENSIONS"), jint>(); }
inline jint EGL10::EGL_GREEN_SIZE_() { return get_static_field<SCAPIX_META_STRING("EGL_GREEN_SIZE"), jint>(); }
inline jint EGL10::EGL_HEIGHT_() { return get_static_field<SCAPIX_META_STRING("EGL_HEIGHT"), jint>(); }
inline jint EGL10::EGL_HORIZONTAL_RESOLUTION_() { return get_static_field<SCAPIX_META_STRING("EGL_HORIZONTAL_RESOLUTION"), jint>(); }
inline jint EGL10::EGL_LARGEST_PBUFFER_() { return get_static_field<SCAPIX_META_STRING("EGL_LARGEST_PBUFFER"), jint>(); }
inline jint EGL10::EGL_LEVEL_() { return get_static_field<SCAPIX_META_STRING("EGL_LEVEL"), jint>(); }
inline jint EGL10::EGL_LUMINANCE_BUFFER_() { return get_static_field<SCAPIX_META_STRING("EGL_LUMINANCE_BUFFER"), jint>(); }
inline jint EGL10::EGL_LUMINANCE_SIZE_() { return get_static_field<SCAPIX_META_STRING("EGL_LUMINANCE_SIZE"), jint>(); }
inline jint EGL10::EGL_MAX_PBUFFER_HEIGHT_() { return get_static_field<SCAPIX_META_STRING("EGL_MAX_PBUFFER_HEIGHT"), jint>(); }
inline jint EGL10::EGL_MAX_PBUFFER_PIXELS_() { return get_static_field<SCAPIX_META_STRING("EGL_MAX_PBUFFER_PIXELS"), jint>(); }
inline jint EGL10::EGL_MAX_PBUFFER_WIDTH_() { return get_static_field<SCAPIX_META_STRING("EGL_MAX_PBUFFER_WIDTH"), jint>(); }
inline jint EGL10::EGL_NATIVE_RENDERABLE_() { return get_static_field<SCAPIX_META_STRING("EGL_NATIVE_RENDERABLE"), jint>(); }
inline jint EGL10::EGL_NATIVE_VISUAL_ID_() { return get_static_field<SCAPIX_META_STRING("EGL_NATIVE_VISUAL_ID"), jint>(); }
inline jint EGL10::EGL_NATIVE_VISUAL_TYPE_() { return get_static_field<SCAPIX_META_STRING("EGL_NATIVE_VISUAL_TYPE"), jint>(); }
inline jint EGL10::EGL_NONE_() { return get_static_field<SCAPIX_META_STRING("EGL_NONE"), jint>(); }
inline jint EGL10::EGL_NON_CONFORMANT_CONFIG_() { return get_static_field<SCAPIX_META_STRING("EGL_NON_CONFORMANT_CONFIG"), jint>(); }
inline jint EGL10::EGL_NOT_INITIALIZED_() { return get_static_field<SCAPIX_META_STRING("EGL_NOT_INITIALIZED"), jint>(); }
inline ref<javax::microedition::khronos::egl::EGLContext> EGL10::EGL_NO_CONTEXT_() { return get_static_field<SCAPIX_META_STRING("EGL_NO_CONTEXT"), ref<javax::microedition::khronos::egl::EGLContext>>(); }
inline ref<javax::microedition::khronos::egl::EGLDisplay> EGL10::EGL_NO_DISPLAY_() { return get_static_field<SCAPIX_META_STRING("EGL_NO_DISPLAY"), ref<javax::microedition::khronos::egl::EGLDisplay>>(); }
inline ref<javax::microedition::khronos::egl::EGLSurface> EGL10::EGL_NO_SURFACE_() { return get_static_field<SCAPIX_META_STRING("EGL_NO_SURFACE"), ref<javax::microedition::khronos::egl::EGLSurface>>(); }
inline jint EGL10::EGL_PBUFFER_BIT_() { return get_static_field<SCAPIX_META_STRING("EGL_PBUFFER_BIT"), jint>(); }
inline jint EGL10::EGL_PIXEL_ASPECT_RATIO_() { return get_static_field<SCAPIX_META_STRING("EGL_PIXEL_ASPECT_RATIO"), jint>(); }
inline jint EGL10::EGL_PIXMAP_BIT_() { return get_static_field<SCAPIX_META_STRING("EGL_PIXMAP_BIT"), jint>(); }
inline jint EGL10::EGL_READ_() { return get_static_field<SCAPIX_META_STRING("EGL_READ"), jint>(); }
inline jint EGL10::EGL_RED_SIZE_() { return get_static_field<SCAPIX_META_STRING("EGL_RED_SIZE"), jint>(); }
inline jint EGL10::EGL_RENDERABLE_TYPE_() { return get_static_field<SCAPIX_META_STRING("EGL_RENDERABLE_TYPE"), jint>(); }
inline jint EGL10::EGL_RENDER_BUFFER_() { return get_static_field<SCAPIX_META_STRING("EGL_RENDER_BUFFER"), jint>(); }
inline jint EGL10::EGL_RGB_BUFFER_() { return get_static_field<SCAPIX_META_STRING("EGL_RGB_BUFFER"), jint>(); }
inline jint EGL10::EGL_SAMPLES_() { return get_static_field<SCAPIX_META_STRING("EGL_SAMPLES"), jint>(); }
inline jint EGL10::EGL_SAMPLE_BUFFERS_() { return get_static_field<SCAPIX_META_STRING("EGL_SAMPLE_BUFFERS"), jint>(); }
inline jint EGL10::EGL_SINGLE_BUFFER_() { return get_static_field<SCAPIX_META_STRING("EGL_SINGLE_BUFFER"), jint>(); }
inline jint EGL10::EGL_SLOW_CONFIG_() { return get_static_field<SCAPIX_META_STRING("EGL_SLOW_CONFIG"), jint>(); }
inline jint EGL10::EGL_STENCIL_SIZE_() { return get_static_field<SCAPIX_META_STRING("EGL_STENCIL_SIZE"), jint>(); }
inline jint EGL10::EGL_SUCCESS_() { return get_static_field<SCAPIX_META_STRING("EGL_SUCCESS"), jint>(); }
inline jint EGL10::EGL_SURFACE_TYPE_() { return get_static_field<SCAPIX_META_STRING("EGL_SURFACE_TYPE"), jint>(); }
inline jint EGL10::EGL_TRANSPARENT_BLUE_VALUE_() { return get_static_field<SCAPIX_META_STRING("EGL_TRANSPARENT_BLUE_VALUE"), jint>(); }
inline jint EGL10::EGL_TRANSPARENT_GREEN_VALUE_() { return get_static_field<SCAPIX_META_STRING("EGL_TRANSPARENT_GREEN_VALUE"), jint>(); }
inline jint EGL10::EGL_TRANSPARENT_RED_VALUE_() { return get_static_field<SCAPIX_META_STRING("EGL_TRANSPARENT_RED_VALUE"), jint>(); }
inline jint EGL10::EGL_TRANSPARENT_RGB_() { return get_static_field<SCAPIX_META_STRING("EGL_TRANSPARENT_RGB"), jint>(); }
inline jint EGL10::EGL_TRANSPARENT_TYPE_() { return get_static_field<SCAPIX_META_STRING("EGL_TRANSPARENT_TYPE"), jint>(); }
inline jint EGL10::EGL_VENDOR_() { return get_static_field<SCAPIX_META_STRING("EGL_VENDOR"), jint>(); }
inline jint EGL10::EGL_VERSION_() { return get_static_field<SCAPIX_META_STRING("EGL_VERSION"), jint>(); }
inline jint EGL10::EGL_VERTICAL_RESOLUTION_() { return get_static_field<SCAPIX_META_STRING("EGL_VERTICAL_RESOLUTION"), jint>(); }
inline jint EGL10::EGL_WIDTH_() { return get_static_field<SCAPIX_META_STRING("EGL_WIDTH"), jint>(); }
inline jint EGL10::EGL_WINDOW_BIT_() { return get_static_field<SCAPIX_META_STRING("EGL_WINDOW_BIT"), jint>(); }
inline jboolean EGL10::eglChooseConfig(ref<javax::microedition::khronos::egl::EGLDisplay> p1, ref<link::java::array<jint>> p2, ref<link::java::array<javax::microedition::khronos::egl::EGLConfig>> p3, jint p4, ref<link::java::array<jint>> p5) { return call_method<SCAPIX_META_STRING("eglChooseConfig"), jboolean>(p1, p2, p3, p4, p5); }
inline jboolean EGL10::eglCopyBuffers(ref<javax::microedition::khronos::egl::EGLDisplay> p1, ref<javax::microedition::khronos::egl::EGLSurface> p2, ref<java::lang::Object> p3) { return call_method<SCAPIX_META_STRING("eglCopyBuffers"), jboolean>(p1, p2, p3); }
inline ref<javax::microedition::khronos::egl::EGLContext> EGL10::eglCreateContext(ref<javax::microedition::khronos::egl::EGLDisplay> p1, ref<javax::microedition::khronos::egl::EGLConfig> p2, ref<javax::microedition::khronos::egl::EGLContext> p3, ref<link::java::array<jint>> p4) { return call_method<SCAPIX_META_STRING("eglCreateContext"), ref<javax::microedition::khronos::egl::EGLContext>>(p1, p2, p3, p4); }
inline ref<javax::microedition::khronos::egl::EGLSurface> EGL10::eglCreatePbufferSurface(ref<javax::microedition::khronos::egl::EGLDisplay> p1, ref<javax::microedition::khronos::egl::EGLConfig> p2, ref<link::java::array<jint>> p3) { return call_method<SCAPIX_META_STRING("eglCreatePbufferSurface"), ref<javax::microedition::khronos::egl::EGLSurface>>(p1, p2, p3); }
inline ref<javax::microedition::khronos::egl::EGLSurface> EGL10::eglCreatePixmapSurface(ref<javax::microedition::khronos::egl::EGLDisplay> p1, ref<javax::microedition::khronos::egl::EGLConfig> p2, ref<java::lang::Object> p3, ref<link::java::array<jint>> p4) { return call_method<SCAPIX_META_STRING("eglCreatePixmapSurface"), ref<javax::microedition::khronos::egl::EGLSurface>>(p1, p2, p3, p4); }
inline ref<javax::microedition::khronos::egl::EGLSurface> EGL10::eglCreateWindowSurface(ref<javax::microedition::khronos::egl::EGLDisplay> p1, ref<javax::microedition::khronos::egl::EGLConfig> p2, ref<java::lang::Object> p3, ref<link::java::array<jint>> p4) { return call_method<SCAPIX_META_STRING("eglCreateWindowSurface"), ref<javax::microedition::khronos::egl::EGLSurface>>(p1, p2, p3, p4); }
inline jboolean EGL10::eglDestroyContext(ref<javax::microedition::khronos::egl::EGLDisplay> p1, ref<javax::microedition::khronos::egl::EGLContext> p2) { return call_method<SCAPIX_META_STRING("eglDestroyContext"), jboolean>(p1, p2); }
inline jboolean EGL10::eglDestroySurface(ref<javax::microedition::khronos::egl::EGLDisplay> p1, ref<javax::microedition::khronos::egl::EGLSurface> p2) { return call_method<SCAPIX_META_STRING("eglDestroySurface"), jboolean>(p1, p2); }
inline jboolean EGL10::eglGetConfigAttrib(ref<javax::microedition::khronos::egl::EGLDisplay> p1, ref<javax::microedition::khronos::egl::EGLConfig> p2, jint p3, ref<link::java::array<jint>> p4) { return call_method<SCAPIX_META_STRING("eglGetConfigAttrib"), jboolean>(p1, p2, p3, p4); }
inline jboolean EGL10::eglGetConfigs(ref<javax::microedition::khronos::egl::EGLDisplay> p1, ref<link::java::array<javax::microedition::khronos::egl::EGLConfig>> p2, jint p3, ref<link::java::array<jint>> p4) { return call_method<SCAPIX_META_STRING("eglGetConfigs"), jboolean>(p1, p2, p3, p4); }
inline ref<javax::microedition::khronos::egl::EGLContext> EGL10::eglGetCurrentContext() { return call_method<SCAPIX_META_STRING("eglGetCurrentContext"), ref<javax::microedition::khronos::egl::EGLContext>>(); }
inline ref<javax::microedition::khronos::egl::EGLDisplay> EGL10::eglGetCurrentDisplay() { return call_method<SCAPIX_META_STRING("eglGetCurrentDisplay"), ref<javax::microedition::khronos::egl::EGLDisplay>>(); }
inline ref<javax::microedition::khronos::egl::EGLSurface> EGL10::eglGetCurrentSurface(jint p1) { return call_method<SCAPIX_META_STRING("eglGetCurrentSurface"), ref<javax::microedition::khronos::egl::EGLSurface>>(p1); }
inline ref<javax::microedition::khronos::egl::EGLDisplay> EGL10::eglGetDisplay(ref<java::lang::Object> p1) { return call_method<SCAPIX_META_STRING("eglGetDisplay"), ref<javax::microedition::khronos::egl::EGLDisplay>>(p1); }
inline jint EGL10::eglGetError() { return call_method<SCAPIX_META_STRING("eglGetError"), jint>(); }
inline jboolean EGL10::eglInitialize(ref<javax::microedition::khronos::egl::EGLDisplay> p1, ref<link::java::array<jint>> p2) { return call_method<SCAPIX_META_STRING("eglInitialize"), jboolean>(p1, p2); }
inline jboolean EGL10::eglMakeCurrent(ref<javax::microedition::khronos::egl::EGLDisplay> p1, ref<javax::microedition::khronos::egl::EGLSurface> p2, ref<javax::microedition::khronos::egl::EGLSurface> p3, ref<javax::microedition::khronos::egl::EGLContext> p4) { return call_method<SCAPIX_META_STRING("eglMakeCurrent"), jboolean>(p1, p2, p3, p4); }
inline jboolean EGL10::eglQueryContext(ref<javax::microedition::khronos::egl::EGLDisplay> p1, ref<javax::microedition::khronos::egl::EGLContext> p2, jint p3, ref<link::java::array<jint>> p4) { return call_method<SCAPIX_META_STRING("eglQueryContext"), jboolean>(p1, p2, p3, p4); }
inline ref<java::lang::String> EGL10::eglQueryString(ref<javax::microedition::khronos::egl::EGLDisplay> p1, jint p2) { return call_method<SCAPIX_META_STRING("eglQueryString"), ref<java::lang::String>>(p1, p2); }
inline jboolean EGL10::eglQuerySurface(ref<javax::microedition::khronos::egl::EGLDisplay> p1, ref<javax::microedition::khronos::egl::EGLSurface> p2, jint p3, ref<link::java::array<jint>> p4) { return call_method<SCAPIX_META_STRING("eglQuerySurface"), jboolean>(p1, p2, p3, p4); }
inline jboolean EGL10::eglSwapBuffers(ref<javax::microedition::khronos::egl::EGLDisplay> p1, ref<javax::microedition::khronos::egl::EGLSurface> p2) { return call_method<SCAPIX_META_STRING("eglSwapBuffers"), jboolean>(p1, p2); }
inline jboolean EGL10::eglTerminate(ref<javax::microedition::khronos::egl::EGLDisplay> p1) { return call_method<SCAPIX_META_STRING("eglTerminate"), jboolean>(p1); }
inline jboolean EGL10::eglWaitGL() { return call_method<SCAPIX_META_STRING("eglWaitGL"), jboolean>(); }
inline jboolean EGL10::eglWaitNative(jint p1, ref<java::lang::Object> p2) { return call_method<SCAPIX_META_STRING("eglWaitNative"), jboolean>(p1, p2); }

} // namespace javax::microedition::khronos::egl
} // namespace scapix::java_api

#endif // SCAPIX_JAVAX_MICROEDITION_KHRONOS_EGL_EGL10_H
