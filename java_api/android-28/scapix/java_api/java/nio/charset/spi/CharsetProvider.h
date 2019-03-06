// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_NIO_CHARSET_SPI_CHARSETPROVIDER_H
#define SCAPIX_JAVA_NIO_CHARSET_SPI_CHARSETPROVIDER_H

namespace scapix::java_api {

namespace java::lang { class String; }
namespace java::nio::charset { class Charset; }
namespace java::util { class Iterator; }

namespace java::nio::charset::spi {

class CharsetProvider : public object_base<SCAPIX_META_STRING("java/nio/charset/spi/CharsetProvider"),
	java::lang::Object>
{
public:

	ref<java::util::Iterator> charsets();
	ref<java::nio::charset::Charset> charsetForName(ref<java::lang::String> p1);

protected:

	CharsetProvider(handle_type h) : base_(h) {}

};

} // namespace java::nio::charset::spi
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/nio/charset/Charset.h>
#include <scapix/java_api/java/util/Iterator.h>

namespace scapix::java_api {
namespace java::nio::charset::spi {

inline ref<java::util::Iterator> CharsetProvider::charsets() { return call_method<SCAPIX_META_STRING("charsets"), ref<java::util::Iterator>>(); }
inline ref<java::nio::charset::Charset> CharsetProvider::charsetForName(ref<java::lang::String> p1) { return call_method<SCAPIX_META_STRING("charsetForName"), ref<java::nio::charset::Charset>>(p1); }

} // namespace java::nio::charset::spi
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_NIO_CHARSET_SPI_CHARSETPROVIDER_H
