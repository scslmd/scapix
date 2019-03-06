// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_HARDWARE_CONSUMERIRMANAGER_CARRIERFREQUENCYRANGE_H
#define SCAPIX_ANDROID_HARDWARE_CONSUMERIRMANAGER_CARRIERFREQUENCYRANGE_H

namespace scapix::java_api {

namespace android::hardware { class ConsumerIrManager; }

namespace android::hardware {

class ConsumerIrManager_CarrierFrequencyRange : public object_base<SCAPIX_META_STRING("android/hardware/ConsumerIrManager$CarrierFrequencyRange"),
	java::lang::Object>
{
public:

	static ref<ConsumerIrManager_CarrierFrequencyRange> new_object(ref<android::hardware::ConsumerIrManager> this_0, jint min, jint max);
	jint getMinFrequency();
	jint getMaxFrequency();

protected:

	ConsumerIrManager_CarrierFrequencyRange(handle_type h) : base_(h) {}

};

} // namespace android::hardware
} // namespace scapix::java_api

#include <scapix/java_api/android/hardware/ConsumerIrManager.h>

namespace scapix::java_api {
namespace android::hardware {

inline ref<ConsumerIrManager_CarrierFrequencyRange> ConsumerIrManager_CarrierFrequencyRange::new_object(ref<android::hardware::ConsumerIrManager> this_0, jint min, jint max) { return base_::new_object(this_0, min, max); }
inline jint ConsumerIrManager_CarrierFrequencyRange::getMinFrequency() { return call_method<SCAPIX_META_STRING("getMinFrequency"), jint>(); }
inline jint ConsumerIrManager_CarrierFrequencyRange::getMaxFrequency() { return call_method<SCAPIX_META_STRING("getMaxFrequency"), jint>(); }

} // namespace android::hardware
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_HARDWARE_CONSUMERIRMANAGER_CARRIERFREQUENCYRANGE_H
