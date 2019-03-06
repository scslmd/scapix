// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/android/util/AndroidRuntimeException.h>

#ifndef SCAPIX_ANDROID_APP_FRAGMENT_INSTANTIATIONEXCEPTION_H
#define SCAPIX_ANDROID_APP_FRAGMENT_INSTANTIATIONEXCEPTION_H

namespace scapix::java_api {

namespace java::lang { class Exception; }
namespace java::lang { class String; }

namespace android::app {

class Fragment_InstantiationException : public object_base<SCAPIX_META_STRING("android/app/Fragment$InstantiationException"),
	android::util::AndroidRuntimeException>
{
public:

	static ref<Fragment_InstantiationException> new_object(ref<java::lang::String> msg, ref<java::lang::Exception> cause);

protected:

	Fragment_InstantiationException(handle_type h) : base_(h) {}

};

} // namespace android::app
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/Exception.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::app {

inline ref<Fragment_InstantiationException> Fragment_InstantiationException::new_object(ref<java::lang::String> msg, ref<java::lang::Exception> cause) { return base_::new_object(msg, cause); }

} // namespace android::app
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_APP_FRAGMENT_INSTANTIATIONEXCEPTION_H
