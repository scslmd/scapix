// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_VIEW_TEXTSERVICE_SPELLCHECKERSESSION_H
#define SCAPIX_ANDROID_VIEW_TEXTSERVICE_SPELLCHECKERSESSION_H

namespace scapix::java_api {

namespace android::view::textservice { class SpellCheckerInfo; }
namespace android::view::textservice { class TextInfo; }
namespace java::lang { class String; }
namespace android::view::textservice { class SpellCheckerSession_SpellCheckerSessionListener; }

namespace android::view::textservice {

class SpellCheckerSession : public object_base<SCAPIX_META_STRING("android/view/textservice/SpellCheckerSession"),
	java::lang::Object>
{
public:

	using SpellCheckerSessionListener = SpellCheckerSession_SpellCheckerSessionListener;

	static ref<java::lang::String> SERVICE_META_DATA_();

	jboolean isSessionDisconnected();
	ref<android::view::textservice::SpellCheckerInfo> getSpellChecker();
	void cancel();
	void close();
	void getSentenceSuggestions(ref<link::java::array<android::view::textservice::TextInfo>> textInfos, jint suggestionsLimit);
	void getSuggestions(ref<android::view::textservice::TextInfo> textInfo, jint suggestionsLimit);
	void getSuggestions(ref<link::java::array<android::view::textservice::TextInfo>> textInfos, jint suggestionsLimit, jboolean sequentialWords);

protected:

	SpellCheckerSession(handle_type h) : base_(h) {}

};

} // namespace android::view::textservice
} // namespace scapix::java_api

#include <scapix/java_api/android/view/textservice/SpellCheckerInfo.h>
#include <scapix/java_api/android/view/textservice/TextInfo.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::view::textservice {

inline ref<java::lang::String> SpellCheckerSession::SERVICE_META_DATA_() { return get_static_field<SCAPIX_META_STRING("SERVICE_META_DATA"), ref<java::lang::String>>(); }
inline jboolean SpellCheckerSession::isSessionDisconnected() { return call_method<SCAPIX_META_STRING("isSessionDisconnected"), jboolean>(); }
inline ref<android::view::textservice::SpellCheckerInfo> SpellCheckerSession::getSpellChecker() { return call_method<SCAPIX_META_STRING("getSpellChecker"), ref<android::view::textservice::SpellCheckerInfo>>(); }
inline void SpellCheckerSession::cancel() { return call_method<SCAPIX_META_STRING("cancel"), void>(); }
inline void SpellCheckerSession::close() { return call_method<SCAPIX_META_STRING("close"), void>(); }
inline void SpellCheckerSession::getSentenceSuggestions(ref<link::java::array<android::view::textservice::TextInfo>> textInfos, jint suggestionsLimit) { return call_method<SCAPIX_META_STRING("getSentenceSuggestions"), void>(textInfos, suggestionsLimit); }
inline void SpellCheckerSession::getSuggestions(ref<android::view::textservice::TextInfo> textInfo, jint suggestionsLimit) { return call_method<SCAPIX_META_STRING("getSuggestions"), void>(textInfo, suggestionsLimit); }
inline void SpellCheckerSession::getSuggestions(ref<link::java::array<android::view::textservice::TextInfo>> textInfos, jint suggestionsLimit, jboolean sequentialWords) { return call_method<SCAPIX_META_STRING("getSuggestions"), void>(textInfos, suggestionsLimit, sequentialWords); }

} // namespace android::view::textservice
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_VIEW_TEXTSERVICE_SPELLCHECKERSESSION_H
