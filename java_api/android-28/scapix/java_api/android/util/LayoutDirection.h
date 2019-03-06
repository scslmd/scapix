// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_UTIL_LAYOUTDIRECTION_H
#define SCAPIX_ANDROID_UTIL_LAYOUTDIRECTION_H

namespace scapix::java_api {
namespace android::util {

class LayoutDirection : public object_base<SCAPIX_META_STRING("android/util/LayoutDirection"),
	java::lang::Object>
{
public:

	static jint INHERIT_();
	static jint LOCALE_();
	static jint LTR_();
	static jint RTL_();


protected:

	LayoutDirection(handle_type h) : base_(h) {}

};

} // namespace android::util
} // namespace scapix::java_api


namespace scapix::java_api {
namespace android::util {

inline jint LayoutDirection::INHERIT_() { return get_static_field<SCAPIX_META_STRING("INHERIT"), jint>(); }
inline jint LayoutDirection::LOCALE_() { return get_static_field<SCAPIX_META_STRING("LOCALE"), jint>(); }
inline jint LayoutDirection::LTR_() { return get_static_field<SCAPIX_META_STRING("LTR"), jint>(); }
inline jint LayoutDirection::RTL_() { return get_static_field<SCAPIX_META_STRING("RTL"), jint>(); }

} // namespace android::util
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_UTIL_LAYOUTDIRECTION_H
