// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/view/SurfaceHolder_Callback.h>

#ifndef SCAPIX_ANDROID_VIEW_SURFACEHOLDER_CALLBACK2_H
#define SCAPIX_ANDROID_VIEW_SURFACEHOLDER_CALLBACK2_H

namespace scapix::java_api {

namespace android::view { class SurfaceHolder; }
namespace java::lang { class Runnable; }

namespace android::view {

class SurfaceHolder_Callback2 : public object_base<SCAPIX_META_STRING("android/view/SurfaceHolder$Callback2"),
	java::lang::Object,
	android::view::SurfaceHolder_Callback>
{
public:

	void surfaceRedrawNeeded(ref<android::view::SurfaceHolder> p1);
	void surfaceRedrawNeededAsync(ref<android::view::SurfaceHolder> holder, ref<java::lang::Runnable> drawingFinished);

protected:

	SurfaceHolder_Callback2(handle_type h) : base_(h) {}

};

} // namespace android::view
} // namespace scapix::java_api

#include <scapix/java_api/android/view/SurfaceHolder.h>
#include <scapix/java_api/java/lang/Runnable.h>

namespace scapix::java_api {
namespace android::view {

inline void SurfaceHolder_Callback2::surfaceRedrawNeeded(ref<android::view::SurfaceHolder> p1) { return call_method<SCAPIX_META_STRING("surfaceRedrawNeeded"), void>(p1); }
inline void SurfaceHolder_Callback2::surfaceRedrawNeededAsync(ref<android::view::SurfaceHolder> holder, ref<java::lang::Runnable> drawingFinished) { return call_method<SCAPIX_META_STRING("surfaceRedrawNeededAsync"), void>(holder, drawingFinished); }

} // namespace android::view
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_VIEW_SURFACEHOLDER_CALLBACK2_H
