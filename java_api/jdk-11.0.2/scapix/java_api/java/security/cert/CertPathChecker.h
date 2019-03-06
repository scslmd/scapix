// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_SECURITY_CERT_CERTPATHCHECKER_H
#define SCAPIX_JAVA_SECURITY_CERT_CERTPATHCHECKER_H

namespace scapix::java_api {

namespace java::security::cert { class Certificate; }

namespace java::security::cert {

class CertPathChecker : public object_base<SCAPIX_META_STRING("java/security/cert/CertPathChecker"),
	java::lang::Object>
{
public:

	void init(jboolean p1);
	jboolean isForwardCheckingSupported();
	void check(ref<java::security::cert::Certificate> p1);

protected:

	CertPathChecker(handle_type h) : base_(h) {}

};

} // namespace java::security::cert
} // namespace scapix::java_api

#include <scapix/java_api/java/security/cert/Certificate.h>

namespace scapix::java_api {
namespace java::security::cert {

inline void CertPathChecker::init(jboolean p1) { return call_method<SCAPIX_META_STRING("init"), void>(p1); }
inline jboolean CertPathChecker::isForwardCheckingSupported() { return call_method<SCAPIX_META_STRING("isForwardCheckingSupported"), jboolean>(); }
inline void CertPathChecker::check(ref<java::security::cert::Certificate> p1) { return call_method<SCAPIX_META_STRING("check"), void>(p1); }

} // namespace java::security::cert
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_SECURITY_CERT_CERTPATHCHECKER_H
