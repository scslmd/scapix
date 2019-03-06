// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVAX_XML_XPATH_XPATHEXPRESSION_H
#define SCAPIX_JAVAX_XML_XPATH_XPATHEXPRESSION_H

namespace scapix::java_api {

namespace java::lang { class String; }
namespace javax::xml::namespace { class QName; }
namespace org::xml::sax { class InputSource; }

namespace javax::xml::xpath {

class XPathExpression : public object_base<SCAPIX_META_STRING("javax/xml/xpath/XPathExpression"),
	java::lang::Object>
{
public:

	ref<java::lang::Object> evaluate(ref<java::lang::Object> p1, ref<javax::xml::namespace::QName> p2);
	ref<java::lang::String> evaluate(ref<java::lang::Object> p1);
	ref<java::lang::Object> evaluate(ref<org::xml::sax::InputSource> p1, ref<javax::xml::namespace::QName> p2);
	ref<java::lang::String> evaluate(ref<org::xml::sax::InputSource> p1);

protected:

	XPathExpression(handle_type h) : base_(h) {}

};

} // namespace javax::xml::xpath
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/xml/namespace/QName.h>
#include <scapix/java_api/org/xml/sax/InputSource.h>

namespace scapix::java_api {
namespace javax::xml::xpath {

inline ref<java::lang::Object> XPathExpression::evaluate(ref<java::lang::Object> p1, ref<javax::xml::namespace::QName> p2) { return call_method<SCAPIX_META_STRING("evaluate"), ref<java::lang::Object>>(p1, p2); }
inline ref<java::lang::String> XPathExpression::evaluate(ref<java::lang::Object> p1) { return call_method<SCAPIX_META_STRING("evaluate"), ref<java::lang::String>>(p1); }
inline ref<java::lang::Object> XPathExpression::evaluate(ref<org::xml::sax::InputSource> p1, ref<javax::xml::namespace::QName> p2) { return call_method<SCAPIX_META_STRING("evaluate"), ref<java::lang::Object>>(p1, p2); }
inline ref<java::lang::String> XPathExpression::evaluate(ref<org::xml::sax::InputSource> p1) { return call_method<SCAPIX_META_STRING("evaluate"), ref<java::lang::String>>(p1); }

} // namespace javax::xml::xpath
} // namespace scapix::java_api

#endif // SCAPIX_JAVAX_XML_XPATH_XPATHEXPRESSION_H
