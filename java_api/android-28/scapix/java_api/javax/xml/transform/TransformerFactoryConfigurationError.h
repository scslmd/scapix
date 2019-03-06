// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Error.h>

#ifndef SCAPIX_JAVAX_XML_TRANSFORM_TRANSFORMERFACTORYCONFIGURATIONERROR_H
#define SCAPIX_JAVAX_XML_TRANSFORM_TRANSFORMERFACTORYCONFIGURATIONERROR_H

namespace scapix::java_api {

namespace java::lang { class Exception; }
namespace java::lang { class String; }

namespace javax::xml::transform {

class TransformerFactoryConfigurationError : public object_base<SCAPIX_META_STRING("javax/xml/transform/TransformerFactoryConfigurationError"),
	java::lang::Error>
{
public:

	static ref<TransformerFactoryConfigurationError> new_object();
	static ref<TransformerFactoryConfigurationError> new_object(ref<java::lang::String> msg);
	static ref<TransformerFactoryConfigurationError> new_object(ref<java::lang::Exception> e);
	static ref<TransformerFactoryConfigurationError> new_object(ref<java::lang::Exception> e, ref<java::lang::String> msg);
	ref<java::lang::String> getMessage();
	ref<java::lang::Exception> getException();

protected:

	TransformerFactoryConfigurationError(handle_type h) : base_(h) {}

};

} // namespace javax::xml::transform
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/Exception.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace javax::xml::transform {

inline ref<TransformerFactoryConfigurationError> TransformerFactoryConfigurationError::new_object() { return base_::new_object(); }
inline ref<TransformerFactoryConfigurationError> TransformerFactoryConfigurationError::new_object(ref<java::lang::String> msg) { return base_::new_object(msg); }
inline ref<TransformerFactoryConfigurationError> TransformerFactoryConfigurationError::new_object(ref<java::lang::Exception> e) { return base_::new_object(e); }
inline ref<TransformerFactoryConfigurationError> TransformerFactoryConfigurationError::new_object(ref<java::lang::Exception> e, ref<java::lang::String> msg) { return base_::new_object(e, msg); }
inline ref<java::lang::String> TransformerFactoryConfigurationError::getMessage() { return call_method<SCAPIX_META_STRING("getMessage"), ref<java::lang::String>>(); }
inline ref<java::lang::Exception> TransformerFactoryConfigurationError::getException() { return call_method<SCAPIX_META_STRING("getException"), ref<java::lang::Exception>>(); }

} // namespace javax::xml::transform
} // namespace scapix::java_api

#endif // SCAPIX_JAVAX_XML_TRANSFORM_TRANSFORMERFACTORYCONFIGURATIONERROR_H
