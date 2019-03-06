// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_ANDROID_ICU_TEXT_MESSAGEPATTERN_APOSTROPHEMODE_H
#define SCAPIX_ANDROID_ICU_TEXT_MESSAGEPATTERN_APOSTROPHEMODE_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace android::icu::text {

class MessagePattern_ApostropheMode : public object_base<SCAPIX_META_STRING("android/icu/text/MessagePattern$ApostropheMode"),
	java::lang::Enum>
{
public:

	static ref<android::icu::text::MessagePattern_ApostropheMode> DOUBLE_OPTIONAL_();
	static ref<android::icu::text::MessagePattern_ApostropheMode> DOUBLE_REQUIRED_();

	static ref<link::java::array<android::icu::text::MessagePattern_ApostropheMode>> values();
	static ref<android::icu::text::MessagePattern_ApostropheMode> valueOf(ref<java::lang::String> name);

protected:

	MessagePattern_ApostropheMode(handle_type h) : base_(h) {}

};

} // namespace android::icu::text
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::icu::text {

inline ref<android::icu::text::MessagePattern_ApostropheMode> MessagePattern_ApostropheMode::DOUBLE_OPTIONAL_() { return get_static_field<SCAPIX_META_STRING("DOUBLE_OPTIONAL"), ref<android::icu::text::MessagePattern_ApostropheMode>>(); }
inline ref<android::icu::text::MessagePattern_ApostropheMode> MessagePattern_ApostropheMode::DOUBLE_REQUIRED_() { return get_static_field<SCAPIX_META_STRING("DOUBLE_REQUIRED"), ref<android::icu::text::MessagePattern_ApostropheMode>>(); }
inline ref<link::java::array<android::icu::text::MessagePattern_ApostropheMode>> MessagePattern_ApostropheMode::values() { return call_static_method<SCAPIX_META_STRING("values"), ref<link::java::array<android::icu::text::MessagePattern_ApostropheMode>>>(); }
inline ref<android::icu::text::MessagePattern_ApostropheMode> MessagePattern_ApostropheMode::valueOf(ref<java::lang::String> name) { return call_static_method<SCAPIX_META_STRING("valueOf"), ref<android::icu::text::MessagePattern_ApostropheMode>>(name); }

} // namespace android::icu::text
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_ICU_TEXT_MESSAGEPATTERN_APOSTROPHEMODE_H
