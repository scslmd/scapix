// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/animation/TypeEvaluator.h>

#ifndef SCAPIX_ANDROID_ANIMATION_FLOATEVALUATOR_H
#define SCAPIX_ANDROID_ANIMATION_FLOATEVALUATOR_H

namespace scapix::java_api {

namespace java::lang { class Float; }
namespace java::lang { class Number; }

namespace android::animation {

class FloatEvaluator : public object_base<SCAPIX_META_STRING("android/animation/FloatEvaluator"),
	java::lang::Object,
	android::animation::TypeEvaluator>
{
public:

	static ref<FloatEvaluator> new_object();
	ref<java::lang::Float> evaluate(jfloat fraction, ref<java::lang::Number> startValue, ref<java::lang::Number> endValue);

protected:

	FloatEvaluator(handle_type h) : base_(h) {}

};

} // namespace android::animation
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/Float.h>
#include <scapix/java_api/java/lang/Number.h>

namespace scapix::java_api {
namespace android::animation {

inline ref<FloatEvaluator> FloatEvaluator::new_object() { return base_::new_object(); }
inline ref<java::lang::Float> FloatEvaluator::evaluate(jfloat fraction, ref<java::lang::Number> startValue, ref<java::lang::Number> endValue) { return call_method<SCAPIX_META_STRING("evaluate"), ref<java::lang::Float>>(fraction, startValue, endValue); }

} // namespace android::animation
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_ANIMATION_FLOATEVALUATOR_H
