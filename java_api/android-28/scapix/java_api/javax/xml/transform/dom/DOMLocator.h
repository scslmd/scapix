// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/xml/transform/SourceLocator.h>

#ifndef SCAPIX_JAVAX_XML_TRANSFORM_DOM_DOMLOCATOR_H
#define SCAPIX_JAVAX_XML_TRANSFORM_DOM_DOMLOCATOR_H

namespace scapix::java_api {

namespace org::w3c::dom { class Node; }

namespace javax::xml::transform::dom {

class DOMLocator : public object_base<SCAPIX_META_STRING("javax/xml/transform/dom/DOMLocator"),
	java::lang::Object,
	javax::xml::transform::SourceLocator>
{
public:

	ref<org::w3c::dom::Node> getOriginatingNode();

protected:

	DOMLocator(handle_type h) : base_(h) {}

};

} // namespace javax::xml::transform::dom
} // namespace scapix::java_api

#include <scapix/java_api/org/w3c/dom/Node.h>

namespace scapix::java_api {
namespace javax::xml::transform::dom {

inline ref<org::w3c::dom::Node> DOMLocator::getOriginatingNode() { return call_method<SCAPIX_META_STRING("getOriginatingNode"), ref<org::w3c::dom::Node>>(); }

} // namespace javax::xml::transform::dom
} // namespace scapix::java_api

#endif // SCAPIX_JAVAX_XML_TRANSFORM_DOM_DOMLOCATOR_H
