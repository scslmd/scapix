// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/android/animation/Animator.h>

#ifndef SCAPIX_ANDROID_ANIMATION_VALUEANIMATOR_H
#define SCAPIX_ANDROID_ANIMATION_VALUEANIMATOR_H

namespace scapix::java_api {

namespace android::animation { class PropertyValuesHolder; }
namespace android::animation { class TimeInterpolator; }
namespace android::animation { class TypeEvaluator; }
namespace android::animation { class ValueAnimator_AnimatorUpdateListener; }
namespace java::lang { class Object; }
namespace java::lang { class String; }

namespace android::animation {

class ValueAnimator : public object_base<SCAPIX_META_STRING("android/animation/ValueAnimator"),
	android::animation::Animator>
{
public:

	using AnimatorUpdateListener = ValueAnimator_AnimatorUpdateListener;

	static jint INFINITE_();
	static jint RESTART_();
	static jint REVERSE_();

	static ref<ValueAnimator> new_object();
	static jboolean areAnimatorsEnabled();
	static ref<android::animation::ValueAnimator> ofInt(ref<link::java::array<jint>> values);
	static ref<android::animation::ValueAnimator> ofArgb(ref<link::java::array<jint>> values);
	static ref<android::animation::ValueAnimator> ofFloat(ref<link::java::array<jfloat>> values);
	static ref<android::animation::ValueAnimator> ofPropertyValuesHolder(ref<link::java::array<android::animation::PropertyValuesHolder>> values);
	static ref<android::animation::ValueAnimator> ofObject(ref<android::animation::TypeEvaluator> evaluator, ref<link::java::array<java::lang::Object>> values);
	void setIntValues(ref<link::java::array<jint>> values);
	void setFloatValues(ref<link::java::array<jfloat>> values);
	void setObjectValues(ref<link::java::array<java::lang::Object>> values);
	void setValues(ref<link::java::array<android::animation::PropertyValuesHolder>> values);
	ref<link::java::array<android::animation::PropertyValuesHolder>> getValues();
	ref<android::animation::ValueAnimator> setDuration(jlong duration);
	jlong getDuration();
	jlong getTotalDuration();
	void setCurrentPlayTime(jlong playTime);
	void setCurrentFraction(jfloat fraction);
	jlong getCurrentPlayTime();
	jlong getStartDelay();
	void setStartDelay(jlong startDelay);
	static jlong getFrameDelay();
	static void setFrameDelay(jlong frameDelay);
	ref<java::lang::Object> getAnimatedValue();
	ref<java::lang::Object> getAnimatedValue(ref<java::lang::String> propertyName);
	void setRepeatCount(jint value);
	jint getRepeatCount();
	void setRepeatMode(jint value);
	jint getRepeatMode();
	void addUpdateListener(ref<android::animation::ValueAnimator_AnimatorUpdateListener> listener);
	void removeAllUpdateListeners();
	void removeUpdateListener(ref<android::animation::ValueAnimator_AnimatorUpdateListener> listener);
	void setInterpolator(ref<android::animation::TimeInterpolator> value);
	ref<android::animation::TimeInterpolator> getInterpolator();
	void setEvaluator(ref<android::animation::TypeEvaluator> value);
	void start();
	void cancel();
	void end();
	void resume();
	void pause();
	jboolean isRunning();
	jboolean isStarted();
	void reverse();
	jfloat getAnimatedFraction();
	ref<android::animation::ValueAnimator> clone();
	ref<java::lang::String> toString();

protected:

	ValueAnimator(handle_type h) : base_(h) {}

};

} // namespace android::animation
} // namespace scapix::java_api

#include <scapix/java_api/android/animation/PropertyValuesHolder.h>
#include <scapix/java_api/android/animation/TimeInterpolator.h>
#include <scapix/java_api/android/animation/TypeEvaluator.h>
#include <scapix/java_api/android/animation/ValueAnimator_AnimatorUpdateListener.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::animation {

inline jint ValueAnimator::INFINITE_() { return get_static_field<SCAPIX_META_STRING("INFINITE"), jint>(); }
inline jint ValueAnimator::RESTART_() { return get_static_field<SCAPIX_META_STRING("RESTART"), jint>(); }
inline jint ValueAnimator::REVERSE_() { return get_static_field<SCAPIX_META_STRING("REVERSE"), jint>(); }
inline ref<ValueAnimator> ValueAnimator::new_object() { return base_::new_object(); }
inline jboolean ValueAnimator::areAnimatorsEnabled() { return call_static_method<SCAPIX_META_STRING("areAnimatorsEnabled"), jboolean>(); }
inline ref<android::animation::ValueAnimator> ValueAnimator::ofInt(ref<link::java::array<jint>> values) { return call_static_method<SCAPIX_META_STRING("ofInt"), ref<android::animation::ValueAnimator>>(values); }
inline ref<android::animation::ValueAnimator> ValueAnimator::ofArgb(ref<link::java::array<jint>> values) { return call_static_method<SCAPIX_META_STRING("ofArgb"), ref<android::animation::ValueAnimator>>(values); }
inline ref<android::animation::ValueAnimator> ValueAnimator::ofFloat(ref<link::java::array<jfloat>> values) { return call_static_method<SCAPIX_META_STRING("ofFloat"), ref<android::animation::ValueAnimator>>(values); }
inline ref<android::animation::ValueAnimator> ValueAnimator::ofPropertyValuesHolder(ref<link::java::array<android::animation::PropertyValuesHolder>> values) { return call_static_method<SCAPIX_META_STRING("ofPropertyValuesHolder"), ref<android::animation::ValueAnimator>>(values); }
inline ref<android::animation::ValueAnimator> ValueAnimator::ofObject(ref<android::animation::TypeEvaluator> evaluator, ref<link::java::array<java::lang::Object>> values) { return call_static_method<SCAPIX_META_STRING("ofObject"), ref<android::animation::ValueAnimator>>(evaluator, values); }
inline void ValueAnimator::setIntValues(ref<link::java::array<jint>> values) { return call_method<SCAPIX_META_STRING("setIntValues"), void>(values); }
inline void ValueAnimator::setFloatValues(ref<link::java::array<jfloat>> values) { return call_method<SCAPIX_META_STRING("setFloatValues"), void>(values); }
inline void ValueAnimator::setObjectValues(ref<link::java::array<java::lang::Object>> values) { return call_method<SCAPIX_META_STRING("setObjectValues"), void>(values); }
inline void ValueAnimator::setValues(ref<link::java::array<android::animation::PropertyValuesHolder>> values) { return call_method<SCAPIX_META_STRING("setValues"), void>(values); }
inline ref<link::java::array<android::animation::PropertyValuesHolder>> ValueAnimator::getValues() { return call_method<SCAPIX_META_STRING("getValues"), ref<link::java::array<android::animation::PropertyValuesHolder>>>(); }
inline ref<android::animation::ValueAnimator> ValueAnimator::setDuration(jlong duration) { return call_method<SCAPIX_META_STRING("setDuration"), ref<android::animation::ValueAnimator>>(duration); }
inline jlong ValueAnimator::getDuration() { return call_method<SCAPIX_META_STRING("getDuration"), jlong>(); }
inline jlong ValueAnimator::getTotalDuration() { return call_method<SCAPIX_META_STRING("getTotalDuration"), jlong>(); }
inline void ValueAnimator::setCurrentPlayTime(jlong playTime) { return call_method<SCAPIX_META_STRING("setCurrentPlayTime"), void>(playTime); }
inline void ValueAnimator::setCurrentFraction(jfloat fraction) { return call_method<SCAPIX_META_STRING("setCurrentFraction"), void>(fraction); }
inline jlong ValueAnimator::getCurrentPlayTime() { return call_method<SCAPIX_META_STRING("getCurrentPlayTime"), jlong>(); }
inline jlong ValueAnimator::getStartDelay() { return call_method<SCAPIX_META_STRING("getStartDelay"), jlong>(); }
inline void ValueAnimator::setStartDelay(jlong startDelay) { return call_method<SCAPIX_META_STRING("setStartDelay"), void>(startDelay); }
inline jlong ValueAnimator::getFrameDelay() { return call_static_method<SCAPIX_META_STRING("getFrameDelay"), jlong>(); }
inline void ValueAnimator::setFrameDelay(jlong frameDelay) { return call_static_method<SCAPIX_META_STRING("setFrameDelay"), void>(frameDelay); }
inline ref<java::lang::Object> ValueAnimator::getAnimatedValue() { return call_method<SCAPIX_META_STRING("getAnimatedValue"), ref<java::lang::Object>>(); }
inline ref<java::lang::Object> ValueAnimator::getAnimatedValue(ref<java::lang::String> propertyName) { return call_method<SCAPIX_META_STRING("getAnimatedValue"), ref<java::lang::Object>>(propertyName); }
inline void ValueAnimator::setRepeatCount(jint value) { return call_method<SCAPIX_META_STRING("setRepeatCount"), void>(value); }
inline jint ValueAnimator::getRepeatCount() { return call_method<SCAPIX_META_STRING("getRepeatCount"), jint>(); }
inline void ValueAnimator::setRepeatMode(jint value) { return call_method<SCAPIX_META_STRING("setRepeatMode"), void>(value); }
inline jint ValueAnimator::getRepeatMode() { return call_method<SCAPIX_META_STRING("getRepeatMode"), jint>(); }
inline void ValueAnimator::addUpdateListener(ref<android::animation::ValueAnimator_AnimatorUpdateListener> listener) { return call_method<SCAPIX_META_STRING("addUpdateListener"), void>(listener); }
inline void ValueAnimator::removeAllUpdateListeners() { return call_method<SCAPIX_META_STRING("removeAllUpdateListeners"), void>(); }
inline void ValueAnimator::removeUpdateListener(ref<android::animation::ValueAnimator_AnimatorUpdateListener> listener) { return call_method<SCAPIX_META_STRING("removeUpdateListener"), void>(listener); }
inline void ValueAnimator::setInterpolator(ref<android::animation::TimeInterpolator> value) { return call_method<SCAPIX_META_STRING("setInterpolator"), void>(value); }
inline ref<android::animation::TimeInterpolator> ValueAnimator::getInterpolator() { return call_method<SCAPIX_META_STRING("getInterpolator"), ref<android::animation::TimeInterpolator>>(); }
inline void ValueAnimator::setEvaluator(ref<android::animation::TypeEvaluator> value) { return call_method<SCAPIX_META_STRING("setEvaluator"), void>(value); }
inline void ValueAnimator::start() { return call_method<SCAPIX_META_STRING("start"), void>(); }
inline void ValueAnimator::cancel() { return call_method<SCAPIX_META_STRING("cancel"), void>(); }
inline void ValueAnimator::end() { return call_method<SCAPIX_META_STRING("end"), void>(); }
inline void ValueAnimator::resume() { return call_method<SCAPIX_META_STRING("resume"), void>(); }
inline void ValueAnimator::pause() { return call_method<SCAPIX_META_STRING("pause"), void>(); }
inline jboolean ValueAnimator::isRunning() { return call_method<SCAPIX_META_STRING("isRunning"), jboolean>(); }
inline jboolean ValueAnimator::isStarted() { return call_method<SCAPIX_META_STRING("isStarted"), jboolean>(); }
inline void ValueAnimator::reverse() { return call_method<SCAPIX_META_STRING("reverse"), void>(); }
inline jfloat ValueAnimator::getAnimatedFraction() { return call_method<SCAPIX_META_STRING("getAnimatedFraction"), jfloat>(); }
inline ref<android::animation::ValueAnimator> ValueAnimator::clone() { return call_method<SCAPIX_META_STRING("clone"), ref<android::animation::ValueAnimator>>(); }
inline ref<java::lang::String> ValueAnimator::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }

} // namespace android::animation
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_ANIMATION_VALUEANIMATOR_H
