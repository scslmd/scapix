// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_VIEW_TEXTCLASSIFIER_TEXTCLASSIFICATION_BUILDER_H
#define SCAPIX_ANDROID_VIEW_TEXTCLASSIFIER_TEXTCLASSIFICATION_BUILDER_H

namespace scapix::java_api {

namespace android::app { class RemoteAction; }
namespace android::content { class Intent; }
namespace android::graphics::drawable { class Drawable; }
namespace android::view { class View_OnClickListener; }
namespace android::view::textclassifier { class TextClassification; }
namespace java::lang { class String; }

namespace android::view::textclassifier {

class TextClassification_Builder : public object_base<SCAPIX_META_STRING("android/view/textclassifier/TextClassification$Builder"),
	java::lang::Object>
{
public:

	static ref<TextClassification_Builder> new_object();
	ref<android::view::textclassifier::TextClassification_Builder> setText(ref<java::lang::String> text);
	ref<android::view::textclassifier::TextClassification_Builder> setEntityType(ref<java::lang::String> type, jfloat confidenceScore);
	ref<android::view::textclassifier::TextClassification_Builder> addAction(ref<android::app::RemoteAction> action);
	ref<android::view::textclassifier::TextClassification_Builder> setIcon(ref<android::graphics::drawable::Drawable> icon);
	ref<android::view::textclassifier::TextClassification_Builder> setLabel(ref<java::lang::String> label);
	ref<android::view::textclassifier::TextClassification_Builder> setIntent(ref<android::content::Intent> intent);
	ref<android::view::textclassifier::TextClassification_Builder> setOnClickListener(ref<android::view::View_OnClickListener> onClickListener);
	ref<android::view::textclassifier::TextClassification_Builder> setId(ref<java::lang::String> id);
	ref<android::view::textclassifier::TextClassification> build();

protected:

	TextClassification_Builder(handle_type h) : base_(h) {}

};

} // namespace android::view::textclassifier
} // namespace scapix::java_api

#include <scapix/java_api/android/app/RemoteAction.h>
#include <scapix/java_api/android/content/Intent.h>
#include <scapix/java_api/android/graphics/drawable/Drawable.h>
#include <scapix/java_api/android/view/View_OnClickListener.h>
#include <scapix/java_api/android/view/textclassifier/TextClassification.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::view::textclassifier {

inline ref<TextClassification_Builder> TextClassification_Builder::new_object() { return base_::new_object(); }
inline ref<android::view::textclassifier::TextClassification_Builder> TextClassification_Builder::setText(ref<java::lang::String> text) { return call_method<SCAPIX_META_STRING("setText"), ref<android::view::textclassifier::TextClassification_Builder>>(text); }
inline ref<android::view::textclassifier::TextClassification_Builder> TextClassification_Builder::setEntityType(ref<java::lang::String> type, jfloat confidenceScore) { return call_method<SCAPIX_META_STRING("setEntityType"), ref<android::view::textclassifier::TextClassification_Builder>>(type, confidenceScore); }
inline ref<android::view::textclassifier::TextClassification_Builder> TextClassification_Builder::addAction(ref<android::app::RemoteAction> action) { return call_method<SCAPIX_META_STRING("addAction"), ref<android::view::textclassifier::TextClassification_Builder>>(action); }
inline ref<android::view::textclassifier::TextClassification_Builder> TextClassification_Builder::setIcon(ref<android::graphics::drawable::Drawable> icon) { return call_method<SCAPIX_META_STRING("setIcon"), ref<android::view::textclassifier::TextClassification_Builder>>(icon); }
inline ref<android::view::textclassifier::TextClassification_Builder> TextClassification_Builder::setLabel(ref<java::lang::String> label) { return call_method<SCAPIX_META_STRING("setLabel"), ref<android::view::textclassifier::TextClassification_Builder>>(label); }
inline ref<android::view::textclassifier::TextClassification_Builder> TextClassification_Builder::setIntent(ref<android::content::Intent> intent) { return call_method<SCAPIX_META_STRING("setIntent"), ref<android::view::textclassifier::TextClassification_Builder>>(intent); }
inline ref<android::view::textclassifier::TextClassification_Builder> TextClassification_Builder::setOnClickListener(ref<android::view::View_OnClickListener> onClickListener) { return call_method<SCAPIX_META_STRING("setOnClickListener"), ref<android::view::textclassifier::TextClassification_Builder>>(onClickListener); }
inline ref<android::view::textclassifier::TextClassification_Builder> TextClassification_Builder::setId(ref<java::lang::String> id) { return call_method<SCAPIX_META_STRING("setId"), ref<android::view::textclassifier::TextClassification_Builder>>(id); }
inline ref<android::view::textclassifier::TextClassification> TextClassification_Builder::build() { return call_method<SCAPIX_META_STRING("build"), ref<android::view::textclassifier::TextClassification>>(); }

} // namespace android::view::textclassifier
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_VIEW_TEXTCLASSIFIER_TEXTCLASSIFICATION_BUILDER_H
