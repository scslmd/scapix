// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_CONTENT_QUICKVIEWCONSTANTS_H
#define SCAPIX_ANDROID_CONTENT_QUICKVIEWCONSTANTS_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace android::content {

class QuickViewConstants : public object_base<SCAPIX_META_STRING("android/content/QuickViewConstants"),
	java::lang::Object>
{
public:

	static ref<java::lang::String> FEATURE_DELETE_();
	static ref<java::lang::String> FEATURE_DOWNLOAD_();
	static ref<java::lang::String> FEATURE_EDIT_();
	static ref<java::lang::String> FEATURE_PRINT_();
	static ref<java::lang::String> FEATURE_SEND_();
	static ref<java::lang::String> FEATURE_VIEW_();


protected:

	QuickViewConstants(handle_type h) : base_(h) {}

};

} // namespace android::content
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::content {

inline ref<java::lang::String> QuickViewConstants::FEATURE_DELETE_() { return get_static_field<SCAPIX_META_STRING("FEATURE_DELETE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> QuickViewConstants::FEATURE_DOWNLOAD_() { return get_static_field<SCAPIX_META_STRING("FEATURE_DOWNLOAD"), ref<java::lang::String>>(); }
inline ref<java::lang::String> QuickViewConstants::FEATURE_EDIT_() { return get_static_field<SCAPIX_META_STRING("FEATURE_EDIT"), ref<java::lang::String>>(); }
inline ref<java::lang::String> QuickViewConstants::FEATURE_PRINT_() { return get_static_field<SCAPIX_META_STRING("FEATURE_PRINT"), ref<java::lang::String>>(); }
inline ref<java::lang::String> QuickViewConstants::FEATURE_SEND_() { return get_static_field<SCAPIX_META_STRING("FEATURE_SEND"), ref<java::lang::String>>(); }
inline ref<java::lang::String> QuickViewConstants::FEATURE_VIEW_() { return get_static_field<SCAPIX_META_STRING("FEATURE_VIEW"), ref<java::lang::String>>(); }

} // namespace android::content
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_CONTENT_QUICKVIEWCONSTANTS_H
