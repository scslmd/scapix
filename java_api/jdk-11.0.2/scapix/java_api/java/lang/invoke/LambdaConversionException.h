// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Exception.h>

#ifndef SCAPIX_JAVA_LANG_INVOKE_LAMBDACONVERSIONEXCEPTION_H
#define SCAPIX_JAVA_LANG_INVOKE_LAMBDACONVERSIONEXCEPTION_H

namespace scapix::java_api {

namespace java::lang { class String; }
namespace java::lang { class Throwable; }

namespace java::lang::invoke {

class LambdaConversionException : public object_base<SCAPIX_META_STRING("java/lang/invoke/LambdaConversionException"),
	java::lang::Exception>
{
public:

	static ref<LambdaConversionException> new_object();
	static ref<LambdaConversionException> new_object(ref<java::lang::String> message);
	static ref<LambdaConversionException> new_object(ref<java::lang::String> message, ref<java::lang::Throwable> cause);
	static ref<LambdaConversionException> new_object(ref<java::lang::Throwable> cause);
	static ref<LambdaConversionException> new_object(ref<java::lang::String> message, ref<java::lang::Throwable> cause, jboolean enableSuppression, jboolean writableStackTrace);

protected:

	LambdaConversionException(handle_type h) : base_(h) {}

};

} // namespace java::lang::invoke
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Throwable.h>

namespace scapix::java_api {
namespace java::lang::invoke {

inline ref<LambdaConversionException> LambdaConversionException::new_object() { return base_::new_object(); }
inline ref<LambdaConversionException> LambdaConversionException::new_object(ref<java::lang::String> message) { return base_::new_object(message); }
inline ref<LambdaConversionException> LambdaConversionException::new_object(ref<java::lang::String> message, ref<java::lang::Throwable> cause) { return base_::new_object(message, cause); }
inline ref<LambdaConversionException> LambdaConversionException::new_object(ref<java::lang::Throwable> cause) { return base_::new_object(cause); }
inline ref<LambdaConversionException> LambdaConversionException::new_object(ref<java::lang::String> message, ref<java::lang::Throwable> cause, jboolean enableSuppression, jboolean writableStackTrace) { return base_::new_object(message, cause, enableSuppression, writableStackTrace); }

} // namespace java::lang::invoke
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_LANG_INVOKE_LAMBDACONVERSIONEXCEPTION_H
