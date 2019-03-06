// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_ANDROID_VIEW_TEXTSERVICE_SENTENCESUGGESTIONSINFO_H
#define SCAPIX_ANDROID_VIEW_TEXTSERVICE_SENTENCESUGGESTIONSINFO_H

namespace scapix::java_api {

namespace android::os { class Parcel; }
namespace android::os { class Parcelable_Creator; }
namespace android::view::textservice { class SuggestionsInfo; }

namespace android::view::textservice {

class SentenceSuggestionsInfo : public object_base<SCAPIX_META_STRING("android/view/textservice/SentenceSuggestionsInfo"),
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static ref<android::os::Parcelable_Creator> CREATOR_();

	static ref<SentenceSuggestionsInfo> new_object(ref<link::java::array<android::view::textservice::SuggestionsInfo>> suggestionsInfos, ref<link::java::array<jint>> offsets, ref<link::java::array<jint>> lengths);
	static ref<SentenceSuggestionsInfo> new_object(ref<android::os::Parcel> source);
	void writeToParcel(ref<android::os::Parcel> dest, jint flags);
	jint describeContents();
	jint getSuggestionsCount();
	ref<android::view::textservice::SuggestionsInfo> getSuggestionsInfoAt(jint i);
	jint getOffsetAt(jint i);
	jint getLengthAt(jint i);

protected:

	SentenceSuggestionsInfo(handle_type h) : base_(h) {}

};

} // namespace android::view::textservice
} // namespace scapix::java_api

#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/android/view/textservice/SuggestionsInfo.h>

namespace scapix::java_api {
namespace android::view::textservice {

inline ref<android::os::Parcelable_Creator> SentenceSuggestionsInfo::CREATOR_() { return get_static_field<SCAPIX_META_STRING("CREATOR"), ref<android::os::Parcelable_Creator>>(); }
inline ref<SentenceSuggestionsInfo> SentenceSuggestionsInfo::new_object(ref<link::java::array<android::view::textservice::SuggestionsInfo>> suggestionsInfos, ref<link::java::array<jint>> offsets, ref<link::java::array<jint>> lengths) { return base_::new_object(suggestionsInfos, offsets, lengths); }
inline ref<SentenceSuggestionsInfo> SentenceSuggestionsInfo::new_object(ref<android::os::Parcel> source) { return base_::new_object(source); }
inline void SentenceSuggestionsInfo::writeToParcel(ref<android::os::Parcel> dest, jint flags) { return call_method<SCAPIX_META_STRING("writeToParcel"), void>(dest, flags); }
inline jint SentenceSuggestionsInfo::describeContents() { return call_method<SCAPIX_META_STRING("describeContents"), jint>(); }
inline jint SentenceSuggestionsInfo::getSuggestionsCount() { return call_method<SCAPIX_META_STRING("getSuggestionsCount"), jint>(); }
inline ref<android::view::textservice::SuggestionsInfo> SentenceSuggestionsInfo::getSuggestionsInfoAt(jint i) { return call_method<SCAPIX_META_STRING("getSuggestionsInfoAt"), ref<android::view::textservice::SuggestionsInfo>>(i); }
inline jint SentenceSuggestionsInfo::getOffsetAt(jint i) { return call_method<SCAPIX_META_STRING("getOffsetAt"), jint>(i); }
inline jint SentenceSuggestionsInfo::getLengthAt(jint i) { return call_method<SCAPIX_META_STRING("getLengthAt"), jint>(i); }

} // namespace android::view::textservice
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_VIEW_TEXTSERVICE_SENTENCESUGGESTIONSINFO_H
