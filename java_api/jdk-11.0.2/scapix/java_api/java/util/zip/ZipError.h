// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/InternalError.h>

#ifndef SCAPIX_JAVA_UTIL_ZIP_ZIPERROR_H
#define SCAPIX_JAVA_UTIL_ZIP_ZIPERROR_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace java::util::zip {

class ZipError : public object_base<SCAPIX_META_STRING("java/util/zip/ZipError"),
	java::lang::InternalError>
{
public:

	static ref<ZipError> new_object(ref<java::lang::String> s);

protected:

	ZipError(handle_type h) : base_(h) {}

};

} // namespace java::util::zip
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace java::util::zip {

inline ref<ZipError> ZipError::new_object(ref<java::lang::String> s) { return base_::new_object(s); }

} // namespace java::util::zip
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_UTIL_ZIP_ZIPERROR_H
