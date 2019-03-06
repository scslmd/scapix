// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/android/text/style/TtsSpan_SemioticClassBuilder.h>

#ifndef SCAPIX_ANDROID_TEXT_STYLE_TTSSPAN_FRACTIONBUILDER_H
#define SCAPIX_ANDROID_TEXT_STYLE_TTSSPAN_FRACTIONBUILDER_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace android::text::style {

class TtsSpan_FractionBuilder : public object_base<SCAPIX_META_STRING("android/text/style/TtsSpan$FractionBuilder"),
	android::text::style::TtsSpan_SemioticClassBuilder>
{
public:

	static ref<TtsSpan_FractionBuilder> new_object();
	static ref<TtsSpan_FractionBuilder> new_object(jlong integerPart, jlong p2, jlong numerator);
	ref<android::text::style::TtsSpan_FractionBuilder> setIntegerPart(jlong integerPart);
	ref<android::text::style::TtsSpan_FractionBuilder> setIntegerPart(ref<java::lang::String> integerPart);
	ref<android::text::style::TtsSpan_FractionBuilder> setNumerator(jlong numerator);
	ref<android::text::style::TtsSpan_FractionBuilder> setNumerator(ref<java::lang::String> numerator);
	ref<android::text::style::TtsSpan_FractionBuilder> setDenominator(jlong denominator);
	ref<android::text::style::TtsSpan_FractionBuilder> setDenominator(ref<java::lang::String> denominator);

protected:

	TtsSpan_FractionBuilder(handle_type h) : base_(h) {}

};

} // namespace android::text::style
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::text::style {

inline ref<TtsSpan_FractionBuilder> TtsSpan_FractionBuilder::new_object() { return base_::new_object(); }
inline ref<TtsSpan_FractionBuilder> TtsSpan_FractionBuilder::new_object(jlong integerPart, jlong p2, jlong numerator) { return base_::new_object(integerPart, p2, numerator); }
inline ref<android::text::style::TtsSpan_FractionBuilder> TtsSpan_FractionBuilder::setIntegerPart(jlong integerPart) { return call_method<SCAPIX_META_STRING("setIntegerPart"), ref<android::text::style::TtsSpan_FractionBuilder>>(integerPart); }
inline ref<android::text::style::TtsSpan_FractionBuilder> TtsSpan_FractionBuilder::setIntegerPart(ref<java::lang::String> integerPart) { return call_method<SCAPIX_META_STRING("setIntegerPart"), ref<android::text::style::TtsSpan_FractionBuilder>>(integerPart); }
inline ref<android::text::style::TtsSpan_FractionBuilder> TtsSpan_FractionBuilder::setNumerator(jlong numerator) { return call_method<SCAPIX_META_STRING("setNumerator"), ref<android::text::style::TtsSpan_FractionBuilder>>(numerator); }
inline ref<android::text::style::TtsSpan_FractionBuilder> TtsSpan_FractionBuilder::setNumerator(ref<java::lang::String> numerator) { return call_method<SCAPIX_META_STRING("setNumerator"), ref<android::text::style::TtsSpan_FractionBuilder>>(numerator); }
inline ref<android::text::style::TtsSpan_FractionBuilder> TtsSpan_FractionBuilder::setDenominator(jlong denominator) { return call_method<SCAPIX_META_STRING("setDenominator"), ref<android::text::style::TtsSpan_FractionBuilder>>(denominator); }
inline ref<android::text::style::TtsSpan_FractionBuilder> TtsSpan_FractionBuilder::setDenominator(ref<java::lang::String> denominator) { return call_method<SCAPIX_META_STRING("setDenominator"), ref<android::text::style::TtsSpan_FractionBuilder>>(denominator); }

} // namespace android::text::style
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_TEXT_STYLE_TTSSPAN_FRACTIONBUILDER_H
