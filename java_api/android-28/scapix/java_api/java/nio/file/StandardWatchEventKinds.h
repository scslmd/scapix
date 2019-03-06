// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_NIO_FILE_STANDARDWATCHEVENTKINDS_H
#define SCAPIX_JAVA_NIO_FILE_STANDARDWATCHEVENTKINDS_H

namespace scapix::java_api {

namespace java::nio::file { class WatchEvent_Kind; }

namespace java::nio::file {

class StandardWatchEventKinds : public object_base<SCAPIX_META_STRING("java/nio/file/StandardWatchEventKinds"),
	java::lang::Object>
{
public:

	static ref<java::nio::file::WatchEvent_Kind> ENTRY_CREATE_();
	static ref<java::nio::file::WatchEvent_Kind> ENTRY_DELETE_();
	static ref<java::nio::file::WatchEvent_Kind> ENTRY_MODIFY_();
	static ref<java::nio::file::WatchEvent_Kind> OVERFLOW_();


protected:

	StandardWatchEventKinds(handle_type h) : base_(h) {}

};

} // namespace java::nio::file
} // namespace scapix::java_api

#include <scapix/java_api/java/nio/file/WatchEvent_Kind.h>

namespace scapix::java_api {
namespace java::nio::file {

inline ref<java::nio::file::WatchEvent_Kind> StandardWatchEventKinds::ENTRY_CREATE_() { return get_static_field<SCAPIX_META_STRING("ENTRY_CREATE"), ref<java::nio::file::WatchEvent_Kind>>(); }
inline ref<java::nio::file::WatchEvent_Kind> StandardWatchEventKinds::ENTRY_DELETE_() { return get_static_field<SCAPIX_META_STRING("ENTRY_DELETE"), ref<java::nio::file::WatchEvent_Kind>>(); }
inline ref<java::nio::file::WatchEvent_Kind> StandardWatchEventKinds::ENTRY_MODIFY_() { return get_static_field<SCAPIX_META_STRING("ENTRY_MODIFY"), ref<java::nio::file::WatchEvent_Kind>>(); }
inline ref<java::nio::file::WatchEvent_Kind> StandardWatchEventKinds::OVERFLOW_() { return get_static_field<SCAPIX_META_STRING("OVERFLOW"), ref<java::nio::file::WatchEvent_Kind>>(); }

} // namespace java::nio::file
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_NIO_FILE_STANDARDWATCHEVENTKINDS_H
