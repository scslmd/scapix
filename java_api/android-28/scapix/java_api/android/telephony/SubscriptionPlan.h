// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_ANDROID_TELEPHONY_SUBSCRIPTIONPLAN_H
#define SCAPIX_ANDROID_TELEPHONY_SUBSCRIPTIONPLAN_H

namespace scapix::java_api {

namespace android::os { class Parcel; }
namespace android::os { class Parcelable_Creator; }
namespace java::lang { class CharSequence; }
namespace java::lang { class String; }
namespace java::util { class Iterator; }
namespace android::telephony { class SubscriptionPlan_Builder; }

namespace android::telephony {

class SubscriptionPlan : public object_base<SCAPIX_META_STRING("android/telephony/SubscriptionPlan"),
	java::lang::Object,
	android::os::Parcelable>
{
public:

	using Builder = SubscriptionPlan_Builder;

	static jlong BYTES_UNKNOWN_();
	static jlong BYTES_UNLIMITED_();
	static ref<android::os::Parcelable_Creator> CREATOR_();
	static jint LIMIT_BEHAVIOR_BILLED_();
	static jint LIMIT_BEHAVIOR_DISABLED_();
	static jint LIMIT_BEHAVIOR_THROTTLED_();
	static jint LIMIT_BEHAVIOR_UNKNOWN_();
	static jlong TIME_UNKNOWN_();

	jint describeContents();
	void writeToParcel(ref<android::os::Parcel> dest, jint flags);
	ref<java::lang::String> toString();
	jint hashCode();
	jboolean equals(ref<java::lang::Object> obj);
	ref<java::lang::CharSequence> getTitle();
	ref<java::lang::CharSequence> getSummary();
	jlong getDataLimitBytes();
	jint getDataLimitBehavior();
	jlong getDataUsageBytes();
	jlong getDataUsageTime();
	ref<java::util::Iterator> cycleIterator();

protected:

	SubscriptionPlan(handle_type h) : base_(h) {}

};

} // namespace android::telephony
} // namespace scapix::java_api

#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Iterator.h>

namespace scapix::java_api {
namespace android::telephony {

inline jlong SubscriptionPlan::BYTES_UNKNOWN_() { return get_static_field<SCAPIX_META_STRING("BYTES_UNKNOWN"), jlong>(); }
inline jlong SubscriptionPlan::BYTES_UNLIMITED_() { return get_static_field<SCAPIX_META_STRING("BYTES_UNLIMITED"), jlong>(); }
inline ref<android::os::Parcelable_Creator> SubscriptionPlan::CREATOR_() { return get_static_field<SCAPIX_META_STRING("CREATOR"), ref<android::os::Parcelable_Creator>>(); }
inline jint SubscriptionPlan::LIMIT_BEHAVIOR_BILLED_() { return get_static_field<SCAPIX_META_STRING("LIMIT_BEHAVIOR_BILLED"), jint>(); }
inline jint SubscriptionPlan::LIMIT_BEHAVIOR_DISABLED_() { return get_static_field<SCAPIX_META_STRING("LIMIT_BEHAVIOR_DISABLED"), jint>(); }
inline jint SubscriptionPlan::LIMIT_BEHAVIOR_THROTTLED_() { return get_static_field<SCAPIX_META_STRING("LIMIT_BEHAVIOR_THROTTLED"), jint>(); }
inline jint SubscriptionPlan::LIMIT_BEHAVIOR_UNKNOWN_() { return get_static_field<SCAPIX_META_STRING("LIMIT_BEHAVIOR_UNKNOWN"), jint>(); }
inline jlong SubscriptionPlan::TIME_UNKNOWN_() { return get_static_field<SCAPIX_META_STRING("TIME_UNKNOWN"), jlong>(); }
inline jint SubscriptionPlan::describeContents() { return call_method<SCAPIX_META_STRING("describeContents"), jint>(); }
inline void SubscriptionPlan::writeToParcel(ref<android::os::Parcel> dest, jint flags) { return call_method<SCAPIX_META_STRING("writeToParcel"), void>(dest, flags); }
inline ref<java::lang::String> SubscriptionPlan::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }
inline jint SubscriptionPlan::hashCode() { return call_method<SCAPIX_META_STRING("hashCode"), jint>(); }
inline jboolean SubscriptionPlan::equals(ref<java::lang::Object> obj) { return call_method<SCAPIX_META_STRING("equals"), jboolean>(obj); }
inline ref<java::lang::CharSequence> SubscriptionPlan::getTitle() { return call_method<SCAPIX_META_STRING("getTitle"), ref<java::lang::CharSequence>>(); }
inline ref<java::lang::CharSequence> SubscriptionPlan::getSummary() { return call_method<SCAPIX_META_STRING("getSummary"), ref<java::lang::CharSequence>>(); }
inline jlong SubscriptionPlan::getDataLimitBytes() { return call_method<SCAPIX_META_STRING("getDataLimitBytes"), jlong>(); }
inline jint SubscriptionPlan::getDataLimitBehavior() { return call_method<SCAPIX_META_STRING("getDataLimitBehavior"), jint>(); }
inline jlong SubscriptionPlan::getDataUsageBytes() { return call_method<SCAPIX_META_STRING("getDataUsageBytes"), jlong>(); }
inline jlong SubscriptionPlan::getDataUsageTime() { return call_method<SCAPIX_META_STRING("getDataUsageTime"), jlong>(); }
inline ref<java::util::Iterator> SubscriptionPlan::cycleIterator() { return call_method<SCAPIX_META_STRING("cycleIterator"), ref<java::util::Iterator>>(); }

} // namespace android::telephony
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_TELEPHONY_SUBSCRIPTIONPLAN_H
