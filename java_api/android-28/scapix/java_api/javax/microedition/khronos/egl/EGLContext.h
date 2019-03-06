// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVAX_MICROEDITION_KHRONOS_EGL_EGLCONTEXT_H
#define SCAPIX_JAVAX_MICROEDITION_KHRONOS_EGL_EGLCONTEXT_H

namespace scapix::java_api {

namespace javax::microedition::khronos::egl { class EGL; }
namespace javax::microedition::khronos::opengles { class GL; }

namespace javax::microedition::khronos::egl {

class EGLContext : public object_base<SCAPIX_META_STRING("javax/microedition/khronos/egl/EGLContext"),
	java::lang::Object>
{
public:

	static ref<EGLContext> new_object();
	static ref<javax::microedition::khronos::egl::EGL> getEGL();
	ref<javax::microedition::khronos::opengles::GL> getGL();

protected:

	EGLContext(handle_type h) : base_(h) {}

};

} // namespace javax::microedition::khronos::egl
} // namespace scapix::java_api

#include <scapix/java_api/javax/microedition/khronos/egl/EGL.h>
#include <scapix/java_api/javax/microedition/khronos/opengles/GL.h>

namespace scapix::java_api {
namespace javax::microedition::khronos::egl {

inline ref<EGLContext> EGLContext::new_object() { return base_::new_object(); }
inline ref<javax::microedition::khronos::egl::EGL> EGLContext::getEGL() { return call_static_method<SCAPIX_META_STRING("getEGL"), ref<javax::microedition::khronos::egl::EGL>>(); }
inline ref<javax::microedition::khronos::opengles::GL> EGLContext::getGL() { return call_method<SCAPIX_META_STRING("getGL"), ref<javax::microedition::khronos::opengles::GL>>(); }

} // namespace javax::microedition::khronos::egl
} // namespace scapix::java_api

#endif // SCAPIX_JAVAX_MICROEDITION_KHRONOS_EGL_EGLCONTEXT_H
