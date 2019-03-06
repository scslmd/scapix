// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/text/Spanned.h>

#ifndef SCAPIX_ANDROID_TEXT_SPANNABLE_H
#define SCAPIX_ANDROID_TEXT_SPANNABLE_H

namespace scapix::java_api {

namespace android::text { class Spannable_Factory; }

namespace android::text {

class Spannable : public object_base<SCAPIX_META_STRING("android/text/Spannable"),
	java::lang::Object,
	android::text::Spanned>
{
public:

	using Factory = Spannable_Factory;

	void setSpan(ref<java::lang::Object> p1, jint p2, jint p3, jint p4);
	void removeSpan(ref<java::lang::Object> p1);

protected:

	Spannable(handle_type h) : base_(h) {}

};

} // namespace android::text
} // namespace scapix::java_api


namespace scapix::java_api {
namespace android::text {

inline void Spannable::setSpan(ref<java::lang::Object> p1, jint p2, jint p3, jint p4) { return call_method<SCAPIX_META_STRING("setSpan"), void>(p1, p2, p3, p4); }
inline void Spannable::removeSpan(ref<java::lang::Object> p1) { return call_method<SCAPIX_META_STRING("removeSpan"), void>(p1); }

} // namespace android::text
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_TEXT_SPANNABLE_H
