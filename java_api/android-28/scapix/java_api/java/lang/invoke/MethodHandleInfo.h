// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_LANG_INVOKE_METHODHANDLEINFO_H
#define SCAPIX_JAVA_LANG_INVOKE_METHODHANDLEINFO_H

namespace scapix::java_api {

namespace java::lang { class Class; }
namespace java::lang { class String; }
namespace java::lang::invoke { class MethodHandles_Lookup; }
namespace java::lang::invoke { class MethodType; }
namespace java::lang::reflect { class Member; }

namespace java::lang::invoke {

class MethodHandleInfo : public object_base<SCAPIX_META_STRING("java/lang/invoke/MethodHandleInfo"),
	java::lang::Object>
{
public:

	static jint REF_getField();
	static jint REF_getStatic();
	static jint REF_invokeInterface();
	static jint REF_invokeSpecial();
	static jint REF_invokeStatic();
	static jint REF_invokeVirtual();
	static jint REF_newInvokeSpecial();
	static jint REF_putField();
	static jint REF_putStatic();

	jint getReferenceKind();
	ref<java::lang::Class> getDeclaringClass();
	ref<java::lang::String> getName();
	ref<java::lang::invoke::MethodType> getMethodType();
	ref<java::lang::reflect::Member> reflectAs(ref<java::lang::Class> p1, ref<java::lang::invoke::MethodHandles_Lookup> p2);
	jint getModifiers();
	jboolean isVarArgs();
	static ref<java::lang::String> referenceKindToString(jint referenceKind);
	static ref<java::lang::String> toString(jint kind, ref<java::lang::Class> defc, ref<java::lang::String> name, ref<java::lang::invoke::MethodType> type);
	static jboolean refKindIsValid(jint refKind);
	static jboolean refKindIsField(jint refKind);
	static ref<java::lang::String> refKindName(jint refKind);

protected:

	MethodHandleInfo(handle_type h) : base_(h) {}

};

} // namespace java::lang::invoke
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/invoke/MethodHandles_Lookup.h>
#include <scapix/java_api/java/lang/invoke/MethodType.h>
#include <scapix/java_api/java/lang/reflect/Member.h>

namespace scapix::java_api {
namespace java::lang::invoke {

inline jint MethodHandleInfo::REF_getField() { return get_static_field<SCAPIX_META_STRING("REF_getField"), jint>(); }
inline jint MethodHandleInfo::REF_getStatic() { return get_static_field<SCAPIX_META_STRING("REF_getStatic"), jint>(); }
inline jint MethodHandleInfo::REF_invokeInterface() { return get_static_field<SCAPIX_META_STRING("REF_invokeInterface"), jint>(); }
inline jint MethodHandleInfo::REF_invokeSpecial() { return get_static_field<SCAPIX_META_STRING("REF_invokeSpecial"), jint>(); }
inline jint MethodHandleInfo::REF_invokeStatic() { return get_static_field<SCAPIX_META_STRING("REF_invokeStatic"), jint>(); }
inline jint MethodHandleInfo::REF_invokeVirtual() { return get_static_field<SCAPIX_META_STRING("REF_invokeVirtual"), jint>(); }
inline jint MethodHandleInfo::REF_newInvokeSpecial() { return get_static_field<SCAPIX_META_STRING("REF_newInvokeSpecial"), jint>(); }
inline jint MethodHandleInfo::REF_putField() { return get_static_field<SCAPIX_META_STRING("REF_putField"), jint>(); }
inline jint MethodHandleInfo::REF_putStatic() { return get_static_field<SCAPIX_META_STRING("REF_putStatic"), jint>(); }
inline jint MethodHandleInfo::getReferenceKind() { return call_method<SCAPIX_META_STRING("getReferenceKind"), jint>(); }
inline ref<java::lang::Class> MethodHandleInfo::getDeclaringClass() { return call_method<SCAPIX_META_STRING("getDeclaringClass"), ref<java::lang::Class>>(); }
inline ref<java::lang::String> MethodHandleInfo::getName() { return call_method<SCAPIX_META_STRING("getName"), ref<java::lang::String>>(); }
inline ref<java::lang::invoke::MethodType> MethodHandleInfo::getMethodType() { return call_method<SCAPIX_META_STRING("getMethodType"), ref<java::lang::invoke::MethodType>>(); }
inline ref<java::lang::reflect::Member> MethodHandleInfo::reflectAs(ref<java::lang::Class> p1, ref<java::lang::invoke::MethodHandles_Lookup> p2) { return call_method<SCAPIX_META_STRING("reflectAs"), ref<java::lang::reflect::Member>>(p1, p2); }
inline jint MethodHandleInfo::getModifiers() { return call_method<SCAPIX_META_STRING("getModifiers"), jint>(); }
inline jboolean MethodHandleInfo::isVarArgs() { return call_method<SCAPIX_META_STRING("isVarArgs"), jboolean>(); }
inline ref<java::lang::String> MethodHandleInfo::referenceKindToString(jint referenceKind) { return call_static_method<SCAPIX_META_STRING("referenceKindToString"), ref<java::lang::String>>(referenceKind); }
inline ref<java::lang::String> MethodHandleInfo::toString(jint kind, ref<java::lang::Class> defc, ref<java::lang::String> name, ref<java::lang::invoke::MethodType> type) { return call_static_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(kind, defc, name, type); }
inline jboolean MethodHandleInfo::refKindIsValid(jint refKind) { return call_static_method<SCAPIX_META_STRING("refKindIsValid"), jboolean>(refKind); }
inline jboolean MethodHandleInfo::refKindIsField(jint refKind) { return call_static_method<SCAPIX_META_STRING("refKindIsField"), jboolean>(refKind); }
inline ref<java::lang::String> MethodHandleInfo::refKindName(jint refKind) { return call_static_method<SCAPIX_META_STRING("refKindName"), ref<java::lang::String>>(refKind); }

} // namespace java::lang::invoke
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_LANG_INVOKE_METHODHANDLEINFO_H
