// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Number.h>
#include <scapix/java_api/java/lang/Comparable.h>

#ifndef SCAPIX_JAVA_LANG_FLOAT_H
#define SCAPIX_JAVA_LANG_FLOAT_H

namespace scapix::java_api {

namespace java::lang { class Class; }
namespace java::lang { class Object; }
namespace java::lang { class String; }

namespace java::lang {

class Float : public object_base<SCAPIX_META_STRING("java/lang/Float"),
	java::lang::Number,
	java::lang::Comparable>
{
public:

	static jfloat POSITIVE_INFINITY_();
	static jfloat NEGATIVE_INFINITY_();
	static jfloat NaN();
	static jfloat MAX_VALUE_();
	static jfloat MIN_NORMAL_();
	static jfloat MIN_VALUE_();
	static jint MAX_EXPONENT_();
	static jint MIN_EXPONENT_();
	static jint SIZE_();
	static jint BYTES_();
	static ref<java::lang::Class> TYPE_();

	static ref<java::lang::String> toString(jfloat f);
	static ref<java::lang::String> toHexString(jfloat f);
	static ref<java::lang::Float> valueOf(ref<java::lang::String> s);
	static ref<java::lang::Float> valueOf(jfloat f);
	static jfloat parseFloat(ref<java::lang::String> s);
	static jboolean isNaN(jfloat v);
	static jboolean isInfinite(jfloat v);
	static jboolean isFinite(jfloat f);
	static ref<Float> new_object(jfloat value);
	static ref<Float> new_object(jdouble value);
	static ref<Float> new_object(ref<java::lang::String> s);
	jboolean isNaN();
	jboolean isInfinite();
	ref<java::lang::String> toString();
	jbyte byteValue();
	jshort shortValue();
	jint intValue();
	jlong longValue();
	jfloat floatValue();
	jdouble doubleValue();
	jint hashCode();
	static jint hashCode(jfloat value);
	jboolean equals(ref<java::lang::Object> obj);
	static jint floatToIntBits(jfloat value);
	static jint floatToRawIntBits(jfloat p1);
	static jfloat intBitsToFloat(jint p1);
	jint compareTo(ref<java::lang::Float> anotherFloat);
	static jint compare(jfloat f1, jfloat f2);
	static jfloat sum(jfloat a, jfloat b);
	static jfloat max(jfloat a, jfloat b);
	static jfloat min(jfloat a, jfloat b);

protected:

	Float(handle_type h) : base_(h) {}

};

} // namespace java::lang
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace java::lang {

inline jfloat Float::POSITIVE_INFINITY_() { return get_static_field<SCAPIX_META_STRING("POSITIVE_INFINITY"), jfloat>(); }
inline jfloat Float::NEGATIVE_INFINITY_() { return get_static_field<SCAPIX_META_STRING("NEGATIVE_INFINITY"), jfloat>(); }
inline jfloat Float::NaN() { return get_static_field<SCAPIX_META_STRING("NaN"), jfloat>(); }
inline jfloat Float::MAX_VALUE_() { return get_static_field<SCAPIX_META_STRING("MAX_VALUE"), jfloat>(); }
inline jfloat Float::MIN_NORMAL_() { return get_static_field<SCAPIX_META_STRING("MIN_NORMAL"), jfloat>(); }
inline jfloat Float::MIN_VALUE_() { return get_static_field<SCAPIX_META_STRING("MIN_VALUE"), jfloat>(); }
inline jint Float::MAX_EXPONENT_() { return get_static_field<SCAPIX_META_STRING("MAX_EXPONENT"), jint>(); }
inline jint Float::MIN_EXPONENT_() { return get_static_field<SCAPIX_META_STRING("MIN_EXPONENT"), jint>(); }
inline jint Float::SIZE_() { return get_static_field<SCAPIX_META_STRING("SIZE"), jint>(); }
inline jint Float::BYTES_() { return get_static_field<SCAPIX_META_STRING("BYTES"), jint>(); }
inline ref<java::lang::Class> Float::TYPE_() { return get_static_field<SCAPIX_META_STRING("TYPE"), ref<java::lang::Class>>(); }
inline ref<java::lang::String> Float::toString(jfloat f) { return call_static_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(f); }
inline ref<java::lang::String> Float::toHexString(jfloat f) { return call_static_method<SCAPIX_META_STRING("toHexString"), ref<java::lang::String>>(f); }
inline ref<java::lang::Float> Float::valueOf(ref<java::lang::String> s) { return call_static_method<SCAPIX_META_STRING("valueOf"), ref<java::lang::Float>>(s); }
inline ref<java::lang::Float> Float::valueOf(jfloat f) { return call_static_method<SCAPIX_META_STRING("valueOf"), ref<java::lang::Float>>(f); }
inline jfloat Float::parseFloat(ref<java::lang::String> s) { return call_static_method<SCAPIX_META_STRING("parseFloat"), jfloat>(s); }
inline jboolean Float::isNaN(jfloat v) { return call_static_method<SCAPIX_META_STRING("isNaN"), jboolean>(v); }
inline jboolean Float::isInfinite(jfloat v) { return call_static_method<SCAPIX_META_STRING("isInfinite"), jboolean>(v); }
inline jboolean Float::isFinite(jfloat f) { return call_static_method<SCAPIX_META_STRING("isFinite"), jboolean>(f); }
inline ref<Float> Float::new_object(jfloat value) { return base_::new_object(value); }
inline ref<Float> Float::new_object(jdouble value) { return base_::new_object(value); }
inline ref<Float> Float::new_object(ref<java::lang::String> s) { return base_::new_object(s); }
inline jboolean Float::isNaN() { return call_method<SCAPIX_META_STRING("isNaN"), jboolean>(); }
inline jboolean Float::isInfinite() { return call_method<SCAPIX_META_STRING("isInfinite"), jboolean>(); }
inline ref<java::lang::String> Float::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }
inline jbyte Float::byteValue() { return call_method<SCAPIX_META_STRING("byteValue"), jbyte>(); }
inline jshort Float::shortValue() { return call_method<SCAPIX_META_STRING("shortValue"), jshort>(); }
inline jint Float::intValue() { return call_method<SCAPIX_META_STRING("intValue"), jint>(); }
inline jlong Float::longValue() { return call_method<SCAPIX_META_STRING("longValue"), jlong>(); }
inline jfloat Float::floatValue() { return call_method<SCAPIX_META_STRING("floatValue"), jfloat>(); }
inline jdouble Float::doubleValue() { return call_method<SCAPIX_META_STRING("doubleValue"), jdouble>(); }
inline jint Float::hashCode() { return call_method<SCAPIX_META_STRING("hashCode"), jint>(); }
inline jint Float::hashCode(jfloat value) { return call_static_method<SCAPIX_META_STRING("hashCode"), jint>(value); }
inline jboolean Float::equals(ref<java::lang::Object> obj) { return call_method<SCAPIX_META_STRING("equals"), jboolean>(obj); }
inline jint Float::floatToIntBits(jfloat value) { return call_static_method<SCAPIX_META_STRING("floatToIntBits"), jint>(value); }
inline jint Float::floatToRawIntBits(jfloat p1) { return call_static_method<SCAPIX_META_STRING("floatToRawIntBits"), jint>(p1); }
inline jfloat Float::intBitsToFloat(jint p1) { return call_static_method<SCAPIX_META_STRING("intBitsToFloat"), jfloat>(p1); }
inline jint Float::compareTo(ref<java::lang::Float> anotherFloat) { return call_method<SCAPIX_META_STRING("compareTo"), jint>(anotherFloat); }
inline jint Float::compare(jfloat f1, jfloat f2) { return call_static_method<SCAPIX_META_STRING("compare"), jint>(f1, f2); }
inline jfloat Float::sum(jfloat a, jfloat b) { return call_static_method<SCAPIX_META_STRING("sum"), jfloat>(a, b); }
inline jfloat Float::max(jfloat a, jfloat b) { return call_static_method<SCAPIX_META_STRING("max"), jfloat>(a, b); }
inline jfloat Float::min(jfloat a, jfloat b) { return call_static_method<SCAPIX_META_STRING("min"), jfloat>(a, b); }

} // namespace java::lang
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_LANG_FLOAT_H
