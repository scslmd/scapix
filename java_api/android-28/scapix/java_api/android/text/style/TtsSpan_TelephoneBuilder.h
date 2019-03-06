// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/android/text/style/TtsSpan_SemioticClassBuilder.h>

#ifndef SCAPIX_ANDROID_TEXT_STYLE_TTSSPAN_TELEPHONEBUILDER_H
#define SCAPIX_ANDROID_TEXT_STYLE_TTSSPAN_TELEPHONEBUILDER_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace android::text::style {

class TtsSpan_TelephoneBuilder : public object_base<SCAPIX_META_STRING("android/text/style/TtsSpan$TelephoneBuilder"),
	android::text::style::TtsSpan_SemioticClassBuilder>
{
public:

	static ref<TtsSpan_TelephoneBuilder> new_object();
	static ref<TtsSpan_TelephoneBuilder> new_object(ref<java::lang::String> numberParts);
	ref<android::text::style::TtsSpan_TelephoneBuilder> setCountryCode(ref<java::lang::String> countryCode);
	ref<android::text::style::TtsSpan_TelephoneBuilder> setNumberParts(ref<java::lang::String> numberParts);
	ref<android::text::style::TtsSpan_TelephoneBuilder> setExtension(ref<java::lang::String> extension);

protected:

	TtsSpan_TelephoneBuilder(handle_type h) : base_(h) {}

};

} // namespace android::text::style
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::text::style {

inline ref<TtsSpan_TelephoneBuilder> TtsSpan_TelephoneBuilder::new_object() { return base_::new_object(); }
inline ref<TtsSpan_TelephoneBuilder> TtsSpan_TelephoneBuilder::new_object(ref<java::lang::String> numberParts) { return base_::new_object(numberParts); }
inline ref<android::text::style::TtsSpan_TelephoneBuilder> TtsSpan_TelephoneBuilder::setCountryCode(ref<java::lang::String> countryCode) { return call_method<SCAPIX_META_STRING("setCountryCode"), ref<android::text::style::TtsSpan_TelephoneBuilder>>(countryCode); }
inline ref<android::text::style::TtsSpan_TelephoneBuilder> TtsSpan_TelephoneBuilder::setNumberParts(ref<java::lang::String> numberParts) { return call_method<SCAPIX_META_STRING("setNumberParts"), ref<android::text::style::TtsSpan_TelephoneBuilder>>(numberParts); }
inline ref<android::text::style::TtsSpan_TelephoneBuilder> TtsSpan_TelephoneBuilder::setExtension(ref<java::lang::String> extension) { return call_method<SCAPIX_META_STRING("setExtension"), ref<android::text::style::TtsSpan_TelephoneBuilder>>(extension); }

} // namespace android::text::style
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_TEXT_STYLE_TTSSPAN_TELEPHONEBUILDER_H
