// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/android/media/MediaRouter_RouteInfo.h>

#ifndef SCAPIX_ANDROID_MEDIA_MEDIAROUTER_ROUTEGROUP_H
#define SCAPIX_ANDROID_MEDIA_MEDIAROUTER_ROUTEGROUP_H

namespace scapix::java_api {

namespace android::graphics::drawable { class Drawable; }
namespace java::lang { class String; }

namespace android::media {

class MediaRouter_RouteGroup : public object_base<SCAPIX_META_STRING("android/media/MediaRouter$RouteGroup"),
	android::media::MediaRouter_RouteInfo>
{
public:

	void addRoute(ref<android::media::MediaRouter_RouteInfo> route);
	void addRoute(ref<android::media::MediaRouter_RouteInfo> route, jint insertAt);
	void removeRoute(ref<android::media::MediaRouter_RouteInfo> route);
	void removeRoute(jint index);
	jint getRouteCount();
	ref<android::media::MediaRouter_RouteInfo> getRouteAt(jint index);
	void setIconDrawable(ref<android::graphics::drawable::Drawable> icon);
	void setIconResource(jint resId);
	void requestSetVolume(jint volume);
	void requestUpdateVolume(jint direction);
	ref<java::lang::String> toString();

protected:

	MediaRouter_RouteGroup(handle_type h) : base_(h) {}

};

} // namespace android::media
} // namespace scapix::java_api

#include <scapix/java_api/android/graphics/drawable/Drawable.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::media {

inline void MediaRouter_RouteGroup::addRoute(ref<android::media::MediaRouter_RouteInfo> route) { return call_method<SCAPIX_META_STRING("addRoute"), void>(route); }
inline void MediaRouter_RouteGroup::addRoute(ref<android::media::MediaRouter_RouteInfo> route, jint insertAt) { return call_method<SCAPIX_META_STRING("addRoute"), void>(route, insertAt); }
inline void MediaRouter_RouteGroup::removeRoute(ref<android::media::MediaRouter_RouteInfo> route) { return call_method<SCAPIX_META_STRING("removeRoute"), void>(route); }
inline void MediaRouter_RouteGroup::removeRoute(jint index) { return call_method<SCAPIX_META_STRING("removeRoute"), void>(index); }
inline jint MediaRouter_RouteGroup::getRouteCount() { return call_method<SCAPIX_META_STRING("getRouteCount"), jint>(); }
inline ref<android::media::MediaRouter_RouteInfo> MediaRouter_RouteGroup::getRouteAt(jint index) { return call_method<SCAPIX_META_STRING("getRouteAt"), ref<android::media::MediaRouter_RouteInfo>>(index); }
inline void MediaRouter_RouteGroup::setIconDrawable(ref<android::graphics::drawable::Drawable> icon) { return call_method<SCAPIX_META_STRING("setIconDrawable"), void>(icon); }
inline void MediaRouter_RouteGroup::setIconResource(jint resId) { return call_method<SCAPIX_META_STRING("setIconResource"), void>(resId); }
inline void MediaRouter_RouteGroup::requestSetVolume(jint volume) { return call_method<SCAPIX_META_STRING("requestSetVolume"), void>(volume); }
inline void MediaRouter_RouteGroup::requestUpdateVolume(jint direction) { return call_method<SCAPIX_META_STRING("requestUpdateVolume"), void>(direction); }
inline ref<java::lang::String> MediaRouter_RouteGroup::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }

} // namespace android::media
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_MEDIA_MEDIAROUTER_ROUTEGROUP_H
