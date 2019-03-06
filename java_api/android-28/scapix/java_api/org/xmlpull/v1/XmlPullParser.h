// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ORG_XMLPULL_V1_XMLPULLPARSER_H
#define SCAPIX_ORG_XMLPULL_V1_XMLPULLPARSER_H

namespace scapix::java_api {

namespace java::io { class InputStream; }
namespace java::io { class Reader; }
namespace java::lang { class String; }

namespace org::xmlpull::v1 {

class XmlPullParser : public object_base<SCAPIX_META_STRING("org/xmlpull/v1/XmlPullParser"),
	java::lang::Object>
{
public:

	static jint CDSECT_();
	static jint COMMENT_();
	static jint DOCDECL_();
	static jint END_DOCUMENT_();
	static jint END_TAG_();
	static jint ENTITY_REF_();
	static ref<java::lang::String> FEATURE_PROCESS_DOCDECL_();
	static ref<java::lang::String> FEATURE_PROCESS_NAMESPACES_();
	static ref<java::lang::String> FEATURE_REPORT_NAMESPACE_ATTRIBUTES_();
	static ref<java::lang::String> FEATURE_VALIDATION_();
	static jint IGNORABLE_WHITESPACE_();
	static ref<java::lang::String> NO_NAMESPACE_();
	static jint PROCESSING_INSTRUCTION_();
	static jint START_DOCUMENT_();
	static jint START_TAG_();
	static jint TEXT_();
	static ref<link::java::array<java::lang::String>> TYPES_();

	void setFeature(ref<java::lang::String> p1, jboolean p2);
	jboolean getFeature(ref<java::lang::String> p1);
	void setProperty(ref<java::lang::String> p1, ref<java::lang::Object> p2);
	ref<java::lang::Object> getProperty(ref<java::lang::String> p1);
	void setInput(ref<java::io::Reader> p1);
	void setInput(ref<java::io::InputStream> p1, ref<java::lang::String> p2);
	ref<java::lang::String> getInputEncoding();
	void defineEntityReplacementText(ref<java::lang::String> p1, ref<java::lang::String> p2);
	jint getNamespaceCount(jint p1);
	ref<java::lang::String> getNamespacePrefix(jint p1);
	ref<java::lang::String> getNamespaceUri(jint p1);
	ref<java::lang::String> getNamespace(ref<java::lang::String> p1);
	jint getDepth();
	ref<java::lang::String> getPositionDescription();
	jint getLineNumber();
	jint getColumnNumber();
	jboolean isWhitespace();
	ref<java::lang::String> getText();
	ref<link::java::array<jchar>> getTextCharacters(ref<link::java::array<jint>> p1);
	ref<java::lang::String> getNamespace();
	ref<java::lang::String> getName();
	ref<java::lang::String> getPrefix();
	jboolean isEmptyElementTag();
	jint getAttributeCount();
	ref<java::lang::String> getAttributeNamespace(jint p1);
	ref<java::lang::String> getAttributeName(jint p1);
	ref<java::lang::String> getAttributePrefix(jint p1);
	ref<java::lang::String> getAttributeType(jint p1);
	jboolean isAttributeDefault(jint p1);
	ref<java::lang::String> getAttributeValue(jint p1);
	ref<java::lang::String> getAttributeValue(ref<java::lang::String> p1, ref<java::lang::String> p2);
	jint getEventType();
	jint next();
	jint nextToken();
	void require(jint p1, ref<java::lang::String> p2, ref<java::lang::String> p3);
	ref<java::lang::String> nextText();
	jint nextTag();

protected:

	XmlPullParser(handle_type h) : base_(h) {}

};

} // namespace org::xmlpull::v1
} // namespace scapix::java_api

#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/java/io/Reader.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace org::xmlpull::v1 {

inline jint XmlPullParser::CDSECT_() { return get_static_field<SCAPIX_META_STRING("CDSECT"), jint>(); }
inline jint XmlPullParser::COMMENT_() { return get_static_field<SCAPIX_META_STRING("COMMENT"), jint>(); }
inline jint XmlPullParser::DOCDECL_() { return get_static_field<SCAPIX_META_STRING("DOCDECL"), jint>(); }
inline jint XmlPullParser::END_DOCUMENT_() { return get_static_field<SCAPIX_META_STRING("END_DOCUMENT"), jint>(); }
inline jint XmlPullParser::END_TAG_() { return get_static_field<SCAPIX_META_STRING("END_TAG"), jint>(); }
inline jint XmlPullParser::ENTITY_REF_() { return get_static_field<SCAPIX_META_STRING("ENTITY_REF"), jint>(); }
inline ref<java::lang::String> XmlPullParser::FEATURE_PROCESS_DOCDECL_() { return get_static_field<SCAPIX_META_STRING("FEATURE_PROCESS_DOCDECL"), ref<java::lang::String>>(); }
inline ref<java::lang::String> XmlPullParser::FEATURE_PROCESS_NAMESPACES_() { return get_static_field<SCAPIX_META_STRING("FEATURE_PROCESS_NAMESPACES"), ref<java::lang::String>>(); }
inline ref<java::lang::String> XmlPullParser::FEATURE_REPORT_NAMESPACE_ATTRIBUTES_() { return get_static_field<SCAPIX_META_STRING("FEATURE_REPORT_NAMESPACE_ATTRIBUTES"), ref<java::lang::String>>(); }
inline ref<java::lang::String> XmlPullParser::FEATURE_VALIDATION_() { return get_static_field<SCAPIX_META_STRING("FEATURE_VALIDATION"), ref<java::lang::String>>(); }
inline jint XmlPullParser::IGNORABLE_WHITESPACE_() { return get_static_field<SCAPIX_META_STRING("IGNORABLE_WHITESPACE"), jint>(); }
inline ref<java::lang::String> XmlPullParser::NO_NAMESPACE_() { return get_static_field<SCAPIX_META_STRING("NO_NAMESPACE"), ref<java::lang::String>>(); }
inline jint XmlPullParser::PROCESSING_INSTRUCTION_() { return get_static_field<SCAPIX_META_STRING("PROCESSING_INSTRUCTION"), jint>(); }
inline jint XmlPullParser::START_DOCUMENT_() { return get_static_field<SCAPIX_META_STRING("START_DOCUMENT"), jint>(); }
inline jint XmlPullParser::START_TAG_() { return get_static_field<SCAPIX_META_STRING("START_TAG"), jint>(); }
inline jint XmlPullParser::TEXT_() { return get_static_field<SCAPIX_META_STRING("TEXT"), jint>(); }
inline ref<link::java::array<java::lang::String>> XmlPullParser::TYPES_() { return get_static_field<SCAPIX_META_STRING("TYPES"), ref<link::java::array<java::lang::String>>>(); }
inline void XmlPullParser::setFeature(ref<java::lang::String> p1, jboolean p2) { return call_method<SCAPIX_META_STRING("setFeature"), void>(p1, p2); }
inline jboolean XmlPullParser::getFeature(ref<java::lang::String> p1) { return call_method<SCAPIX_META_STRING("getFeature"), jboolean>(p1); }
inline void XmlPullParser::setProperty(ref<java::lang::String> p1, ref<java::lang::Object> p2) { return call_method<SCAPIX_META_STRING("setProperty"), void>(p1, p2); }
inline ref<java::lang::Object> XmlPullParser::getProperty(ref<java::lang::String> p1) { return call_method<SCAPIX_META_STRING("getProperty"), ref<java::lang::Object>>(p1); }
inline void XmlPullParser::setInput(ref<java::io::Reader> p1) { return call_method<SCAPIX_META_STRING("setInput"), void>(p1); }
inline void XmlPullParser::setInput(ref<java::io::InputStream> p1, ref<java::lang::String> p2) { return call_method<SCAPIX_META_STRING("setInput"), void>(p1, p2); }
inline ref<java::lang::String> XmlPullParser::getInputEncoding() { return call_method<SCAPIX_META_STRING("getInputEncoding"), ref<java::lang::String>>(); }
inline void XmlPullParser::defineEntityReplacementText(ref<java::lang::String> p1, ref<java::lang::String> p2) { return call_method<SCAPIX_META_STRING("defineEntityReplacementText"), void>(p1, p2); }
inline jint XmlPullParser::getNamespaceCount(jint p1) { return call_method<SCAPIX_META_STRING("getNamespaceCount"), jint>(p1); }
inline ref<java::lang::String> XmlPullParser::getNamespacePrefix(jint p1) { return call_method<SCAPIX_META_STRING("getNamespacePrefix"), ref<java::lang::String>>(p1); }
inline ref<java::lang::String> XmlPullParser::getNamespaceUri(jint p1) { return call_method<SCAPIX_META_STRING("getNamespaceUri"), ref<java::lang::String>>(p1); }
inline ref<java::lang::String> XmlPullParser::getNamespace(ref<java::lang::String> p1) { return call_method<SCAPIX_META_STRING("getNamespace"), ref<java::lang::String>>(p1); }
inline jint XmlPullParser::getDepth() { return call_method<SCAPIX_META_STRING("getDepth"), jint>(); }
inline ref<java::lang::String> XmlPullParser::getPositionDescription() { return call_method<SCAPIX_META_STRING("getPositionDescription"), ref<java::lang::String>>(); }
inline jint XmlPullParser::getLineNumber() { return call_method<SCAPIX_META_STRING("getLineNumber"), jint>(); }
inline jint XmlPullParser::getColumnNumber() { return call_method<SCAPIX_META_STRING("getColumnNumber"), jint>(); }
inline jboolean XmlPullParser::isWhitespace() { return call_method<SCAPIX_META_STRING("isWhitespace"), jboolean>(); }
inline ref<java::lang::String> XmlPullParser::getText() { return call_method<SCAPIX_META_STRING("getText"), ref<java::lang::String>>(); }
inline ref<link::java::array<jchar>> XmlPullParser::getTextCharacters(ref<link::java::array<jint>> p1) { return call_method<SCAPIX_META_STRING("getTextCharacters"), ref<link::java::array<jchar>>>(p1); }
inline ref<java::lang::String> XmlPullParser::getNamespace() { return call_method<SCAPIX_META_STRING("getNamespace"), ref<java::lang::String>>(); }
inline ref<java::lang::String> XmlPullParser::getName() { return call_method<SCAPIX_META_STRING("getName"), ref<java::lang::String>>(); }
inline ref<java::lang::String> XmlPullParser::getPrefix() { return call_method<SCAPIX_META_STRING("getPrefix"), ref<java::lang::String>>(); }
inline jboolean XmlPullParser::isEmptyElementTag() { return call_method<SCAPIX_META_STRING("isEmptyElementTag"), jboolean>(); }
inline jint XmlPullParser::getAttributeCount() { return call_method<SCAPIX_META_STRING("getAttributeCount"), jint>(); }
inline ref<java::lang::String> XmlPullParser::getAttributeNamespace(jint p1) { return call_method<SCAPIX_META_STRING("getAttributeNamespace"), ref<java::lang::String>>(p1); }
inline ref<java::lang::String> XmlPullParser::getAttributeName(jint p1) { return call_method<SCAPIX_META_STRING("getAttributeName"), ref<java::lang::String>>(p1); }
inline ref<java::lang::String> XmlPullParser::getAttributePrefix(jint p1) { return call_method<SCAPIX_META_STRING("getAttributePrefix"), ref<java::lang::String>>(p1); }
inline ref<java::lang::String> XmlPullParser::getAttributeType(jint p1) { return call_method<SCAPIX_META_STRING("getAttributeType"), ref<java::lang::String>>(p1); }
inline jboolean XmlPullParser::isAttributeDefault(jint p1) { return call_method<SCAPIX_META_STRING("isAttributeDefault"), jboolean>(p1); }
inline ref<java::lang::String> XmlPullParser::getAttributeValue(jint p1) { return call_method<SCAPIX_META_STRING("getAttributeValue"), ref<java::lang::String>>(p1); }
inline ref<java::lang::String> XmlPullParser::getAttributeValue(ref<java::lang::String> p1, ref<java::lang::String> p2) { return call_method<SCAPIX_META_STRING("getAttributeValue"), ref<java::lang::String>>(p1, p2); }
inline jint XmlPullParser::getEventType() { return call_method<SCAPIX_META_STRING("getEventType"), jint>(); }
inline jint XmlPullParser::next() { return call_method<SCAPIX_META_STRING("next"), jint>(); }
inline jint XmlPullParser::nextToken() { return call_method<SCAPIX_META_STRING("nextToken"), jint>(); }
inline void XmlPullParser::require(jint p1, ref<java::lang::String> p2, ref<java::lang::String> p3) { return call_method<SCAPIX_META_STRING("require"), void>(p1, p2, p3); }
inline ref<java::lang::String> XmlPullParser::nextText() { return call_method<SCAPIX_META_STRING("nextText"), ref<java::lang::String>>(); }
inline jint XmlPullParser::nextTag() { return call_method<SCAPIX_META_STRING("nextTag"), jint>(); }

} // namespace org::xmlpull::v1
} // namespace scapix::java_api

#endif // SCAPIX_ORG_XMLPULL_V1_XMLPULLPARSER_H
