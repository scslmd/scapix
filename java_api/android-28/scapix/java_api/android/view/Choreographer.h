// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_VIEW_CHOREOGRAPHER_H
#define SCAPIX_ANDROID_VIEW_CHOREOGRAPHER_H

namespace scapix::java_api {

namespace android::view { class Choreographer_FrameCallback; }

namespace android::view {

class Choreographer : public object_base<SCAPIX_META_STRING("android/view/Choreographer"),
	java::lang::Object>
{
public:

	using FrameCallback = Choreographer_FrameCallback;

	static ref<android::view::Choreographer> getInstance();
	void postFrameCallback(ref<android::view::Choreographer_FrameCallback> callback);
	void postFrameCallbackDelayed(ref<android::view::Choreographer_FrameCallback> callback, jlong delayMillis);
	void removeFrameCallback(ref<android::view::Choreographer_FrameCallback> callback);

protected:

	Choreographer(handle_type h) : base_(h) {}

};

} // namespace android::view
} // namespace scapix::java_api

#include <scapix/java_api/android/view/Choreographer_FrameCallback.h>

namespace scapix::java_api {
namespace android::view {

inline ref<android::view::Choreographer> Choreographer::getInstance() { return call_static_method<SCAPIX_META_STRING("getInstance"), ref<android::view::Choreographer>>(); }
inline void Choreographer::postFrameCallback(ref<android::view::Choreographer_FrameCallback> callback) { return call_method<SCAPIX_META_STRING("postFrameCallback"), void>(callback); }
inline void Choreographer::postFrameCallbackDelayed(ref<android::view::Choreographer_FrameCallback> callback, jlong delayMillis) { return call_method<SCAPIX_META_STRING("postFrameCallbackDelayed"), void>(callback, delayMillis); }
inline void Choreographer::removeFrameCallback(ref<android::view::Choreographer_FrameCallback> callback) { return call_method<SCAPIX_META_STRING("removeFrameCallback"), void>(callback); }

} // namespace android::view
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_VIEW_CHOREOGRAPHER_H
