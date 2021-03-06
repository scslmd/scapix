// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/w3c/dom/Node.h>

#ifndef SCAPIX_ORG_W3C_DOM_ELEMENT_H
#define SCAPIX_ORG_W3C_DOM_ELEMENT_H

namespace scapix::java_api {

namespace java::lang { class String; }
namespace org::w3c::dom { class Attr; }
namespace org::w3c::dom { class NodeList; }
namespace org::w3c::dom { class TypeInfo; }

namespace org::w3c::dom {

class Element : public object_base<SCAPIX_META_STRING("org/w3c/dom/Element"),
	java::lang::Object,
	org::w3c::dom::Node>
{
public:

	ref<java::lang::String> getTagName();
	ref<java::lang::String> getAttribute(ref<java::lang::String> p1);
	void setAttribute(ref<java::lang::String> p1, ref<java::lang::String> p2);
	void removeAttribute(ref<java::lang::String> p1);
	ref<org::w3c::dom::Attr> getAttributeNode(ref<java::lang::String> p1);
	ref<org::w3c::dom::Attr> setAttributeNode(ref<org::w3c::dom::Attr> p1);
	ref<org::w3c::dom::Attr> removeAttributeNode(ref<org::w3c::dom::Attr> p1);
	ref<org::w3c::dom::NodeList> getElementsByTagName(ref<java::lang::String> p1);
	ref<java::lang::String> getAttributeNS(ref<java::lang::String> p1, ref<java::lang::String> p2);
	void setAttributeNS(ref<java::lang::String> p1, ref<java::lang::String> p2, ref<java::lang::String> p3);
	void removeAttributeNS(ref<java::lang::String> p1, ref<java::lang::String> p2);
	ref<org::w3c::dom::Attr> getAttributeNodeNS(ref<java::lang::String> p1, ref<java::lang::String> p2);
	ref<org::w3c::dom::Attr> setAttributeNodeNS(ref<org::w3c::dom::Attr> p1);
	ref<org::w3c::dom::NodeList> getElementsByTagNameNS(ref<java::lang::String> p1, ref<java::lang::String> p2);
	jboolean hasAttribute(ref<java::lang::String> p1);
	jboolean hasAttributeNS(ref<java::lang::String> p1, ref<java::lang::String> p2);
	ref<org::w3c::dom::TypeInfo> getSchemaTypeInfo();
	void setIdAttribute(ref<java::lang::String> p1, jboolean p2);
	void setIdAttributeNS(ref<java::lang::String> p1, ref<java::lang::String> p2, jboolean p3);
	void setIdAttributeNode(ref<org::w3c::dom::Attr> p1, jboolean p2);

protected:

	Element(handle_type h) : base_(h) {}

};

} // namespace org::w3c::dom
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/w3c/dom/Attr.h>
#include <scapix/java_api/org/w3c/dom/NodeList.h>
#include <scapix/java_api/org/w3c/dom/TypeInfo.h>

namespace scapix::java_api {
namespace org::w3c::dom {

inline ref<java::lang::String> Element::getTagName() { return call_method<SCAPIX_META_STRING("getTagName"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Element::getAttribute(ref<java::lang::String> p1) { return call_method<SCAPIX_META_STRING("getAttribute"), ref<java::lang::String>>(p1); }
inline void Element::setAttribute(ref<java::lang::String> p1, ref<java::lang::String> p2) { return call_method<SCAPIX_META_STRING("setAttribute"), void>(p1, p2); }
inline void Element::removeAttribute(ref<java::lang::String> p1) { return call_method<SCAPIX_META_STRING("removeAttribute"), void>(p1); }
inline ref<org::w3c::dom::Attr> Element::getAttributeNode(ref<java::lang::String> p1) { return call_method<SCAPIX_META_STRING("getAttributeNode"), ref<org::w3c::dom::Attr>>(p1); }
inline ref<org::w3c::dom::Attr> Element::setAttributeNode(ref<org::w3c::dom::Attr> p1) { return call_method<SCAPIX_META_STRING("setAttributeNode"), ref<org::w3c::dom::Attr>>(p1); }
inline ref<org::w3c::dom::Attr> Element::removeAttributeNode(ref<org::w3c::dom::Attr> p1) { return call_method<SCAPIX_META_STRING("removeAttributeNode"), ref<org::w3c::dom::Attr>>(p1); }
inline ref<org::w3c::dom::NodeList> Element::getElementsByTagName(ref<java::lang::String> p1) { return call_method<SCAPIX_META_STRING("getElementsByTagName"), ref<org::w3c::dom::NodeList>>(p1); }
inline ref<java::lang::String> Element::getAttributeNS(ref<java::lang::String> p1, ref<java::lang::String> p2) { return call_method<SCAPIX_META_STRING("getAttributeNS"), ref<java::lang::String>>(p1, p2); }
inline void Element::setAttributeNS(ref<java::lang::String> p1, ref<java::lang::String> p2, ref<java::lang::String> p3) { return call_method<SCAPIX_META_STRING("setAttributeNS"), void>(p1, p2, p3); }
inline void Element::removeAttributeNS(ref<java::lang::String> p1, ref<java::lang::String> p2) { return call_method<SCAPIX_META_STRING("removeAttributeNS"), void>(p1, p2); }
inline ref<org::w3c::dom::Attr> Element::getAttributeNodeNS(ref<java::lang::String> p1, ref<java::lang::String> p2) { return call_method<SCAPIX_META_STRING("getAttributeNodeNS"), ref<org::w3c::dom::Attr>>(p1, p2); }
inline ref<org::w3c::dom::Attr> Element::setAttributeNodeNS(ref<org::w3c::dom::Attr> p1) { return call_method<SCAPIX_META_STRING("setAttributeNodeNS"), ref<org::w3c::dom::Attr>>(p1); }
inline ref<org::w3c::dom::NodeList> Element::getElementsByTagNameNS(ref<java::lang::String> p1, ref<java::lang::String> p2) { return call_method<SCAPIX_META_STRING("getElementsByTagNameNS"), ref<org::w3c::dom::NodeList>>(p1, p2); }
inline jboolean Element::hasAttribute(ref<java::lang::String> p1) { return call_method<SCAPIX_META_STRING("hasAttribute"), jboolean>(p1); }
inline jboolean Element::hasAttributeNS(ref<java::lang::String> p1, ref<java::lang::String> p2) { return call_method<SCAPIX_META_STRING("hasAttributeNS"), jboolean>(p1, p2); }
inline ref<org::w3c::dom::TypeInfo> Element::getSchemaTypeInfo() { return call_method<SCAPIX_META_STRING("getSchemaTypeInfo"), ref<org::w3c::dom::TypeInfo>>(); }
inline void Element::setIdAttribute(ref<java::lang::String> p1, jboolean p2) { return call_method<SCAPIX_META_STRING("setIdAttribute"), void>(p1, p2); }
inline void Element::setIdAttributeNS(ref<java::lang::String> p1, ref<java::lang::String> p2, jboolean p3) { return call_method<SCAPIX_META_STRING("setIdAttributeNS"), void>(p1, p2, p3); }
inline void Element::setIdAttributeNode(ref<org::w3c::dom::Attr> p1, jboolean p2) { return call_method<SCAPIX_META_STRING("setIdAttributeNode"), void>(p1, p2); }

} // namespace org::w3c::dom
} // namespace scapix::java_api

#endif // SCAPIX_ORG_W3C_DOM_ELEMENT_H
