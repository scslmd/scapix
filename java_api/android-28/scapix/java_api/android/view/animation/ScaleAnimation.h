// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/android/view/animation/Animation.h>

#ifndef SCAPIX_ANDROID_VIEW_ANIMATION_SCALEANIMATION_H
#define SCAPIX_ANDROID_VIEW_ANIMATION_SCALEANIMATION_H

namespace scapix::java_api {

namespace android::content { class Context; }
namespace android::util { class AttributeSet; }

namespace android::view::animation {

class ScaleAnimation : public object_base<SCAPIX_META_STRING("android/view/animation/ScaleAnimation"),
	android::view::animation::Animation>
{
public:

	static ref<ScaleAnimation> new_object(ref<android::content::Context> context, ref<android::util::AttributeSet> attrs);
	static ref<ScaleAnimation> new_object(jfloat fromX, jfloat toX, jfloat fromY, jfloat toY);
	static ref<ScaleAnimation> new_object(jfloat fromX, jfloat toX, jfloat fromY, jfloat toY, jfloat pivotX, jfloat pivotY);
	static ref<ScaleAnimation> new_object(jfloat fromX, jfloat toX, jfloat fromY, jfloat toY, jint pivotXType, jfloat pivotXValue, jint pivotYType, jfloat pivotYValue);
	void initialize(jint width, jint height, jint parentWidth, jint parentHeight);

protected:

	ScaleAnimation(handle_type h) : base_(h) {}

};

} // namespace android::view::animation
} // namespace scapix::java_api

#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/util/AttributeSet.h>

namespace scapix::java_api {
namespace android::view::animation {

inline ref<ScaleAnimation> ScaleAnimation::new_object(ref<android::content::Context> context, ref<android::util::AttributeSet> attrs) { return base_::new_object(context, attrs); }
inline ref<ScaleAnimation> ScaleAnimation::new_object(jfloat fromX, jfloat toX, jfloat fromY, jfloat toY) { return base_::new_object(fromX, toX, fromY, toY); }
inline ref<ScaleAnimation> ScaleAnimation::new_object(jfloat fromX, jfloat toX, jfloat fromY, jfloat toY, jfloat pivotX, jfloat pivotY) { return base_::new_object(fromX, toX, fromY, toY, pivotX, pivotY); }
inline ref<ScaleAnimation> ScaleAnimation::new_object(jfloat fromX, jfloat toX, jfloat fromY, jfloat toY, jint pivotXType, jfloat pivotXValue, jint pivotYType, jfloat pivotYValue) { return base_::new_object(fromX, toX, fromY, toY, pivotXType, pivotXValue, pivotYType, pivotYValue); }
inline void ScaleAnimation::initialize(jint width, jint height, jint parentWidth, jint parentHeight) { return call_method<SCAPIX_META_STRING("initialize"), void>(width, height, parentWidth, parentHeight); }

} // namespace android::view::animation
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_VIEW_ANIMATION_SCALEANIMATION_H
