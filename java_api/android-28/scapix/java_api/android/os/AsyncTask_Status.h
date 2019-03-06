// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_ANDROID_OS_ASYNCTASK_STATUS_H
#define SCAPIX_ANDROID_OS_ASYNCTASK_STATUS_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace android::os {

class AsyncTask_Status : public object_base<SCAPIX_META_STRING("android/os/AsyncTask$Status"),
	java::lang::Enum>
{
public:

	static ref<android::os::AsyncTask_Status> PENDING_();
	static ref<android::os::AsyncTask_Status> RUNNING_();
	static ref<android::os::AsyncTask_Status> FINISHED_();

	static ref<link::java::array<android::os::AsyncTask_Status>> values();
	static ref<android::os::AsyncTask_Status> valueOf(ref<java::lang::String> name);

protected:

	AsyncTask_Status(handle_type h) : base_(h) {}

};

} // namespace android::os
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::os {

inline ref<android::os::AsyncTask_Status> AsyncTask_Status::PENDING_() { return get_static_field<SCAPIX_META_STRING("PENDING"), ref<android::os::AsyncTask_Status>>(); }
inline ref<android::os::AsyncTask_Status> AsyncTask_Status::RUNNING_() { return get_static_field<SCAPIX_META_STRING("RUNNING"), ref<android::os::AsyncTask_Status>>(); }
inline ref<android::os::AsyncTask_Status> AsyncTask_Status::FINISHED_() { return get_static_field<SCAPIX_META_STRING("FINISHED"), ref<android::os::AsyncTask_Status>>(); }
inline ref<link::java::array<android::os::AsyncTask_Status>> AsyncTask_Status::values() { return call_static_method<SCAPIX_META_STRING("values"), ref<link::java::array<android::os::AsyncTask_Status>>>(); }
inline ref<android::os::AsyncTask_Status> AsyncTask_Status::valueOf(ref<java::lang::String> name) { return call_static_method<SCAPIX_META_STRING("valueOf"), ref<android::os::AsyncTask_Status>>(name); }

} // namespace android::os
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_OS_ASYNCTASK_STATUS_H
