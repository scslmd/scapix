// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_R_TRANSITION_H
#define SCAPIX_ANDROID_R_TRANSITION_H

namespace scapix::java_api {


namespace android {

class R_transition : public object_base<SCAPIX_META_STRING("android/R$transition"),
	java::lang::Object>
{
public:

	static jint explode();
	static jint fade();
	static jint move();
	static jint no_transition();
	static jint slide_bottom();
	static jint slide_left();
	static jint slide_right();
	static jint slide_top();

	static ref<R_transition> new_object();

protected:

	R_transition(handle_type h) : base_(h) {}

};

} // namespace android
} // namespace scapix::java_api


namespace scapix::java_api {
namespace android {

inline jint R_transition::explode() { return get_static_field<SCAPIX_META_STRING("explode"), jint>(); }
inline jint R_transition::fade() { return get_static_field<SCAPIX_META_STRING("fade"), jint>(); }
inline jint R_transition::move() { return get_static_field<SCAPIX_META_STRING("move"), jint>(); }
inline jint R_transition::no_transition() { return get_static_field<SCAPIX_META_STRING("no_transition"), jint>(); }
inline jint R_transition::slide_bottom() { return get_static_field<SCAPIX_META_STRING("slide_bottom"), jint>(); }
inline jint R_transition::slide_left() { return get_static_field<SCAPIX_META_STRING("slide_left"), jint>(); }
inline jint R_transition::slide_right() { return get_static_field<SCAPIX_META_STRING("slide_right"), jint>(); }
inline jint R_transition::slide_top() { return get_static_field<SCAPIX_META_STRING("slide_top"), jint>(); }
inline ref<R_transition> R_transition::new_object() { return base_::new_object(); }

} // namespace android
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_R_TRANSITION_H
