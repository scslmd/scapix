// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/security/interfaces/XECKey.h>
#include <scapix/java_api/java/security/PrivateKey.h>

#ifndef SCAPIX_JAVA_SECURITY_INTERFACES_XECPRIVATEKEY_H
#define SCAPIX_JAVA_SECURITY_INTERFACES_XECPRIVATEKEY_H

namespace scapix::java_api {

namespace java::util { class Optional; }

namespace java::security::interfaces {

class XECPrivateKey : public object_base<SCAPIX_META_STRING("java/security/interfaces/XECPrivateKey"),
	java::lang::Object,
	java::security::interfaces::XECKey,
	java::security::PrivateKey>
{
public:

	ref<java::util::Optional> getScalar();

protected:

	XECPrivateKey(handle_type h) : base_(h) {}

};

} // namespace java::security::interfaces
} // namespace scapix::java_api

#include <scapix/java_api/java/util/Optional.h>

namespace scapix::java_api {
namespace java::security::interfaces {

inline ref<java::util::Optional> XECPrivateKey::getScalar() { return call_method<SCAPIX_META_STRING("getScalar"), ref<java::util::Optional>>(); }

} // namespace java::security::interfaces
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_SECURITY_INTERFACES_XECPRIVATEKEY_H
