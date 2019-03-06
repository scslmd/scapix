// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_MEDIA_MEDIAROUTER_H
#define SCAPIX_ANDROID_MEDIA_MEDIAROUTER_H

namespace scapix::java_api {

namespace android::media { class MediaRouter_Callback; }
namespace android::media { class MediaRouter_RouteCategory; }
namespace android::media { class MediaRouter_RouteInfo; }
namespace android::media { class MediaRouter_UserRouteInfo; }
namespace java::lang { class CharSequence; }
namespace android::media { class MediaRouter_VolumeCallback; }
namespace android::media { class MediaRouter_SimpleCallback; }
namespace android::media { class MediaRouter_RouteGroup; }

namespace android::media {

class MediaRouter : public object_base<SCAPIX_META_STRING("android/media/MediaRouter"),
	java::lang::Object>
{
public:

	using VolumeCallback = MediaRouter_VolumeCallback;
	using UserRouteInfo = MediaRouter_UserRouteInfo;
	using SimpleCallback = MediaRouter_SimpleCallback;
	using RouteInfo = MediaRouter_RouteInfo;
	using RouteGroup = MediaRouter_RouteGroup;
	using RouteCategory = MediaRouter_RouteCategory;
	using Callback = MediaRouter_Callback;

	static jint CALLBACK_FLAG_PERFORM_ACTIVE_SCAN_();
	static jint CALLBACK_FLAG_UNFILTERED_EVENTS_();
	static jint ROUTE_TYPE_LIVE_AUDIO_();
	static jint ROUTE_TYPE_LIVE_VIDEO_();
	static jint ROUTE_TYPE_USER_();

	ref<android::media::MediaRouter_RouteInfo> getDefaultRoute();
	ref<android::media::MediaRouter_RouteInfo> getSelectedRoute(jint type);
	void addCallback(jint types, ref<android::media::MediaRouter_Callback> cb);
	void addCallback(jint types, ref<android::media::MediaRouter_Callback> cb, jint flags);
	void removeCallback(ref<android::media::MediaRouter_Callback> cb);
	void selectRoute(jint types, ref<android::media::MediaRouter_RouteInfo> route);
	void addUserRoute(ref<android::media::MediaRouter_UserRouteInfo> info);
	void removeUserRoute(ref<android::media::MediaRouter_UserRouteInfo> info);
	void clearUserRoutes();
	jint getCategoryCount();
	ref<android::media::MediaRouter_RouteCategory> getCategoryAt(jint index);
	jint getRouteCount();
	ref<android::media::MediaRouter_RouteInfo> getRouteAt(jint index);
	ref<android::media::MediaRouter_UserRouteInfo> createUserRoute(ref<android::media::MediaRouter_RouteCategory> category);
	ref<android::media::MediaRouter_RouteCategory> createRouteCategory(ref<java::lang::CharSequence> name, jboolean isGroupable);
	ref<android::media::MediaRouter_RouteCategory> createRouteCategory(jint nameResId, jboolean isGroupable);

protected:

	MediaRouter(handle_type h) : base_(h) {}

};

} // namespace android::media
} // namespace scapix::java_api

#include <scapix/java_api/android/media/MediaRouter_Callback.h>
#include <scapix/java_api/android/media/MediaRouter_RouteCategory.h>
#include <scapix/java_api/android/media/MediaRouter_RouteInfo.h>
#include <scapix/java_api/android/media/MediaRouter_UserRouteInfo.h>
#include <scapix/java_api/java/lang/CharSequence.h>

namespace scapix::java_api {
namespace android::media {

inline jint MediaRouter::CALLBACK_FLAG_PERFORM_ACTIVE_SCAN_() { return get_static_field<SCAPIX_META_STRING("CALLBACK_FLAG_PERFORM_ACTIVE_SCAN"), jint>(); }
inline jint MediaRouter::CALLBACK_FLAG_UNFILTERED_EVENTS_() { return get_static_field<SCAPIX_META_STRING("CALLBACK_FLAG_UNFILTERED_EVENTS"), jint>(); }
inline jint MediaRouter::ROUTE_TYPE_LIVE_AUDIO_() { return get_static_field<SCAPIX_META_STRING("ROUTE_TYPE_LIVE_AUDIO"), jint>(); }
inline jint MediaRouter::ROUTE_TYPE_LIVE_VIDEO_() { return get_static_field<SCAPIX_META_STRING("ROUTE_TYPE_LIVE_VIDEO"), jint>(); }
inline jint MediaRouter::ROUTE_TYPE_USER_() { return get_static_field<SCAPIX_META_STRING("ROUTE_TYPE_USER"), jint>(); }
inline ref<android::media::MediaRouter_RouteInfo> MediaRouter::getDefaultRoute() { return call_method<SCAPIX_META_STRING("getDefaultRoute"), ref<android::media::MediaRouter_RouteInfo>>(); }
inline ref<android::media::MediaRouter_RouteInfo> MediaRouter::getSelectedRoute(jint type) { return call_method<SCAPIX_META_STRING("getSelectedRoute"), ref<android::media::MediaRouter_RouteInfo>>(type); }
inline void MediaRouter::addCallback(jint types, ref<android::media::MediaRouter_Callback> cb) { return call_method<SCAPIX_META_STRING("addCallback"), void>(types, cb); }
inline void MediaRouter::addCallback(jint types, ref<android::media::MediaRouter_Callback> cb, jint flags) { return call_method<SCAPIX_META_STRING("addCallback"), void>(types, cb, flags); }
inline void MediaRouter::removeCallback(ref<android::media::MediaRouter_Callback> cb) { return call_method<SCAPIX_META_STRING("removeCallback"), void>(cb); }
inline void MediaRouter::selectRoute(jint types, ref<android::media::MediaRouter_RouteInfo> route) { return call_method<SCAPIX_META_STRING("selectRoute"), void>(types, route); }
inline void MediaRouter::addUserRoute(ref<android::media::MediaRouter_UserRouteInfo> info) { return call_method<SCAPIX_META_STRING("addUserRoute"), void>(info); }
inline void MediaRouter::removeUserRoute(ref<android::media::MediaRouter_UserRouteInfo> info) { return call_method<SCAPIX_META_STRING("removeUserRoute"), void>(info); }
inline void MediaRouter::clearUserRoutes() { return call_method<SCAPIX_META_STRING("clearUserRoutes"), void>(); }
inline jint MediaRouter::getCategoryCount() { return call_method<SCAPIX_META_STRING("getCategoryCount"), jint>(); }
inline ref<android::media::MediaRouter_RouteCategory> MediaRouter::getCategoryAt(jint index) { return call_method<SCAPIX_META_STRING("getCategoryAt"), ref<android::media::MediaRouter_RouteCategory>>(index); }
inline jint MediaRouter::getRouteCount() { return call_method<SCAPIX_META_STRING("getRouteCount"), jint>(); }
inline ref<android::media::MediaRouter_RouteInfo> MediaRouter::getRouteAt(jint index) { return call_method<SCAPIX_META_STRING("getRouteAt"), ref<android::media::MediaRouter_RouteInfo>>(index); }
inline ref<android::media::MediaRouter_UserRouteInfo> MediaRouter::createUserRoute(ref<android::media::MediaRouter_RouteCategory> category) { return call_method<SCAPIX_META_STRING("createUserRoute"), ref<android::media::MediaRouter_UserRouteInfo>>(category); }
inline ref<android::media::MediaRouter_RouteCategory> MediaRouter::createRouteCategory(ref<java::lang::CharSequence> name, jboolean isGroupable) { return call_method<SCAPIX_META_STRING("createRouteCategory"), ref<android::media::MediaRouter_RouteCategory>>(name, isGroupable); }
inline ref<android::media::MediaRouter_RouteCategory> MediaRouter::createRouteCategory(jint nameResId, jboolean isGroupable) { return call_method<SCAPIX_META_STRING("createRouteCategory"), ref<android::media::MediaRouter_RouteCategory>>(nameResId, isGroupable); }

} // namespace android::media
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_MEDIA_MEDIAROUTER_H
