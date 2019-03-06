// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_DRM_DRMSTORE_H
#define SCAPIX_ANDROID_DRM_DRMSTORE_H

namespace scapix::java_api {

namespace android::drm { class DrmStore_RightsStatus; }
namespace android::drm { class DrmStore_Playback; }
namespace android::drm { class DrmStore_DrmObjectType; }
namespace android::drm { class DrmStore_ConstraintsColumns; }
namespace android::drm { class DrmStore_Action; }

namespace android::drm {

class DrmStore : public object_base<SCAPIX_META_STRING("android/drm/DrmStore"),
	java::lang::Object>
{
public:

	using RightsStatus = DrmStore_RightsStatus;
	using Playback = DrmStore_Playback;
	using DrmObjectType = DrmStore_DrmObjectType;
	using ConstraintsColumns = DrmStore_ConstraintsColumns;
	using Action = DrmStore_Action;

	static ref<DrmStore> new_object();

protected:

	DrmStore(handle_type h) : base_(h) {}

};

} // namespace android::drm
} // namespace scapix::java_api


namespace scapix::java_api {
namespace android::drm {

inline ref<DrmStore> DrmStore::new_object() { return base_::new_object(); }

} // namespace android::drm
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_DRM_DRMSTORE_H
