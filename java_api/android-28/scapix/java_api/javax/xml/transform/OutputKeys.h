// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVAX_XML_TRANSFORM_OUTPUTKEYS_H
#define SCAPIX_JAVAX_XML_TRANSFORM_OUTPUTKEYS_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace javax::xml::transform {

class OutputKeys : public object_base<SCAPIX_META_STRING("javax/xml/transform/OutputKeys"),
	java::lang::Object>
{
public:

	static ref<java::lang::String> CDATA_SECTION_ELEMENTS_();
	static ref<java::lang::String> DOCTYPE_PUBLIC_();
	static ref<java::lang::String> DOCTYPE_SYSTEM_();
	static ref<java::lang::String> ENCODING_();
	static ref<java::lang::String> INDENT_();
	static ref<java::lang::String> MEDIA_TYPE_();
	static ref<java::lang::String> METHOD_();
	static ref<java::lang::String> OMIT_XML_DECLARATION_();
	static ref<java::lang::String> STANDALONE_();
	static ref<java::lang::String> VERSION_();


protected:

	OutputKeys(handle_type h) : base_(h) {}

};

} // namespace javax::xml::transform
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace javax::xml::transform {

inline ref<java::lang::String> OutputKeys::CDATA_SECTION_ELEMENTS_() { return get_static_field<SCAPIX_META_STRING("CDATA_SECTION_ELEMENTS"), ref<java::lang::String>>(); }
inline ref<java::lang::String> OutputKeys::DOCTYPE_PUBLIC_() { return get_static_field<SCAPIX_META_STRING("DOCTYPE_PUBLIC"), ref<java::lang::String>>(); }
inline ref<java::lang::String> OutputKeys::DOCTYPE_SYSTEM_() { return get_static_field<SCAPIX_META_STRING("DOCTYPE_SYSTEM"), ref<java::lang::String>>(); }
inline ref<java::lang::String> OutputKeys::ENCODING_() { return get_static_field<SCAPIX_META_STRING("ENCODING"), ref<java::lang::String>>(); }
inline ref<java::lang::String> OutputKeys::INDENT_() { return get_static_field<SCAPIX_META_STRING("INDENT"), ref<java::lang::String>>(); }
inline ref<java::lang::String> OutputKeys::MEDIA_TYPE_() { return get_static_field<SCAPIX_META_STRING("MEDIA_TYPE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> OutputKeys::METHOD_() { return get_static_field<SCAPIX_META_STRING("METHOD"), ref<java::lang::String>>(); }
inline ref<java::lang::String> OutputKeys::OMIT_XML_DECLARATION_() { return get_static_field<SCAPIX_META_STRING("OMIT_XML_DECLARATION"), ref<java::lang::String>>(); }
inline ref<java::lang::String> OutputKeys::STANDALONE_() { return get_static_field<SCAPIX_META_STRING("STANDALONE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> OutputKeys::VERSION_() { return get_static_field<SCAPIX_META_STRING("VERSION"), ref<java::lang::String>>(); }

} // namespace javax::xml::transform
} // namespace scapix::java_api

#endif // SCAPIX_JAVAX_XML_TRANSFORM_OUTPUTKEYS_H
