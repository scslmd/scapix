// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_ICU_TEXT_IDNA_H
#define SCAPIX_ANDROID_ICU_TEXT_IDNA_H

namespace scapix::java_api {

namespace android::icu::text { class IDNA_Info; }
namespace java::lang { class CharSequence; }
namespace java::lang { class StringBuilder; }
namespace android::icu::text { class IDNA_Error; }

namespace android::icu::text {

class IDNA : public object_base<SCAPIX_META_STRING("android/icu/text/IDNA"),
	java::lang::Object>
{
public:

	using Info = IDNA_Info;
	using Error = IDNA_Error;

	static jint CHECK_BIDI_();
	static jint CHECK_CONTEXTJ_();
	static jint CHECK_CONTEXTO_();
	static jint DEFAULT_();
	static jint NONTRANSITIONAL_TO_ASCII_();
	static jint NONTRANSITIONAL_TO_UNICODE_();
	static jint USE_STD3_RULES_();

	static ref<android::icu::text::IDNA> getUTS46Instance(jint options);
	ref<java::lang::StringBuilder> labelToASCII(ref<java::lang::CharSequence> p1, ref<java::lang::StringBuilder> p2, ref<android::icu::text::IDNA_Info> p3);
	ref<java::lang::StringBuilder> labelToUnicode(ref<java::lang::CharSequence> p1, ref<java::lang::StringBuilder> p2, ref<android::icu::text::IDNA_Info> p3);
	ref<java::lang::StringBuilder> nameToASCII(ref<java::lang::CharSequence> p1, ref<java::lang::StringBuilder> p2, ref<android::icu::text::IDNA_Info> p3);
	ref<java::lang::StringBuilder> nameToUnicode(ref<java::lang::CharSequence> p1, ref<java::lang::StringBuilder> p2, ref<android::icu::text::IDNA_Info> p3);

protected:

	IDNA(handle_type h) : base_(h) {}

};

} // namespace android::icu::text
} // namespace scapix::java_api

#include <scapix/java_api/android/icu/text/IDNA_Info.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/StringBuilder.h>

namespace scapix::java_api {
namespace android::icu::text {

inline jint IDNA::CHECK_BIDI_() { return get_static_field<SCAPIX_META_STRING("CHECK_BIDI"), jint>(); }
inline jint IDNA::CHECK_CONTEXTJ_() { return get_static_field<SCAPIX_META_STRING("CHECK_CONTEXTJ"), jint>(); }
inline jint IDNA::CHECK_CONTEXTO_() { return get_static_field<SCAPIX_META_STRING("CHECK_CONTEXTO"), jint>(); }
inline jint IDNA::DEFAULT_() { return get_static_field<SCAPIX_META_STRING("DEFAULT"), jint>(); }
inline jint IDNA::NONTRANSITIONAL_TO_ASCII_() { return get_static_field<SCAPIX_META_STRING("NONTRANSITIONAL_TO_ASCII"), jint>(); }
inline jint IDNA::NONTRANSITIONAL_TO_UNICODE_() { return get_static_field<SCAPIX_META_STRING("NONTRANSITIONAL_TO_UNICODE"), jint>(); }
inline jint IDNA::USE_STD3_RULES_() { return get_static_field<SCAPIX_META_STRING("USE_STD3_RULES"), jint>(); }
inline ref<android::icu::text::IDNA> IDNA::getUTS46Instance(jint options) { return call_static_method<SCAPIX_META_STRING("getUTS46Instance"), ref<android::icu::text::IDNA>>(options); }
inline ref<java::lang::StringBuilder> IDNA::labelToASCII(ref<java::lang::CharSequence> p1, ref<java::lang::StringBuilder> p2, ref<android::icu::text::IDNA_Info> p3) { return call_method<SCAPIX_META_STRING("labelToASCII"), ref<java::lang::StringBuilder>>(p1, p2, p3); }
inline ref<java::lang::StringBuilder> IDNA::labelToUnicode(ref<java::lang::CharSequence> p1, ref<java::lang::StringBuilder> p2, ref<android::icu::text::IDNA_Info> p3) { return call_method<SCAPIX_META_STRING("labelToUnicode"), ref<java::lang::StringBuilder>>(p1, p2, p3); }
inline ref<java::lang::StringBuilder> IDNA::nameToASCII(ref<java::lang::CharSequence> p1, ref<java::lang::StringBuilder> p2, ref<android::icu::text::IDNA_Info> p3) { return call_method<SCAPIX_META_STRING("nameToASCII"), ref<java::lang::StringBuilder>>(p1, p2, p3); }
inline ref<java::lang::StringBuilder> IDNA::nameToUnicode(ref<java::lang::CharSequence> p1, ref<java::lang::StringBuilder> p2, ref<android::icu::text::IDNA_Info> p3) { return call_method<SCAPIX_META_STRING("nameToUnicode"), ref<java::lang::StringBuilder>>(p1, p2, p3); }

} // namespace android::icu::text
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_ICU_TEXT_IDNA_H
