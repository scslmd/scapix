// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_OS_IBINDER_DEATHRECIPIENT_H
#define SCAPIX_ANDROID_OS_IBINDER_DEATHRECIPIENT_H

namespace scapix::java_api {


namespace android::os {

class IBinder_DeathRecipient : public object_base<SCAPIX_META_STRING("android/os/IBinder$DeathRecipient"),
	java::lang::Object>
{
public:

	void binderDied();

protected:

	IBinder_DeathRecipient(handle_type h) : base_(h) {}

};

} // namespace android::os
} // namespace scapix::java_api


namespace scapix::java_api {
namespace android::os {

inline void IBinder_DeathRecipient::binderDied() { return call_method<SCAPIX_META_STRING("binderDied"), void>(); }

} // namespace android::os
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_OS_IBINDER_DEATHRECIPIENT_H
