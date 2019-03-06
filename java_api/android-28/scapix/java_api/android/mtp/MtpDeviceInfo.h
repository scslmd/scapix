// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_MTP_MTPDEVICEINFO_H
#define SCAPIX_ANDROID_MTP_MTPDEVICEINFO_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace android::mtp {

class MtpDeviceInfo : public object_base<SCAPIX_META_STRING("android/mtp/MtpDeviceInfo"),
	java::lang::Object>
{
public:

	ref<java::lang::String> getManufacturer();
	ref<java::lang::String> getModel();
	ref<java::lang::String> getVersion();
	ref<java::lang::String> getSerialNumber();
	ref<link::java::array<jint>> getOperationsSupported();
	ref<link::java::array<jint>> getEventsSupported();
	jboolean isOperationSupported(jint code);
	jboolean isEventSupported(jint code);

protected:

	MtpDeviceInfo(handle_type h) : base_(h) {}

};

} // namespace android::mtp
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::mtp {

inline ref<java::lang::String> MtpDeviceInfo::getManufacturer() { return call_method<SCAPIX_META_STRING("getManufacturer"), ref<java::lang::String>>(); }
inline ref<java::lang::String> MtpDeviceInfo::getModel() { return call_method<SCAPIX_META_STRING("getModel"), ref<java::lang::String>>(); }
inline ref<java::lang::String> MtpDeviceInfo::getVersion() { return call_method<SCAPIX_META_STRING("getVersion"), ref<java::lang::String>>(); }
inline ref<java::lang::String> MtpDeviceInfo::getSerialNumber() { return call_method<SCAPIX_META_STRING("getSerialNumber"), ref<java::lang::String>>(); }
inline ref<link::java::array<jint>> MtpDeviceInfo::getOperationsSupported() { return call_method<SCAPIX_META_STRING("getOperationsSupported"), ref<link::java::array<jint>>>(); }
inline ref<link::java::array<jint>> MtpDeviceInfo::getEventsSupported() { return call_method<SCAPIX_META_STRING("getEventsSupported"), ref<link::java::array<jint>>>(); }
inline jboolean MtpDeviceInfo::isOperationSupported(jint code) { return call_method<SCAPIX_META_STRING("isOperationSupported"), jboolean>(code); }
inline jboolean MtpDeviceInfo::isEventSupported(jint code) { return call_method<SCAPIX_META_STRING("isEventSupported"), jboolean>(code); }

} // namespace android::mtp
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_MTP_MTPDEVICEINFO_H
