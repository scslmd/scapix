// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_WEBKIT_WEBVIEW_HITTESTRESULT_H
#define SCAPIX_ANDROID_WEBKIT_WEBVIEW_HITTESTRESULT_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace android::webkit {

class WebView_HitTestResult : public object_base<SCAPIX_META_STRING("android/webkit/WebView$HitTestResult"),
	java::lang::Object>
{
public:

	static jint ANCHOR_TYPE_();
	static jint EDIT_TEXT_TYPE_();
	static jint EMAIL_TYPE_();
	static jint GEO_TYPE_();
	static jint IMAGE_ANCHOR_TYPE_();
	static jint IMAGE_TYPE_();
	static jint PHONE_TYPE_();
	static jint SRC_ANCHOR_TYPE_();
	static jint SRC_IMAGE_ANCHOR_TYPE_();
	static jint UNKNOWN_TYPE_();

	jint getType();
	ref<java::lang::String> getExtra();

protected:

	WebView_HitTestResult(handle_type h) : base_(h) {}

};

} // namespace android::webkit
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::webkit {

inline jint WebView_HitTestResult::ANCHOR_TYPE_() { return get_static_field<SCAPIX_META_STRING("ANCHOR_TYPE"), jint>(); }
inline jint WebView_HitTestResult::EDIT_TEXT_TYPE_() { return get_static_field<SCAPIX_META_STRING("EDIT_TEXT_TYPE"), jint>(); }
inline jint WebView_HitTestResult::EMAIL_TYPE_() { return get_static_field<SCAPIX_META_STRING("EMAIL_TYPE"), jint>(); }
inline jint WebView_HitTestResult::GEO_TYPE_() { return get_static_field<SCAPIX_META_STRING("GEO_TYPE"), jint>(); }
inline jint WebView_HitTestResult::IMAGE_ANCHOR_TYPE_() { return get_static_field<SCAPIX_META_STRING("IMAGE_ANCHOR_TYPE"), jint>(); }
inline jint WebView_HitTestResult::IMAGE_TYPE_() { return get_static_field<SCAPIX_META_STRING("IMAGE_TYPE"), jint>(); }
inline jint WebView_HitTestResult::PHONE_TYPE_() { return get_static_field<SCAPIX_META_STRING("PHONE_TYPE"), jint>(); }
inline jint WebView_HitTestResult::SRC_ANCHOR_TYPE_() { return get_static_field<SCAPIX_META_STRING("SRC_ANCHOR_TYPE"), jint>(); }
inline jint WebView_HitTestResult::SRC_IMAGE_ANCHOR_TYPE_() { return get_static_field<SCAPIX_META_STRING("SRC_IMAGE_ANCHOR_TYPE"), jint>(); }
inline jint WebView_HitTestResult::UNKNOWN_TYPE_() { return get_static_field<SCAPIX_META_STRING("UNKNOWN_TYPE"), jint>(); }
inline jint WebView_HitTestResult::getType() { return call_method<SCAPIX_META_STRING("getType"), jint>(); }
inline ref<java::lang::String> WebView_HitTestResult::getExtra() { return call_method<SCAPIX_META_STRING("getExtra"), ref<java::lang::String>>(); }

} // namespace android::webkit
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_WEBKIT_WEBVIEW_HITTESTRESULT_H
