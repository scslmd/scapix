// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ORG_XML_SAX_ERRORHANDLER_H
#define SCAPIX_ORG_XML_SAX_ERRORHANDLER_H

namespace scapix::java_api {

namespace org::xml::sax { class SAXParseException; }

namespace org::xml::sax {

class ErrorHandler : public object_base<SCAPIX_META_STRING("org/xml/sax/ErrorHandler"),
	java::lang::Object>
{
public:

	void warning(ref<org::xml::sax::SAXParseException> p1);
	void error(ref<org::xml::sax::SAXParseException> p1);
	void fatalError(ref<org::xml::sax::SAXParseException> p1);

protected:

	ErrorHandler(handle_type h) : base_(h) {}

};

} // namespace org::xml::sax
} // namespace scapix::java_api

#include <scapix/java_api/org/xml/sax/SAXParseException.h>

namespace scapix::java_api {
namespace org::xml::sax {

inline void ErrorHandler::warning(ref<org::xml::sax::SAXParseException> p1) { return call_method<SCAPIX_META_STRING("warning"), void>(p1); }
inline void ErrorHandler::error(ref<org::xml::sax::SAXParseException> p1) { return call_method<SCAPIX_META_STRING("error"), void>(p1); }
inline void ErrorHandler::fatalError(ref<org::xml::sax::SAXParseException> p1) { return call_method<SCAPIX_META_STRING("fatalError"), void>(p1); }

} // namespace org::xml::sax
} // namespace scapix::java_api

#endif // SCAPIX_ORG_XML_SAX_ERRORHANDLER_H
