// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/android/media/audiofx/DynamicsProcessing_BandStage.h>

#ifndef SCAPIX_ANDROID_MEDIA_AUDIOFX_DYNAMICSPROCESSING_MBC_H
#define SCAPIX_ANDROID_MEDIA_AUDIOFX_DYNAMICSPROCESSING_MBC_H

namespace scapix::java_api {

namespace android::media::audiofx { class DynamicsProcessing_MbcBand; }
namespace java::lang { class String; }

namespace android::media::audiofx {

class DynamicsProcessing_Mbc : public object_base<SCAPIX_META_STRING("android/media/audiofx/DynamicsProcessing$Mbc"),
	android::media::audiofx::DynamicsProcessing_BandStage>
{
public:

	static ref<DynamicsProcessing_Mbc> new_object(jboolean inUse, jboolean enabled, jint bandCount);
	static ref<DynamicsProcessing_Mbc> new_object(ref<android::media::audiofx::DynamicsProcessing_Mbc> cfg);
	ref<java::lang::String> toString();
	void setBand(jint band, ref<android::media::audiofx::DynamicsProcessing_MbcBand> bandCfg);
	ref<android::media::audiofx::DynamicsProcessing_MbcBand> getBand(jint band);

protected:

	DynamicsProcessing_Mbc(handle_type h) : base_(h) {}

};

} // namespace android::media::audiofx
} // namespace scapix::java_api

#include <scapix/java_api/android/media/audiofx/DynamicsProcessing_MbcBand.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::media::audiofx {

inline ref<DynamicsProcessing_Mbc> DynamicsProcessing_Mbc::new_object(jboolean inUse, jboolean enabled, jint bandCount) { return base_::new_object(inUse, enabled, bandCount); }
inline ref<DynamicsProcessing_Mbc> DynamicsProcessing_Mbc::new_object(ref<android::media::audiofx::DynamicsProcessing_Mbc> cfg) { return base_::new_object(cfg); }
inline ref<java::lang::String> DynamicsProcessing_Mbc::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }
inline void DynamicsProcessing_Mbc::setBand(jint band, ref<android::media::audiofx::DynamicsProcessing_MbcBand> bandCfg) { return call_method<SCAPIX_META_STRING("setBand"), void>(band, bandCfg); }
inline ref<android::media::audiofx::DynamicsProcessing_MbcBand> DynamicsProcessing_Mbc::getBand(jint band) { return call_method<SCAPIX_META_STRING("getBand"), ref<android::media::audiofx::DynamicsProcessing_MbcBand>>(band); }

} // namespace android::media::audiofx
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_MEDIA_AUDIOFX_DYNAMICSPROCESSING_MBC_H
