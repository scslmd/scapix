// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/io/FilterOutputStream.h>

#ifndef SCAPIX_JAVA_SECURITY_DIGESTOUTPUTSTREAM_H
#define SCAPIX_JAVA_SECURITY_DIGESTOUTPUTSTREAM_H

namespace scapix::java_api {

namespace java::io { class OutputStream; }
namespace java::lang { class String; }
namespace java::security { class MessageDigest; }

namespace java::security {

class DigestOutputStream : public object_base<SCAPIX_META_STRING("java/security/DigestOutputStream"),
	java::io::FilterOutputStream>
{
public:

	static ref<DigestOutputStream> new_object(ref<java::io::OutputStream> stream, ref<java::security::MessageDigest> digest);
	ref<java::security::MessageDigest> getMessageDigest();
	void setMessageDigest(ref<java::security::MessageDigest> digest);
	void write(jint b);
	void write(ref<link::java::array<jbyte>> b, jint off, jint len);
	void on(jboolean on);
	ref<java::lang::String> toString();

protected:

	DigestOutputStream(handle_type h) : base_(h) {}

};

} // namespace java::security
} // namespace scapix::java_api

#include <scapix/java_api/java/io/OutputStream.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/security/MessageDigest.h>

namespace scapix::java_api {
namespace java::security {

inline ref<DigestOutputStream> DigestOutputStream::new_object(ref<java::io::OutputStream> stream, ref<java::security::MessageDigest> digest) { return base_::new_object(stream, digest); }
inline ref<java::security::MessageDigest> DigestOutputStream::getMessageDigest() { return call_method<SCAPIX_META_STRING("getMessageDigest"), ref<java::security::MessageDigest>>(); }
inline void DigestOutputStream::setMessageDigest(ref<java::security::MessageDigest> digest) { return call_method<SCAPIX_META_STRING("setMessageDigest"), void>(digest); }
inline void DigestOutputStream::write(jint b) { return call_method<SCAPIX_META_STRING("write"), void>(b); }
inline void DigestOutputStream::write(ref<link::java::array<jbyte>> b, jint off, jint len) { return call_method<SCAPIX_META_STRING("write"), void>(b, off, len); }
inline void DigestOutputStream::on(jboolean on) { return call_method<SCAPIX_META_STRING("on"), void>(on); }
inline ref<java::lang::String> DigestOutputStream::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }

} // namespace java::security
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_SECURITY_DIGESTOUTPUTSTREAM_H
