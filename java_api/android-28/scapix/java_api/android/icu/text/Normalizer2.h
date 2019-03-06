// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_ICU_TEXT_NORMALIZER2_H
#define SCAPIX_ANDROID_ICU_TEXT_NORMALIZER2_H

namespace scapix::java_api {

namespace android::icu::text { class Normalizer_QuickCheckResult; }
namespace android::icu::text { class Normalizer2_Mode; }
namespace java::io { class InputStream; }
namespace java::lang { class Appendable; }
namespace java::lang { class CharSequence; }
namespace java::lang { class String; }
namespace java::lang { class StringBuilder; }

namespace android::icu::text {

class Normalizer2 : public object_base<SCAPIX_META_STRING("android/icu/text/Normalizer2"),
	java::lang::Object>
{
public:

	using Mode = Normalizer2_Mode;

	static ref<android::icu::text::Normalizer2> getNFCInstance();
	static ref<android::icu::text::Normalizer2> getNFDInstance();
	static ref<android::icu::text::Normalizer2> getNFKCInstance();
	static ref<android::icu::text::Normalizer2> getNFKDInstance();
	static ref<android::icu::text::Normalizer2> getNFKCCasefoldInstance();
	static ref<android::icu::text::Normalizer2> getInstance(ref<java::io::InputStream> data, ref<java::lang::String> name, ref<android::icu::text::Normalizer2_Mode> mode);
	ref<java::lang::String> normalize(ref<java::lang::CharSequence> src);
	ref<java::lang::StringBuilder> normalize(ref<java::lang::CharSequence> p1, ref<java::lang::StringBuilder> p2);
	ref<java::lang::Appendable> normalize(ref<java::lang::CharSequence> p1, ref<java::lang::Appendable> p2);
	ref<java::lang::StringBuilder> normalizeSecondAndAppend(ref<java::lang::StringBuilder> p1, ref<java::lang::CharSequence> p2);
	ref<java::lang::StringBuilder> append(ref<java::lang::StringBuilder> p1, ref<java::lang::CharSequence> p2);
	ref<java::lang::String> getDecomposition(jint p1);
	ref<java::lang::String> getRawDecomposition(jint c);
	jint composePair(jint a, jint b);
	jint getCombiningClass(jint c);
	jboolean isNormalized(ref<java::lang::CharSequence> p1);
	ref<android::icu::text::Normalizer_QuickCheckResult> quickCheck(ref<java::lang::CharSequence> p1);
	jint spanQuickCheckYes(ref<java::lang::CharSequence> p1);
	jboolean hasBoundaryBefore(jint p1);
	jboolean hasBoundaryAfter(jint p1);
	jboolean isInert(jint p1);

protected:

	Normalizer2(handle_type h) : base_(h) {}

};

} // namespace android::icu::text
} // namespace scapix::java_api

#include <scapix/java_api/android/icu/text/Normalizer_QuickCheckResult.h>
#include <scapix/java_api/android/icu/text/Normalizer2_Mode.h>
#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/java/lang/Appendable.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/StringBuilder.h>

namespace scapix::java_api {
namespace android::icu::text {

inline ref<android::icu::text::Normalizer2> Normalizer2::getNFCInstance() { return call_static_method<SCAPIX_META_STRING("getNFCInstance"), ref<android::icu::text::Normalizer2>>(); }
inline ref<android::icu::text::Normalizer2> Normalizer2::getNFDInstance() { return call_static_method<SCAPIX_META_STRING("getNFDInstance"), ref<android::icu::text::Normalizer2>>(); }
inline ref<android::icu::text::Normalizer2> Normalizer2::getNFKCInstance() { return call_static_method<SCAPIX_META_STRING("getNFKCInstance"), ref<android::icu::text::Normalizer2>>(); }
inline ref<android::icu::text::Normalizer2> Normalizer2::getNFKDInstance() { return call_static_method<SCAPIX_META_STRING("getNFKDInstance"), ref<android::icu::text::Normalizer2>>(); }
inline ref<android::icu::text::Normalizer2> Normalizer2::getNFKCCasefoldInstance() { return call_static_method<SCAPIX_META_STRING("getNFKCCasefoldInstance"), ref<android::icu::text::Normalizer2>>(); }
inline ref<android::icu::text::Normalizer2> Normalizer2::getInstance(ref<java::io::InputStream> data, ref<java::lang::String> name, ref<android::icu::text::Normalizer2_Mode> mode) { return call_static_method<SCAPIX_META_STRING("getInstance"), ref<android::icu::text::Normalizer2>>(data, name, mode); }
inline ref<java::lang::String> Normalizer2::normalize(ref<java::lang::CharSequence> src) { return call_method<SCAPIX_META_STRING("normalize"), ref<java::lang::String>>(src); }
inline ref<java::lang::StringBuilder> Normalizer2::normalize(ref<java::lang::CharSequence> p1, ref<java::lang::StringBuilder> p2) { return call_method<SCAPIX_META_STRING("normalize"), ref<java::lang::StringBuilder>>(p1, p2); }
inline ref<java::lang::Appendable> Normalizer2::normalize(ref<java::lang::CharSequence> p1, ref<java::lang::Appendable> p2) { return call_method<SCAPIX_META_STRING("normalize"), ref<java::lang::Appendable>>(p1, p2); }
inline ref<java::lang::StringBuilder> Normalizer2::normalizeSecondAndAppend(ref<java::lang::StringBuilder> p1, ref<java::lang::CharSequence> p2) { return call_method<SCAPIX_META_STRING("normalizeSecondAndAppend"), ref<java::lang::StringBuilder>>(p1, p2); }
inline ref<java::lang::StringBuilder> Normalizer2::append(ref<java::lang::StringBuilder> p1, ref<java::lang::CharSequence> p2) { return call_method<SCAPIX_META_STRING("append"), ref<java::lang::StringBuilder>>(p1, p2); }
inline ref<java::lang::String> Normalizer2::getDecomposition(jint p1) { return call_method<SCAPIX_META_STRING("getDecomposition"), ref<java::lang::String>>(p1); }
inline ref<java::lang::String> Normalizer2::getRawDecomposition(jint c) { return call_method<SCAPIX_META_STRING("getRawDecomposition"), ref<java::lang::String>>(c); }
inline jint Normalizer2::composePair(jint a, jint b) { return call_method<SCAPIX_META_STRING("composePair"), jint>(a, b); }
inline jint Normalizer2::getCombiningClass(jint c) { return call_method<SCAPIX_META_STRING("getCombiningClass"), jint>(c); }
inline jboolean Normalizer2::isNormalized(ref<java::lang::CharSequence> p1) { return call_method<SCAPIX_META_STRING("isNormalized"), jboolean>(p1); }
inline ref<android::icu::text::Normalizer_QuickCheckResult> Normalizer2::quickCheck(ref<java::lang::CharSequence> p1) { return call_method<SCAPIX_META_STRING("quickCheck"), ref<android::icu::text::Normalizer_QuickCheckResult>>(p1); }
inline jint Normalizer2::spanQuickCheckYes(ref<java::lang::CharSequence> p1) { return call_method<SCAPIX_META_STRING("spanQuickCheckYes"), jint>(p1); }
inline jboolean Normalizer2::hasBoundaryBefore(jint p1) { return call_method<SCAPIX_META_STRING("hasBoundaryBefore"), jboolean>(p1); }
inline jboolean Normalizer2::hasBoundaryAfter(jint p1) { return call_method<SCAPIX_META_STRING("hasBoundaryAfter"), jboolean>(p1); }
inline jboolean Normalizer2::isInert(jint p1) { return call_method<SCAPIX_META_STRING("isInert"), jboolean>(p1); }

} // namespace android::icu::text
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_ICU_TEXT_NORMALIZER2_H
