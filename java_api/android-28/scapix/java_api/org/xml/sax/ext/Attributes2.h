// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/xml/sax/Attributes.h>

#ifndef SCAPIX_ORG_XML_SAX_EXT_ATTRIBUTES2_H
#define SCAPIX_ORG_XML_SAX_EXT_ATTRIBUTES2_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace org::xml::sax::ext {

class Attributes2 : public object_base<SCAPIX_META_STRING("org/xml/sax/ext/Attributes2"),
	java::lang::Object,
	org::xml::sax::Attributes>
{
public:

	jboolean isDeclared(jint p1);
	jboolean isDeclared(ref<java::lang::String> p1);
	jboolean isDeclared(ref<java::lang::String> p1, ref<java::lang::String> p2);
	jboolean isSpecified(jint p1);
	jboolean isSpecified(ref<java::lang::String> p1, ref<java::lang::String> p2);
	jboolean isSpecified(ref<java::lang::String> p1);

protected:

	Attributes2(handle_type h) : base_(h) {}

};

} // namespace org::xml::sax::ext
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace org::xml::sax::ext {

inline jboolean Attributes2::isDeclared(jint p1) { return call_method<SCAPIX_META_STRING("isDeclared"), jboolean>(p1); }
inline jboolean Attributes2::isDeclared(ref<java::lang::String> p1) { return call_method<SCAPIX_META_STRING("isDeclared"), jboolean>(p1); }
inline jboolean Attributes2::isDeclared(ref<java::lang::String> p1, ref<java::lang::String> p2) { return call_method<SCAPIX_META_STRING("isDeclared"), jboolean>(p1, p2); }
inline jboolean Attributes2::isSpecified(jint p1) { return call_method<SCAPIX_META_STRING("isSpecified"), jboolean>(p1); }
inline jboolean Attributes2::isSpecified(ref<java::lang::String> p1, ref<java::lang::String> p2) { return call_method<SCAPIX_META_STRING("isSpecified"), jboolean>(p1, p2); }
inline jboolean Attributes2::isSpecified(ref<java::lang::String> p1) { return call_method<SCAPIX_META_STRING("isSpecified"), jboolean>(p1); }

} // namespace org::xml::sax::ext
} // namespace scapix::java_api

#endif // SCAPIX_ORG_XML_SAX_EXT_ATTRIBUTES2_H
