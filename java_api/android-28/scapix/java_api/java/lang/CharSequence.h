// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_LANG_CHARSEQUENCE_H
#define SCAPIX_JAVA_LANG_CHARSEQUENCE_H

namespace scapix::java_api {

namespace java::lang { class String; }
namespace java::util::stream { class IntStream; }

namespace java::lang {

class CharSequence : public object_base<SCAPIX_META_STRING("java/lang/CharSequence"),
	java::lang::Object>
{
public:

	jint length();
	jchar charAt(jint p1);
	ref<java::lang::CharSequence> subSequence(jint p1, jint p2);
	ref<java::lang::String> toString();
	ref<java::util::stream::IntStream> chars();
	ref<java::util::stream::IntStream> codePoints();

protected:

	CharSequence(handle_type h) : base_(h) {}

};

} // namespace java::lang
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/stream/IntStream.h>

namespace scapix::java_api {
namespace java::lang {

inline jint CharSequence::length() { return call_method<SCAPIX_META_STRING("length"), jint>(); }
inline jchar CharSequence::charAt(jint p1) { return call_method<SCAPIX_META_STRING("charAt"), jchar>(p1); }
inline ref<java::lang::CharSequence> CharSequence::subSequence(jint p1, jint p2) { return call_method<SCAPIX_META_STRING("subSequence"), ref<java::lang::CharSequence>>(p1, p2); }
inline ref<java::lang::String> CharSequence::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }
inline ref<java::util::stream::IntStream> CharSequence::chars() { return call_method<SCAPIX_META_STRING("chars"), ref<java::util::stream::IntStream>>(); }
inline ref<java::util::stream::IntStream> CharSequence::codePoints() { return call_method<SCAPIX_META_STRING("codePoints"), ref<java::util::stream::IntStream>>(); }

} // namespace java::lang
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_LANG_CHARSEQUENCE_H
