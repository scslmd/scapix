// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_WIDGET_NUMBERPICKER_FORMATTER_H
#define SCAPIX_ANDROID_WIDGET_NUMBERPICKER_FORMATTER_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace android::widget {

class NumberPicker_Formatter : public object_base<SCAPIX_META_STRING("android/widget/NumberPicker$Formatter"),
	java::lang::Object>
{
public:

	ref<java::lang::String> format(jint p1);

protected:

	NumberPicker_Formatter(handle_type h) : base_(h) {}

};

} // namespace android::widget
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::widget {

inline ref<java::lang::String> NumberPicker_Formatter::format(jint p1) { return call_method<SCAPIX_META_STRING("format"), ref<java::lang::String>>(p1); }

} // namespace android::widget
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_WIDGET_NUMBERPICKER_FORMATTER_H
