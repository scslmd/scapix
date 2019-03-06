// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_WIDGET_AUTOCOMPLETETEXTVIEW_VALIDATOR_H
#define SCAPIX_ANDROID_WIDGET_AUTOCOMPLETETEXTVIEW_VALIDATOR_H

namespace scapix::java_api {

namespace java::lang { class CharSequence; }

namespace android::widget {

class AutoCompleteTextView_Validator : public object_base<SCAPIX_META_STRING("android/widget/AutoCompleteTextView$Validator"),
	java::lang::Object>
{
public:

	jboolean isValid(ref<java::lang::CharSequence> p1);
	ref<java::lang::CharSequence> fixText(ref<java::lang::CharSequence> p1);

protected:

	AutoCompleteTextView_Validator(handle_type h) : base_(h) {}

};

} // namespace android::widget
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/CharSequence.h>

namespace scapix::java_api {
namespace android::widget {

inline jboolean AutoCompleteTextView_Validator::isValid(ref<java::lang::CharSequence> p1) { return call_method<SCAPIX_META_STRING("isValid"), jboolean>(p1); }
inline ref<java::lang::CharSequence> AutoCompleteTextView_Validator::fixText(ref<java::lang::CharSequence> p1) { return call_method<SCAPIX_META_STRING("fixText"), ref<java::lang::CharSequence>>(p1); }

} // namespace android::widget
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_WIDGET_AUTOCOMPLETETEXTVIEW_VALIDATOR_H
