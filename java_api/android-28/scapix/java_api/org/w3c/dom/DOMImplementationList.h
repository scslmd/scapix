// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ORG_W3C_DOM_DOMIMPLEMENTATIONLIST_H
#define SCAPIX_ORG_W3C_DOM_DOMIMPLEMENTATIONLIST_H

namespace scapix::java_api {

namespace org::w3c::dom { class DOMImplementation; }

namespace org::w3c::dom {

class DOMImplementationList : public object_base<SCAPIX_META_STRING("org/w3c/dom/DOMImplementationList"),
	java::lang::Object>
{
public:

	ref<org::w3c::dom::DOMImplementation> item(jint p1);
	jint getLength();

protected:

	DOMImplementationList(handle_type h) : base_(h) {}

};

} // namespace org::w3c::dom
} // namespace scapix::java_api

#include <scapix/java_api/org/w3c/dom/DOMImplementation.h>

namespace scapix::java_api {
namespace org::w3c::dom {

inline ref<org::w3c::dom::DOMImplementation> DOMImplementationList::item(jint p1) { return call_method<SCAPIX_META_STRING("item"), ref<org::w3c::dom::DOMImplementation>>(p1); }
inline jint DOMImplementationList::getLength() { return call_method<SCAPIX_META_STRING("getLength"), jint>(); }

} // namespace org::w3c::dom
} // namespace scapix::java_api

#endif // SCAPIX_ORG_W3C_DOM_DOMIMPLEMENTATIONLIST_H
