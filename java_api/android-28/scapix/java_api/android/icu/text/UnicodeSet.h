// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/android/icu/text/UnicodeFilter.h>
#include <scapix/java_api/java/lang/Iterable.h>
#include <scapix/java_api/java/lang/Comparable.h>
#include <scapix/java_api/android/icu/util/Freezable.h>

#ifndef SCAPIX_ANDROID_ICU_TEXT_UNICODESET_H
#define SCAPIX_ANDROID_ICU_TEXT_UNICODESET_H

namespace scapix::java_api {

namespace android::icu::text { class Replaceable; }
namespace android::icu::text { class SymbolTable; }
namespace android::icu::text { class UnicodeSet_ComparisonStyle; }
namespace android::icu::text { class UnicodeSet_SpanCondition; }
namespace java::lang { class CharSequence; }
namespace java::lang { class Object; }
namespace java::lang { class String; }
namespace java::lang { class StringBuffer; }
namespace java::text { class ParsePosition; }
namespace java::util { class Collection; }
namespace java::util { class Iterator; }
namespace android::icu::text { class UnicodeSet_EntryRange; }

namespace android::icu::text {

class UnicodeSet : public object_base<SCAPIX_META_STRING("android/icu/text/UnicodeSet"),
	android::icu::text::UnicodeFilter,
	java::lang::Iterable,
	java::lang::Comparable,
	android::icu::util::Freezable>
{
public:

	using SpanCondition = UnicodeSet_SpanCondition;
	using EntryRange = UnicodeSet_EntryRange;
	using ComparisonStyle = UnicodeSet_ComparisonStyle;

	static jint ADD_CASE_MAPPINGS_();
	static ref<android::icu::text::UnicodeSet> ALL_CODE_POINTS_();
	static jint CASE_();
	static jint CASE_INSENSITIVE_();
	static ref<android::icu::text::UnicodeSet> EMPTY_();
	static jint IGNORE_SPACE_();
	static jint MAX_VALUE_();
	static jint MIN_VALUE_();

	static ref<UnicodeSet> new_object();
	static ref<UnicodeSet> new_object(ref<android::icu::text::UnicodeSet> other);
	static ref<UnicodeSet> new_object(jint start, jint end);
	static ref<UnicodeSet> new_object(ref<link::java::array<jint>> pairs);
	static ref<UnicodeSet> new_object(ref<java::lang::String> pattern);
	static ref<UnicodeSet> new_object(ref<java::lang::String> pattern, jboolean ignoreWhitespace);
	static ref<UnicodeSet> new_object(ref<java::lang::String> pattern, jint options);
	static ref<UnicodeSet> new_object(ref<java::lang::String> pattern, ref<java::text::ParsePosition> pos, ref<android::icu::text::SymbolTable> symbols);
	static ref<UnicodeSet> new_object(ref<java::lang::String> pattern, ref<java::text::ParsePosition> pos, ref<android::icu::text::SymbolTable> symbols, jint options);
	ref<java::lang::Object> clone();
	ref<android::icu::text::UnicodeSet> set(jint start, jint end);
	ref<android::icu::text::UnicodeSet> set(ref<android::icu::text::UnicodeSet> other);
	ref<android::icu::text::UnicodeSet> applyPattern(ref<java::lang::String> pattern);
	ref<android::icu::text::UnicodeSet> applyPattern(ref<java::lang::String> pattern, jboolean ignoreWhitespace);
	ref<android::icu::text::UnicodeSet> applyPattern(ref<java::lang::String> pattern, jint options);
	ref<java::lang::String> toPattern(jboolean escapeUnprintable);
	ref<java::lang::StringBuffer> _generatePattern(ref<java::lang::StringBuffer> result, jboolean escapeUnprintable);
	ref<java::lang::StringBuffer> _generatePattern(ref<java::lang::StringBuffer> result, jboolean escapeUnprintable, jboolean includeStrings);
	jint size();
	jboolean isEmpty();
	jboolean matchesIndexValue(jint v);
	jint matches(ref<android::icu::text::Replaceable> text, ref<link::java::array<jint>> offset, jint limit, jboolean incremental);
	void addMatchSetTo(ref<android::icu::text::UnicodeSet> toUnionTo);
	jint indexOf(jint c);
	jint charAt(jint index);
	ref<android::icu::text::UnicodeSet> add(jint start, jint end);
	ref<android::icu::text::UnicodeSet> addAll(jint start, jint end);
	ref<android::icu::text::UnicodeSet> add(jint c);
	ref<android::icu::text::UnicodeSet> add(ref<java::lang::CharSequence> s);
	ref<android::icu::text::UnicodeSet> addAll(ref<java::lang::CharSequence> s);
	ref<android::icu::text::UnicodeSet> retainAll(ref<java::lang::CharSequence> s);
	ref<android::icu::text::UnicodeSet> complementAll(ref<java::lang::CharSequence> s);
	ref<android::icu::text::UnicodeSet> removeAll(ref<java::lang::CharSequence> s);
	ref<android::icu::text::UnicodeSet> removeAllStrings();
	static ref<android::icu::text::UnicodeSet> from(ref<java::lang::CharSequence> s);
	static ref<android::icu::text::UnicodeSet> fromAll(ref<java::lang::CharSequence> s);
	ref<android::icu::text::UnicodeSet> retain(jint start, jint end);
	ref<android::icu::text::UnicodeSet> retain(jint c);
	ref<android::icu::text::UnicodeSet> retain(ref<java::lang::CharSequence> cs);
	ref<android::icu::text::UnicodeSet> remove(jint start, jint end);
	ref<android::icu::text::UnicodeSet> remove(jint c);
	ref<android::icu::text::UnicodeSet> remove(ref<java::lang::CharSequence> s);
	ref<android::icu::text::UnicodeSet> complement(jint start, jint end);
	ref<android::icu::text::UnicodeSet> complement(jint c);
	ref<android::icu::text::UnicodeSet> complement();
	ref<android::icu::text::UnicodeSet> complement(ref<java::lang::CharSequence> s);
	jboolean contains(jint c);
	jboolean contains(jint start, jint end);
	jboolean contains(ref<java::lang::CharSequence> s);
	jboolean containsAll(ref<android::icu::text::UnicodeSet> b);
	jboolean containsAll(ref<java::lang::String> s);
	jboolean containsNone(jint start, jint end);
	jboolean containsNone(ref<android::icu::text::UnicodeSet> b);
	jboolean containsNone(ref<java::lang::CharSequence> s);
	jboolean containsSome(jint start, jint end);
	jboolean containsSome(ref<android::icu::text::UnicodeSet> s);
	jboolean containsSome(ref<java::lang::CharSequence> s);
	ref<android::icu::text::UnicodeSet> addAll(ref<android::icu::text::UnicodeSet> c);
	ref<android::icu::text::UnicodeSet> retainAll(ref<android::icu::text::UnicodeSet> c);
	ref<android::icu::text::UnicodeSet> removeAll(ref<android::icu::text::UnicodeSet> c);
	ref<android::icu::text::UnicodeSet> complementAll(ref<android::icu::text::UnicodeSet> c);
	ref<android::icu::text::UnicodeSet> clear();
	jint getRangeCount();
	jint getRangeStart(jint index);
	jint getRangeEnd(jint index);
	ref<android::icu::text::UnicodeSet> compact();
	jboolean equals(ref<java::lang::Object> o);
	jint hashCode();
	ref<java::lang::String> toString();
	ref<java::util::Collection> addAllTo(ref<java::util::Collection> target);
	ref<android::icu::text::UnicodeSet> add(ref<java::lang::Iterable> source);
	ref<android::icu::text::UnicodeSet> addAll(ref<java::lang::Iterable> source);
	ref<android::icu::text::UnicodeSet> applyIntPropertyValue(jint prop, jint value);
	ref<android::icu::text::UnicodeSet> applyPropertyAlias(ref<java::lang::String> propertyAlias, ref<java::lang::String> valueAlias);
	ref<android::icu::text::UnicodeSet> applyPropertyAlias(ref<java::lang::String> propertyAlias, ref<java::lang::String> valueAlias, ref<android::icu::text::SymbolTable> symbols);
	ref<android::icu::text::UnicodeSet> closeOver(jint attribute);
	jboolean isFrozen();
	ref<android::icu::text::UnicodeSet> freeze();
	jint span(ref<java::lang::CharSequence> s, ref<android::icu::text::UnicodeSet_SpanCondition> spanCondition);
	jint span(ref<java::lang::CharSequence> s, jint start, ref<android::icu::text::UnicodeSet_SpanCondition> spanCondition);
	jint spanBack(ref<java::lang::CharSequence> s, ref<android::icu::text::UnicodeSet_SpanCondition> spanCondition);
	jint spanBack(ref<java::lang::CharSequence> s, jint fromIndex, ref<android::icu::text::UnicodeSet_SpanCondition> spanCondition);
	ref<android::icu::text::UnicodeSet> cloneAsThawed();
	ref<java::lang::Iterable> ranges();
	ref<java::util::Iterator> iterator();
	jboolean containsAll(ref<java::lang::Iterable> collection);
	jboolean containsNone(ref<java::lang::Iterable> collection);
	jboolean containsSome(ref<java::lang::Iterable> collection);
	ref<android::icu::text::UnicodeSet> addAll(ref<link::java::array<java::lang::CharSequence>> collection);
	ref<android::icu::text::UnicodeSet> removeAll(ref<java::lang::Iterable> collection);
	ref<android::icu::text::UnicodeSet> retainAll(ref<java::lang::Iterable> collection);
	jint compareTo(ref<android::icu::text::UnicodeSet> o);
	jint compareTo(ref<android::icu::text::UnicodeSet> o, ref<android::icu::text::UnicodeSet_ComparisonStyle> style);
	jint compareTo(ref<java::lang::Iterable> other);
	ref<java::util::Collection> strings();

protected:

	UnicodeSet(handle_type h) : base_(h) {}

};

} // namespace android::icu::text
} // namespace scapix::java_api

#include <scapix/java_api/android/icu/text/Replaceable.h>
#include <scapix/java_api/android/icu/text/SymbolTable.h>
#include <scapix/java_api/android/icu/text/UnicodeSet_ComparisonStyle.h>
#include <scapix/java_api/android/icu/text/UnicodeSet_SpanCondition.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/StringBuffer.h>
#include <scapix/java_api/java/text/ParsePosition.h>
#include <scapix/java_api/java/util/Collection.h>
#include <scapix/java_api/java/util/Iterator.h>

namespace scapix::java_api {
namespace android::icu::text {

inline jint UnicodeSet::ADD_CASE_MAPPINGS_() { return get_static_field<SCAPIX_META_STRING("ADD_CASE_MAPPINGS"), jint>(); }
inline ref<android::icu::text::UnicodeSet> UnicodeSet::ALL_CODE_POINTS_() { return get_static_field<SCAPIX_META_STRING("ALL_CODE_POINTS"), ref<android::icu::text::UnicodeSet>>(); }
inline jint UnicodeSet::CASE_() { return get_static_field<SCAPIX_META_STRING("CASE"), jint>(); }
inline jint UnicodeSet::CASE_INSENSITIVE_() { return get_static_field<SCAPIX_META_STRING("CASE_INSENSITIVE"), jint>(); }
inline ref<android::icu::text::UnicodeSet> UnicodeSet::EMPTY_() { return get_static_field<SCAPIX_META_STRING("EMPTY"), ref<android::icu::text::UnicodeSet>>(); }
inline jint UnicodeSet::IGNORE_SPACE_() { return get_static_field<SCAPIX_META_STRING("IGNORE_SPACE"), jint>(); }
inline jint UnicodeSet::MAX_VALUE_() { return get_static_field<SCAPIX_META_STRING("MAX_VALUE"), jint>(); }
inline jint UnicodeSet::MIN_VALUE_() { return get_static_field<SCAPIX_META_STRING("MIN_VALUE"), jint>(); }
inline ref<UnicodeSet> UnicodeSet::new_object() { return base_::new_object(); }
inline ref<UnicodeSet> UnicodeSet::new_object(ref<android::icu::text::UnicodeSet> other) { return base_::new_object(other); }
inline ref<UnicodeSet> UnicodeSet::new_object(jint start, jint end) { return base_::new_object(start, end); }
inline ref<UnicodeSet> UnicodeSet::new_object(ref<link::java::array<jint>> pairs) { return base_::new_object(pairs); }
inline ref<UnicodeSet> UnicodeSet::new_object(ref<java::lang::String> pattern) { return base_::new_object(pattern); }
inline ref<UnicodeSet> UnicodeSet::new_object(ref<java::lang::String> pattern, jboolean ignoreWhitespace) { return base_::new_object(pattern, ignoreWhitespace); }
inline ref<UnicodeSet> UnicodeSet::new_object(ref<java::lang::String> pattern, jint options) { return base_::new_object(pattern, options); }
inline ref<UnicodeSet> UnicodeSet::new_object(ref<java::lang::String> pattern, ref<java::text::ParsePosition> pos, ref<android::icu::text::SymbolTable> symbols) { return base_::new_object(pattern, pos, symbols); }
inline ref<UnicodeSet> UnicodeSet::new_object(ref<java::lang::String> pattern, ref<java::text::ParsePosition> pos, ref<android::icu::text::SymbolTable> symbols, jint options) { return base_::new_object(pattern, pos, symbols, options); }
inline ref<java::lang::Object> UnicodeSet::clone() { return call_method<SCAPIX_META_STRING("clone"), ref<java::lang::Object>>(); }
inline ref<android::icu::text::UnicodeSet> UnicodeSet::set(jint start, jint end) { return call_method<SCAPIX_META_STRING("set"), ref<android::icu::text::UnicodeSet>>(start, end); }
inline ref<android::icu::text::UnicodeSet> UnicodeSet::set(ref<android::icu::text::UnicodeSet> other) { return call_method<SCAPIX_META_STRING("set"), ref<android::icu::text::UnicodeSet>>(other); }
inline ref<android::icu::text::UnicodeSet> UnicodeSet::applyPattern(ref<java::lang::String> pattern) { return call_method<SCAPIX_META_STRING("applyPattern"), ref<android::icu::text::UnicodeSet>>(pattern); }
inline ref<android::icu::text::UnicodeSet> UnicodeSet::applyPattern(ref<java::lang::String> pattern, jboolean ignoreWhitespace) { return call_method<SCAPIX_META_STRING("applyPattern"), ref<android::icu::text::UnicodeSet>>(pattern, ignoreWhitespace); }
inline ref<android::icu::text::UnicodeSet> UnicodeSet::applyPattern(ref<java::lang::String> pattern, jint options) { return call_method<SCAPIX_META_STRING("applyPattern"), ref<android::icu::text::UnicodeSet>>(pattern, options); }
inline ref<java::lang::String> UnicodeSet::toPattern(jboolean escapeUnprintable) { return call_method<SCAPIX_META_STRING("toPattern"), ref<java::lang::String>>(escapeUnprintable); }
inline ref<java::lang::StringBuffer> UnicodeSet::_generatePattern(ref<java::lang::StringBuffer> result, jboolean escapeUnprintable) { return call_method<SCAPIX_META_STRING("_generatePattern"), ref<java::lang::StringBuffer>>(result, escapeUnprintable); }
inline ref<java::lang::StringBuffer> UnicodeSet::_generatePattern(ref<java::lang::StringBuffer> result, jboolean escapeUnprintable, jboolean includeStrings) { return call_method<SCAPIX_META_STRING("_generatePattern"), ref<java::lang::StringBuffer>>(result, escapeUnprintable, includeStrings); }
inline jint UnicodeSet::size() { return call_method<SCAPIX_META_STRING("size"), jint>(); }
inline jboolean UnicodeSet::isEmpty() { return call_method<SCAPIX_META_STRING("isEmpty"), jboolean>(); }
inline jboolean UnicodeSet::matchesIndexValue(jint v) { return call_method<SCAPIX_META_STRING("matchesIndexValue"), jboolean>(v); }
inline jint UnicodeSet::matches(ref<android::icu::text::Replaceable> text, ref<link::java::array<jint>> offset, jint limit, jboolean incremental) { return call_method<SCAPIX_META_STRING("matches"), jint>(text, offset, limit, incremental); }
inline void UnicodeSet::addMatchSetTo(ref<android::icu::text::UnicodeSet> toUnionTo) { return call_method<SCAPIX_META_STRING("addMatchSetTo"), void>(toUnionTo); }
inline jint UnicodeSet::indexOf(jint c) { return call_method<SCAPIX_META_STRING("indexOf"), jint>(c); }
inline jint UnicodeSet::charAt(jint index) { return call_method<SCAPIX_META_STRING("charAt"), jint>(index); }
inline ref<android::icu::text::UnicodeSet> UnicodeSet::add(jint start, jint end) { return call_method<SCAPIX_META_STRING("add"), ref<android::icu::text::UnicodeSet>>(start, end); }
inline ref<android::icu::text::UnicodeSet> UnicodeSet::addAll(jint start, jint end) { return call_method<SCAPIX_META_STRING("addAll"), ref<android::icu::text::UnicodeSet>>(start, end); }
inline ref<android::icu::text::UnicodeSet> UnicodeSet::add(jint c) { return call_method<SCAPIX_META_STRING("add"), ref<android::icu::text::UnicodeSet>>(c); }
inline ref<android::icu::text::UnicodeSet> UnicodeSet::add(ref<java::lang::CharSequence> s) { return call_method<SCAPIX_META_STRING("add"), ref<android::icu::text::UnicodeSet>>(s); }
inline ref<android::icu::text::UnicodeSet> UnicodeSet::addAll(ref<java::lang::CharSequence> s) { return call_method<SCAPIX_META_STRING("addAll"), ref<android::icu::text::UnicodeSet>>(s); }
inline ref<android::icu::text::UnicodeSet> UnicodeSet::retainAll(ref<java::lang::CharSequence> s) { return call_method<SCAPIX_META_STRING("retainAll"), ref<android::icu::text::UnicodeSet>>(s); }
inline ref<android::icu::text::UnicodeSet> UnicodeSet::complementAll(ref<java::lang::CharSequence> s) { return call_method<SCAPIX_META_STRING("complementAll"), ref<android::icu::text::UnicodeSet>>(s); }
inline ref<android::icu::text::UnicodeSet> UnicodeSet::removeAll(ref<java::lang::CharSequence> s) { return call_method<SCAPIX_META_STRING("removeAll"), ref<android::icu::text::UnicodeSet>>(s); }
inline ref<android::icu::text::UnicodeSet> UnicodeSet::removeAllStrings() { return call_method<SCAPIX_META_STRING("removeAllStrings"), ref<android::icu::text::UnicodeSet>>(); }
inline ref<android::icu::text::UnicodeSet> UnicodeSet::from(ref<java::lang::CharSequence> s) { return call_static_method<SCAPIX_META_STRING("from"), ref<android::icu::text::UnicodeSet>>(s); }
inline ref<android::icu::text::UnicodeSet> UnicodeSet::fromAll(ref<java::lang::CharSequence> s) { return call_static_method<SCAPIX_META_STRING("fromAll"), ref<android::icu::text::UnicodeSet>>(s); }
inline ref<android::icu::text::UnicodeSet> UnicodeSet::retain(jint start, jint end) { return call_method<SCAPIX_META_STRING("retain"), ref<android::icu::text::UnicodeSet>>(start, end); }
inline ref<android::icu::text::UnicodeSet> UnicodeSet::retain(jint c) { return call_method<SCAPIX_META_STRING("retain"), ref<android::icu::text::UnicodeSet>>(c); }
inline ref<android::icu::text::UnicodeSet> UnicodeSet::retain(ref<java::lang::CharSequence> cs) { return call_method<SCAPIX_META_STRING("retain"), ref<android::icu::text::UnicodeSet>>(cs); }
inline ref<android::icu::text::UnicodeSet> UnicodeSet::remove(jint start, jint end) { return call_method<SCAPIX_META_STRING("remove"), ref<android::icu::text::UnicodeSet>>(start, end); }
inline ref<android::icu::text::UnicodeSet> UnicodeSet::remove(jint c) { return call_method<SCAPIX_META_STRING("remove"), ref<android::icu::text::UnicodeSet>>(c); }
inline ref<android::icu::text::UnicodeSet> UnicodeSet::remove(ref<java::lang::CharSequence> s) { return call_method<SCAPIX_META_STRING("remove"), ref<android::icu::text::UnicodeSet>>(s); }
inline ref<android::icu::text::UnicodeSet> UnicodeSet::complement(jint start, jint end) { return call_method<SCAPIX_META_STRING("complement"), ref<android::icu::text::UnicodeSet>>(start, end); }
inline ref<android::icu::text::UnicodeSet> UnicodeSet::complement(jint c) { return call_method<SCAPIX_META_STRING("complement"), ref<android::icu::text::UnicodeSet>>(c); }
inline ref<android::icu::text::UnicodeSet> UnicodeSet::complement() { return call_method<SCAPIX_META_STRING("complement"), ref<android::icu::text::UnicodeSet>>(); }
inline ref<android::icu::text::UnicodeSet> UnicodeSet::complement(ref<java::lang::CharSequence> s) { return call_method<SCAPIX_META_STRING("complement"), ref<android::icu::text::UnicodeSet>>(s); }
inline jboolean UnicodeSet::contains(jint c) { return call_method<SCAPIX_META_STRING("contains"), jboolean>(c); }
inline jboolean UnicodeSet::contains(jint start, jint end) { return call_method<SCAPIX_META_STRING("contains"), jboolean>(start, end); }
inline jboolean UnicodeSet::contains(ref<java::lang::CharSequence> s) { return call_method<SCAPIX_META_STRING("contains"), jboolean>(s); }
inline jboolean UnicodeSet::containsAll(ref<android::icu::text::UnicodeSet> b) { return call_method<SCAPIX_META_STRING("containsAll"), jboolean>(b); }
inline jboolean UnicodeSet::containsAll(ref<java::lang::String> s) { return call_method<SCAPIX_META_STRING("containsAll"), jboolean>(s); }
inline jboolean UnicodeSet::containsNone(jint start, jint end) { return call_method<SCAPIX_META_STRING("containsNone"), jboolean>(start, end); }
inline jboolean UnicodeSet::containsNone(ref<android::icu::text::UnicodeSet> b) { return call_method<SCAPIX_META_STRING("containsNone"), jboolean>(b); }
inline jboolean UnicodeSet::containsNone(ref<java::lang::CharSequence> s) { return call_method<SCAPIX_META_STRING("containsNone"), jboolean>(s); }
inline jboolean UnicodeSet::containsSome(jint start, jint end) { return call_method<SCAPIX_META_STRING("containsSome"), jboolean>(start, end); }
inline jboolean UnicodeSet::containsSome(ref<android::icu::text::UnicodeSet> s) { return call_method<SCAPIX_META_STRING("containsSome"), jboolean>(s); }
inline jboolean UnicodeSet::containsSome(ref<java::lang::CharSequence> s) { return call_method<SCAPIX_META_STRING("containsSome"), jboolean>(s); }
inline ref<android::icu::text::UnicodeSet> UnicodeSet::addAll(ref<android::icu::text::UnicodeSet> c) { return call_method<SCAPIX_META_STRING("addAll"), ref<android::icu::text::UnicodeSet>>(c); }
inline ref<android::icu::text::UnicodeSet> UnicodeSet::retainAll(ref<android::icu::text::UnicodeSet> c) { return call_method<SCAPIX_META_STRING("retainAll"), ref<android::icu::text::UnicodeSet>>(c); }
inline ref<android::icu::text::UnicodeSet> UnicodeSet::removeAll(ref<android::icu::text::UnicodeSet> c) { return call_method<SCAPIX_META_STRING("removeAll"), ref<android::icu::text::UnicodeSet>>(c); }
inline ref<android::icu::text::UnicodeSet> UnicodeSet::complementAll(ref<android::icu::text::UnicodeSet> c) { return call_method<SCAPIX_META_STRING("complementAll"), ref<android::icu::text::UnicodeSet>>(c); }
inline ref<android::icu::text::UnicodeSet> UnicodeSet::clear() { return call_method<SCAPIX_META_STRING("clear"), ref<android::icu::text::UnicodeSet>>(); }
inline jint UnicodeSet::getRangeCount() { return call_method<SCAPIX_META_STRING("getRangeCount"), jint>(); }
inline jint UnicodeSet::getRangeStart(jint index) { return call_method<SCAPIX_META_STRING("getRangeStart"), jint>(index); }
inline jint UnicodeSet::getRangeEnd(jint index) { return call_method<SCAPIX_META_STRING("getRangeEnd"), jint>(index); }
inline ref<android::icu::text::UnicodeSet> UnicodeSet::compact() { return call_method<SCAPIX_META_STRING("compact"), ref<android::icu::text::UnicodeSet>>(); }
inline jboolean UnicodeSet::equals(ref<java::lang::Object> o) { return call_method<SCAPIX_META_STRING("equals"), jboolean>(o); }
inline jint UnicodeSet::hashCode() { return call_method<SCAPIX_META_STRING("hashCode"), jint>(); }
inline ref<java::lang::String> UnicodeSet::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }
inline ref<java::util::Collection> UnicodeSet::addAllTo(ref<java::util::Collection> target) { return call_method<SCAPIX_META_STRING("addAllTo"), ref<java::util::Collection>>(target); }
inline ref<android::icu::text::UnicodeSet> UnicodeSet::add(ref<java::lang::Iterable> source) { return call_method<SCAPIX_META_STRING("add"), ref<android::icu::text::UnicodeSet>>(source); }
inline ref<android::icu::text::UnicodeSet> UnicodeSet::addAll(ref<java::lang::Iterable> source) { return call_method<SCAPIX_META_STRING("addAll"), ref<android::icu::text::UnicodeSet>>(source); }
inline ref<android::icu::text::UnicodeSet> UnicodeSet::applyIntPropertyValue(jint prop, jint value) { return call_method<SCAPIX_META_STRING("applyIntPropertyValue"), ref<android::icu::text::UnicodeSet>>(prop, value); }
inline ref<android::icu::text::UnicodeSet> UnicodeSet::applyPropertyAlias(ref<java::lang::String> propertyAlias, ref<java::lang::String> valueAlias) { return call_method<SCAPIX_META_STRING("applyPropertyAlias"), ref<android::icu::text::UnicodeSet>>(propertyAlias, valueAlias); }
inline ref<android::icu::text::UnicodeSet> UnicodeSet::applyPropertyAlias(ref<java::lang::String> propertyAlias, ref<java::lang::String> valueAlias, ref<android::icu::text::SymbolTable> symbols) { return call_method<SCAPIX_META_STRING("applyPropertyAlias"), ref<android::icu::text::UnicodeSet>>(propertyAlias, valueAlias, symbols); }
inline ref<android::icu::text::UnicodeSet> UnicodeSet::closeOver(jint attribute) { return call_method<SCAPIX_META_STRING("closeOver"), ref<android::icu::text::UnicodeSet>>(attribute); }
inline jboolean UnicodeSet::isFrozen() { return call_method<SCAPIX_META_STRING("isFrozen"), jboolean>(); }
inline ref<android::icu::text::UnicodeSet> UnicodeSet::freeze() { return call_method<SCAPIX_META_STRING("freeze"), ref<android::icu::text::UnicodeSet>>(); }
inline jint UnicodeSet::span(ref<java::lang::CharSequence> s, ref<android::icu::text::UnicodeSet_SpanCondition> spanCondition) { return call_method<SCAPIX_META_STRING("span"), jint>(s, spanCondition); }
inline jint UnicodeSet::span(ref<java::lang::CharSequence> s, jint start, ref<android::icu::text::UnicodeSet_SpanCondition> spanCondition) { return call_method<SCAPIX_META_STRING("span"), jint>(s, start, spanCondition); }
inline jint UnicodeSet::spanBack(ref<java::lang::CharSequence> s, ref<android::icu::text::UnicodeSet_SpanCondition> spanCondition) { return call_method<SCAPIX_META_STRING("spanBack"), jint>(s, spanCondition); }
inline jint UnicodeSet::spanBack(ref<java::lang::CharSequence> s, jint fromIndex, ref<android::icu::text::UnicodeSet_SpanCondition> spanCondition) { return call_method<SCAPIX_META_STRING("spanBack"), jint>(s, fromIndex, spanCondition); }
inline ref<android::icu::text::UnicodeSet> UnicodeSet::cloneAsThawed() { return call_method<SCAPIX_META_STRING("cloneAsThawed"), ref<android::icu::text::UnicodeSet>>(); }
inline ref<java::lang::Iterable> UnicodeSet::ranges() { return call_method<SCAPIX_META_STRING("ranges"), ref<java::lang::Iterable>>(); }
inline ref<java::util::Iterator> UnicodeSet::iterator() { return call_method<SCAPIX_META_STRING("iterator"), ref<java::util::Iterator>>(); }
inline jboolean UnicodeSet::containsAll(ref<java::lang::Iterable> collection) { return call_method<SCAPIX_META_STRING("containsAll"), jboolean>(collection); }
inline jboolean UnicodeSet::containsNone(ref<java::lang::Iterable> collection) { return call_method<SCAPIX_META_STRING("containsNone"), jboolean>(collection); }
inline jboolean UnicodeSet::containsSome(ref<java::lang::Iterable> collection) { return call_method<SCAPIX_META_STRING("containsSome"), jboolean>(collection); }
inline ref<android::icu::text::UnicodeSet> UnicodeSet::addAll(ref<link::java::array<java::lang::CharSequence>> collection) { return call_method<SCAPIX_META_STRING("addAll"), ref<android::icu::text::UnicodeSet>>(collection); }
inline ref<android::icu::text::UnicodeSet> UnicodeSet::removeAll(ref<java::lang::Iterable> collection) { return call_method<SCAPIX_META_STRING("removeAll"), ref<android::icu::text::UnicodeSet>>(collection); }
inline ref<android::icu::text::UnicodeSet> UnicodeSet::retainAll(ref<java::lang::Iterable> collection) { return call_method<SCAPIX_META_STRING("retainAll"), ref<android::icu::text::UnicodeSet>>(collection); }
inline jint UnicodeSet::compareTo(ref<android::icu::text::UnicodeSet> o) { return call_method<SCAPIX_META_STRING("compareTo"), jint>(o); }
inline jint UnicodeSet::compareTo(ref<android::icu::text::UnicodeSet> o, ref<android::icu::text::UnicodeSet_ComparisonStyle> style) { return call_method<SCAPIX_META_STRING("compareTo"), jint>(o, style); }
inline jint UnicodeSet::compareTo(ref<java::lang::Iterable> other) { return call_method<SCAPIX_META_STRING("compareTo"), jint>(other); }
inline ref<java::util::Collection> UnicodeSet::strings() { return call_method<SCAPIX_META_STRING("strings"), ref<java::util::Collection>>(); }

} // namespace android::icu::text
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_ICU_TEXT_UNICODESET_H
