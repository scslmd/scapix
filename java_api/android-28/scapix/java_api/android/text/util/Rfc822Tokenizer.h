// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/widget/MultiAutoCompleteTextView_Tokenizer.h>

#ifndef SCAPIX_ANDROID_TEXT_UTIL_RFC822TOKENIZER_H
#define SCAPIX_ANDROID_TEXT_UTIL_RFC822TOKENIZER_H

namespace scapix::java_api {

namespace android::text::util { class Rfc822Token; }
namespace java::lang { class CharSequence; }
namespace java::util { class Collection; }

namespace android::text::util {

class Rfc822Tokenizer : public object_base<SCAPIX_META_STRING("android/text/util/Rfc822Tokenizer"),
	java::lang::Object,
	android::widget::MultiAutoCompleteTextView_Tokenizer>
{
public:

	static ref<Rfc822Tokenizer> new_object();
	static void tokenize(ref<java::lang::CharSequence> text, ref<java::util::Collection> out);
	static ref<link::java::array<android::text::util::Rfc822Token>> tokenize(ref<java::lang::CharSequence> text);
	jint findTokenStart(ref<java::lang::CharSequence> text, jint cursor);
	jint findTokenEnd(ref<java::lang::CharSequence> text, jint cursor);
	ref<java::lang::CharSequence> terminateToken(ref<java::lang::CharSequence> text);

protected:

	Rfc822Tokenizer(handle_type h) : base_(h) {}

};

} // namespace android::text::util
} // namespace scapix::java_api

#include <scapix/java_api/android/text/util/Rfc822Token.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/util/Collection.h>

namespace scapix::java_api {
namespace android::text::util {

inline ref<Rfc822Tokenizer> Rfc822Tokenizer::new_object() { return base_::new_object(); }
inline void Rfc822Tokenizer::tokenize(ref<java::lang::CharSequence> text, ref<java::util::Collection> out) { return call_static_method<SCAPIX_META_STRING("tokenize"), void>(text, out); }
inline ref<link::java::array<android::text::util::Rfc822Token>> Rfc822Tokenizer::tokenize(ref<java::lang::CharSequence> text) { return call_static_method<SCAPIX_META_STRING("tokenize"), ref<link::java::array<android::text::util::Rfc822Token>>>(text); }
inline jint Rfc822Tokenizer::findTokenStart(ref<java::lang::CharSequence> text, jint cursor) { return call_method<SCAPIX_META_STRING("findTokenStart"), jint>(text, cursor); }
inline jint Rfc822Tokenizer::findTokenEnd(ref<java::lang::CharSequence> text, jint cursor) { return call_method<SCAPIX_META_STRING("findTokenEnd"), jint>(text, cursor); }
inline ref<java::lang::CharSequence> Rfc822Tokenizer::terminateToken(ref<java::lang::CharSequence> text) { return call_method<SCAPIX_META_STRING("terminateToken"), ref<java::lang::CharSequence>>(text); }

} // namespace android::text::util
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_TEXT_UTIL_RFC822TOKENIZER_H
