// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_UTIL_BASE64_H
#define SCAPIX_JAVA_UTIL_BASE64_H

namespace scapix::java_api {

namespace java::util { class Base64_Decoder; }
namespace java::util { class Base64_Encoder; }

namespace java::util {

class Base64 : public object_base<SCAPIX_META_STRING("java/util/Base64"),
	java::lang::Object>
{
public:

	using Decoder = Base64_Decoder;
	using Encoder = Base64_Encoder;

	static ref<java::util::Base64_Encoder> getEncoder();
	static ref<java::util::Base64_Encoder> getUrlEncoder();
	static ref<java::util::Base64_Encoder> getMimeEncoder();
	static ref<java::util::Base64_Encoder> getMimeEncoder(jint lineLength, ref<link::java::array<jbyte>> lineSeparator);
	static ref<java::util::Base64_Decoder> getDecoder();
	static ref<java::util::Base64_Decoder> getUrlDecoder();
	static ref<java::util::Base64_Decoder> getMimeDecoder();

protected:

	Base64(handle_type h) : base_(h) {}

};

} // namespace java::util
} // namespace scapix::java_api

#include <scapix/java_api/java/util/Base64_Decoder.h>
#include <scapix/java_api/java/util/Base64_Encoder.h>

namespace scapix::java_api {
namespace java::util {

inline ref<java::util::Base64_Encoder> Base64::getEncoder() { return call_static_method<SCAPIX_META_STRING("getEncoder"), ref<java::util::Base64_Encoder>>(); }
inline ref<java::util::Base64_Encoder> Base64::getUrlEncoder() { return call_static_method<SCAPIX_META_STRING("getUrlEncoder"), ref<java::util::Base64_Encoder>>(); }
inline ref<java::util::Base64_Encoder> Base64::getMimeEncoder() { return call_static_method<SCAPIX_META_STRING("getMimeEncoder"), ref<java::util::Base64_Encoder>>(); }
inline ref<java::util::Base64_Encoder> Base64::getMimeEncoder(jint lineLength, ref<link::java::array<jbyte>> lineSeparator) { return call_static_method<SCAPIX_META_STRING("getMimeEncoder"), ref<java::util::Base64_Encoder>>(lineLength, lineSeparator); }
inline ref<java::util::Base64_Decoder> Base64::getDecoder() { return call_static_method<SCAPIX_META_STRING("getDecoder"), ref<java::util::Base64_Decoder>>(); }
inline ref<java::util::Base64_Decoder> Base64::getUrlDecoder() { return call_static_method<SCAPIX_META_STRING("getUrlDecoder"), ref<java::util::Base64_Decoder>>(); }
inline ref<java::util::Base64_Decoder> Base64::getMimeDecoder() { return call_static_method<SCAPIX_META_STRING("getMimeDecoder"), ref<java::util::Base64_Decoder>>(); }

} // namespace java::util
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_UTIL_BASE64_H
