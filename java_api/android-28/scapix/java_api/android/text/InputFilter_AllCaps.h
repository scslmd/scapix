// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/text/InputFilter.h>

#ifndef SCAPIX_ANDROID_TEXT_INPUTFILTER_ALLCAPS_H
#define SCAPIX_ANDROID_TEXT_INPUTFILTER_ALLCAPS_H

namespace scapix::java_api {

namespace android::text { class Spanned; }
namespace java::lang { class CharSequence; }
namespace java::util { class Locale; }

namespace android::text {

class InputFilter_AllCaps : public object_base<SCAPIX_META_STRING("android/text/InputFilter$AllCaps"),
	java::lang::Object,
	android::text::InputFilter>
{
public:

	static ref<InputFilter_AllCaps> new_object();
	static ref<InputFilter_AllCaps> new_object(ref<java::util::Locale> locale);
	ref<java::lang::CharSequence> filter(ref<java::lang::CharSequence> source, jint start, jint end, ref<android::text::Spanned> dest, jint dstart, jint dend);

protected:

	InputFilter_AllCaps(handle_type h) : base_(h) {}

};

} // namespace android::text
} // namespace scapix::java_api

#include <scapix/java_api/android/text/Spanned.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/util/Locale.h>

namespace scapix::java_api {
namespace android::text {

inline ref<InputFilter_AllCaps> InputFilter_AllCaps::new_object() { return base_::new_object(); }
inline ref<InputFilter_AllCaps> InputFilter_AllCaps::new_object(ref<java::util::Locale> locale) { return base_::new_object(locale); }
inline ref<java::lang::CharSequence> InputFilter_AllCaps::filter(ref<java::lang::CharSequence> source, jint start, jint end, ref<android::text::Spanned> dest, jint dstart, jint dend) { return call_method<SCAPIX_META_STRING("filter"), ref<java::lang::CharSequence>>(source, start, end, dest, dstart, dend); }

} // namespace android::text
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_TEXT_INPUTFILTER_ALLCAPS_H
