// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_TEXT_UTIL_LINKIFY_TRANSFORMFILTER_H
#define SCAPIX_ANDROID_TEXT_UTIL_LINKIFY_TRANSFORMFILTER_H

namespace scapix::java_api {

namespace java::lang { class String; }
namespace java::util::regex { class Matcher; }

namespace android::text::util {

class Linkify_TransformFilter : public object_base<SCAPIX_META_STRING("android/text/util/Linkify$TransformFilter"),
	java::lang::Object>
{
public:

	ref<java::lang::String> transformUrl(ref<java::util::regex::Matcher> p1, ref<java::lang::String> p2);

protected:

	Linkify_TransformFilter(handle_type h) : base_(h) {}

};

} // namespace android::text::util
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/regex/Matcher.h>

namespace scapix::java_api {
namespace android::text::util {

inline ref<java::lang::String> Linkify_TransformFilter::transformUrl(ref<java::util::regex::Matcher> p1, ref<java::lang::String> p2) { return call_method<SCAPIX_META_STRING("transformUrl"), ref<java::lang::String>>(p1, p2); }

} // namespace android::text::util
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_TEXT_UTIL_LINKIFY_TRANSFORMFILTER_H
