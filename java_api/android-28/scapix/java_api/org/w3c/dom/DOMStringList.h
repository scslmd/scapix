// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ORG_W3C_DOM_DOMSTRINGLIST_H
#define SCAPIX_ORG_W3C_DOM_DOMSTRINGLIST_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace org::w3c::dom {

class DOMStringList : public object_base<SCAPIX_META_STRING("org/w3c/dom/DOMStringList"),
	java::lang::Object>
{
public:

	ref<java::lang::String> item(jint p1);
	jint getLength();
	jboolean contains(ref<java::lang::String> p1);

protected:

	DOMStringList(handle_type h) : base_(h) {}

};

} // namespace org::w3c::dom
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace org::w3c::dom {

inline ref<java::lang::String> DOMStringList::item(jint p1) { return call_method<SCAPIX_META_STRING("item"), ref<java::lang::String>>(p1); }
inline jint DOMStringList::getLength() { return call_method<SCAPIX_META_STRING("getLength"), jint>(); }
inline jboolean DOMStringList::contains(ref<java::lang::String> p1) { return call_method<SCAPIX_META_STRING("contains"), jboolean>(p1); }

} // namespace org::w3c::dom
} // namespace scapix::java_api

#endif // SCAPIX_ORG_W3C_DOM_DOMSTRINGLIST_H
