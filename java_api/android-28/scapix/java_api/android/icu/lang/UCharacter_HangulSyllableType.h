// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_ICU_LANG_UCHARACTER_HANGULSYLLABLETYPE_H
#define SCAPIX_ANDROID_ICU_LANG_UCHARACTER_HANGULSYLLABLETYPE_H

namespace scapix::java_api {


namespace android::icu::lang {

class UCharacter_HangulSyllableType : public object_base<SCAPIX_META_STRING("android/icu/lang/UCharacter$HangulSyllableType"),
	java::lang::Object>
{
public:

	static jint LEADING_JAMO_();
	static jint LVT_SYLLABLE_();
	static jint LV_SYLLABLE_();
	static jint NOT_APPLICABLE_();
	static jint TRAILING_JAMO_();
	static jint VOWEL_JAMO_();


protected:

	UCharacter_HangulSyllableType(handle_type h) : base_(h) {}

};

} // namespace android::icu::lang
} // namespace scapix::java_api


namespace scapix::java_api {
namespace android::icu::lang {

inline jint UCharacter_HangulSyllableType::LEADING_JAMO_() { return get_static_field<SCAPIX_META_STRING("LEADING_JAMO"), jint>(); }
inline jint UCharacter_HangulSyllableType::LVT_SYLLABLE_() { return get_static_field<SCAPIX_META_STRING("LVT_SYLLABLE"), jint>(); }
inline jint UCharacter_HangulSyllableType::LV_SYLLABLE_() { return get_static_field<SCAPIX_META_STRING("LV_SYLLABLE"), jint>(); }
inline jint UCharacter_HangulSyllableType::NOT_APPLICABLE_() { return get_static_field<SCAPIX_META_STRING("NOT_APPLICABLE"), jint>(); }
inline jint UCharacter_HangulSyllableType::TRAILING_JAMO_() { return get_static_field<SCAPIX_META_STRING("TRAILING_JAMO"), jint>(); }
inline jint UCharacter_HangulSyllableType::VOWEL_JAMO_() { return get_static_field<SCAPIX_META_STRING("VOWEL_JAMO"), jint>(); }

} // namespace android::icu::lang
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_ICU_LANG_UCHARACTER_HANGULSYLLABLETYPE_H
