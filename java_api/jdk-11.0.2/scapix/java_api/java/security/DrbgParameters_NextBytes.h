// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/security/SecureRandomParameters.h>

#ifndef SCAPIX_JAVA_SECURITY_DRBGPARAMETERS_NEXTBYTES_H
#define SCAPIX_JAVA_SECURITY_DRBGPARAMETERS_NEXTBYTES_H

namespace scapix::java_api {


namespace java::security {

class DrbgParameters_NextBytes : public object_base<SCAPIX_META_STRING("java/security/DrbgParameters$NextBytes"),
	java::lang::Object,
	java::security::SecureRandomParameters>
{
public:

	jint getStrength();
	jboolean getPredictionResistance();
	ref<link::java::array<jbyte>> getAdditionalInput();

protected:

	DrbgParameters_NextBytes(handle_type h) : base_(h) {}

};

} // namespace java::security
} // namespace scapix::java_api


namespace scapix::java_api {
namespace java::security {

inline jint DrbgParameters_NextBytes::getStrength() { return call_method<SCAPIX_META_STRING("getStrength"), jint>(); }
inline jboolean DrbgParameters_NextBytes::getPredictionResistance() { return call_method<SCAPIX_META_STRING("getPredictionResistance"), jboolean>(); }
inline ref<link::java::array<jbyte>> DrbgParameters_NextBytes::getAdditionalInput() { return call_method<SCAPIX_META_STRING("getAdditionalInput"), ref<link::java::array<jbyte>>>(); }

} // namespace java::security
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_SECURITY_DRBGPARAMETERS_NEXTBYTES_H
