// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ORG_W3C_DOM_NODELIST_H
#define SCAPIX_ORG_W3C_DOM_NODELIST_H

namespace scapix::java_api {

namespace org::w3c::dom { class Node; }

namespace org::w3c::dom {

class NodeList : public object_base<SCAPIX_META_STRING("org/w3c/dom/NodeList"),
	java::lang::Object>
{
public:

	ref<org::w3c::dom::Node> item(jint p1);
	jint getLength();

protected:

	NodeList(handle_type h) : base_(h) {}

};

} // namespace org::w3c::dom
} // namespace scapix::java_api

#include <scapix/java_api/org/w3c/dom/Node.h>

namespace scapix::java_api {
namespace org::w3c::dom {

inline ref<org::w3c::dom::Node> NodeList::item(jint p1) { return call_method<SCAPIX_META_STRING("item"), ref<org::w3c::dom::Node>>(p1); }
inline jint NodeList::getLength() { return call_method<SCAPIX_META_STRING("getLength"), jint>(); }

} // namespace org::w3c::dom
} // namespace scapix::java_api

#endif // SCAPIX_ORG_W3C_DOM_NODELIST_H
