// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/net/ssl/ManagerFactoryParameters.h>

#ifndef SCAPIX_JAVAX_NET_SSL_KEYSTOREBUILDERPARAMETERS_H
#define SCAPIX_JAVAX_NET_SSL_KEYSTOREBUILDERPARAMETERS_H

namespace scapix::java_api {

namespace java::security { class KeyStore_Builder; }
namespace java::util { class List; }

namespace javax::net::ssl {

class KeyStoreBuilderParameters : public object_base<SCAPIX_META_STRING("javax/net/ssl/KeyStoreBuilderParameters"),
	java::lang::Object,
	javax::net::ssl::ManagerFactoryParameters>
{
public:

	static ref<KeyStoreBuilderParameters> new_object(ref<java::security::KeyStore_Builder> builder);
	static ref<KeyStoreBuilderParameters> new_object(ref<java::util::List> parameters);
	ref<java::util::List> getParameters();

protected:

	KeyStoreBuilderParameters(handle_type h) : base_(h) {}

};

} // namespace javax::net::ssl
} // namespace scapix::java_api

#include <scapix/java_api/java/security/KeyStore_Builder.h>
#include <scapix/java_api/java/util/List.h>

namespace scapix::java_api {
namespace javax::net::ssl {

inline ref<KeyStoreBuilderParameters> KeyStoreBuilderParameters::new_object(ref<java::security::KeyStore_Builder> builder) { return base_::new_object(builder); }
inline ref<KeyStoreBuilderParameters> KeyStoreBuilderParameters::new_object(ref<java::util::List> parameters) { return base_::new_object(parameters); }
inline ref<java::util::List> KeyStoreBuilderParameters::getParameters() { return call_method<SCAPIX_META_STRING("getParameters"), ref<java::util::List>>(); }

} // namespace javax::net::ssl
} // namespace scapix::java_api

#endif // SCAPIX_JAVAX_NET_SSL_KEYSTOREBUILDERPARAMETERS_H
