// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_ANDROID_ICU_TEXT_UNICODESETSPANNER_TRIMOPTION_H
#define SCAPIX_ANDROID_ICU_TEXT_UNICODESETSPANNER_TRIMOPTION_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace android::icu::text {

class UnicodeSetSpanner_TrimOption : public object_base<SCAPIX_META_STRING("android/icu/text/UnicodeSetSpanner$TrimOption"),
	java::lang::Enum>
{
public:

	static ref<android::icu::text::UnicodeSetSpanner_TrimOption> LEADING_();
	static ref<android::icu::text::UnicodeSetSpanner_TrimOption> BOTH_();
	static ref<android::icu::text::UnicodeSetSpanner_TrimOption> TRAILING_();

	static ref<link::java::array<android::icu::text::UnicodeSetSpanner_TrimOption>> values();
	static ref<android::icu::text::UnicodeSetSpanner_TrimOption> valueOf(ref<java::lang::String> name);

protected:

	UnicodeSetSpanner_TrimOption(handle_type h) : base_(h) {}

};

} // namespace android::icu::text
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::icu::text {

inline ref<android::icu::text::UnicodeSetSpanner_TrimOption> UnicodeSetSpanner_TrimOption::LEADING_() { return get_static_field<SCAPIX_META_STRING("LEADING"), ref<android::icu::text::UnicodeSetSpanner_TrimOption>>(); }
inline ref<android::icu::text::UnicodeSetSpanner_TrimOption> UnicodeSetSpanner_TrimOption::BOTH_() { return get_static_field<SCAPIX_META_STRING("BOTH"), ref<android::icu::text::UnicodeSetSpanner_TrimOption>>(); }
inline ref<android::icu::text::UnicodeSetSpanner_TrimOption> UnicodeSetSpanner_TrimOption::TRAILING_() { return get_static_field<SCAPIX_META_STRING("TRAILING"), ref<android::icu::text::UnicodeSetSpanner_TrimOption>>(); }
inline ref<link::java::array<android::icu::text::UnicodeSetSpanner_TrimOption>> UnicodeSetSpanner_TrimOption::values() { return call_static_method<SCAPIX_META_STRING("values"), ref<link::java::array<android::icu::text::UnicodeSetSpanner_TrimOption>>>(); }
inline ref<android::icu::text::UnicodeSetSpanner_TrimOption> UnicodeSetSpanner_TrimOption::valueOf(ref<java::lang::String> name) { return call_static_method<SCAPIX_META_STRING("valueOf"), ref<android::icu::text::UnicodeSetSpanner_TrimOption>>(name); }

} // namespace android::icu::text
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_ICU_TEXT_UNICODESETSPANNER_TRIMOPTION_H
