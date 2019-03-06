// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_TEXT_TEXTUTILS_H
#define SCAPIX_ANDROID_TEXT_TEXTUTILS_H

namespace scapix::java_api {

namespace android::content { class Context; }
namespace android::os { class Parcel; }
namespace android::os { class Parcelable_Creator; }
namespace android::text { class Spannable; }
namespace android::text { class Spanned; }
namespace android::text { class TextPaint; }
namespace android::text { class TextUtils_EllipsizeCallback; }
namespace android::text { class TextUtils_TruncateAt; }
namespace android::util { class Printer; }
namespace java::lang { class CharSequence; }
namespace java::lang { class Class; }
namespace java::lang { class Iterable; }
namespace java::lang { class String; }
namespace java::util { class List; }
namespace java::util { class Locale; }
namespace java::util::regex { class Pattern; }
namespace android::text { class TextUtils_StringSplitter; }
namespace android::text { class TextUtils_SimpleStringSplitter; }

namespace android::text {

class TextUtils : public object_base<SCAPIX_META_STRING("android/text/TextUtils"),
	java::lang::Object>
{
public:

	using TruncateAt = TextUtils_TruncateAt;
	using StringSplitter = TextUtils_StringSplitter;
	using SimpleStringSplitter = TextUtils_SimpleStringSplitter;
	using EllipsizeCallback = TextUtils_EllipsizeCallback;

	static jint CAP_MODE_CHARACTERS_();
	static jint CAP_MODE_SENTENCES_();
	static jint CAP_MODE_WORDS_();
	static ref<android::os::Parcelable_Creator> CHAR_SEQUENCE_CREATOR_();

	static void getChars(ref<java::lang::CharSequence> s, jint start, jint end, ref<link::java::array<jchar>> dest, jint destoff);
	static jint indexOf(ref<java::lang::CharSequence> s, jchar ch);
	static jint indexOf(ref<java::lang::CharSequence> s, jchar ch, jint start);
	static jint indexOf(ref<java::lang::CharSequence> s, jchar ch, jint start, jint end);
	static jint lastIndexOf(ref<java::lang::CharSequence> s, jchar ch);
	static jint lastIndexOf(ref<java::lang::CharSequence> s, jchar ch, jint last);
	static jint lastIndexOf(ref<java::lang::CharSequence> s, jchar ch, jint start, jint last);
	static jint indexOf(ref<java::lang::CharSequence> s, ref<java::lang::CharSequence> needle);
	static jint indexOf(ref<java::lang::CharSequence> s, ref<java::lang::CharSequence> needle, jint start);
	static jint indexOf(ref<java::lang::CharSequence> s, ref<java::lang::CharSequence> needle, jint start, jint end);
	static jboolean regionMatches(ref<java::lang::CharSequence> one, jint toffset, ref<java::lang::CharSequence> two, jint ooffset, jint len);
	static ref<java::lang::String> substring(ref<java::lang::CharSequence> source, jint start, jint end);
	static ref<java::lang::String> join(ref<java::lang::CharSequence> delimiter, ref<link::java::array<java::lang::Object>> tokens);
	static ref<java::lang::String> join(ref<java::lang::CharSequence> delimiter, ref<java::lang::Iterable> tokens);
	static ref<link::java::array<java::lang::String>> split(ref<java::lang::String> text, ref<java::lang::String> expression);
	static ref<link::java::array<java::lang::String>> split(ref<java::lang::String> text, ref<java::util::regex::Pattern> pattern);
	static ref<java::lang::CharSequence> stringOrSpannedString(ref<java::lang::CharSequence> source);
	static jboolean isEmpty(ref<java::lang::CharSequence> str);
	static jint getTrimmedLength(ref<java::lang::CharSequence> s);
	static jboolean equals(ref<java::lang::CharSequence> a, ref<java::lang::CharSequence> b);
	static ref<java::lang::CharSequence> getReverse(ref<java::lang::CharSequence> source, jint start, jint end);
	static void writeToParcel(ref<java::lang::CharSequence> cs, ref<android::os::Parcel> p, jint parcelableFlags);
	static void dumpSpans(ref<java::lang::CharSequence> cs, ref<android::util::Printer> printer, ref<java::lang::String> prefix);
	static ref<java::lang::CharSequence> replace(ref<java::lang::CharSequence> template_, ref<link::java::array<java::lang::String>> sources, ref<link::java::array<java::lang::CharSequence>> destinations);
	static ref<java::lang::CharSequence> expandTemplate(ref<java::lang::CharSequence> template_, ref<link::java::array<java::lang::CharSequence>> values);
	static jint getOffsetBefore(ref<java::lang::CharSequence> text, jint offset);
	static jint getOffsetAfter(ref<java::lang::CharSequence> text, jint offset);
	static void copySpansFrom(ref<android::text::Spanned> source, jint start, jint end, ref<java::lang::Class> kind, ref<android::text::Spannable> dest, jint destoff);
	static ref<java::lang::CharSequence> ellipsize(ref<java::lang::CharSequence> text, ref<android::text::TextPaint> p, jfloat avail, ref<android::text::TextUtils_TruncateAt> where);
	static ref<java::lang::CharSequence> ellipsize(ref<java::lang::CharSequence> text, ref<android::text::TextPaint> paint, jfloat avail, ref<android::text::TextUtils_TruncateAt> where, jboolean preserveLength, ref<android::text::TextUtils_EllipsizeCallback> callback);
	static ref<java::lang::CharSequence> listEllipsize(ref<android::content::Context> context, ref<java::util::List> elements, ref<java::lang::String> separator, ref<android::text::TextPaint> paint, jfloat avail, jint moreId);
	static ref<java::lang::CharSequence> commaEllipsize(ref<java::lang::CharSequence> text, ref<android::text::TextPaint> p, jfloat avail, ref<java::lang::String> oneMore, ref<java::lang::String> more);
	static ref<java::lang::String> htmlEncode(ref<java::lang::String> s);
	static ref<java::lang::CharSequence> concat(ref<link::java::array<java::lang::CharSequence>> text);
	static jboolean isGraphic(ref<java::lang::CharSequence> str);
	static jboolean isGraphic(jchar c);
	static jboolean isDigitsOnly(ref<java::lang::CharSequence> str);
	static jint getCapsMode(ref<java::lang::CharSequence> cs, jint off, jint reqModes);
	static jint getLayoutDirectionFromLocale(ref<java::util::Locale> locale);

protected:

	TextUtils(handle_type h) : base_(h) {}

};

} // namespace android::text
} // namespace scapix::java_api

#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/android/text/Spannable.h>
#include <scapix/java_api/android/text/Spanned.h>
#include <scapix/java_api/android/text/TextPaint.h>
#include <scapix/java_api/android/text/TextUtils_EllipsizeCallback.h>
#include <scapix/java_api/android/text/TextUtils_TruncateAt.h>
#include <scapix/java_api/android/util/Printer.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/Iterable.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/java/util/Locale.h>
#include <scapix/java_api/java/util/regex/Pattern.h>

namespace scapix::java_api {
namespace android::text {

inline jint TextUtils::CAP_MODE_CHARACTERS_() { return get_static_field<SCAPIX_META_STRING("CAP_MODE_CHARACTERS"), jint>(); }
inline jint TextUtils::CAP_MODE_SENTENCES_() { return get_static_field<SCAPIX_META_STRING("CAP_MODE_SENTENCES"), jint>(); }
inline jint TextUtils::CAP_MODE_WORDS_() { return get_static_field<SCAPIX_META_STRING("CAP_MODE_WORDS"), jint>(); }
inline ref<android::os::Parcelable_Creator> TextUtils::CHAR_SEQUENCE_CREATOR_() { return get_static_field<SCAPIX_META_STRING("CHAR_SEQUENCE_CREATOR"), ref<android::os::Parcelable_Creator>>(); }
inline void TextUtils::getChars(ref<java::lang::CharSequence> s, jint start, jint end, ref<link::java::array<jchar>> dest, jint destoff) { return call_static_method<SCAPIX_META_STRING("getChars"), void>(s, start, end, dest, destoff); }
inline jint TextUtils::indexOf(ref<java::lang::CharSequence> s, jchar ch) { return call_static_method<SCAPIX_META_STRING("indexOf"), jint>(s, ch); }
inline jint TextUtils::indexOf(ref<java::lang::CharSequence> s, jchar ch, jint start) { return call_static_method<SCAPIX_META_STRING("indexOf"), jint>(s, ch, start); }
inline jint TextUtils::indexOf(ref<java::lang::CharSequence> s, jchar ch, jint start, jint end) { return call_static_method<SCAPIX_META_STRING("indexOf"), jint>(s, ch, start, end); }
inline jint TextUtils::lastIndexOf(ref<java::lang::CharSequence> s, jchar ch) { return call_static_method<SCAPIX_META_STRING("lastIndexOf"), jint>(s, ch); }
inline jint TextUtils::lastIndexOf(ref<java::lang::CharSequence> s, jchar ch, jint last) { return call_static_method<SCAPIX_META_STRING("lastIndexOf"), jint>(s, ch, last); }
inline jint TextUtils::lastIndexOf(ref<java::lang::CharSequence> s, jchar ch, jint start, jint last) { return call_static_method<SCAPIX_META_STRING("lastIndexOf"), jint>(s, ch, start, last); }
inline jint TextUtils::indexOf(ref<java::lang::CharSequence> s, ref<java::lang::CharSequence> needle) { return call_static_method<SCAPIX_META_STRING("indexOf"), jint>(s, needle); }
inline jint TextUtils::indexOf(ref<java::lang::CharSequence> s, ref<java::lang::CharSequence> needle, jint start) { return call_static_method<SCAPIX_META_STRING("indexOf"), jint>(s, needle, start); }
inline jint TextUtils::indexOf(ref<java::lang::CharSequence> s, ref<java::lang::CharSequence> needle, jint start, jint end) { return call_static_method<SCAPIX_META_STRING("indexOf"), jint>(s, needle, start, end); }
inline jboolean TextUtils::regionMatches(ref<java::lang::CharSequence> one, jint toffset, ref<java::lang::CharSequence> two, jint ooffset, jint len) { return call_static_method<SCAPIX_META_STRING("regionMatches"), jboolean>(one, toffset, two, ooffset, len); }
inline ref<java::lang::String> TextUtils::substring(ref<java::lang::CharSequence> source, jint start, jint end) { return call_static_method<SCAPIX_META_STRING("substring"), ref<java::lang::String>>(source, start, end); }
inline ref<java::lang::String> TextUtils::join(ref<java::lang::CharSequence> delimiter, ref<link::java::array<java::lang::Object>> tokens) { return call_static_method<SCAPIX_META_STRING("join"), ref<java::lang::String>>(delimiter, tokens); }
inline ref<java::lang::String> TextUtils::join(ref<java::lang::CharSequence> delimiter, ref<java::lang::Iterable> tokens) { return call_static_method<SCAPIX_META_STRING("join"), ref<java::lang::String>>(delimiter, tokens); }
inline ref<link::java::array<java::lang::String>> TextUtils::split(ref<java::lang::String> text, ref<java::lang::String> expression) { return call_static_method<SCAPIX_META_STRING("split"), ref<link::java::array<java::lang::String>>>(text, expression); }
inline ref<link::java::array<java::lang::String>> TextUtils::split(ref<java::lang::String> text, ref<java::util::regex::Pattern> pattern) { return call_static_method<SCAPIX_META_STRING("split"), ref<link::java::array<java::lang::String>>>(text, pattern); }
inline ref<java::lang::CharSequence> TextUtils::stringOrSpannedString(ref<java::lang::CharSequence> source) { return call_static_method<SCAPIX_META_STRING("stringOrSpannedString"), ref<java::lang::CharSequence>>(source); }
inline jboolean TextUtils::isEmpty(ref<java::lang::CharSequence> str) { return call_static_method<SCAPIX_META_STRING("isEmpty"), jboolean>(str); }
inline jint TextUtils::getTrimmedLength(ref<java::lang::CharSequence> s) { return call_static_method<SCAPIX_META_STRING("getTrimmedLength"), jint>(s); }
inline jboolean TextUtils::equals(ref<java::lang::CharSequence> a, ref<java::lang::CharSequence> b) { return call_static_method<SCAPIX_META_STRING("equals"), jboolean>(a, b); }
inline ref<java::lang::CharSequence> TextUtils::getReverse(ref<java::lang::CharSequence> source, jint start, jint end) { return call_static_method<SCAPIX_META_STRING("getReverse"), ref<java::lang::CharSequence>>(source, start, end); }
inline void TextUtils::writeToParcel(ref<java::lang::CharSequence> cs, ref<android::os::Parcel> p, jint parcelableFlags) { return call_static_method<SCAPIX_META_STRING("writeToParcel"), void>(cs, p, parcelableFlags); }
inline void TextUtils::dumpSpans(ref<java::lang::CharSequence> cs, ref<android::util::Printer> printer, ref<java::lang::String> prefix) { return call_static_method<SCAPIX_META_STRING("dumpSpans"), void>(cs, printer, prefix); }
inline ref<java::lang::CharSequence> TextUtils::replace(ref<java::lang::CharSequence> template_, ref<link::java::array<java::lang::String>> sources, ref<link::java::array<java::lang::CharSequence>> destinations) { return call_static_method<SCAPIX_META_STRING("replace"), ref<java::lang::CharSequence>>(template_, sources, destinations); }
inline ref<java::lang::CharSequence> TextUtils::expandTemplate(ref<java::lang::CharSequence> template_, ref<link::java::array<java::lang::CharSequence>> values) { return call_static_method<SCAPIX_META_STRING("expandTemplate"), ref<java::lang::CharSequence>>(template_, values); }
inline jint TextUtils::getOffsetBefore(ref<java::lang::CharSequence> text, jint offset) { return call_static_method<SCAPIX_META_STRING("getOffsetBefore"), jint>(text, offset); }
inline jint TextUtils::getOffsetAfter(ref<java::lang::CharSequence> text, jint offset) { return call_static_method<SCAPIX_META_STRING("getOffsetAfter"), jint>(text, offset); }
inline void TextUtils::copySpansFrom(ref<android::text::Spanned> source, jint start, jint end, ref<java::lang::Class> kind, ref<android::text::Spannable> dest, jint destoff) { return call_static_method<SCAPIX_META_STRING("copySpansFrom"), void>(source, start, end, kind, dest, destoff); }
inline ref<java::lang::CharSequence> TextUtils::ellipsize(ref<java::lang::CharSequence> text, ref<android::text::TextPaint> p, jfloat avail, ref<android::text::TextUtils_TruncateAt> where) { return call_static_method<SCAPIX_META_STRING("ellipsize"), ref<java::lang::CharSequence>>(text, p, avail, where); }
inline ref<java::lang::CharSequence> TextUtils::ellipsize(ref<java::lang::CharSequence> text, ref<android::text::TextPaint> paint, jfloat avail, ref<android::text::TextUtils_TruncateAt> where, jboolean preserveLength, ref<android::text::TextUtils_EllipsizeCallback> callback) { return call_static_method<SCAPIX_META_STRING("ellipsize"), ref<java::lang::CharSequence>>(text, paint, avail, where, preserveLength, callback); }
inline ref<java::lang::CharSequence> TextUtils::listEllipsize(ref<android::content::Context> context, ref<java::util::List> elements, ref<java::lang::String> separator, ref<android::text::TextPaint> paint, jfloat avail, jint moreId) { return call_static_method<SCAPIX_META_STRING("listEllipsize"), ref<java::lang::CharSequence>>(context, elements, separator, paint, avail, moreId); }
inline ref<java::lang::CharSequence> TextUtils::commaEllipsize(ref<java::lang::CharSequence> text, ref<android::text::TextPaint> p, jfloat avail, ref<java::lang::String> oneMore, ref<java::lang::String> more) { return call_static_method<SCAPIX_META_STRING("commaEllipsize"), ref<java::lang::CharSequence>>(text, p, avail, oneMore, more); }
inline ref<java::lang::String> TextUtils::htmlEncode(ref<java::lang::String> s) { return call_static_method<SCAPIX_META_STRING("htmlEncode"), ref<java::lang::String>>(s); }
inline ref<java::lang::CharSequence> TextUtils::concat(ref<link::java::array<java::lang::CharSequence>> text) { return call_static_method<SCAPIX_META_STRING("concat"), ref<java::lang::CharSequence>>(text); }
inline jboolean TextUtils::isGraphic(ref<java::lang::CharSequence> str) { return call_static_method<SCAPIX_META_STRING("isGraphic"), jboolean>(str); }
inline jboolean TextUtils::isGraphic(jchar c) { return call_static_method<SCAPIX_META_STRING("isGraphic"), jboolean>(c); }
inline jboolean TextUtils::isDigitsOnly(ref<java::lang::CharSequence> str) { return call_static_method<SCAPIX_META_STRING("isDigitsOnly"), jboolean>(str); }
inline jint TextUtils::getCapsMode(ref<java::lang::CharSequence> cs, jint off, jint reqModes) { return call_static_method<SCAPIX_META_STRING("getCapsMode"), jint>(cs, off, reqModes); }
inline jint TextUtils::getLayoutDirectionFromLocale(ref<java::util::Locale> locale) { return call_static_method<SCAPIX_META_STRING("getLayoutDirectionFromLocale"), jint>(locale); }

} // namespace android::text
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_TEXT_TEXTUTILS_H
