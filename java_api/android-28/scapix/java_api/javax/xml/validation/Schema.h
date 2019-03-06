// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVAX_XML_VALIDATION_SCHEMA_H
#define SCAPIX_JAVAX_XML_VALIDATION_SCHEMA_H

namespace scapix::java_api {

namespace javax::xml::validation { class Validator; }
namespace javax::xml::validation { class ValidatorHandler; }

namespace javax::xml::validation {

class Schema : public object_base<SCAPIX_META_STRING("javax/xml/validation/Schema"),
	java::lang::Object>
{
public:

	ref<javax::xml::validation::Validator> newValidator();
	ref<javax::xml::validation::ValidatorHandler> newValidatorHandler();

protected:

	Schema(handle_type h) : base_(h) {}

};

} // namespace javax::xml::validation
} // namespace scapix::java_api

#include <scapix/java_api/javax/xml/validation/Validator.h>
#include <scapix/java_api/javax/xml/validation/ValidatorHandler.h>

namespace scapix::java_api {
namespace javax::xml::validation {

inline ref<javax::xml::validation::Validator> Schema::newValidator() { return call_method<SCAPIX_META_STRING("newValidator"), ref<javax::xml::validation::Validator>>(); }
inline ref<javax::xml::validation::ValidatorHandler> Schema::newValidatorHandler() { return call_method<SCAPIX_META_STRING("newValidatorHandler"), ref<javax::xml::validation::ValidatorHandler>>(); }

} // namespace javax::xml::validation
} // namespace scapix::java_api

#endif // SCAPIX_JAVAX_XML_VALIDATION_SCHEMA_H
