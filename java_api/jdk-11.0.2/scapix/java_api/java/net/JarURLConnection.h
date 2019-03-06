// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/net/URLConnection.h>

#ifndef SCAPIX_JAVA_NET_JARURLCONNECTION_H
#define SCAPIX_JAVA_NET_JARURLCONNECTION_H

namespace scapix::java_api {

namespace java::lang { class String; }
namespace java::net { class URL; }
namespace java::security::cert { class Certificate; }
namespace java::util::jar { class Attributes; }
namespace java::util::jar { class JarEntry; }
namespace java::util::jar { class JarFile; }
namespace java::util::jar { class Manifest; }

namespace java::net {

class JarURLConnection : public object_base<SCAPIX_META_STRING("java/net/JarURLConnection"),
	java::net::URLConnection>
{
public:

	ref<java::net::URL> getJarFileURL();
	ref<java::lang::String> getEntryName();
	ref<java::util::jar::JarFile> getJarFile();
	ref<java::util::jar::Manifest> getManifest();
	ref<java::util::jar::JarEntry> getJarEntry();
	ref<java::util::jar::Attributes> getAttributes();
	ref<java::util::jar::Attributes> getMainAttributes();
	ref<link::java::array<java::security::cert::Certificate>> getCertificates();

protected:

	JarURLConnection(handle_type h) : base_(h) {}

};

} // namespace java::net
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/net/URL.h>
#include <scapix/java_api/java/security/cert/Certificate.h>
#include <scapix/java_api/java/util/jar/Attributes.h>
#include <scapix/java_api/java/util/jar/JarEntry.h>
#include <scapix/java_api/java/util/jar/JarFile.h>
#include <scapix/java_api/java/util/jar/Manifest.h>

namespace scapix::java_api {
namespace java::net {

inline ref<java::net::URL> JarURLConnection::getJarFileURL() { return call_method<SCAPIX_META_STRING("getJarFileURL"), ref<java::net::URL>>(); }
inline ref<java::lang::String> JarURLConnection::getEntryName() { return call_method<SCAPIX_META_STRING("getEntryName"), ref<java::lang::String>>(); }
inline ref<java::util::jar::JarFile> JarURLConnection::getJarFile() { return call_method<SCAPIX_META_STRING("getJarFile"), ref<java::util::jar::JarFile>>(); }
inline ref<java::util::jar::Manifest> JarURLConnection::getManifest() { return call_method<SCAPIX_META_STRING("getManifest"), ref<java::util::jar::Manifest>>(); }
inline ref<java::util::jar::JarEntry> JarURLConnection::getJarEntry() { return call_method<SCAPIX_META_STRING("getJarEntry"), ref<java::util::jar::JarEntry>>(); }
inline ref<java::util::jar::Attributes> JarURLConnection::getAttributes() { return call_method<SCAPIX_META_STRING("getAttributes"), ref<java::util::jar::Attributes>>(); }
inline ref<java::util::jar::Attributes> JarURLConnection::getMainAttributes() { return call_method<SCAPIX_META_STRING("getMainAttributes"), ref<java::util::jar::Attributes>>(); }
inline ref<link::java::array<java::security::cert::Certificate>> JarURLConnection::getCertificates() { return call_method<SCAPIX_META_STRING("getCertificates"), ref<link::java::array<java::security::cert::Certificate>>>(); }

} // namespace java::net
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_NET_JARURLCONNECTION_H
