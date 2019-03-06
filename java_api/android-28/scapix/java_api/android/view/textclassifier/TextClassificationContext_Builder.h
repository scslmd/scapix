// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_VIEW_TEXTCLASSIFIER_TEXTCLASSIFICATIONCONTEXT_BUILDER_H
#define SCAPIX_ANDROID_VIEW_TEXTCLASSIFIER_TEXTCLASSIFICATIONCONTEXT_BUILDER_H

namespace scapix::java_api {

namespace android::view::textclassifier { class TextClassificationContext; }
namespace java::lang { class String; }

namespace android::view::textclassifier {

class TextClassificationContext_Builder : public object_base<SCAPIX_META_STRING("android/view/textclassifier/TextClassificationContext$Builder"),
	java::lang::Object>
{
public:

	static ref<TextClassificationContext_Builder> new_object(ref<java::lang::String> packageName, ref<java::lang::String> widgetType);
	ref<android::view::textclassifier::TextClassificationContext_Builder> setWidgetVersion(ref<java::lang::String> widgetVersion);
	ref<android::view::textclassifier::TextClassificationContext> build();

protected:

	TextClassificationContext_Builder(handle_type h) : base_(h) {}

};

} // namespace android::view::textclassifier
} // namespace scapix::java_api

#include <scapix/java_api/android/view/textclassifier/TextClassificationContext.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::view::textclassifier {

inline ref<TextClassificationContext_Builder> TextClassificationContext_Builder::new_object(ref<java::lang::String> packageName, ref<java::lang::String> widgetType) { return base_::new_object(packageName, widgetType); }
inline ref<android::view::textclassifier::TextClassificationContext_Builder> TextClassificationContext_Builder::setWidgetVersion(ref<java::lang::String> widgetVersion) { return call_method<SCAPIX_META_STRING("setWidgetVersion"), ref<android::view::textclassifier::TextClassificationContext_Builder>>(widgetVersion); }
inline ref<android::view::textclassifier::TextClassificationContext> TextClassificationContext_Builder::build() { return call_method<SCAPIX_META_STRING("build"), ref<android::view::textclassifier::TextClassificationContext>>(); }

} // namespace android::view::textclassifier
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_VIEW_TEXTCLASSIFIER_TEXTCLASSIFICATIONCONTEXT_BUILDER_H
