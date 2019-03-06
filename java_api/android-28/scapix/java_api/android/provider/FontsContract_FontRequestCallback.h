// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_PROVIDER_FONTSCONTRACT_FONTREQUESTCALLBACK_H
#define SCAPIX_ANDROID_PROVIDER_FONTSCONTRACT_FONTREQUESTCALLBACK_H

namespace scapix::java_api {

namespace android::graphics { class Typeface; }

namespace android::provider {

class FontsContract_FontRequestCallback : public object_base<SCAPIX_META_STRING("android/provider/FontsContract$FontRequestCallback"),
	java::lang::Object>
{
public:

	static jint FAIL_REASON_FONT_LOAD_ERROR_();
	static jint FAIL_REASON_FONT_NOT_FOUND_();
	static jint FAIL_REASON_FONT_UNAVAILABLE_();
	static jint FAIL_REASON_MALFORMED_QUERY_();
	static jint FAIL_REASON_PROVIDER_NOT_FOUND_();
	static jint FAIL_REASON_WRONG_CERTIFICATES_();

	static ref<FontsContract_FontRequestCallback> new_object();
	void onTypefaceRetrieved(ref<android::graphics::Typeface> typeface);
	void onTypefaceRequestFailed(jint reason);

protected:

	FontsContract_FontRequestCallback(handle_type h) : base_(h) {}

};

} // namespace android::provider
} // namespace scapix::java_api

#include <scapix/java_api/android/graphics/Typeface.h>

namespace scapix::java_api {
namespace android::provider {

inline jint FontsContract_FontRequestCallback::FAIL_REASON_FONT_LOAD_ERROR_() { return get_static_field<SCAPIX_META_STRING("FAIL_REASON_FONT_LOAD_ERROR"), jint>(); }
inline jint FontsContract_FontRequestCallback::FAIL_REASON_FONT_NOT_FOUND_() { return get_static_field<SCAPIX_META_STRING("FAIL_REASON_FONT_NOT_FOUND"), jint>(); }
inline jint FontsContract_FontRequestCallback::FAIL_REASON_FONT_UNAVAILABLE_() { return get_static_field<SCAPIX_META_STRING("FAIL_REASON_FONT_UNAVAILABLE"), jint>(); }
inline jint FontsContract_FontRequestCallback::FAIL_REASON_MALFORMED_QUERY_() { return get_static_field<SCAPIX_META_STRING("FAIL_REASON_MALFORMED_QUERY"), jint>(); }
inline jint FontsContract_FontRequestCallback::FAIL_REASON_PROVIDER_NOT_FOUND_() { return get_static_field<SCAPIX_META_STRING("FAIL_REASON_PROVIDER_NOT_FOUND"), jint>(); }
inline jint FontsContract_FontRequestCallback::FAIL_REASON_WRONG_CERTIFICATES_() { return get_static_field<SCAPIX_META_STRING("FAIL_REASON_WRONG_CERTIFICATES"), jint>(); }
inline ref<FontsContract_FontRequestCallback> FontsContract_FontRequestCallback::new_object() { return base_::new_object(); }
inline void FontsContract_FontRequestCallback::onTypefaceRetrieved(ref<android::graphics::Typeface> typeface) { return call_method<SCAPIX_META_STRING("onTypefaceRetrieved"), void>(typeface); }
inline void FontsContract_FontRequestCallback::onTypefaceRequestFailed(jint reason) { return call_method<SCAPIX_META_STRING("onTypefaceRequestFailed"), void>(reason); }

} // namespace android::provider
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_PROVIDER_FONTSCONTRACT_FONTREQUESTCALLBACK_H
