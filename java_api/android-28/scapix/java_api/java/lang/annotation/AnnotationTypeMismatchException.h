// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/RuntimeException.h>

#ifndef SCAPIX_JAVA_LANG_ANNOTATION_ANNOTATIONTYPEMISMATCHEXCEPTION_H
#define SCAPIX_JAVA_LANG_ANNOTATION_ANNOTATIONTYPEMISMATCHEXCEPTION_H

namespace scapix::java_api {

namespace java::lang { class String; }
namespace java::lang::reflect { class Method; }

namespace java::lang::annotation {

class AnnotationTypeMismatchException : public object_base<SCAPIX_META_STRING("java/lang/annotation/AnnotationTypeMismatchException"),
	java::lang::RuntimeException>
{
public:

	static ref<AnnotationTypeMismatchException> new_object(ref<java::lang::reflect::Method> element, ref<java::lang::String> foundType);
	ref<java::lang::reflect::Method> element();
	ref<java::lang::String> foundType();

protected:

	AnnotationTypeMismatchException(handle_type h) : base_(h) {}

};

} // namespace java::lang::annotation
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/reflect/Method.h>

namespace scapix::java_api {
namespace java::lang::annotation {

inline ref<AnnotationTypeMismatchException> AnnotationTypeMismatchException::new_object(ref<java::lang::reflect::Method> element, ref<java::lang::String> foundType) { return base_::new_object(element, foundType); }
inline ref<java::lang::reflect::Method> AnnotationTypeMismatchException::element() { return call_method<SCAPIX_META_STRING("element"), ref<java::lang::reflect::Method>>(); }
inline ref<java::lang::String> AnnotationTypeMismatchException::foundType() { return call_method<SCAPIX_META_STRING("foundType"), ref<java::lang::String>>(); }

} // namespace java::lang::annotation
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_LANG_ANNOTATION_ANNOTATIONTYPEMISMATCHEXCEPTION_H
