// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_LANG_INVOKE_METHODTYPE_H
#define SCAPIX_JAVA_LANG_INVOKE_METHODTYPE_H

namespace scapix::java_api {

namespace java::lang { class Class; }
namespace java::lang { class ClassLoader; }
namespace java::lang { class String; }
namespace java::util { class List; }

namespace java::lang::invoke {

class MethodType : public object_base<SCAPIX_META_STRING("java/lang/invoke/MethodType"),
	java::lang::Object,
	java::io::Serializable>
{
public:

	static ref<java::lang::invoke::MethodType> methodType(ref<java::lang::Class> rtype, ref<link::java::array<java::lang::Class>> ptypes);
	static ref<java::lang::invoke::MethodType> methodType(ref<java::lang::Class> rtype, ref<java::util::List> ptypes);
	static ref<java::lang::invoke::MethodType> methodType(ref<java::lang::Class> rtype, ref<java::lang::Class> ptype0, ref<link::java::array<java::lang::Class>> ptypes);
	static ref<java::lang::invoke::MethodType> methodType(ref<java::lang::Class> rtype);
	static ref<java::lang::invoke::MethodType> methodType(ref<java::lang::Class> rtype, ref<java::lang::Class> ptype0);
	static ref<java::lang::invoke::MethodType> methodType(ref<java::lang::Class> rtype, ref<java::lang::invoke::MethodType> ptypes);
	static ref<java::lang::invoke::MethodType> genericMethodType(jint objectArgCount, jboolean finalArray);
	static ref<java::lang::invoke::MethodType> genericMethodType(jint objectArgCount);
	ref<java::lang::invoke::MethodType> changeParameterType(jint num, ref<java::lang::Class> nptype);
	ref<java::lang::invoke::MethodType> insertParameterTypes(jint num, ref<link::java::array<java::lang::Class>> ptypesToInsert);
	ref<java::lang::invoke::MethodType> appendParameterTypes(ref<link::java::array<java::lang::Class>> ptypesToInsert);
	ref<java::lang::invoke::MethodType> insertParameterTypes(jint num, ref<java::util::List> ptypesToInsert);
	ref<java::lang::invoke::MethodType> appendParameterTypes(ref<java::util::List> ptypesToInsert);
	ref<java::lang::invoke::MethodType> dropParameterTypes(jint start, jint end);
	ref<java::lang::invoke::MethodType> changeReturnType(ref<java::lang::Class> nrtype);
	jboolean hasPrimitives();
	jboolean hasWrappers();
	ref<java::lang::invoke::MethodType> erase();
	ref<java::lang::invoke::MethodType> generic();
	ref<java::lang::invoke::MethodType> wrap();
	ref<java::lang::invoke::MethodType> unwrap();
	ref<java::lang::Class> parameterType(jint num);
	jint parameterCount();
	ref<java::lang::Class> returnType();
	ref<java::util::List> parameterList();
	ref<java::lang::Class> lastParameterType();
	ref<link::java::array<java::lang::Class>> parameterArray();
	jboolean equals(ref<java::lang::Object> x);
	jint hashCode();
	ref<java::lang::String> toString();
	static ref<java::lang::invoke::MethodType> fromMethodDescriptorString(ref<java::lang::String> descriptor, ref<java::lang::ClassLoader> loader);
	ref<java::lang::String> toMethodDescriptorString();

protected:

	MethodType(handle_type h) : base_(h) {}

};

} // namespace java::lang::invoke
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/ClassLoader.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>

namespace scapix::java_api {
namespace java::lang::invoke {

inline ref<java::lang::invoke::MethodType> MethodType::methodType(ref<java::lang::Class> rtype, ref<link::java::array<java::lang::Class>> ptypes) { return call_static_method<SCAPIX_META_STRING("methodType"), ref<java::lang::invoke::MethodType>>(rtype, ptypes); }
inline ref<java::lang::invoke::MethodType> MethodType::methodType(ref<java::lang::Class> rtype, ref<java::util::List> ptypes) { return call_static_method<SCAPIX_META_STRING("methodType"), ref<java::lang::invoke::MethodType>>(rtype, ptypes); }
inline ref<java::lang::invoke::MethodType> MethodType::methodType(ref<java::lang::Class> rtype, ref<java::lang::Class> ptype0, ref<link::java::array<java::lang::Class>> ptypes) { return call_static_method<SCAPIX_META_STRING("methodType"), ref<java::lang::invoke::MethodType>>(rtype, ptype0, ptypes); }
inline ref<java::lang::invoke::MethodType> MethodType::methodType(ref<java::lang::Class> rtype) { return call_static_method<SCAPIX_META_STRING("methodType"), ref<java::lang::invoke::MethodType>>(rtype); }
inline ref<java::lang::invoke::MethodType> MethodType::methodType(ref<java::lang::Class> rtype, ref<java::lang::Class> ptype0) { return call_static_method<SCAPIX_META_STRING("methodType"), ref<java::lang::invoke::MethodType>>(rtype, ptype0); }
inline ref<java::lang::invoke::MethodType> MethodType::methodType(ref<java::lang::Class> rtype, ref<java::lang::invoke::MethodType> ptypes) { return call_static_method<SCAPIX_META_STRING("methodType"), ref<java::lang::invoke::MethodType>>(rtype, ptypes); }
inline ref<java::lang::invoke::MethodType> MethodType::genericMethodType(jint objectArgCount, jboolean finalArray) { return call_static_method<SCAPIX_META_STRING("genericMethodType"), ref<java::lang::invoke::MethodType>>(objectArgCount, finalArray); }
inline ref<java::lang::invoke::MethodType> MethodType::genericMethodType(jint objectArgCount) { return call_static_method<SCAPIX_META_STRING("genericMethodType"), ref<java::lang::invoke::MethodType>>(objectArgCount); }
inline ref<java::lang::invoke::MethodType> MethodType::changeParameterType(jint num, ref<java::lang::Class> nptype) { return call_method<SCAPIX_META_STRING("changeParameterType"), ref<java::lang::invoke::MethodType>>(num, nptype); }
inline ref<java::lang::invoke::MethodType> MethodType::insertParameterTypes(jint num, ref<link::java::array<java::lang::Class>> ptypesToInsert) { return call_method<SCAPIX_META_STRING("insertParameterTypes"), ref<java::lang::invoke::MethodType>>(num, ptypesToInsert); }
inline ref<java::lang::invoke::MethodType> MethodType::appendParameterTypes(ref<link::java::array<java::lang::Class>> ptypesToInsert) { return call_method<SCAPIX_META_STRING("appendParameterTypes"), ref<java::lang::invoke::MethodType>>(ptypesToInsert); }
inline ref<java::lang::invoke::MethodType> MethodType::insertParameterTypes(jint num, ref<java::util::List> ptypesToInsert) { return call_method<SCAPIX_META_STRING("insertParameterTypes"), ref<java::lang::invoke::MethodType>>(num, ptypesToInsert); }
inline ref<java::lang::invoke::MethodType> MethodType::appendParameterTypes(ref<java::util::List> ptypesToInsert) { return call_method<SCAPIX_META_STRING("appendParameterTypes"), ref<java::lang::invoke::MethodType>>(ptypesToInsert); }
inline ref<java::lang::invoke::MethodType> MethodType::dropParameterTypes(jint start, jint end) { return call_method<SCAPIX_META_STRING("dropParameterTypes"), ref<java::lang::invoke::MethodType>>(start, end); }
inline ref<java::lang::invoke::MethodType> MethodType::changeReturnType(ref<java::lang::Class> nrtype) { return call_method<SCAPIX_META_STRING("changeReturnType"), ref<java::lang::invoke::MethodType>>(nrtype); }
inline jboolean MethodType::hasPrimitives() { return call_method<SCAPIX_META_STRING("hasPrimitives"), jboolean>(); }
inline jboolean MethodType::hasWrappers() { return call_method<SCAPIX_META_STRING("hasWrappers"), jboolean>(); }
inline ref<java::lang::invoke::MethodType> MethodType::erase() { return call_method<SCAPIX_META_STRING("erase"), ref<java::lang::invoke::MethodType>>(); }
inline ref<java::lang::invoke::MethodType> MethodType::generic() { return call_method<SCAPIX_META_STRING("generic"), ref<java::lang::invoke::MethodType>>(); }
inline ref<java::lang::invoke::MethodType> MethodType::wrap() { return call_method<SCAPIX_META_STRING("wrap"), ref<java::lang::invoke::MethodType>>(); }
inline ref<java::lang::invoke::MethodType> MethodType::unwrap() { return call_method<SCAPIX_META_STRING("unwrap"), ref<java::lang::invoke::MethodType>>(); }
inline ref<java::lang::Class> MethodType::parameterType(jint num) { return call_method<SCAPIX_META_STRING("parameterType"), ref<java::lang::Class>>(num); }
inline jint MethodType::parameterCount() { return call_method<SCAPIX_META_STRING("parameterCount"), jint>(); }
inline ref<java::lang::Class> MethodType::returnType() { return call_method<SCAPIX_META_STRING("returnType"), ref<java::lang::Class>>(); }
inline ref<java::util::List> MethodType::parameterList() { return call_method<SCAPIX_META_STRING("parameterList"), ref<java::util::List>>(); }
inline ref<java::lang::Class> MethodType::lastParameterType() { return call_method<SCAPIX_META_STRING("lastParameterType"), ref<java::lang::Class>>(); }
inline ref<link::java::array<java::lang::Class>> MethodType::parameterArray() { return call_method<SCAPIX_META_STRING("parameterArray"), ref<link::java::array<java::lang::Class>>>(); }
inline jboolean MethodType::equals(ref<java::lang::Object> x) { return call_method<SCAPIX_META_STRING("equals"), jboolean>(x); }
inline jint MethodType::hashCode() { return call_method<SCAPIX_META_STRING("hashCode"), jint>(); }
inline ref<java::lang::String> MethodType::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }
inline ref<java::lang::invoke::MethodType> MethodType::fromMethodDescriptorString(ref<java::lang::String> descriptor, ref<java::lang::ClassLoader> loader) { return call_static_method<SCAPIX_META_STRING("fromMethodDescriptorString"), ref<java::lang::invoke::MethodType>>(descriptor, loader); }
inline ref<java::lang::String> MethodType::toMethodDescriptorString() { return call_method<SCAPIX_META_STRING("toMethodDescriptorString"), ref<java::lang::String>>(); }

} // namespace java::lang::invoke
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_LANG_INVOKE_METHODTYPE_H
