// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_ANDROID_OS_LOCALELIST_H
#define SCAPIX_ANDROID_OS_LOCALELIST_H

namespace scapix::java_api {

namespace android::os { class Parcel; }
namespace android::os { class Parcelable_Creator; }
namespace java::lang { class String; }
namespace java::util { class Locale; }

namespace android::os {

class LocaleList : public object_base<SCAPIX_META_STRING("android/os/LocaleList"),
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static ref<android::os::Parcelable_Creator> CREATOR_();

	static ref<LocaleList> new_object(ref<link::java::array<java::util::Locale>> list);
	ref<java::util::Locale> get(jint index);
	jboolean isEmpty();
	jint size();
	jint indexOf(ref<java::util::Locale> locale);
	jboolean equals(ref<java::lang::Object> other);
	jint hashCode();
	ref<java::lang::String> toString();
	jint describeContents();
	void writeToParcel(ref<android::os::Parcel> dest, jint parcelableFlags);
	ref<java::lang::String> toLanguageTags();
	static ref<android::os::LocaleList> getEmptyLocaleList();
	static ref<android::os::LocaleList> forLanguageTags(ref<java::lang::String> list);
	ref<java::util::Locale> getFirstMatch(ref<link::java::array<java::lang::String>> supportedLocales);
	static ref<android::os::LocaleList> getDefault();
	static ref<android::os::LocaleList> getAdjustedDefault();
	static void setDefault(ref<android::os::LocaleList> locales);

protected:

	LocaleList(handle_type h) : base_(h) {}

};

} // namespace android::os
} // namespace scapix::java_api

#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Locale.h>

namespace scapix::java_api {
namespace android::os {

inline ref<android::os::Parcelable_Creator> LocaleList::CREATOR_() { return get_static_field<SCAPIX_META_STRING("CREATOR"), ref<android::os::Parcelable_Creator>>(); }
inline ref<LocaleList> LocaleList::new_object(ref<link::java::array<java::util::Locale>> list) { return base_::new_object(list); }
inline ref<java::util::Locale> LocaleList::get(jint index) { return call_method<SCAPIX_META_STRING("get"), ref<java::util::Locale>>(index); }
inline jboolean LocaleList::isEmpty() { return call_method<SCAPIX_META_STRING("isEmpty"), jboolean>(); }
inline jint LocaleList::size() { return call_method<SCAPIX_META_STRING("size"), jint>(); }
inline jint LocaleList::indexOf(ref<java::util::Locale> locale) { return call_method<SCAPIX_META_STRING("indexOf"), jint>(locale); }
inline jboolean LocaleList::equals(ref<java::lang::Object> other) { return call_method<SCAPIX_META_STRING("equals"), jboolean>(other); }
inline jint LocaleList::hashCode() { return call_method<SCAPIX_META_STRING("hashCode"), jint>(); }
inline ref<java::lang::String> LocaleList::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }
inline jint LocaleList::describeContents() { return call_method<SCAPIX_META_STRING("describeContents"), jint>(); }
inline void LocaleList::writeToParcel(ref<android::os::Parcel> dest, jint parcelableFlags) { return call_method<SCAPIX_META_STRING("writeToParcel"), void>(dest, parcelableFlags); }
inline ref<java::lang::String> LocaleList::toLanguageTags() { return call_method<SCAPIX_META_STRING("toLanguageTags"), ref<java::lang::String>>(); }
inline ref<android::os::LocaleList> LocaleList::getEmptyLocaleList() { return call_static_method<SCAPIX_META_STRING("getEmptyLocaleList"), ref<android::os::LocaleList>>(); }
inline ref<android::os::LocaleList> LocaleList::forLanguageTags(ref<java::lang::String> list) { return call_static_method<SCAPIX_META_STRING("forLanguageTags"), ref<android::os::LocaleList>>(list); }
inline ref<java::util::Locale> LocaleList::getFirstMatch(ref<link::java::array<java::lang::String>> supportedLocales) { return call_method<SCAPIX_META_STRING("getFirstMatch"), ref<java::util::Locale>>(supportedLocales); }
inline ref<android::os::LocaleList> LocaleList::getDefault() { return call_static_method<SCAPIX_META_STRING("getDefault"), ref<android::os::LocaleList>>(); }
inline ref<android::os::LocaleList> LocaleList::getAdjustedDefault() { return call_static_method<SCAPIX_META_STRING("getAdjustedDefault"), ref<android::os::LocaleList>>(); }
inline void LocaleList::setDefault(ref<android::os::LocaleList> locales) { return call_static_method<SCAPIX_META_STRING("setDefault"), void>(locales); }

} // namespace android::os
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_OS_LOCALELIST_H
