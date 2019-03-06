// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_ICU_TEXT_SEARCHITERATOR_H
#define SCAPIX_ANDROID_ICU_TEXT_SEARCHITERATOR_H

namespace scapix::java_api {

namespace android::icu::text { class BreakIterator; }
namespace android::icu::text { class SearchIterator_ElementComparisonType; }
namespace java::lang { class String; }
namespace java::text { class CharacterIterator; }

namespace android::icu::text {

class SearchIterator : public object_base<SCAPIX_META_STRING("android/icu/text/SearchIterator"),
	java::lang::Object>
{
public:

	using ElementComparisonType = SearchIterator_ElementComparisonType;

	static jint DONE_();

	void setIndex(jint position);
	void setOverlapping(jboolean allowOverlap);
	void setBreakIterator(ref<android::icu::text::BreakIterator> breakiter);
	void setTarget(ref<java::text::CharacterIterator> text);
	jint getMatchStart();
	jint getIndex();
	jint getMatchLength();
	ref<android::icu::text::BreakIterator> getBreakIterator();
	ref<java::text::CharacterIterator> getTarget();
	ref<java::lang::String> getMatchedText();
	jint next();
	jint previous();
	jboolean isOverlapping();
	void reset();
	jint first();
	jint following(jint position);
	jint last();
	jint preceding(jint position);
	void setElementComparisonType(ref<android::icu::text::SearchIterator_ElementComparisonType> type);
	ref<android::icu::text::SearchIterator_ElementComparisonType> getElementComparisonType();

protected:

	SearchIterator(handle_type h) : base_(h) {}

};

} // namespace android::icu::text
} // namespace scapix::java_api

#include <scapix/java_api/android/icu/text/BreakIterator.h>
#include <scapix/java_api/android/icu/text/SearchIterator_ElementComparisonType.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/text/CharacterIterator.h>

namespace scapix::java_api {
namespace android::icu::text {

inline jint SearchIterator::DONE_() { return get_static_field<SCAPIX_META_STRING("DONE"), jint>(); }
inline void SearchIterator::setIndex(jint position) { return call_method<SCAPIX_META_STRING("setIndex"), void>(position); }
inline void SearchIterator::setOverlapping(jboolean allowOverlap) { return call_method<SCAPIX_META_STRING("setOverlapping"), void>(allowOverlap); }
inline void SearchIterator::setBreakIterator(ref<android::icu::text::BreakIterator> breakiter) { return call_method<SCAPIX_META_STRING("setBreakIterator"), void>(breakiter); }
inline void SearchIterator::setTarget(ref<java::text::CharacterIterator> text) { return call_method<SCAPIX_META_STRING("setTarget"), void>(text); }
inline jint SearchIterator::getMatchStart() { return call_method<SCAPIX_META_STRING("getMatchStart"), jint>(); }
inline jint SearchIterator::getIndex() { return call_method<SCAPIX_META_STRING("getIndex"), jint>(); }
inline jint SearchIterator::getMatchLength() { return call_method<SCAPIX_META_STRING("getMatchLength"), jint>(); }
inline ref<android::icu::text::BreakIterator> SearchIterator::getBreakIterator() { return call_method<SCAPIX_META_STRING("getBreakIterator"), ref<android::icu::text::BreakIterator>>(); }
inline ref<java::text::CharacterIterator> SearchIterator::getTarget() { return call_method<SCAPIX_META_STRING("getTarget"), ref<java::text::CharacterIterator>>(); }
inline ref<java::lang::String> SearchIterator::getMatchedText() { return call_method<SCAPIX_META_STRING("getMatchedText"), ref<java::lang::String>>(); }
inline jint SearchIterator::next() { return call_method<SCAPIX_META_STRING("next"), jint>(); }
inline jint SearchIterator::previous() { return call_method<SCAPIX_META_STRING("previous"), jint>(); }
inline jboolean SearchIterator::isOverlapping() { return call_method<SCAPIX_META_STRING("isOverlapping"), jboolean>(); }
inline void SearchIterator::reset() { return call_method<SCAPIX_META_STRING("reset"), void>(); }
inline jint SearchIterator::first() { return call_method<SCAPIX_META_STRING("first"), jint>(); }
inline jint SearchIterator::following(jint position) { return call_method<SCAPIX_META_STRING("following"), jint>(position); }
inline jint SearchIterator::last() { return call_method<SCAPIX_META_STRING("last"), jint>(); }
inline jint SearchIterator::preceding(jint position) { return call_method<SCAPIX_META_STRING("preceding"), jint>(position); }
inline void SearchIterator::setElementComparisonType(ref<android::icu::text::SearchIterator_ElementComparisonType> type) { return call_method<SCAPIX_META_STRING("setElementComparisonType"), void>(type); }
inline ref<android::icu::text::SearchIterator_ElementComparisonType> SearchIterator::getElementComparisonType() { return call_method<SCAPIX_META_STRING("getElementComparisonType"), ref<android::icu::text::SearchIterator_ElementComparisonType>>(); }

} // namespace android::icu::text
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_ICU_TEXT_SEARCHITERATOR_H
