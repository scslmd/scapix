// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/security/cert/PKIXCertPathChecker.h>

#ifndef SCAPIX_JAVA_SECURITY_CERT_PKIXREVOCATIONCHECKER_H
#define SCAPIX_JAVA_SECURITY_CERT_PKIXREVOCATIONCHECKER_H

namespace scapix::java_api {

namespace java::net { class URI; }
namespace java::security::cert { class X509Certificate; }
namespace java::util { class List; }
namespace java::util { class Map; }
namespace java::util { class Set; }
namespace java::security::cert { class PKIXRevocationChecker_Option; }

namespace java::security::cert {

class PKIXRevocationChecker : public object_base<SCAPIX_META_STRING("java/security/cert/PKIXRevocationChecker"),
	java::security::cert::PKIXCertPathChecker>
{
public:

	using Option = PKIXRevocationChecker_Option;

	void setOcspResponder(ref<java::net::URI> uri);
	ref<java::net::URI> getOcspResponder();
	void setOcspResponderCert(ref<java::security::cert::X509Certificate> cert);
	ref<java::security::cert::X509Certificate> getOcspResponderCert();
	void setOcspExtensions(ref<java::util::List> extensions);
	ref<java::util::List> getOcspExtensions();
	void setOcspResponses(ref<java::util::Map> responses);
	ref<java::util::Map> getOcspResponses();
	void setOptions(ref<java::util::Set> options);
	ref<java::util::Set> getOptions();
	ref<java::util::List> getSoftFailExceptions();
	ref<java::security::cert::PKIXRevocationChecker> clone();

protected:

	PKIXRevocationChecker(handle_type h) : base_(h) {}

};

} // namespace java::security::cert
} // namespace scapix::java_api

#include <scapix/java_api/java/net/URI.h>
#include <scapix/java_api/java/security/cert/X509Certificate.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/java/util/Map.h>
#include <scapix/java_api/java/util/Set.h>

namespace scapix::java_api {
namespace java::security::cert {

inline void PKIXRevocationChecker::setOcspResponder(ref<java::net::URI> uri) { return call_method<SCAPIX_META_STRING("setOcspResponder"), void>(uri); }
inline ref<java::net::URI> PKIXRevocationChecker::getOcspResponder() { return call_method<SCAPIX_META_STRING("getOcspResponder"), ref<java::net::URI>>(); }
inline void PKIXRevocationChecker::setOcspResponderCert(ref<java::security::cert::X509Certificate> cert) { return call_method<SCAPIX_META_STRING("setOcspResponderCert"), void>(cert); }
inline ref<java::security::cert::X509Certificate> PKIXRevocationChecker::getOcspResponderCert() { return call_method<SCAPIX_META_STRING("getOcspResponderCert"), ref<java::security::cert::X509Certificate>>(); }
inline void PKIXRevocationChecker::setOcspExtensions(ref<java::util::List> extensions) { return call_method<SCAPIX_META_STRING("setOcspExtensions"), void>(extensions); }
inline ref<java::util::List> PKIXRevocationChecker::getOcspExtensions() { return call_method<SCAPIX_META_STRING("getOcspExtensions"), ref<java::util::List>>(); }
inline void PKIXRevocationChecker::setOcspResponses(ref<java::util::Map> responses) { return call_method<SCAPIX_META_STRING("setOcspResponses"), void>(responses); }
inline ref<java::util::Map> PKIXRevocationChecker::getOcspResponses() { return call_method<SCAPIX_META_STRING("getOcspResponses"), ref<java::util::Map>>(); }
inline void PKIXRevocationChecker::setOptions(ref<java::util::Set> options) { return call_method<SCAPIX_META_STRING("setOptions"), void>(options); }
inline ref<java::util::Set> PKIXRevocationChecker::getOptions() { return call_method<SCAPIX_META_STRING("getOptions"), ref<java::util::Set>>(); }
inline ref<java::util::List> PKIXRevocationChecker::getSoftFailExceptions() { return call_method<SCAPIX_META_STRING("getSoftFailExceptions"), ref<java::util::List>>(); }
inline ref<java::security::cert::PKIXRevocationChecker> PKIXRevocationChecker::clone() { return call_method<SCAPIX_META_STRING("clone"), ref<java::security::cert::PKIXRevocationChecker>>(); }

} // namespace java::security::cert
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_SECURITY_CERT_PKIXREVOCATIONCHECKER_H
