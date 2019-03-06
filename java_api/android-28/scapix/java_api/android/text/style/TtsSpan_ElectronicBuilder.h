// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/android/text/style/TtsSpan_SemioticClassBuilder.h>

#ifndef SCAPIX_ANDROID_TEXT_STYLE_TTSSPAN_ELECTRONICBUILDER_H
#define SCAPIX_ANDROID_TEXT_STYLE_TTSSPAN_ELECTRONICBUILDER_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace android::text::style {

class TtsSpan_ElectronicBuilder : public object_base<SCAPIX_META_STRING("android/text/style/TtsSpan$ElectronicBuilder"),
	android::text::style::TtsSpan_SemioticClassBuilder>
{
public:

	static ref<TtsSpan_ElectronicBuilder> new_object();
	ref<android::text::style::TtsSpan_ElectronicBuilder> setEmailArguments(ref<java::lang::String> username, ref<java::lang::String> domain);
	ref<android::text::style::TtsSpan_ElectronicBuilder> setProtocol(ref<java::lang::String> protocol);
	ref<android::text::style::TtsSpan_ElectronicBuilder> setUsername(ref<java::lang::String> username);
	ref<android::text::style::TtsSpan_ElectronicBuilder> setPassword(ref<java::lang::String> password);
	ref<android::text::style::TtsSpan_ElectronicBuilder> setDomain(ref<java::lang::String> domain);
	ref<android::text::style::TtsSpan_ElectronicBuilder> setPort(jint port);
	ref<android::text::style::TtsSpan_ElectronicBuilder> setPath(ref<java::lang::String> path);
	ref<android::text::style::TtsSpan_ElectronicBuilder> setQueryString(ref<java::lang::String> queryString);
	ref<android::text::style::TtsSpan_ElectronicBuilder> setFragmentId(ref<java::lang::String> fragmentId);

protected:

	TtsSpan_ElectronicBuilder(handle_type h) : base_(h) {}

};

} // namespace android::text::style
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::text::style {

inline ref<TtsSpan_ElectronicBuilder> TtsSpan_ElectronicBuilder::new_object() { return base_::new_object(); }
inline ref<android::text::style::TtsSpan_ElectronicBuilder> TtsSpan_ElectronicBuilder::setEmailArguments(ref<java::lang::String> username, ref<java::lang::String> domain) { return call_method<SCAPIX_META_STRING("setEmailArguments"), ref<android::text::style::TtsSpan_ElectronicBuilder>>(username, domain); }
inline ref<android::text::style::TtsSpan_ElectronicBuilder> TtsSpan_ElectronicBuilder::setProtocol(ref<java::lang::String> protocol) { return call_method<SCAPIX_META_STRING("setProtocol"), ref<android::text::style::TtsSpan_ElectronicBuilder>>(protocol); }
inline ref<android::text::style::TtsSpan_ElectronicBuilder> TtsSpan_ElectronicBuilder::setUsername(ref<java::lang::String> username) { return call_method<SCAPIX_META_STRING("setUsername"), ref<android::text::style::TtsSpan_ElectronicBuilder>>(username); }
inline ref<android::text::style::TtsSpan_ElectronicBuilder> TtsSpan_ElectronicBuilder::setPassword(ref<java::lang::String> password) { return call_method<SCAPIX_META_STRING("setPassword"), ref<android::text::style::TtsSpan_ElectronicBuilder>>(password); }
inline ref<android::text::style::TtsSpan_ElectronicBuilder> TtsSpan_ElectronicBuilder::setDomain(ref<java::lang::String> domain) { return call_method<SCAPIX_META_STRING("setDomain"), ref<android::text::style::TtsSpan_ElectronicBuilder>>(domain); }
inline ref<android::text::style::TtsSpan_ElectronicBuilder> TtsSpan_ElectronicBuilder::setPort(jint port) { return call_method<SCAPIX_META_STRING("setPort"), ref<android::text::style::TtsSpan_ElectronicBuilder>>(port); }
inline ref<android::text::style::TtsSpan_ElectronicBuilder> TtsSpan_ElectronicBuilder::setPath(ref<java::lang::String> path) { return call_method<SCAPIX_META_STRING("setPath"), ref<android::text::style::TtsSpan_ElectronicBuilder>>(path); }
inline ref<android::text::style::TtsSpan_ElectronicBuilder> TtsSpan_ElectronicBuilder::setQueryString(ref<java::lang::String> queryString) { return call_method<SCAPIX_META_STRING("setQueryString"), ref<android::text::style::TtsSpan_ElectronicBuilder>>(queryString); }
inline ref<android::text::style::TtsSpan_ElectronicBuilder> TtsSpan_ElectronicBuilder::setFragmentId(ref<java::lang::String> fragmentId) { return call_method<SCAPIX_META_STRING("setFragmentId"), ref<android::text::style::TtsSpan_ElectronicBuilder>>(fragmentId); }

} // namespace android::text::style
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_TEXT_STYLE_TTSSPAN_ELECTRONICBUILDER_H
