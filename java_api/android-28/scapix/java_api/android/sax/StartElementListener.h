// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_SAX_STARTELEMENTLISTENER_H
#define SCAPIX_ANDROID_SAX_STARTELEMENTLISTENER_H

namespace scapix::java_api {

namespace org::xml::sax { class Attributes; }

namespace android::sax {

class StartElementListener : public object_base<SCAPIX_META_STRING("android/sax/StartElementListener"),
	java::lang::Object>
{
public:

	void start(ref<org::xml::sax::Attributes> p1);

protected:

	StartElementListener(handle_type h) : base_(h) {}

};

} // namespace android::sax
} // namespace scapix::java_api

#include <scapix/java_api/org/xml/sax/Attributes.h>

namespace scapix::java_api {
namespace android::sax {

inline void StartElementListener::start(ref<org::xml::sax::Attributes> p1) { return call_method<SCAPIX_META_STRING("start"), void>(p1); }

} // namespace android::sax
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_SAX_STARTELEMENTLISTENER_H
