// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_ANDROID_CONTENT_CLIPDATA_H
#define SCAPIX_ANDROID_CONTENT_CLIPDATA_H

namespace scapix::java_api {

namespace android::content { class ClipData_Item; }
namespace android::content { class ClipDescription; }
namespace android::content { class ContentResolver; }
namespace android::content { class Intent; }
namespace android::net { class Uri; }
namespace android::os { class Parcel; }
namespace android::os { class Parcelable_Creator; }
namespace java::lang { class CharSequence; }
namespace java::lang { class String; }

namespace android::content {

class ClipData : public object_base<SCAPIX_META_STRING("android/content/ClipData"),
	java::lang::Object,
	android::os::Parcelable>
{
public:

	using Item = ClipData_Item;

	static ref<android::os::Parcelable_Creator> CREATOR_();

	static ref<ClipData> new_object(ref<java::lang::CharSequence> label, ref<link::java::array<java::lang::String>> mimeTypes, ref<android::content::ClipData_Item> item);
	static ref<ClipData> new_object(ref<android::content::ClipDescription> description, ref<android::content::ClipData_Item> item);
	static ref<ClipData> new_object(ref<android::content::ClipData> other);
	static ref<android::content::ClipData> newPlainText(ref<java::lang::CharSequence> label, ref<java::lang::CharSequence> text);
	static ref<android::content::ClipData> newHtmlText(ref<java::lang::CharSequence> label, ref<java::lang::CharSequence> text, ref<java::lang::String> htmlText);
	static ref<android::content::ClipData> newIntent(ref<java::lang::CharSequence> label, ref<android::content::Intent> intent);
	static ref<android::content::ClipData> newUri(ref<android::content::ContentResolver> resolver, ref<java::lang::CharSequence> label, ref<android::net::Uri> uri);
	static ref<android::content::ClipData> newRawUri(ref<java::lang::CharSequence> label, ref<android::net::Uri> uri);
	ref<android::content::ClipDescription> getDescription();
	void addItem(ref<android::content::ClipData_Item> item);
	void addItem(ref<android::content::ContentResolver> resolver, ref<android::content::ClipData_Item> item);
	jint getItemCount();
	ref<android::content::ClipData_Item> getItemAt(jint index);
	ref<java::lang::String> toString();
	jint describeContents();
	void writeToParcel(ref<android::os::Parcel> dest, jint flags);

protected:

	ClipData(handle_type h) : base_(h) {}

};

} // namespace android::content
} // namespace scapix::java_api

#include <scapix/java_api/android/content/ClipData_Item.h>
#include <scapix/java_api/android/content/ClipDescription.h>
#include <scapix/java_api/android/content/ContentResolver.h>
#include <scapix/java_api/android/content/Intent.h>
#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::content {

inline ref<android::os::Parcelable_Creator> ClipData::CREATOR_() { return get_static_field<SCAPIX_META_STRING("CREATOR"), ref<android::os::Parcelable_Creator>>(); }
inline ref<ClipData> ClipData::new_object(ref<java::lang::CharSequence> label, ref<link::java::array<java::lang::String>> mimeTypes, ref<android::content::ClipData_Item> item) { return base_::new_object(label, mimeTypes, item); }
inline ref<ClipData> ClipData::new_object(ref<android::content::ClipDescription> description, ref<android::content::ClipData_Item> item) { return base_::new_object(description, item); }
inline ref<ClipData> ClipData::new_object(ref<android::content::ClipData> other) { return base_::new_object(other); }
inline ref<android::content::ClipData> ClipData::newPlainText(ref<java::lang::CharSequence> label, ref<java::lang::CharSequence> text) { return call_static_method<SCAPIX_META_STRING("newPlainText"), ref<android::content::ClipData>>(label, text); }
inline ref<android::content::ClipData> ClipData::newHtmlText(ref<java::lang::CharSequence> label, ref<java::lang::CharSequence> text, ref<java::lang::String> htmlText) { return call_static_method<SCAPIX_META_STRING("newHtmlText"), ref<android::content::ClipData>>(label, text, htmlText); }
inline ref<android::content::ClipData> ClipData::newIntent(ref<java::lang::CharSequence> label, ref<android::content::Intent> intent) { return call_static_method<SCAPIX_META_STRING("newIntent"), ref<android::content::ClipData>>(label, intent); }
inline ref<android::content::ClipData> ClipData::newUri(ref<android::content::ContentResolver> resolver, ref<java::lang::CharSequence> label, ref<android::net::Uri> uri) { return call_static_method<SCAPIX_META_STRING("newUri"), ref<android::content::ClipData>>(resolver, label, uri); }
inline ref<android::content::ClipData> ClipData::newRawUri(ref<java::lang::CharSequence> label, ref<android::net::Uri> uri) { return call_static_method<SCAPIX_META_STRING("newRawUri"), ref<android::content::ClipData>>(label, uri); }
inline ref<android::content::ClipDescription> ClipData::getDescription() { return call_method<SCAPIX_META_STRING("getDescription"), ref<android::content::ClipDescription>>(); }
inline void ClipData::addItem(ref<android::content::ClipData_Item> item) { return call_method<SCAPIX_META_STRING("addItem"), void>(item); }
inline void ClipData::addItem(ref<android::content::ContentResolver> resolver, ref<android::content::ClipData_Item> item) { return call_method<SCAPIX_META_STRING("addItem"), void>(resolver, item); }
inline jint ClipData::getItemCount() { return call_method<SCAPIX_META_STRING("getItemCount"), jint>(); }
inline ref<android::content::ClipData_Item> ClipData::getItemAt(jint index) { return call_method<SCAPIX_META_STRING("getItemAt"), ref<android::content::ClipData_Item>>(index); }
inline ref<java::lang::String> ClipData::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }
inline jint ClipData::describeContents() { return call_method<SCAPIX_META_STRING("describeContents"), jint>(); }
inline void ClipData::writeToParcel(ref<android::os::Parcel> dest, jint flags) { return call_method<SCAPIX_META_STRING("writeToParcel"), void>(dest, flags); }

} // namespace android::content
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_CONTENT_CLIPDATA_H
