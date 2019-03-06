// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/android/transition/Visibility.h>

#ifndef SCAPIX_ANDROID_TRANSITION_EXPLODE_H
#define SCAPIX_ANDROID_TRANSITION_EXPLODE_H

namespace scapix::java_api {

namespace android::animation { class Animator; }
namespace android::content { class Context; }
namespace android::transition { class TransitionValues; }
namespace android::util { class AttributeSet; }
namespace android::view { class View; }
namespace android::view { class ViewGroup; }

namespace android::transition {

class Explode : public object_base<SCAPIX_META_STRING("android/transition/Explode"),
	android::transition::Visibility>
{
public:

	static ref<Explode> new_object();
	static ref<Explode> new_object(ref<android::content::Context> context, ref<android::util::AttributeSet> attrs);
	void captureStartValues(ref<android::transition::TransitionValues> transitionValues);
	void captureEndValues(ref<android::transition::TransitionValues> transitionValues);
	ref<android::animation::Animator> onAppear(ref<android::view::ViewGroup> sceneRoot, ref<android::view::View> view, ref<android::transition::TransitionValues> startValues, ref<android::transition::TransitionValues> endValues);
	ref<android::animation::Animator> onDisappear(ref<android::view::ViewGroup> sceneRoot, ref<android::view::View> view, ref<android::transition::TransitionValues> startValues, ref<android::transition::TransitionValues> endValues);

protected:

	Explode(handle_type h) : base_(h) {}

};

} // namespace android::transition
} // namespace scapix::java_api

#include <scapix/java_api/android/animation/Animator.h>
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/transition/TransitionValues.h>
#include <scapix/java_api/android/util/AttributeSet.h>
#include <scapix/java_api/android/view/View.h>
#include <scapix/java_api/android/view/ViewGroup.h>

namespace scapix::java_api {
namespace android::transition {

inline ref<Explode> Explode::new_object() { return base_::new_object(); }
inline ref<Explode> Explode::new_object(ref<android::content::Context> context, ref<android::util::AttributeSet> attrs) { return base_::new_object(context, attrs); }
inline void Explode::captureStartValues(ref<android::transition::TransitionValues> transitionValues) { return call_method<SCAPIX_META_STRING("captureStartValues"), void>(transitionValues); }
inline void Explode::captureEndValues(ref<android::transition::TransitionValues> transitionValues) { return call_method<SCAPIX_META_STRING("captureEndValues"), void>(transitionValues); }
inline ref<android::animation::Animator> Explode::onAppear(ref<android::view::ViewGroup> sceneRoot, ref<android::view::View> view, ref<android::transition::TransitionValues> startValues, ref<android::transition::TransitionValues> endValues) { return call_method<SCAPIX_META_STRING("onAppear"), ref<android::animation::Animator>>(sceneRoot, view, startValues, endValues); }
inline ref<android::animation::Animator> Explode::onDisappear(ref<android::view::ViewGroup> sceneRoot, ref<android::view::View> view, ref<android::transition::TransitionValues> startValues, ref<android::transition::TransitionValues> endValues) { return call_method<SCAPIX_META_STRING("onDisappear"), ref<android::animation::Animator>>(sceneRoot, view, startValues, endValues); }

} // namespace android::transition
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_TRANSITION_EXPLODE_H
