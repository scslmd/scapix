// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_SERVICE_VOICE_VOICEINTERACTIONSESSION_INSETS_H
#define SCAPIX_ANDROID_SERVICE_VOICE_VOICEINTERACTIONSESSION_INSETS_H

namespace scapix::java_api {

namespace android::graphics { class Rect; }
namespace android::graphics { class Region; }

namespace android::service::voice {

class VoiceInteractionSession_Insets : public object_base<SCAPIX_META_STRING("android/service/voice/VoiceInteractionSession$Insets"),
	java::lang::Object>
{
public:

	static jint TOUCHABLE_INSETS_CONTENT_();
	static jint TOUCHABLE_INSETS_FRAME_();
	static jint TOUCHABLE_INSETS_REGION_();
	ref<android::graphics::Rect> contentInsets();
	jint touchableInsets();
	void touchableInsets(jint);
	ref<android::graphics::Region> touchableRegion();

	static ref<VoiceInteractionSession_Insets> new_object();

protected:

	VoiceInteractionSession_Insets(handle_type h) : base_(h) {}

};

} // namespace android::service::voice
} // namespace scapix::java_api

#include <scapix/java_api/android/graphics/Rect.h>
#include <scapix/java_api/android/graphics/Region.h>

namespace scapix::java_api {
namespace android::service::voice {

inline jint VoiceInteractionSession_Insets::TOUCHABLE_INSETS_CONTENT_() { return get_static_field<SCAPIX_META_STRING("TOUCHABLE_INSETS_CONTENT"), jint>(); }
inline jint VoiceInteractionSession_Insets::TOUCHABLE_INSETS_FRAME_() { return get_static_field<SCAPIX_META_STRING("TOUCHABLE_INSETS_FRAME"), jint>(); }
inline jint VoiceInteractionSession_Insets::TOUCHABLE_INSETS_REGION_() { return get_static_field<SCAPIX_META_STRING("TOUCHABLE_INSETS_REGION"), jint>(); }
inline ref<android::graphics::Rect> VoiceInteractionSession_Insets::contentInsets() { return get_field<SCAPIX_META_STRING("contentInsets"), ref<android::graphics::Rect>>(); }
inline jint VoiceInteractionSession_Insets::touchableInsets() { return get_field<SCAPIX_META_STRING("touchableInsets"), jint>(); }
inline void VoiceInteractionSession_Insets::touchableInsets(jint v) { set_field<SCAPIX_META_STRING("touchableInsets"), jint>(v); }
inline ref<android::graphics::Region> VoiceInteractionSession_Insets::touchableRegion() { return get_field<SCAPIX_META_STRING("touchableRegion"), ref<android::graphics::Region>>(); }
inline ref<VoiceInteractionSession_Insets> VoiceInteractionSession_Insets::new_object() { return base_::new_object(); }

} // namespace android::service::voice
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_SERVICE_VOICE_VOICEINTERACTIONSESSION_INSETS_H
