// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_TEXT_BIDI_H
#define SCAPIX_JAVA_TEXT_BIDI_H

namespace scapix::java_api {

namespace java::lang { class String; }
namespace java::text { class AttributedCharacterIterator; }

namespace java::text {

class Bidi : public object_base<SCAPIX_META_STRING("java/text/Bidi"),
	java::lang::Object>
{
public:

	static jint DIRECTION_DEFAULT_LEFT_TO_RIGHT_();
	static jint DIRECTION_DEFAULT_RIGHT_TO_LEFT_();
	static jint DIRECTION_LEFT_TO_RIGHT_();
	static jint DIRECTION_RIGHT_TO_LEFT_();

	static ref<Bidi> new_object(ref<java::lang::String> paragraph, jint flags);
	static ref<Bidi> new_object(ref<java::text::AttributedCharacterIterator> paragraph);
	static ref<Bidi> new_object(ref<link::java::array<jchar>> text, jint textStart, ref<link::java::array<jbyte>> embeddings, jint embStart, jint paragraphLength, jint flags);
	ref<java::text::Bidi> createLineBidi(jint lineStart, jint lineLimit);
	jboolean isMixed();
	jboolean isLeftToRight();
	jboolean isRightToLeft();
	jint getLength();
	jboolean baseIsLeftToRight();
	jint getBaseLevel();
	jint getLevelAt(jint offset);
	jint getRunCount();
	jint getRunLevel(jint run);
	jint getRunStart(jint run);
	jint getRunLimit(jint run);
	static jboolean requiresBidi(ref<link::java::array<jchar>> text, jint start, jint limit);
	static void reorderVisually(ref<link::java::array<jbyte>> levels, jint levelStart, ref<link::java::array<java::lang::Object>> objects, jint objectStart, jint count);
	ref<java::lang::String> toString();

protected:

	Bidi(handle_type h) : base_(h) {}

};

} // namespace java::text
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/text/AttributedCharacterIterator.h>

namespace scapix::java_api {
namespace java::text {

inline jint Bidi::DIRECTION_DEFAULT_LEFT_TO_RIGHT_() { return get_static_field<SCAPIX_META_STRING("DIRECTION_DEFAULT_LEFT_TO_RIGHT"), jint>(); }
inline jint Bidi::DIRECTION_DEFAULT_RIGHT_TO_LEFT_() { return get_static_field<SCAPIX_META_STRING("DIRECTION_DEFAULT_RIGHT_TO_LEFT"), jint>(); }
inline jint Bidi::DIRECTION_LEFT_TO_RIGHT_() { return get_static_field<SCAPIX_META_STRING("DIRECTION_LEFT_TO_RIGHT"), jint>(); }
inline jint Bidi::DIRECTION_RIGHT_TO_LEFT_() { return get_static_field<SCAPIX_META_STRING("DIRECTION_RIGHT_TO_LEFT"), jint>(); }
inline ref<Bidi> Bidi::new_object(ref<java::lang::String> paragraph, jint flags) { return base_::new_object(paragraph, flags); }
inline ref<Bidi> Bidi::new_object(ref<java::text::AttributedCharacterIterator> paragraph) { return base_::new_object(paragraph); }
inline ref<Bidi> Bidi::new_object(ref<link::java::array<jchar>> text, jint textStart, ref<link::java::array<jbyte>> embeddings, jint embStart, jint paragraphLength, jint flags) { return base_::new_object(text, textStart, embeddings, embStart, paragraphLength, flags); }
inline ref<java::text::Bidi> Bidi::createLineBidi(jint lineStart, jint lineLimit) { return call_method<SCAPIX_META_STRING("createLineBidi"), ref<java::text::Bidi>>(lineStart, lineLimit); }
inline jboolean Bidi::isMixed() { return call_method<SCAPIX_META_STRING("isMixed"), jboolean>(); }
inline jboolean Bidi::isLeftToRight() { return call_method<SCAPIX_META_STRING("isLeftToRight"), jboolean>(); }
inline jboolean Bidi::isRightToLeft() { return call_method<SCAPIX_META_STRING("isRightToLeft"), jboolean>(); }
inline jint Bidi::getLength() { return call_method<SCAPIX_META_STRING("getLength"), jint>(); }
inline jboolean Bidi::baseIsLeftToRight() { return call_method<SCAPIX_META_STRING("baseIsLeftToRight"), jboolean>(); }
inline jint Bidi::getBaseLevel() { return call_method<SCAPIX_META_STRING("getBaseLevel"), jint>(); }
inline jint Bidi::getLevelAt(jint offset) { return call_method<SCAPIX_META_STRING("getLevelAt"), jint>(offset); }
inline jint Bidi::getRunCount() { return call_method<SCAPIX_META_STRING("getRunCount"), jint>(); }
inline jint Bidi::getRunLevel(jint run) { return call_method<SCAPIX_META_STRING("getRunLevel"), jint>(run); }
inline jint Bidi::getRunStart(jint run) { return call_method<SCAPIX_META_STRING("getRunStart"), jint>(run); }
inline jint Bidi::getRunLimit(jint run) { return call_method<SCAPIX_META_STRING("getRunLimit"), jint>(run); }
inline jboolean Bidi::requiresBidi(ref<link::java::array<jchar>> text, jint start, jint limit) { return call_static_method<SCAPIX_META_STRING("requiresBidi"), jboolean>(text, start, limit); }
inline void Bidi::reorderVisually(ref<link::java::array<jbyte>> levels, jint levelStart, ref<link::java::array<java::lang::Object>> objects, jint objectStart, jint count) { return call_static_method<SCAPIX_META_STRING("reorderVisually"), void>(levels, levelStart, objects, objectStart, count); }
inline ref<java::lang::String> Bidi::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }

} // namespace java::text
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_TEXT_BIDI_H
