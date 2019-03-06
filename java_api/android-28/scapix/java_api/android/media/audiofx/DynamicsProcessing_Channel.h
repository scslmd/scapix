// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_MEDIA_AUDIOFX_DYNAMICSPROCESSING_CHANNEL_H
#define SCAPIX_ANDROID_MEDIA_AUDIOFX_DYNAMICSPROCESSING_CHANNEL_H

namespace scapix::java_api {

namespace android::media::audiofx { class DynamicsProcessing_Eq; }
namespace android::media::audiofx { class DynamicsProcessing_EqBand; }
namespace android::media::audiofx { class DynamicsProcessing_Limiter; }
namespace android::media::audiofx { class DynamicsProcessing_Mbc; }
namespace android::media::audiofx { class DynamicsProcessing_MbcBand; }
namespace java::lang { class String; }

namespace android::media::audiofx {

class DynamicsProcessing_Channel : public object_base<SCAPIX_META_STRING("android/media/audiofx/DynamicsProcessing$Channel"),
	java::lang::Object>
{
public:

	static ref<DynamicsProcessing_Channel> new_object(jfloat inputGain, jboolean preEqInUse, jint preEqBandCount, jboolean mbcInUse, jint mbcBandCount, jboolean postEqInUse, jint postEqBandCount, jboolean limiterInUse);
	static ref<DynamicsProcessing_Channel> new_object(ref<android::media::audiofx::DynamicsProcessing_Channel> cfg);
	ref<java::lang::String> toString();
	jfloat getInputGain();
	void setInputGain(jfloat inputGain);
	ref<android::media::audiofx::DynamicsProcessing_Eq> getPreEq();
	void setPreEq(ref<android::media::audiofx::DynamicsProcessing_Eq> preEq);
	ref<android::media::audiofx::DynamicsProcessing_EqBand> getPreEqBand(jint band);
	void setPreEqBand(jint band, ref<android::media::audiofx::DynamicsProcessing_EqBand> preEqBand);
	ref<android::media::audiofx::DynamicsProcessing_Mbc> getMbc();
	void setMbc(ref<android::media::audiofx::DynamicsProcessing_Mbc> mbc);
	ref<android::media::audiofx::DynamicsProcessing_MbcBand> getMbcBand(jint band);
	void setMbcBand(jint band, ref<android::media::audiofx::DynamicsProcessing_MbcBand> mbcBand);
	ref<android::media::audiofx::DynamicsProcessing_Eq> getPostEq();
	void setPostEq(ref<android::media::audiofx::DynamicsProcessing_Eq> postEq);
	ref<android::media::audiofx::DynamicsProcessing_EqBand> getPostEqBand(jint band);
	void setPostEqBand(jint band, ref<android::media::audiofx::DynamicsProcessing_EqBand> postEqBand);
	ref<android::media::audiofx::DynamicsProcessing_Limiter> getLimiter();
	void setLimiter(ref<android::media::audiofx::DynamicsProcessing_Limiter> limiter);

protected:

	DynamicsProcessing_Channel(handle_type h) : base_(h) {}

};

} // namespace android::media::audiofx
} // namespace scapix::java_api

#include <scapix/java_api/android/media/audiofx/DynamicsProcessing_Eq.h>
#include <scapix/java_api/android/media/audiofx/DynamicsProcessing_EqBand.h>
#include <scapix/java_api/android/media/audiofx/DynamicsProcessing_Limiter.h>
#include <scapix/java_api/android/media/audiofx/DynamicsProcessing_Mbc.h>
#include <scapix/java_api/android/media/audiofx/DynamicsProcessing_MbcBand.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::media::audiofx {

inline ref<DynamicsProcessing_Channel> DynamicsProcessing_Channel::new_object(jfloat inputGain, jboolean preEqInUse, jint preEqBandCount, jboolean mbcInUse, jint mbcBandCount, jboolean postEqInUse, jint postEqBandCount, jboolean limiterInUse) { return base_::new_object(inputGain, preEqInUse, preEqBandCount, mbcInUse, mbcBandCount, postEqInUse, postEqBandCount, limiterInUse); }
inline ref<DynamicsProcessing_Channel> DynamicsProcessing_Channel::new_object(ref<android::media::audiofx::DynamicsProcessing_Channel> cfg) { return base_::new_object(cfg); }
inline ref<java::lang::String> DynamicsProcessing_Channel::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }
inline jfloat DynamicsProcessing_Channel::getInputGain() { return call_method<SCAPIX_META_STRING("getInputGain"), jfloat>(); }
inline void DynamicsProcessing_Channel::setInputGain(jfloat inputGain) { return call_method<SCAPIX_META_STRING("setInputGain"), void>(inputGain); }
inline ref<android::media::audiofx::DynamicsProcessing_Eq> DynamicsProcessing_Channel::getPreEq() { return call_method<SCAPIX_META_STRING("getPreEq"), ref<android::media::audiofx::DynamicsProcessing_Eq>>(); }
inline void DynamicsProcessing_Channel::setPreEq(ref<android::media::audiofx::DynamicsProcessing_Eq> preEq) { return call_method<SCAPIX_META_STRING("setPreEq"), void>(preEq); }
inline ref<android::media::audiofx::DynamicsProcessing_EqBand> DynamicsProcessing_Channel::getPreEqBand(jint band) { return call_method<SCAPIX_META_STRING("getPreEqBand"), ref<android::media::audiofx::DynamicsProcessing_EqBand>>(band); }
inline void DynamicsProcessing_Channel::setPreEqBand(jint band, ref<android::media::audiofx::DynamicsProcessing_EqBand> preEqBand) { return call_method<SCAPIX_META_STRING("setPreEqBand"), void>(band, preEqBand); }
inline ref<android::media::audiofx::DynamicsProcessing_Mbc> DynamicsProcessing_Channel::getMbc() { return call_method<SCAPIX_META_STRING("getMbc"), ref<android::media::audiofx::DynamicsProcessing_Mbc>>(); }
inline void DynamicsProcessing_Channel::setMbc(ref<android::media::audiofx::DynamicsProcessing_Mbc> mbc) { return call_method<SCAPIX_META_STRING("setMbc"), void>(mbc); }
inline ref<android::media::audiofx::DynamicsProcessing_MbcBand> DynamicsProcessing_Channel::getMbcBand(jint band) { return call_method<SCAPIX_META_STRING("getMbcBand"), ref<android::media::audiofx::DynamicsProcessing_MbcBand>>(band); }
inline void DynamicsProcessing_Channel::setMbcBand(jint band, ref<android::media::audiofx::DynamicsProcessing_MbcBand> mbcBand) { return call_method<SCAPIX_META_STRING("setMbcBand"), void>(band, mbcBand); }
inline ref<android::media::audiofx::DynamicsProcessing_Eq> DynamicsProcessing_Channel::getPostEq() { return call_method<SCAPIX_META_STRING("getPostEq"), ref<android::media::audiofx::DynamicsProcessing_Eq>>(); }
inline void DynamicsProcessing_Channel::setPostEq(ref<android::media::audiofx::DynamicsProcessing_Eq> postEq) { return call_method<SCAPIX_META_STRING("setPostEq"), void>(postEq); }
inline ref<android::media::audiofx::DynamicsProcessing_EqBand> DynamicsProcessing_Channel::getPostEqBand(jint band) { return call_method<SCAPIX_META_STRING("getPostEqBand"), ref<android::media::audiofx::DynamicsProcessing_EqBand>>(band); }
inline void DynamicsProcessing_Channel::setPostEqBand(jint band, ref<android::media::audiofx::DynamicsProcessing_EqBand> postEqBand) { return call_method<SCAPIX_META_STRING("setPostEqBand"), void>(band, postEqBand); }
inline ref<android::media::audiofx::DynamicsProcessing_Limiter> DynamicsProcessing_Channel::getLimiter() { return call_method<SCAPIX_META_STRING("getLimiter"), ref<android::media::audiofx::DynamicsProcessing_Limiter>>(); }
inline void DynamicsProcessing_Channel::setLimiter(ref<android::media::audiofx::DynamicsProcessing_Limiter> limiter) { return call_method<SCAPIX_META_STRING("setLimiter"), void>(limiter); }

} // namespace android::media::audiofx
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_MEDIA_AUDIOFX_DYNAMICSPROCESSING_CHANNEL_H
