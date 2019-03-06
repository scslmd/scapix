// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/security/cert/CertificateException.h>

#ifndef SCAPIX_JAVA_SECURITY_CERT_CERTIFICATEEXPIREDEXCEPTION_H
#define SCAPIX_JAVA_SECURITY_CERT_CERTIFICATEEXPIREDEXCEPTION_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace java::security::cert {

class CertificateExpiredException : public object_base<SCAPIX_META_STRING("java/security/cert/CertificateExpiredException"),
	java::security::cert::CertificateException>
{
public:

	static ref<CertificateExpiredException> new_object();
	static ref<CertificateExpiredException> new_object(ref<java::lang::String> message);

protected:

	CertificateExpiredException(handle_type h) : base_(h) {}

};

} // namespace java::security::cert
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace java::security::cert {

inline ref<CertificateExpiredException> CertificateExpiredException::new_object() { return base_::new_object(); }
inline ref<CertificateExpiredException> CertificateExpiredException::new_object(ref<java::lang::String> message) { return base_::new_object(message); }

} // namespace java::security::cert
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_SECURITY_CERT_CERTIFICATEEXPIREDEXCEPTION_H
