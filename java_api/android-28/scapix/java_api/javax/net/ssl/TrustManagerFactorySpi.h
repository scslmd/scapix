// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVAX_NET_SSL_TRUSTMANAGERFACTORYSPI_H
#define SCAPIX_JAVAX_NET_SSL_TRUSTMANAGERFACTORYSPI_H

namespace scapix::java_api {
namespace javax::net::ssl {

class TrustManagerFactorySpi : public object_base<SCAPIX_META_STRING("javax/net/ssl/TrustManagerFactorySpi"),
	java::lang::Object>
{
public:

	static ref<TrustManagerFactorySpi> new_object();

protected:

	TrustManagerFactorySpi(handle_type h) : base_(h) {}

};

} // namespace javax::net::ssl
} // namespace scapix::java_api


namespace scapix::java_api {
namespace javax::net::ssl {

inline ref<TrustManagerFactorySpi> TrustManagerFactorySpi::new_object() { return base_::new_object(); }

} // namespace javax::net::ssl
} // namespace scapix::java_api

#endif // SCAPIX_JAVAX_NET_SSL_TRUSTMANAGERFACTORYSPI_H
