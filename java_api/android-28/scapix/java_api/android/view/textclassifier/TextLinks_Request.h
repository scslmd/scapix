// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_ANDROID_VIEW_TEXTCLASSIFIER_TEXTLINKS_REQUEST_H
#define SCAPIX_ANDROID_VIEW_TEXTCLASSIFIER_TEXTLINKS_REQUEST_H

namespace scapix::java_api {

namespace android::os { class LocaleList; }
namespace android::os { class Parcel; }
namespace android::os { class Parcelable_Creator; }
namespace android::view::textclassifier { class TextClassifier_EntityConfig; }
namespace java::lang { class CharSequence; }
namespace android::view::textclassifier { class TextLinks_Request_Builder; }

namespace android::view::textclassifier {

class TextLinks_Request : public object_base<SCAPIX_META_STRING("android/view/textclassifier/TextLinks$Request"),
	java::lang::Object,
	android::os::Parcelable>
{
public:

	using Builder = TextLinks_Request_Builder;

	static ref<android::os::Parcelable_Creator> CREATOR_();

	ref<java::lang::CharSequence> getText();
	ref<android::os::LocaleList> getDefaultLocales();
	ref<android::view::textclassifier::TextClassifier_EntityConfig> getEntityConfig();
	jint describeContents();
	void writeToParcel(ref<android::os::Parcel> dest, jint flags);

protected:

	TextLinks_Request(handle_type h) : base_(h) {}

};

} // namespace android::view::textclassifier
} // namespace scapix::java_api

#include <scapix/java_api/android/os/LocaleList.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/android/view/textclassifier/TextClassifier_EntityConfig.h>
#include <scapix/java_api/java/lang/CharSequence.h>

namespace scapix::java_api {
namespace android::view::textclassifier {

inline ref<android::os::Parcelable_Creator> TextLinks_Request::CREATOR_() { return get_static_field<SCAPIX_META_STRING("CREATOR"), ref<android::os::Parcelable_Creator>>(); }
inline ref<java::lang::CharSequence> TextLinks_Request::getText() { return call_method<SCAPIX_META_STRING("getText"), ref<java::lang::CharSequence>>(); }
inline ref<android::os::LocaleList> TextLinks_Request::getDefaultLocales() { return call_method<SCAPIX_META_STRING("getDefaultLocales"), ref<android::os::LocaleList>>(); }
inline ref<android::view::textclassifier::TextClassifier_EntityConfig> TextLinks_Request::getEntityConfig() { return call_method<SCAPIX_META_STRING("getEntityConfig"), ref<android::view::textclassifier::TextClassifier_EntityConfig>>(); }
inline jint TextLinks_Request::describeContents() { return call_method<SCAPIX_META_STRING("describeContents"), jint>(); }
inline void TextLinks_Request::writeToParcel(ref<android::os::Parcel> dest, jint flags) { return call_method<SCAPIX_META_STRING("writeToParcel"), void>(dest, flags); }

} // namespace android::view::textclassifier
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_VIEW_TEXTCLASSIFIER_TEXTLINKS_REQUEST_H
