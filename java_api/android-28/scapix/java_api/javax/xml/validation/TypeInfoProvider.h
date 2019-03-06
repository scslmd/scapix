// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVAX_XML_VALIDATION_TYPEINFOPROVIDER_H
#define SCAPIX_JAVAX_XML_VALIDATION_TYPEINFOPROVIDER_H

namespace scapix::java_api {

namespace org::w3c::dom { class TypeInfo; }

namespace javax::xml::validation {

class TypeInfoProvider : public object_base<SCAPIX_META_STRING("javax/xml/validation/TypeInfoProvider"),
	java::lang::Object>
{
public:

	ref<org::w3c::dom::TypeInfo> getElementTypeInfo();
	ref<org::w3c::dom::TypeInfo> getAttributeTypeInfo(jint p1);
	jboolean isIdAttribute(jint p1);
	jboolean isSpecified(jint p1);

protected:

	TypeInfoProvider(handle_type h) : base_(h) {}

};

} // namespace javax::xml::validation
} // namespace scapix::java_api

#include <scapix/java_api/org/w3c/dom/TypeInfo.h>

namespace scapix::java_api {
namespace javax::xml::validation {

inline ref<org::w3c::dom::TypeInfo> TypeInfoProvider::getElementTypeInfo() { return call_method<SCAPIX_META_STRING("getElementTypeInfo"), ref<org::w3c::dom::TypeInfo>>(); }
inline ref<org::w3c::dom::TypeInfo> TypeInfoProvider::getAttributeTypeInfo(jint p1) { return call_method<SCAPIX_META_STRING("getAttributeTypeInfo"), ref<org::w3c::dom::TypeInfo>>(p1); }
inline jboolean TypeInfoProvider::isIdAttribute(jint p1) { return call_method<SCAPIX_META_STRING("isIdAttribute"), jboolean>(p1); }
inline jboolean TypeInfoProvider::isSpecified(jint p1) { return call_method<SCAPIX_META_STRING("isSpecified"), jboolean>(p1); }

} // namespace javax::xml::validation
} // namespace scapix::java_api

#endif // SCAPIX_JAVAX_XML_VALIDATION_TYPEINFOPROVIDER_H
