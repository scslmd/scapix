// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_ANIMATION_ANIMATORSET_BUILDER_H
#define SCAPIX_ANDROID_ANIMATION_ANIMATORSET_BUILDER_H

namespace scapix::java_api {

namespace android::animation { class Animator; }

namespace android::animation {

class AnimatorSet_Builder : public object_base<SCAPIX_META_STRING("android/animation/AnimatorSet$Builder"),
	java::lang::Object>
{
public:

	ref<android::animation::AnimatorSet_Builder> with(ref<android::animation::Animator> anim);
	ref<android::animation::AnimatorSet_Builder> before(ref<android::animation::Animator> anim);
	ref<android::animation::AnimatorSet_Builder> after(ref<android::animation::Animator> anim);
	ref<android::animation::AnimatorSet_Builder> after(jlong delay);

protected:

	AnimatorSet_Builder(handle_type h) : base_(h) {}

};

} // namespace android::animation
} // namespace scapix::java_api

#include <scapix/java_api/android/animation/Animator.h>

namespace scapix::java_api {
namespace android::animation {

inline ref<android::animation::AnimatorSet_Builder> AnimatorSet_Builder::with(ref<android::animation::Animator> anim) { return call_method<SCAPIX_META_STRING("with"), ref<android::animation::AnimatorSet_Builder>>(anim); }
inline ref<android::animation::AnimatorSet_Builder> AnimatorSet_Builder::before(ref<android::animation::Animator> anim) { return call_method<SCAPIX_META_STRING("before"), ref<android::animation::AnimatorSet_Builder>>(anim); }
inline ref<android::animation::AnimatorSet_Builder> AnimatorSet_Builder::after(ref<android::animation::Animator> anim) { return call_method<SCAPIX_META_STRING("after"), ref<android::animation::AnimatorSet_Builder>>(anim); }
inline ref<android::animation::AnimatorSet_Builder> AnimatorSet_Builder::after(jlong delay) { return call_method<SCAPIX_META_STRING("after"), ref<android::animation::AnimatorSet_Builder>>(delay); }

} // namespace android::animation
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_ANIMATION_ANIMATORSET_BUILDER_H
