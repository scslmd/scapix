// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/android/view/animation/BaseInterpolator.h>

#ifndef SCAPIX_ANDROID_VIEW_ANIMATION_LINEARINTERPOLATOR_H
#define SCAPIX_ANDROID_VIEW_ANIMATION_LINEARINTERPOLATOR_H

namespace scapix::java_api {

namespace android::content { class Context; }
namespace android::util { class AttributeSet; }

namespace android::view::animation {

class LinearInterpolator : public object_base<SCAPIX_META_STRING("android/view/animation/LinearInterpolator"),
	android::view::animation::BaseInterpolator>
{
public:

	static ref<LinearInterpolator> new_object();
	static ref<LinearInterpolator> new_object(ref<android::content::Context> context, ref<android::util::AttributeSet> attrs);
	jfloat getInterpolation(jfloat input);

protected:

	LinearInterpolator(handle_type h) : base_(h) {}

};

} // namespace android::view::animation
} // namespace scapix::java_api

#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/util/AttributeSet.h>

namespace scapix::java_api {
namespace android::view::animation {

inline ref<LinearInterpolator> LinearInterpolator::new_object() { return base_::new_object(); }
inline ref<LinearInterpolator> LinearInterpolator::new_object(ref<android::content::Context> context, ref<android::util::AttributeSet> attrs) { return base_::new_object(context, attrs); }
inline jfloat LinearInterpolator::getInterpolation(jfloat input) { return call_method<SCAPIX_META_STRING("getInterpolation"), jfloat>(input); }

} // namespace android::view::animation
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_VIEW_ANIMATION_LINEARINTERPOLATOR_H
