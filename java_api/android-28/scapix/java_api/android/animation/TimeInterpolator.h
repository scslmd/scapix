// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_ANIMATION_TIMEINTERPOLATOR_H
#define SCAPIX_ANDROID_ANIMATION_TIMEINTERPOLATOR_H

namespace scapix::java_api {
namespace android::animation {

class TimeInterpolator : public object_base<SCAPIX_META_STRING("android/animation/TimeInterpolator"),
	java::lang::Object>
{
public:

	jfloat getInterpolation(jfloat p1);

protected:

	TimeInterpolator(handle_type h) : base_(h) {}

};

} // namespace android::animation
} // namespace scapix::java_api


namespace scapix::java_api {
namespace android::animation {

inline jfloat TimeInterpolator::getInterpolation(jfloat p1) { return call_method<SCAPIX_META_STRING("getInterpolation"), jfloat>(p1); }

} // namespace android::animation
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_ANIMATION_TIMEINTERPOLATOR_H
