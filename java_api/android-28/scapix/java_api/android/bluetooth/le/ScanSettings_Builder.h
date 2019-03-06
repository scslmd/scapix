// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_BLUETOOTH_LE_SCANSETTINGS_BUILDER_H
#define SCAPIX_ANDROID_BLUETOOTH_LE_SCANSETTINGS_BUILDER_H

namespace scapix::java_api {

namespace android::bluetooth::le { class ScanSettings; }

namespace android::bluetooth::le {

class ScanSettings_Builder : public object_base<SCAPIX_META_STRING("android/bluetooth/le/ScanSettings$Builder"),
	java::lang::Object>
{
public:

	static ref<ScanSettings_Builder> new_object();
	ref<android::bluetooth::le::ScanSettings_Builder> setScanMode(jint scanMode);
	ref<android::bluetooth::le::ScanSettings_Builder> setCallbackType(jint callbackType);
	ref<android::bluetooth::le::ScanSettings_Builder> setReportDelay(jlong reportDelayMillis);
	ref<android::bluetooth::le::ScanSettings_Builder> setNumOfMatches(jint numOfMatches);
	ref<android::bluetooth::le::ScanSettings_Builder> setMatchMode(jint matchMode);
	ref<android::bluetooth::le::ScanSettings_Builder> setLegacy(jboolean legacy);
	ref<android::bluetooth::le::ScanSettings_Builder> setPhy(jint phy);
	ref<android::bluetooth::le::ScanSettings> build();

protected:

	ScanSettings_Builder(handle_type h) : base_(h) {}

};

} // namespace android::bluetooth::le
} // namespace scapix::java_api

#include <scapix/java_api/android/bluetooth/le/ScanSettings.h>

namespace scapix::java_api {
namespace android::bluetooth::le {

inline ref<ScanSettings_Builder> ScanSettings_Builder::new_object() { return base_::new_object(); }
inline ref<android::bluetooth::le::ScanSettings_Builder> ScanSettings_Builder::setScanMode(jint scanMode) { return call_method<SCAPIX_META_STRING("setScanMode"), ref<android::bluetooth::le::ScanSettings_Builder>>(scanMode); }
inline ref<android::bluetooth::le::ScanSettings_Builder> ScanSettings_Builder::setCallbackType(jint callbackType) { return call_method<SCAPIX_META_STRING("setCallbackType"), ref<android::bluetooth::le::ScanSettings_Builder>>(callbackType); }
inline ref<android::bluetooth::le::ScanSettings_Builder> ScanSettings_Builder::setReportDelay(jlong reportDelayMillis) { return call_method<SCAPIX_META_STRING("setReportDelay"), ref<android::bluetooth::le::ScanSettings_Builder>>(reportDelayMillis); }
inline ref<android::bluetooth::le::ScanSettings_Builder> ScanSettings_Builder::setNumOfMatches(jint numOfMatches) { return call_method<SCAPIX_META_STRING("setNumOfMatches"), ref<android::bluetooth::le::ScanSettings_Builder>>(numOfMatches); }
inline ref<android::bluetooth::le::ScanSettings_Builder> ScanSettings_Builder::setMatchMode(jint matchMode) { return call_method<SCAPIX_META_STRING("setMatchMode"), ref<android::bluetooth::le::ScanSettings_Builder>>(matchMode); }
inline ref<android::bluetooth::le::ScanSettings_Builder> ScanSettings_Builder::setLegacy(jboolean legacy) { return call_method<SCAPIX_META_STRING("setLegacy"), ref<android::bluetooth::le::ScanSettings_Builder>>(legacy); }
inline ref<android::bluetooth::le::ScanSettings_Builder> ScanSettings_Builder::setPhy(jint phy) { return call_method<SCAPIX_META_STRING("setPhy"), ref<android::bluetooth::le::ScanSettings_Builder>>(phy); }
inline ref<android::bluetooth::le::ScanSettings> ScanSettings_Builder::build() { return call_method<SCAPIX_META_STRING("build"), ref<android::bluetooth::le::ScanSettings>>(); }

} // namespace android::bluetooth::le
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_BLUETOOTH_LE_SCANSETTINGS_BUILDER_H
