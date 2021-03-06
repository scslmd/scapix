// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/security/spec/ECField.h>

#ifndef SCAPIX_JAVA_SECURITY_SPEC_ECFIELDF2M_H
#define SCAPIX_JAVA_SECURITY_SPEC_ECFIELDF2M_H

namespace scapix::java_api {

namespace java::math { class BigInteger; }

namespace java::security::spec {

class ECFieldF2m : public object_base<SCAPIX_META_STRING("java/security/spec/ECFieldF2m"),
	java::lang::Object,
	java::security::spec::ECField>
{
public:

	static ref<ECFieldF2m> new_object(jint m);
	static ref<ECFieldF2m> new_object(jint m, ref<java::math::BigInteger> rp);
	static ref<ECFieldF2m> new_object(jint m, ref<link::java::array<jint>> ks);
	jint getFieldSize();
	jint getM();
	ref<java::math::BigInteger> getReductionPolynomial();
	ref<link::java::array<jint>> getMidTermsOfReductionPolynomial();
	jboolean equals(ref<java::lang::Object> obj);
	jint hashCode();

protected:

	ECFieldF2m(handle_type h) : base_(h) {}

};

} // namespace java::security::spec
} // namespace scapix::java_api

#include <scapix/java_api/java/math/BigInteger.h>

namespace scapix::java_api {
namespace java::security::spec {

inline ref<ECFieldF2m> ECFieldF2m::new_object(jint m) { return base_::new_object(m); }
inline ref<ECFieldF2m> ECFieldF2m::new_object(jint m, ref<java::math::BigInteger> rp) { return base_::new_object(m, rp); }
inline ref<ECFieldF2m> ECFieldF2m::new_object(jint m, ref<link::java::array<jint>> ks) { return base_::new_object(m, ks); }
inline jint ECFieldF2m::getFieldSize() { return call_method<SCAPIX_META_STRING("getFieldSize"), jint>(); }
inline jint ECFieldF2m::getM() { return call_method<SCAPIX_META_STRING("getM"), jint>(); }
inline ref<java::math::BigInteger> ECFieldF2m::getReductionPolynomial() { return call_method<SCAPIX_META_STRING("getReductionPolynomial"), ref<java::math::BigInteger>>(); }
inline ref<link::java::array<jint>> ECFieldF2m::getMidTermsOfReductionPolynomial() { return call_method<SCAPIX_META_STRING("getMidTermsOfReductionPolynomial"), ref<link::java::array<jint>>>(); }
inline jboolean ECFieldF2m::equals(ref<java::lang::Object> obj) { return call_method<SCAPIX_META_STRING("equals"), jboolean>(obj); }
inline jint ECFieldF2m::hashCode() { return call_method<SCAPIX_META_STRING("hashCode"), jint>(); }

} // namespace java::security::spec
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_SECURITY_SPEC_ECFIELDF2M_H
