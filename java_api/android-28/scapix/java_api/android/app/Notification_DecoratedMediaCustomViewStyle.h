// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/android/app/Notification_MediaStyle.h>

#ifndef SCAPIX_ANDROID_APP_NOTIFICATION_DECORATEDMEDIACUSTOMVIEWSTYLE_H
#define SCAPIX_ANDROID_APP_NOTIFICATION_DECORATEDMEDIACUSTOMVIEWSTYLE_H

namespace scapix::java_api {


namespace android::app {

class Notification_DecoratedMediaCustomViewStyle : public object_base<SCAPIX_META_STRING("android/app/Notification$DecoratedMediaCustomViewStyle"),
	android::app::Notification_MediaStyle>
{
public:

	static ref<Notification_DecoratedMediaCustomViewStyle> new_object();

protected:

	Notification_DecoratedMediaCustomViewStyle(handle_type h) : base_(h) {}

};

} // namespace android::app
} // namespace scapix::java_api


namespace scapix::java_api {
namespace android::app {

inline ref<Notification_DecoratedMediaCustomViewStyle> Notification_DecoratedMediaCustomViewStyle::new_object() { return base_::new_object(); }

} // namespace android::app
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_APP_NOTIFICATION_DECORATEDMEDIACUSTOMVIEWSTYLE_H
