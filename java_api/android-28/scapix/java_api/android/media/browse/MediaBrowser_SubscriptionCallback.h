// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_MEDIA_BROWSE_MEDIABROWSER_SUBSCRIPTIONCALLBACK_H
#define SCAPIX_ANDROID_MEDIA_BROWSE_MEDIABROWSER_SUBSCRIPTIONCALLBACK_H

namespace scapix::java_api {

namespace android::os { class Bundle; }
namespace java::lang { class String; }
namespace java::util { class List; }

namespace android::media::browse {

class MediaBrowser_SubscriptionCallback : public object_base<SCAPIX_META_STRING("android/media/browse/MediaBrowser$SubscriptionCallback"),
	java::lang::Object>
{
public:

	static ref<MediaBrowser_SubscriptionCallback> new_object();
	void onChildrenLoaded(ref<java::lang::String> parentId, ref<java::util::List> children);
	void onChildrenLoaded(ref<java::lang::String> parentId, ref<java::util::List> children, ref<android::os::Bundle> options);
	void onError(ref<java::lang::String> parentId);
	void onError(ref<java::lang::String> parentId, ref<android::os::Bundle> options);

protected:

	MediaBrowser_SubscriptionCallback(handle_type h) : base_(h) {}

};

} // namespace android::media::browse
} // namespace scapix::java_api

#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>

namespace scapix::java_api {
namespace android::media::browse {

inline ref<MediaBrowser_SubscriptionCallback> MediaBrowser_SubscriptionCallback::new_object() { return base_::new_object(); }
inline void MediaBrowser_SubscriptionCallback::onChildrenLoaded(ref<java::lang::String> parentId, ref<java::util::List> children) { return call_method<SCAPIX_META_STRING("onChildrenLoaded"), void>(parentId, children); }
inline void MediaBrowser_SubscriptionCallback::onChildrenLoaded(ref<java::lang::String> parentId, ref<java::util::List> children, ref<android::os::Bundle> options) { return call_method<SCAPIX_META_STRING("onChildrenLoaded"), void>(parentId, children, options); }
inline void MediaBrowser_SubscriptionCallback::onError(ref<java::lang::String> parentId) { return call_method<SCAPIX_META_STRING("onError"), void>(parentId); }
inline void MediaBrowser_SubscriptionCallback::onError(ref<java::lang::String> parentId, ref<android::os::Bundle> options) { return call_method<SCAPIX_META_STRING("onError"), void>(parentId, options); }

} // namespace android::media::browse
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_MEDIA_BROWSE_MEDIABROWSER_SUBSCRIPTIONCALLBACK_H
