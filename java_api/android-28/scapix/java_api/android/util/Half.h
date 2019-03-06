// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Number.h>
#include <scapix/java_api/java/lang/Comparable.h>

#ifndef SCAPIX_ANDROID_UTIL_HALF_H
#define SCAPIX_ANDROID_UTIL_HALF_H

namespace scapix::java_api {

namespace java::lang { class Object; }
namespace java::lang { class String; }

namespace android::util {

class Half : public object_base<SCAPIX_META_STRING("android/util/Half"),
	java::lang::Number,
	java::lang::Comparable>
{
public:

	static jshort EPSILON_();
	static jshort LOWEST_VALUE_();
	static jint MAX_EXPONENT_();
	static jshort MAX_VALUE_();
	static jint MIN_EXPONENT_();
	static jshort MIN_NORMAL_();
	static jshort MIN_VALUE_();
	static jshort NEGATIVE_INFINITY_();
	static jshort NEGATIVE_ZERO_();
	static jshort NaN();
	static jshort POSITIVE_INFINITY_();
	static jshort POSITIVE_ZERO_();
	static jint SIZE_();

	static ref<Half> new_object(jshort value);
	static ref<Half> new_object(jfloat value);
	static ref<Half> new_object(jdouble value);
	static ref<Half> new_object(ref<java::lang::String> value);
	jshort halfValue();
	jbyte byteValue();
	jshort shortValue();
	jint intValue();
	jlong longValue();
	jfloat floatValue();
	jdouble doubleValue();
	jboolean isNaN();
	jboolean equals(ref<java::lang::Object> o);
	jint hashCode();
	ref<java::lang::String> toString();
	jint compareTo(ref<android::util::Half> h);
	static jint hashCode(jshort h);
	static jint compare(jshort x, jshort y);
	static jshort halfToShortBits(jshort h);
	static jint halfToIntBits(jshort h);
	static jint halfToRawIntBits(jshort h);
	static jshort intBitsToHalf(jint bits);
	static jshort copySign(jshort magnitude, jshort sign);
	static jshort abs(jshort h);
	static jshort round(jshort h);
	static jshort ceil(jshort h);
	static jshort floor(jshort h);
	static jshort trunc(jshort h);
	static jshort min(jshort x, jshort y);
	static jshort max(jshort x, jshort y);
	static jboolean less(jshort x, jshort y);
	static jboolean lessEquals(jshort x, jshort y);
	static jboolean greater(jshort x, jshort y);
	static jboolean greaterEquals(jshort x, jshort y);
	static jboolean equals(jshort x, jshort y);
	static jint getSign(jshort h);
	static jint getExponent(jshort h);
	static jint getSignificand(jshort h);
	static jboolean isInfinite(jshort h);
	static jboolean isNaN(jshort h);
	static jboolean isNormalized(jshort h);
	static jfloat toFloat(jshort h);
	static jshort toHalf(jfloat f);
	static ref<android::util::Half> valueOf(jshort h);
	static ref<android::util::Half> valueOf(jfloat f);
	static ref<android::util::Half> valueOf(ref<java::lang::String> s);
	static jshort parseHalf(ref<java::lang::String> s);
	static ref<java::lang::String> toString(jshort h);
	static ref<java::lang::String> toHexString(jshort h);

protected:

	Half(handle_type h) : base_(h) {}

};

} // namespace android::util
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::util {

inline jshort Half::EPSILON_() { return get_static_field<SCAPIX_META_STRING("EPSILON"), jshort>(); }
inline jshort Half::LOWEST_VALUE_() { return get_static_field<SCAPIX_META_STRING("LOWEST_VALUE"), jshort>(); }
inline jint Half::MAX_EXPONENT_() { return get_static_field<SCAPIX_META_STRING("MAX_EXPONENT"), jint>(); }
inline jshort Half::MAX_VALUE_() { return get_static_field<SCAPIX_META_STRING("MAX_VALUE"), jshort>(); }
inline jint Half::MIN_EXPONENT_() { return get_static_field<SCAPIX_META_STRING("MIN_EXPONENT"), jint>(); }
inline jshort Half::MIN_NORMAL_() { return get_static_field<SCAPIX_META_STRING("MIN_NORMAL"), jshort>(); }
inline jshort Half::MIN_VALUE_() { return get_static_field<SCAPIX_META_STRING("MIN_VALUE"), jshort>(); }
inline jshort Half::NEGATIVE_INFINITY_() { return get_static_field<SCAPIX_META_STRING("NEGATIVE_INFINITY"), jshort>(); }
inline jshort Half::NEGATIVE_ZERO_() { return get_static_field<SCAPIX_META_STRING("NEGATIVE_ZERO"), jshort>(); }
inline jshort Half::NaN() { return get_static_field<SCAPIX_META_STRING("NaN"), jshort>(); }
inline jshort Half::POSITIVE_INFINITY_() { return get_static_field<SCAPIX_META_STRING("POSITIVE_INFINITY"), jshort>(); }
inline jshort Half::POSITIVE_ZERO_() { return get_static_field<SCAPIX_META_STRING("POSITIVE_ZERO"), jshort>(); }
inline jint Half::SIZE_() { return get_static_field<SCAPIX_META_STRING("SIZE"), jint>(); }
inline ref<Half> Half::new_object(jshort value) { return base_::new_object(value); }
inline ref<Half> Half::new_object(jfloat value) { return base_::new_object(value); }
inline ref<Half> Half::new_object(jdouble value) { return base_::new_object(value); }
inline ref<Half> Half::new_object(ref<java::lang::String> value) { return base_::new_object(value); }
inline jshort Half::halfValue() { return call_method<SCAPIX_META_STRING("halfValue"), jshort>(); }
inline jbyte Half::byteValue() { return call_method<SCAPIX_META_STRING("byteValue"), jbyte>(); }
inline jshort Half::shortValue() { return call_method<SCAPIX_META_STRING("shortValue"), jshort>(); }
inline jint Half::intValue() { return call_method<SCAPIX_META_STRING("intValue"), jint>(); }
inline jlong Half::longValue() { return call_method<SCAPIX_META_STRING("longValue"), jlong>(); }
inline jfloat Half::floatValue() { return call_method<SCAPIX_META_STRING("floatValue"), jfloat>(); }
inline jdouble Half::doubleValue() { return call_method<SCAPIX_META_STRING("doubleValue"), jdouble>(); }
inline jboolean Half::isNaN() { return call_method<SCAPIX_META_STRING("isNaN"), jboolean>(); }
inline jboolean Half::equals(ref<java::lang::Object> o) { return call_method<SCAPIX_META_STRING("equals"), jboolean>(o); }
inline jint Half::hashCode() { return call_method<SCAPIX_META_STRING("hashCode"), jint>(); }
inline ref<java::lang::String> Half::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }
inline jint Half::compareTo(ref<android::util::Half> h) { return call_method<SCAPIX_META_STRING("compareTo"), jint>(h); }
inline jint Half::hashCode(jshort h) { return call_static_method<SCAPIX_META_STRING("hashCode"), jint>(h); }
inline jint Half::compare(jshort x, jshort y) { return call_static_method<SCAPIX_META_STRING("compare"), jint>(x, y); }
inline jshort Half::halfToShortBits(jshort h) { return call_static_method<SCAPIX_META_STRING("halfToShortBits"), jshort>(h); }
inline jint Half::halfToIntBits(jshort h) { return call_static_method<SCAPIX_META_STRING("halfToIntBits"), jint>(h); }
inline jint Half::halfToRawIntBits(jshort h) { return call_static_method<SCAPIX_META_STRING("halfToRawIntBits"), jint>(h); }
inline jshort Half::intBitsToHalf(jint bits) { return call_static_method<SCAPIX_META_STRING("intBitsToHalf"), jshort>(bits); }
inline jshort Half::copySign(jshort magnitude, jshort sign) { return call_static_method<SCAPIX_META_STRING("copySign"), jshort>(magnitude, sign); }
inline jshort Half::abs(jshort h) { return call_static_method<SCAPIX_META_STRING("abs"), jshort>(h); }
inline jshort Half::round(jshort h) { return call_static_method<SCAPIX_META_STRING("round"), jshort>(h); }
inline jshort Half::ceil(jshort h) { return call_static_method<SCAPIX_META_STRING("ceil"), jshort>(h); }
inline jshort Half::floor(jshort h) { return call_static_method<SCAPIX_META_STRING("floor"), jshort>(h); }
inline jshort Half::trunc(jshort h) { return call_static_method<SCAPIX_META_STRING("trunc"), jshort>(h); }
inline jshort Half::min(jshort x, jshort y) { return call_static_method<SCAPIX_META_STRING("min"), jshort>(x, y); }
inline jshort Half::max(jshort x, jshort y) { return call_static_method<SCAPIX_META_STRING("max"), jshort>(x, y); }
inline jboolean Half::less(jshort x, jshort y) { return call_static_method<SCAPIX_META_STRING("less"), jboolean>(x, y); }
inline jboolean Half::lessEquals(jshort x, jshort y) { return call_static_method<SCAPIX_META_STRING("lessEquals"), jboolean>(x, y); }
inline jboolean Half::greater(jshort x, jshort y) { return call_static_method<SCAPIX_META_STRING("greater"), jboolean>(x, y); }
inline jboolean Half::greaterEquals(jshort x, jshort y) { return call_static_method<SCAPIX_META_STRING("greaterEquals"), jboolean>(x, y); }
inline jboolean Half::equals(jshort x, jshort y) { return call_static_method<SCAPIX_META_STRING("equals"), jboolean>(x, y); }
inline jint Half::getSign(jshort h) { return call_static_method<SCAPIX_META_STRING("getSign"), jint>(h); }
inline jint Half::getExponent(jshort h) { return call_static_method<SCAPIX_META_STRING("getExponent"), jint>(h); }
inline jint Half::getSignificand(jshort h) { return call_static_method<SCAPIX_META_STRING("getSignificand"), jint>(h); }
inline jboolean Half::isInfinite(jshort h) { return call_static_method<SCAPIX_META_STRING("isInfinite"), jboolean>(h); }
inline jboolean Half::isNaN(jshort h) { return call_static_method<SCAPIX_META_STRING("isNaN"), jboolean>(h); }
inline jboolean Half::isNormalized(jshort h) { return call_static_method<SCAPIX_META_STRING("isNormalized"), jboolean>(h); }
inline jfloat Half::toFloat(jshort h) { return call_static_method<SCAPIX_META_STRING("toFloat"), jfloat>(h); }
inline jshort Half::toHalf(jfloat f) { return call_static_method<SCAPIX_META_STRING("toHalf"), jshort>(f); }
inline ref<android::util::Half> Half::valueOf(jshort h) { return call_static_method<SCAPIX_META_STRING("valueOf"), ref<android::util::Half>>(h); }
inline ref<android::util::Half> Half::valueOf(jfloat f) { return call_static_method<SCAPIX_META_STRING("valueOf"), ref<android::util::Half>>(f); }
inline ref<android::util::Half> Half::valueOf(ref<java::lang::String> s) { return call_static_method<SCAPIX_META_STRING("valueOf"), ref<android::util::Half>>(s); }
inline jshort Half::parseHalf(ref<java::lang::String> s) { return call_static_method<SCAPIX_META_STRING("parseHalf"), jshort>(s); }
inline ref<java::lang::String> Half::toString(jshort h) { return call_static_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(h); }
inline ref<java::lang::String> Half::toHexString(jshort h) { return call_static_method<SCAPIX_META_STRING("toHexString"), ref<java::lang::String>>(h); }

} // namespace android::util
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_UTIL_HALF_H
