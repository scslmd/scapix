// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_UTIL_SIZEF_H
#define SCAPIX_ANDROID_UTIL_SIZEF_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace android::util {

class SizeF : public object_base<SCAPIX_META_STRING("android/util/SizeF"),
	java::lang::Object>
{
public:

	static ref<SizeF> new_object(jfloat width, jfloat height);
	jfloat getWidth();
	jfloat getHeight();
	jboolean equals(ref<java::lang::Object> obj);
	ref<java::lang::String> toString();
	static ref<android::util::SizeF> parseSizeF(ref<java::lang::String> string);
	jint hashCode();

protected:

	SizeF(handle_type h) : base_(h) {}

};

} // namespace android::util
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::util {

inline ref<SizeF> SizeF::new_object(jfloat width, jfloat height) { return base_::new_object(width, height); }
inline jfloat SizeF::getWidth() { return call_method<SCAPIX_META_STRING("getWidth"), jfloat>(); }
inline jfloat SizeF::getHeight() { return call_method<SCAPIX_META_STRING("getHeight"), jfloat>(); }
inline jboolean SizeF::equals(ref<java::lang::Object> obj) { return call_method<SCAPIX_META_STRING("equals"), jboolean>(obj); }
inline ref<java::lang::String> SizeF::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }
inline ref<android::util::SizeF> SizeF::parseSizeF(ref<java::lang::String> string) { return call_static_method<SCAPIX_META_STRING("parseSizeF"), ref<android::util::SizeF>>(string); }
inline jint SizeF::hashCode() { return call_method<SCAPIX_META_STRING("hashCode"), jint>(); }

} // namespace android::util
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_UTIL_SIZEF_H
