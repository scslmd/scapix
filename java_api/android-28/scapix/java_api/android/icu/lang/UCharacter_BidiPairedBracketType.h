// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_ICU_LANG_UCHARACTER_BIDIPAIREDBRACKETTYPE_H
#define SCAPIX_ANDROID_ICU_LANG_UCHARACTER_BIDIPAIREDBRACKETTYPE_H

namespace scapix::java_api {


namespace android::icu::lang {

class UCharacter_BidiPairedBracketType : public object_base<SCAPIX_META_STRING("android/icu/lang/UCharacter$BidiPairedBracketType"),
	java::lang::Object>
{
public:

	static jint CLOSE_();
	static jint NONE_();
	static jint OPEN_();


protected:

	UCharacter_BidiPairedBracketType(handle_type h) : base_(h) {}

};

} // namespace android::icu::lang
} // namespace scapix::java_api


namespace scapix::java_api {
namespace android::icu::lang {

inline jint UCharacter_BidiPairedBracketType::CLOSE_() { return get_static_field<SCAPIX_META_STRING("CLOSE"), jint>(); }
inline jint UCharacter_BidiPairedBracketType::NONE_() { return get_static_field<SCAPIX_META_STRING("NONE"), jint>(); }
inline jint UCharacter_BidiPairedBracketType::OPEN_() { return get_static_field<SCAPIX_META_STRING("OPEN"), jint>(); }

} // namespace android::icu::lang
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_ICU_LANG_UCHARACTER_BIDIPAIREDBRACKETTYPE_H
