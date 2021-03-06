// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/android/text/style/TtsSpan_SemioticClassBuilder.h>

#ifndef SCAPIX_ANDROID_TEXT_STYLE_TTSSPAN_MONEYBUILDER_H
#define SCAPIX_ANDROID_TEXT_STYLE_TTSSPAN_MONEYBUILDER_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace android::text::style {

class TtsSpan_MoneyBuilder : public object_base<SCAPIX_META_STRING("android/text/style/TtsSpan$MoneyBuilder"),
	android::text::style::TtsSpan_SemioticClassBuilder>
{
public:

	static ref<TtsSpan_MoneyBuilder> new_object();
	ref<android::text::style::TtsSpan_MoneyBuilder> setIntegerPart(jlong integerPart);
	ref<android::text::style::TtsSpan_MoneyBuilder> setIntegerPart(ref<java::lang::String> integerPart);
	ref<android::text::style::TtsSpan_MoneyBuilder> setFractionalPart(ref<java::lang::String> fractionalPart);
	ref<android::text::style::TtsSpan_MoneyBuilder> setCurrency(ref<java::lang::String> currency);
	ref<android::text::style::TtsSpan_MoneyBuilder> setQuantity(ref<java::lang::String> quantity);

protected:

	TtsSpan_MoneyBuilder(handle_type h) : base_(h) {}

};

} // namespace android::text::style
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::text::style {

inline ref<TtsSpan_MoneyBuilder> TtsSpan_MoneyBuilder::new_object() { return base_::new_object(); }
inline ref<android::text::style::TtsSpan_MoneyBuilder> TtsSpan_MoneyBuilder::setIntegerPart(jlong integerPart) { return call_method<SCAPIX_META_STRING("setIntegerPart"), ref<android::text::style::TtsSpan_MoneyBuilder>>(integerPart); }
inline ref<android::text::style::TtsSpan_MoneyBuilder> TtsSpan_MoneyBuilder::setIntegerPart(ref<java::lang::String> integerPart) { return call_method<SCAPIX_META_STRING("setIntegerPart"), ref<android::text::style::TtsSpan_MoneyBuilder>>(integerPart); }
inline ref<android::text::style::TtsSpan_MoneyBuilder> TtsSpan_MoneyBuilder::setFractionalPart(ref<java::lang::String> fractionalPart) { return call_method<SCAPIX_META_STRING("setFractionalPart"), ref<android::text::style::TtsSpan_MoneyBuilder>>(fractionalPart); }
inline ref<android::text::style::TtsSpan_MoneyBuilder> TtsSpan_MoneyBuilder::setCurrency(ref<java::lang::String> currency) { return call_method<SCAPIX_META_STRING("setCurrency"), ref<android::text::style::TtsSpan_MoneyBuilder>>(currency); }
inline ref<android::text::style::TtsSpan_MoneyBuilder> TtsSpan_MoneyBuilder::setQuantity(ref<java::lang::String> quantity) { return call_method<SCAPIX_META_STRING("setQuantity"), ref<android::text::style::TtsSpan_MoneyBuilder>>(quantity); }

} // namespace android::text::style
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_TEXT_STYLE_TTSSPAN_MONEYBUILDER_H
