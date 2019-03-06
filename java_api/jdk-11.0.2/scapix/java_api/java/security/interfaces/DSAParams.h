// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_SECURITY_INTERFACES_DSAPARAMS_H
#define SCAPIX_JAVA_SECURITY_INTERFACES_DSAPARAMS_H

namespace scapix::java_api {

namespace java::math { class BigInteger; }

namespace java::security::interfaces {

class DSAParams : public object_base<SCAPIX_META_STRING("java/security/interfaces/DSAParams"),
	java::lang::Object>
{
public:

	ref<java::math::BigInteger> getP();
	ref<java::math::BigInteger> getQ();
	ref<java::math::BigInteger> getG();

protected:

	DSAParams(handle_type h) : base_(h) {}

};

} // namespace java::security::interfaces
} // namespace scapix::java_api

#include <scapix/java_api/java/math/BigInteger.h>

namespace scapix::java_api {
namespace java::security::interfaces {

inline ref<java::math::BigInteger> DSAParams::getP() { return call_method<SCAPIX_META_STRING("getP"), ref<java::math::BigInteger>>(); }
inline ref<java::math::BigInteger> DSAParams::getQ() { return call_method<SCAPIX_META_STRING("getQ"), ref<java::math::BigInteger>>(); }
inline ref<java::math::BigInteger> DSAParams::getG() { return call_method<SCAPIX_META_STRING("getG"), ref<java::math::BigInteger>>(); }

} // namespace java::security::interfaces
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_SECURITY_INTERFACES_DSAPARAMS_H
