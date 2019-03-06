// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/invoke/AbstractValidatingLambdaMetafactory.h>

#ifndef SCAPIX_JAVA_LANG_INVOKE_INNERCLASSLAMBDAMETAFACTORY_H
#define SCAPIX_JAVA_LANG_INVOKE_INNERCLASSLAMBDAMETAFACTORY_H

namespace scapix::java_api {

namespace java::lang { class Class; }
namespace java::lang { class String; }
namespace java::lang::invoke { class MethodHandle; }
namespace java::lang::invoke { class MethodHandles_Lookup; }
namespace java::lang::invoke { class MethodType; }

namespace java::lang::invoke {

// private
class InnerClassLambdaMetafactory : public object_base<SCAPIX_META_STRING("java/lang/invoke/InnerClassLambdaMetafactory"),
	java::lang::invoke::AbstractValidatingLambdaMetafactory>
{
public:

	static ref<InnerClassLambdaMetafactory> new_object(ref<java::lang::invoke::MethodHandles_Lookup> caller, ref<java::lang::invoke::MethodType> invokedType, ref<java::lang::String> samMethodName, ref<java::lang::invoke::MethodType> samMethodType, ref<java::lang::invoke::MethodHandle> implMethod, ref<java::lang::invoke::MethodType> instantiatedMethodType, jboolean isSerializable, ref<link::java::array<java::lang::Class>> markerInterfaces, ref<link::java::array<java::lang::invoke::MethodType>> additionalBridges);

protected:

	InnerClassLambdaMetafactory(handle_type h) : base_(h) {}

};

} // namespace java::lang::invoke
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/invoke/MethodHandle.h>
#include <scapix/java_api/java/lang/invoke/MethodHandles_Lookup.h>
#include <scapix/java_api/java/lang/invoke/MethodType.h>

namespace scapix::java_api {
namespace java::lang::invoke {

inline ref<InnerClassLambdaMetafactory> InnerClassLambdaMetafactory::new_object(ref<java::lang::invoke::MethodHandles_Lookup> caller, ref<java::lang::invoke::MethodType> invokedType, ref<java::lang::String> samMethodName, ref<java::lang::invoke::MethodType> samMethodType, ref<java::lang::invoke::MethodHandle> implMethod, ref<java::lang::invoke::MethodType> instantiatedMethodType, jboolean isSerializable, ref<link::java::array<java::lang::Class>> markerInterfaces, ref<link::java::array<java::lang::invoke::MethodType>> additionalBridges) { return base_::new_object(caller, invokedType, samMethodName, samMethodType, implMethod, instantiatedMethodType, isSerializable, markerInterfaces, additionalBridges); }

} // namespace java::lang::invoke
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_LANG_INVOKE_INNERCLASSLAMBDAMETAFACTORY_H
