// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_LANG_INVOKE_METHODTYPEFORM_H
#define SCAPIX_JAVA_LANG_INVOKE_METHODTYPEFORM_H

namespace scapix::java_api {

namespace java::lang { class String; }
namespace java::lang::invoke { class LambdaForm; }
namespace java::lang::invoke { class MethodHandle; }
namespace java::lang::invoke { class MethodType; }

namespace java::lang::invoke {

// private
class MethodTypeForm : public object_base<SCAPIX_META_STRING("java/lang/invoke/MethodTypeForm"),
	java::lang::Object>
{
public:

	static jint NO_CHANGE_();
	static jint ERASE_();
	static jint WRAP_();
	static jint UNWRAP_();
	static jint INTS_();
	static jint LONGS_();
	static jint RAW_RETURN_();

	ref<java::lang::invoke::MethodType> erasedType();
	ref<java::lang::invoke::MethodType> basicType();
	ref<java::lang::invoke::MethodHandle> cachedMethodHandle(jint which);
	ref<java::lang::invoke::MethodHandle> setCachedMethodHandle(jint which, ref<java::lang::invoke::MethodHandle> mh);
	ref<java::lang::invoke::LambdaForm> cachedLambdaForm(jint which);
	ref<java::lang::invoke::LambdaForm> setCachedLambdaForm(jint which, ref<java::lang::invoke::LambdaForm> form);
	jint parameterCount();
	jint parameterSlotCount();
	jint returnCount();
	jint returnSlotCount();
	jint primitiveParameterCount();
	jint longPrimitiveParameterCount();
	jint primitiveReturnCount();
	jint longPrimitiveReturnCount();
	jboolean hasPrimitives();
	jboolean hasNonVoidPrimitives();
	jboolean hasLongPrimitives();
	jint parameterToArgSlot(jint i);
	jint argSlotToParameter(jint argSlot);
	static ref<java::lang::invoke::MethodType> canonicalize(ref<java::lang::invoke::MethodType> mt, jint howRet, jint howArgs);
	ref<java::lang::String> toString();

protected:

	MethodTypeForm(handle_type h) : base_(h) {}

};

} // namespace java::lang::invoke
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/invoke/LambdaForm.h>
#include <scapix/java_api/java/lang/invoke/MethodHandle.h>
#include <scapix/java_api/java/lang/invoke/MethodType.h>

namespace scapix::java_api {
namespace java::lang::invoke {

inline jint MethodTypeForm::NO_CHANGE_() { return get_static_field<SCAPIX_META_STRING("NO_CHANGE"), jint>(); }
inline jint MethodTypeForm::ERASE_() { return get_static_field<SCAPIX_META_STRING("ERASE"), jint>(); }
inline jint MethodTypeForm::WRAP_() { return get_static_field<SCAPIX_META_STRING("WRAP"), jint>(); }
inline jint MethodTypeForm::UNWRAP_() { return get_static_field<SCAPIX_META_STRING("UNWRAP"), jint>(); }
inline jint MethodTypeForm::INTS_() { return get_static_field<SCAPIX_META_STRING("INTS"), jint>(); }
inline jint MethodTypeForm::LONGS_() { return get_static_field<SCAPIX_META_STRING("LONGS"), jint>(); }
inline jint MethodTypeForm::RAW_RETURN_() { return get_static_field<SCAPIX_META_STRING("RAW_RETURN"), jint>(); }
inline ref<java::lang::invoke::MethodType> MethodTypeForm::erasedType() { return call_method<SCAPIX_META_STRING("erasedType"), ref<java::lang::invoke::MethodType>>(); }
inline ref<java::lang::invoke::MethodType> MethodTypeForm::basicType() { return call_method<SCAPIX_META_STRING("basicType"), ref<java::lang::invoke::MethodType>>(); }
inline ref<java::lang::invoke::MethodHandle> MethodTypeForm::cachedMethodHandle(jint which) { return call_method<SCAPIX_META_STRING("cachedMethodHandle"), ref<java::lang::invoke::MethodHandle>>(which); }
inline ref<java::lang::invoke::MethodHandle> MethodTypeForm::setCachedMethodHandle(jint which, ref<java::lang::invoke::MethodHandle> mh) { return call_method<SCAPIX_META_STRING("setCachedMethodHandle"), ref<java::lang::invoke::MethodHandle>>(which, mh); }
inline ref<java::lang::invoke::LambdaForm> MethodTypeForm::cachedLambdaForm(jint which) { return call_method<SCAPIX_META_STRING("cachedLambdaForm"), ref<java::lang::invoke::LambdaForm>>(which); }
inline ref<java::lang::invoke::LambdaForm> MethodTypeForm::setCachedLambdaForm(jint which, ref<java::lang::invoke::LambdaForm> form) { return call_method<SCAPIX_META_STRING("setCachedLambdaForm"), ref<java::lang::invoke::LambdaForm>>(which, form); }
inline jint MethodTypeForm::parameterCount() { return call_method<SCAPIX_META_STRING("parameterCount"), jint>(); }
inline jint MethodTypeForm::parameterSlotCount() { return call_method<SCAPIX_META_STRING("parameterSlotCount"), jint>(); }
inline jint MethodTypeForm::returnCount() { return call_method<SCAPIX_META_STRING("returnCount"), jint>(); }
inline jint MethodTypeForm::returnSlotCount() { return call_method<SCAPIX_META_STRING("returnSlotCount"), jint>(); }
inline jint MethodTypeForm::primitiveParameterCount() { return call_method<SCAPIX_META_STRING("primitiveParameterCount"), jint>(); }
inline jint MethodTypeForm::longPrimitiveParameterCount() { return call_method<SCAPIX_META_STRING("longPrimitiveParameterCount"), jint>(); }
inline jint MethodTypeForm::primitiveReturnCount() { return call_method<SCAPIX_META_STRING("primitiveReturnCount"), jint>(); }
inline jint MethodTypeForm::longPrimitiveReturnCount() { return call_method<SCAPIX_META_STRING("longPrimitiveReturnCount"), jint>(); }
inline jboolean MethodTypeForm::hasPrimitives() { return call_method<SCAPIX_META_STRING("hasPrimitives"), jboolean>(); }
inline jboolean MethodTypeForm::hasNonVoidPrimitives() { return call_method<SCAPIX_META_STRING("hasNonVoidPrimitives"), jboolean>(); }
inline jboolean MethodTypeForm::hasLongPrimitives() { return call_method<SCAPIX_META_STRING("hasLongPrimitives"), jboolean>(); }
inline jint MethodTypeForm::parameterToArgSlot(jint i) { return call_method<SCAPIX_META_STRING("parameterToArgSlot"), jint>(i); }
inline jint MethodTypeForm::argSlotToParameter(jint argSlot) { return call_method<SCAPIX_META_STRING("argSlotToParameter"), jint>(argSlot); }
inline ref<java::lang::invoke::MethodType> MethodTypeForm::canonicalize(ref<java::lang::invoke::MethodType> mt, jint howRet, jint howArgs) { return call_static_method<SCAPIX_META_STRING("canonicalize"), ref<java::lang::invoke::MethodType>>(mt, howRet, howArgs); }
inline ref<java::lang::String> MethodTypeForm::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }

} // namespace java::lang::invoke
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_LANG_INVOKE_METHODTYPEFORM_H
