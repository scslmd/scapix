// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Serializable.h>
#include <scapix/java_api/java/lang/Comparable.h>
#include <scapix/java_api/java/lang/CharSequence.h>

#ifndef SCAPIX_JAVA_LANG_STRING_H
#define SCAPIX_JAVA_LANG_STRING_H

namespace scapix::java_api {

namespace java::lang { class Iterable; }
namespace java::lang { class StringBuffer; }
namespace java::lang { class StringBuilder; }
namespace java::nio::charset { class Charset; }
namespace java::util { class Comparator; }
namespace java::util { class Locale; }

namespace java::lang {

class String : public object_base<SCAPIX_META_STRING("java/lang/String"),
	java::lang::Object,
	java::io::Serializable,
	java::lang::Comparable,
	java::lang::CharSequence>
{
public:

	static ref<java::util::Comparator> CASE_INSENSITIVE_ORDER_();

	static ref<String> new_object();
	static ref<String> new_object(ref<java::lang::String> original);
	static ref<String> new_object(ref<link::java::array<jchar>> value);
	static ref<String> new_object(ref<link::java::array<jchar>> value, jint offset, jint count);
	static ref<String> new_object(ref<link::java::array<jint>> codePoints, jint offset, jint count);
	static ref<String> new_object(ref<link::java::array<jbyte>> ascii, jint hibyte, jint offset, jint count);
	static ref<String> new_object(ref<link::java::array<jbyte>> ascii, jint hibyte);
	static ref<String> new_object(ref<link::java::array<jbyte>> bytes, jint offset, jint length, ref<java::lang::String> charsetName);
	static ref<String> new_object(ref<link::java::array<jbyte>> bytes, jint offset, jint length, ref<java::nio::charset::Charset> charset);
	static ref<String> new_object(ref<link::java::array<jbyte>> bytes, ref<java::lang::String> charsetName);
	static ref<String> new_object(ref<link::java::array<jbyte>> bytes, ref<java::nio::charset::Charset> charset);
	static ref<String> new_object(ref<link::java::array<jbyte>> bytes, jint offset, jint length);
	static ref<String> new_object(ref<link::java::array<jbyte>> bytes);
	static ref<String> new_object(ref<java::lang::StringBuffer> buffer);
	static ref<String> new_object(ref<java::lang::StringBuilder> builder);
	jint length();
	jboolean isEmpty();
	jchar charAt(jint p1);
	jint codePointAt(jint index);
	jint codePointBefore(jint index);
	jint codePointCount(jint beginIndex, jint endIndex);
	jint offsetByCodePoints(jint index, jint codePointOffset);
	void getChars(jint srcBegin, jint srcEnd, ref<link::java::array<jchar>> dst, jint dstBegin);
	void getBytes(jint srcBegin, jint srcEnd, ref<link::java::array<jbyte>> dst, jint dstBegin);
	ref<link::java::array<jbyte>> getBytes(ref<java::lang::String> charsetName);
	ref<link::java::array<jbyte>> getBytes(ref<java::nio::charset::Charset> charset);
	ref<link::java::array<jbyte>> getBytes();
	jboolean equals(ref<java::lang::Object> anObject);
	jboolean contentEquals(ref<java::lang::StringBuffer> sb);
	jboolean contentEquals(ref<java::lang::CharSequence> cs);
	jboolean equalsIgnoreCase(ref<java::lang::String> anotherString);
	jint compareTo(ref<java::lang::String> p1);
	jint compareToIgnoreCase(ref<java::lang::String> str);
	jboolean regionMatches(jint toffset, ref<java::lang::String> other, jint ooffset, jint len);
	jboolean regionMatches(jboolean ignoreCase, jint toffset, ref<java::lang::String> other, jint ooffset, jint len);
	jboolean startsWith(ref<java::lang::String> prefix, jint toffset);
	jboolean startsWith(ref<java::lang::String> prefix);
	jboolean endsWith(ref<java::lang::String> suffix);
	jint hashCode();
	jint indexOf(jint ch);
	jint indexOf(jint ch, jint fromIndex);
	jint lastIndexOf(jint ch);
	jint lastIndexOf(jint ch, jint fromIndex);
	jint indexOf(ref<java::lang::String> str);
	jint indexOf(ref<java::lang::String> str, jint fromIndex);
	jint lastIndexOf(ref<java::lang::String> str);
	jint lastIndexOf(ref<java::lang::String> str, jint fromIndex);
	ref<java::lang::String> substring(jint beginIndex);
	ref<java::lang::String> substring(jint beginIndex, jint endIndex);
	ref<java::lang::CharSequence> subSequence(jint beginIndex, jint endIndex);
	ref<java::lang::String> concat(ref<java::lang::String> p1);
	ref<java::lang::String> replace(jchar oldChar, jchar newChar);
	jboolean matches(ref<java::lang::String> regex);
	jboolean contains(ref<java::lang::CharSequence> s);
	ref<java::lang::String> replaceFirst(ref<java::lang::String> regex, ref<java::lang::String> replacement);
	ref<java::lang::String> replaceAll(ref<java::lang::String> regex, ref<java::lang::String> replacement);
	ref<java::lang::String> replace(ref<java::lang::CharSequence> target, ref<java::lang::CharSequence> replacement);
	ref<link::java::array<java::lang::String>> split(ref<java::lang::String> regex, jint limit);
	ref<link::java::array<java::lang::String>> split(ref<java::lang::String> regex);
	static ref<java::lang::String> join(ref<java::lang::CharSequence> delimiter, ref<link::java::array<java::lang::CharSequence>> elements);
	static ref<java::lang::String> join(ref<java::lang::CharSequence> delimiter, ref<java::lang::Iterable> elements);
	ref<java::lang::String> toLowerCase(ref<java::util::Locale> locale);
	ref<java::lang::String> toLowerCase();
	ref<java::lang::String> toUpperCase(ref<java::util::Locale> locale);
	ref<java::lang::String> toUpperCase();
	ref<java::lang::String> trim();
	ref<java::lang::String> toString();
	ref<link::java::array<jchar>> toCharArray();
	static ref<java::lang::String> format(ref<java::lang::String> format, ref<link::java::array<java::lang::Object>> args);
	static ref<java::lang::String> format(ref<java::util::Locale> l, ref<java::lang::String> format, ref<link::java::array<java::lang::Object>> args);
	static ref<java::lang::String> valueOf(ref<java::lang::Object> obj);
	static ref<java::lang::String> valueOf(ref<link::java::array<jchar>> data);
	static ref<java::lang::String> valueOf(ref<link::java::array<jchar>> data, jint offset, jint count);
	static ref<java::lang::String> copyValueOf(ref<link::java::array<jchar>> data, jint offset, jint count);
	static ref<java::lang::String> copyValueOf(ref<link::java::array<jchar>> data);
	static ref<java::lang::String> valueOf(jboolean b);
	static ref<java::lang::String> valueOf(jchar c);
	static ref<java::lang::String> valueOf(jint i);
	static ref<java::lang::String> valueOf(jlong l);
	static ref<java::lang::String> valueOf(jfloat f);
	static ref<java::lang::String> valueOf(jdouble d);
	ref<java::lang::String> intern();

protected:

	String(handle_type h) : base_(h) {}

};

} // namespace java::lang
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/Iterable.h>
#include <scapix/java_api/java/lang/StringBuffer.h>
#include <scapix/java_api/java/lang/StringBuilder.h>
#include <scapix/java_api/java/nio/charset/Charset.h>
#include <scapix/java_api/java/util/Comparator.h>
#include <scapix/java_api/java/util/Locale.h>

namespace scapix::java_api {
namespace java::lang {

inline ref<java::util::Comparator> String::CASE_INSENSITIVE_ORDER_() { return get_static_field<SCAPIX_META_STRING("CASE_INSENSITIVE_ORDER"), ref<java::util::Comparator>>(); }
inline ref<String> String::new_object() { return base_::new_object(); }
inline ref<String> String::new_object(ref<java::lang::String> original) { return base_::new_object(original); }
inline ref<String> String::new_object(ref<link::java::array<jchar>> value) { return base_::new_object(value); }
inline ref<String> String::new_object(ref<link::java::array<jchar>> value, jint offset, jint count) { return base_::new_object(value, offset, count); }
inline ref<String> String::new_object(ref<link::java::array<jint>> codePoints, jint offset, jint count) { return base_::new_object(codePoints, offset, count); }
inline ref<String> String::new_object(ref<link::java::array<jbyte>> ascii, jint hibyte, jint offset, jint count) { return base_::new_object(ascii, hibyte, offset, count); }
inline ref<String> String::new_object(ref<link::java::array<jbyte>> ascii, jint hibyte) { return base_::new_object(ascii, hibyte); }
inline ref<String> String::new_object(ref<link::java::array<jbyte>> bytes, jint offset, jint length, ref<java::lang::String> charsetName) { return base_::new_object(bytes, offset, length, charsetName); }
inline ref<String> String::new_object(ref<link::java::array<jbyte>> bytes, jint offset, jint length, ref<java::nio::charset::Charset> charset) { return base_::new_object(bytes, offset, length, charset); }
inline ref<String> String::new_object(ref<link::java::array<jbyte>> bytes, ref<java::lang::String> charsetName) { return base_::new_object(bytes, charsetName); }
inline ref<String> String::new_object(ref<link::java::array<jbyte>> bytes, ref<java::nio::charset::Charset> charset) { return base_::new_object(bytes, charset); }
inline ref<String> String::new_object(ref<link::java::array<jbyte>> bytes, jint offset, jint length) { return base_::new_object(bytes, offset, length); }
inline ref<String> String::new_object(ref<link::java::array<jbyte>> bytes) { return base_::new_object(bytes); }
inline ref<String> String::new_object(ref<java::lang::StringBuffer> buffer) { return base_::new_object(buffer); }
inline ref<String> String::new_object(ref<java::lang::StringBuilder> builder) { return base_::new_object(builder); }
inline jint String::length() { return call_method<SCAPIX_META_STRING("length"), jint>(); }
inline jboolean String::isEmpty() { return call_method<SCAPIX_META_STRING("isEmpty"), jboolean>(); }
inline jchar String::charAt(jint p1) { return call_method<SCAPIX_META_STRING("charAt"), jchar>(p1); }
inline jint String::codePointAt(jint index) { return call_method<SCAPIX_META_STRING("codePointAt"), jint>(index); }
inline jint String::codePointBefore(jint index) { return call_method<SCAPIX_META_STRING("codePointBefore"), jint>(index); }
inline jint String::codePointCount(jint beginIndex, jint endIndex) { return call_method<SCAPIX_META_STRING("codePointCount"), jint>(beginIndex, endIndex); }
inline jint String::offsetByCodePoints(jint index, jint codePointOffset) { return call_method<SCAPIX_META_STRING("offsetByCodePoints"), jint>(index, codePointOffset); }
inline void String::getChars(jint srcBegin, jint srcEnd, ref<link::java::array<jchar>> dst, jint dstBegin) { return call_method<SCAPIX_META_STRING("getChars"), void>(srcBegin, srcEnd, dst, dstBegin); }
inline void String::getBytes(jint srcBegin, jint srcEnd, ref<link::java::array<jbyte>> dst, jint dstBegin) { return call_method<SCAPIX_META_STRING("getBytes"), void>(srcBegin, srcEnd, dst, dstBegin); }
inline ref<link::java::array<jbyte>> String::getBytes(ref<java::lang::String> charsetName) { return call_method<SCAPIX_META_STRING("getBytes"), ref<link::java::array<jbyte>>>(charsetName); }
inline ref<link::java::array<jbyte>> String::getBytes(ref<java::nio::charset::Charset> charset) { return call_method<SCAPIX_META_STRING("getBytes"), ref<link::java::array<jbyte>>>(charset); }
inline ref<link::java::array<jbyte>> String::getBytes() { return call_method<SCAPIX_META_STRING("getBytes"), ref<link::java::array<jbyte>>>(); }
inline jboolean String::equals(ref<java::lang::Object> anObject) { return call_method<SCAPIX_META_STRING("equals"), jboolean>(anObject); }
inline jboolean String::contentEquals(ref<java::lang::StringBuffer> sb) { return call_method<SCAPIX_META_STRING("contentEquals"), jboolean>(sb); }
inline jboolean String::contentEquals(ref<java::lang::CharSequence> cs) { return call_method<SCAPIX_META_STRING("contentEquals"), jboolean>(cs); }
inline jboolean String::equalsIgnoreCase(ref<java::lang::String> anotherString) { return call_method<SCAPIX_META_STRING("equalsIgnoreCase"), jboolean>(anotherString); }
inline jint String::compareTo(ref<java::lang::String> p1) { return call_method<SCAPIX_META_STRING("compareTo"), jint>(p1); }
inline jint String::compareToIgnoreCase(ref<java::lang::String> str) { return call_method<SCAPIX_META_STRING("compareToIgnoreCase"), jint>(str); }
inline jboolean String::regionMatches(jint toffset, ref<java::lang::String> other, jint ooffset, jint len) { return call_method<SCAPIX_META_STRING("regionMatches"), jboolean>(toffset, other, ooffset, len); }
inline jboolean String::regionMatches(jboolean ignoreCase, jint toffset, ref<java::lang::String> other, jint ooffset, jint len) { return call_method<SCAPIX_META_STRING("regionMatches"), jboolean>(ignoreCase, toffset, other, ooffset, len); }
inline jboolean String::startsWith(ref<java::lang::String> prefix, jint toffset) { return call_method<SCAPIX_META_STRING("startsWith"), jboolean>(prefix, toffset); }
inline jboolean String::startsWith(ref<java::lang::String> prefix) { return call_method<SCAPIX_META_STRING("startsWith"), jboolean>(prefix); }
inline jboolean String::endsWith(ref<java::lang::String> suffix) { return call_method<SCAPIX_META_STRING("endsWith"), jboolean>(suffix); }
inline jint String::hashCode() { return call_method<SCAPIX_META_STRING("hashCode"), jint>(); }
inline jint String::indexOf(jint ch) { return call_method<SCAPIX_META_STRING("indexOf"), jint>(ch); }
inline jint String::indexOf(jint ch, jint fromIndex) { return call_method<SCAPIX_META_STRING("indexOf"), jint>(ch, fromIndex); }
inline jint String::lastIndexOf(jint ch) { return call_method<SCAPIX_META_STRING("lastIndexOf"), jint>(ch); }
inline jint String::lastIndexOf(jint ch, jint fromIndex) { return call_method<SCAPIX_META_STRING("lastIndexOf"), jint>(ch, fromIndex); }
inline jint String::indexOf(ref<java::lang::String> str) { return call_method<SCAPIX_META_STRING("indexOf"), jint>(str); }
inline jint String::indexOf(ref<java::lang::String> str, jint fromIndex) { return call_method<SCAPIX_META_STRING("indexOf"), jint>(str, fromIndex); }
inline jint String::lastIndexOf(ref<java::lang::String> str) { return call_method<SCAPIX_META_STRING("lastIndexOf"), jint>(str); }
inline jint String::lastIndexOf(ref<java::lang::String> str, jint fromIndex) { return call_method<SCAPIX_META_STRING("lastIndexOf"), jint>(str, fromIndex); }
inline ref<java::lang::String> String::substring(jint beginIndex) { return call_method<SCAPIX_META_STRING("substring"), ref<java::lang::String>>(beginIndex); }
inline ref<java::lang::String> String::substring(jint beginIndex, jint endIndex) { return call_method<SCAPIX_META_STRING("substring"), ref<java::lang::String>>(beginIndex, endIndex); }
inline ref<java::lang::CharSequence> String::subSequence(jint beginIndex, jint endIndex) { return call_method<SCAPIX_META_STRING("subSequence"), ref<java::lang::CharSequence>>(beginIndex, endIndex); }
inline ref<java::lang::String> String::concat(ref<java::lang::String> p1) { return call_method<SCAPIX_META_STRING("concat"), ref<java::lang::String>>(p1); }
inline ref<java::lang::String> String::replace(jchar oldChar, jchar newChar) { return call_method<SCAPIX_META_STRING("replace"), ref<java::lang::String>>(oldChar, newChar); }
inline jboolean String::matches(ref<java::lang::String> regex) { return call_method<SCAPIX_META_STRING("matches"), jboolean>(regex); }
inline jboolean String::contains(ref<java::lang::CharSequence> s) { return call_method<SCAPIX_META_STRING("contains"), jboolean>(s); }
inline ref<java::lang::String> String::replaceFirst(ref<java::lang::String> regex, ref<java::lang::String> replacement) { return call_method<SCAPIX_META_STRING("replaceFirst"), ref<java::lang::String>>(regex, replacement); }
inline ref<java::lang::String> String::replaceAll(ref<java::lang::String> regex, ref<java::lang::String> replacement) { return call_method<SCAPIX_META_STRING("replaceAll"), ref<java::lang::String>>(regex, replacement); }
inline ref<java::lang::String> String::replace(ref<java::lang::CharSequence> target, ref<java::lang::CharSequence> replacement) { return call_method<SCAPIX_META_STRING("replace"), ref<java::lang::String>>(target, replacement); }
inline ref<link::java::array<java::lang::String>> String::split(ref<java::lang::String> regex, jint limit) { return call_method<SCAPIX_META_STRING("split"), ref<link::java::array<java::lang::String>>>(regex, limit); }
inline ref<link::java::array<java::lang::String>> String::split(ref<java::lang::String> regex) { return call_method<SCAPIX_META_STRING("split"), ref<link::java::array<java::lang::String>>>(regex); }
inline ref<java::lang::String> String::join(ref<java::lang::CharSequence> delimiter, ref<link::java::array<java::lang::CharSequence>> elements) { return call_static_method<SCAPIX_META_STRING("join"), ref<java::lang::String>>(delimiter, elements); }
inline ref<java::lang::String> String::join(ref<java::lang::CharSequence> delimiter, ref<java::lang::Iterable> elements) { return call_static_method<SCAPIX_META_STRING("join"), ref<java::lang::String>>(delimiter, elements); }
inline ref<java::lang::String> String::toLowerCase(ref<java::util::Locale> locale) { return call_method<SCAPIX_META_STRING("toLowerCase"), ref<java::lang::String>>(locale); }
inline ref<java::lang::String> String::toLowerCase() { return call_method<SCAPIX_META_STRING("toLowerCase"), ref<java::lang::String>>(); }
inline ref<java::lang::String> String::toUpperCase(ref<java::util::Locale> locale) { return call_method<SCAPIX_META_STRING("toUpperCase"), ref<java::lang::String>>(locale); }
inline ref<java::lang::String> String::toUpperCase() { return call_method<SCAPIX_META_STRING("toUpperCase"), ref<java::lang::String>>(); }
inline ref<java::lang::String> String::trim() { return call_method<SCAPIX_META_STRING("trim"), ref<java::lang::String>>(); }
inline ref<java::lang::String> String::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }
inline ref<link::java::array<jchar>> String::toCharArray() { return call_method<SCAPIX_META_STRING("toCharArray"), ref<link::java::array<jchar>>>(); }
inline ref<java::lang::String> String::format(ref<java::lang::String> format, ref<link::java::array<java::lang::Object>> args) { return call_static_method<SCAPIX_META_STRING("format"), ref<java::lang::String>>(format, args); }
inline ref<java::lang::String> String::format(ref<java::util::Locale> l, ref<java::lang::String> format, ref<link::java::array<java::lang::Object>> args) { return call_static_method<SCAPIX_META_STRING("format"), ref<java::lang::String>>(l, format, args); }
inline ref<java::lang::String> String::valueOf(ref<java::lang::Object> obj) { return call_static_method<SCAPIX_META_STRING("valueOf"), ref<java::lang::String>>(obj); }
inline ref<java::lang::String> String::valueOf(ref<link::java::array<jchar>> data) { return call_static_method<SCAPIX_META_STRING("valueOf"), ref<java::lang::String>>(data); }
inline ref<java::lang::String> String::valueOf(ref<link::java::array<jchar>> data, jint offset, jint count) { return call_static_method<SCAPIX_META_STRING("valueOf"), ref<java::lang::String>>(data, offset, count); }
inline ref<java::lang::String> String::copyValueOf(ref<link::java::array<jchar>> data, jint offset, jint count) { return call_static_method<SCAPIX_META_STRING("copyValueOf"), ref<java::lang::String>>(data, offset, count); }
inline ref<java::lang::String> String::copyValueOf(ref<link::java::array<jchar>> data) { return call_static_method<SCAPIX_META_STRING("copyValueOf"), ref<java::lang::String>>(data); }
inline ref<java::lang::String> String::valueOf(jboolean b) { return call_static_method<SCAPIX_META_STRING("valueOf"), ref<java::lang::String>>(b); }
inline ref<java::lang::String> String::valueOf(jchar c) { return call_static_method<SCAPIX_META_STRING("valueOf"), ref<java::lang::String>>(c); }
inline ref<java::lang::String> String::valueOf(jint i) { return call_static_method<SCAPIX_META_STRING("valueOf"), ref<java::lang::String>>(i); }
inline ref<java::lang::String> String::valueOf(jlong l) { return call_static_method<SCAPIX_META_STRING("valueOf"), ref<java::lang::String>>(l); }
inline ref<java::lang::String> String::valueOf(jfloat f) { return call_static_method<SCAPIX_META_STRING("valueOf"), ref<java::lang::String>>(f); }
inline ref<java::lang::String> String::valueOf(jdouble d) { return call_static_method<SCAPIX_META_STRING("valueOf"), ref<java::lang::String>>(d); }
inline ref<java::lang::String> String::intern() { return call_method<SCAPIX_META_STRING("intern"), ref<java::lang::String>>(); }

} // namespace java::lang
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_LANG_STRING_H
