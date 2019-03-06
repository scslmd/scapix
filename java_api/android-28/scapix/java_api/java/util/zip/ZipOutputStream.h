// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/util/zip/DeflaterOutputStream.h>

#ifndef SCAPIX_JAVA_UTIL_ZIP_ZIPOUTPUTSTREAM_H
#define SCAPIX_JAVA_UTIL_ZIP_ZIPOUTPUTSTREAM_H

namespace scapix::java_api {

namespace java::io { class OutputStream; }
namespace java::lang { class String; }
namespace java::nio::charset { class Charset; }
namespace java::util::zip { class ZipEntry; }

namespace java::util::zip {

class ZipOutputStream : public object_base<SCAPIX_META_STRING("java/util/zip/ZipOutputStream"),
	java::util::zip::DeflaterOutputStream>
{
public:

	static jint CENATT_();
	static jint CENATX_();
	static jint CENCOM_();
	static jint CENCRC_();
	static jint CENDSK_();
	static jint CENEXT_();
	static jint CENFLG_();
	static jint CENHDR_();
	static jint CENHOW_();
	static jint CENLEN_();
	static jint CENNAM_();
	static jint CENOFF_();
	static jlong CENSIG_();
	static jint CENSIZ_();
	static jint CENTIM_();
	static jint CENVEM_();
	static jint CENVER_();
	static jint DEFLATED_();
	static jint ENDCOM_();
	static jint ENDHDR_();
	static jint ENDOFF_();
	static jlong ENDSIG_();
	static jint ENDSIZ_();
	static jint ENDSUB_();
	static jint ENDTOT_();
	static jint EXTCRC_();
	static jint EXTHDR_();
	static jint EXTLEN_();
	static jlong EXTSIG_();
	static jint EXTSIZ_();
	static jint LOCCRC_();
	static jint LOCEXT_();
	static jint LOCFLG_();
	static jint LOCHDR_();
	static jint LOCHOW_();
	static jint LOCLEN_();
	static jint LOCNAM_();
	static jlong LOCSIG_();
	static jint LOCSIZ_();
	static jint LOCTIM_();
	static jint LOCVER_();
	static jint STORED_();

	static ref<ZipOutputStream> new_object(ref<java::io::OutputStream> out);
	static ref<ZipOutputStream> new_object(ref<java::io::OutputStream> out, ref<java::nio::charset::Charset> charset);
	void setComment(ref<java::lang::String> comment);
	void setMethod(jint method);
	void setLevel(jint level);
	void putNextEntry(ref<java::util::zip::ZipEntry> e);
	void closeEntry();
	void write(ref<link::java::array<jbyte>> b, jint off, jint len);
	void finish();
	void close();

protected:

	ZipOutputStream(handle_type h) : base_(h) {}

};

} // namespace java::util::zip
} // namespace scapix::java_api

#include <scapix/java_api/java/io/OutputStream.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/nio/charset/Charset.h>
#include <scapix/java_api/java/util/zip/ZipEntry.h>

namespace scapix::java_api {
namespace java::util::zip {

inline jint ZipOutputStream::CENATT_() { return get_static_field<SCAPIX_META_STRING("CENATT"), jint>(); }
inline jint ZipOutputStream::CENATX_() { return get_static_field<SCAPIX_META_STRING("CENATX"), jint>(); }
inline jint ZipOutputStream::CENCOM_() { return get_static_field<SCAPIX_META_STRING("CENCOM"), jint>(); }
inline jint ZipOutputStream::CENCRC_() { return get_static_field<SCAPIX_META_STRING("CENCRC"), jint>(); }
inline jint ZipOutputStream::CENDSK_() { return get_static_field<SCAPIX_META_STRING("CENDSK"), jint>(); }
inline jint ZipOutputStream::CENEXT_() { return get_static_field<SCAPIX_META_STRING("CENEXT"), jint>(); }
inline jint ZipOutputStream::CENFLG_() { return get_static_field<SCAPIX_META_STRING("CENFLG"), jint>(); }
inline jint ZipOutputStream::CENHDR_() { return get_static_field<SCAPIX_META_STRING("CENHDR"), jint>(); }
inline jint ZipOutputStream::CENHOW_() { return get_static_field<SCAPIX_META_STRING("CENHOW"), jint>(); }
inline jint ZipOutputStream::CENLEN_() { return get_static_field<SCAPIX_META_STRING("CENLEN"), jint>(); }
inline jint ZipOutputStream::CENNAM_() { return get_static_field<SCAPIX_META_STRING("CENNAM"), jint>(); }
inline jint ZipOutputStream::CENOFF_() { return get_static_field<SCAPIX_META_STRING("CENOFF"), jint>(); }
inline jlong ZipOutputStream::CENSIG_() { return get_static_field<SCAPIX_META_STRING("CENSIG"), jlong>(); }
inline jint ZipOutputStream::CENSIZ_() { return get_static_field<SCAPIX_META_STRING("CENSIZ"), jint>(); }
inline jint ZipOutputStream::CENTIM_() { return get_static_field<SCAPIX_META_STRING("CENTIM"), jint>(); }
inline jint ZipOutputStream::CENVEM_() { return get_static_field<SCAPIX_META_STRING("CENVEM"), jint>(); }
inline jint ZipOutputStream::CENVER_() { return get_static_field<SCAPIX_META_STRING("CENVER"), jint>(); }
inline jint ZipOutputStream::DEFLATED_() { return get_static_field<SCAPIX_META_STRING("DEFLATED"), jint>(); }
inline jint ZipOutputStream::ENDCOM_() { return get_static_field<SCAPIX_META_STRING("ENDCOM"), jint>(); }
inline jint ZipOutputStream::ENDHDR_() { return get_static_field<SCAPIX_META_STRING("ENDHDR"), jint>(); }
inline jint ZipOutputStream::ENDOFF_() { return get_static_field<SCAPIX_META_STRING("ENDOFF"), jint>(); }
inline jlong ZipOutputStream::ENDSIG_() { return get_static_field<SCAPIX_META_STRING("ENDSIG"), jlong>(); }
inline jint ZipOutputStream::ENDSIZ_() { return get_static_field<SCAPIX_META_STRING("ENDSIZ"), jint>(); }
inline jint ZipOutputStream::ENDSUB_() { return get_static_field<SCAPIX_META_STRING("ENDSUB"), jint>(); }
inline jint ZipOutputStream::ENDTOT_() { return get_static_field<SCAPIX_META_STRING("ENDTOT"), jint>(); }
inline jint ZipOutputStream::EXTCRC_() { return get_static_field<SCAPIX_META_STRING("EXTCRC"), jint>(); }
inline jint ZipOutputStream::EXTHDR_() { return get_static_field<SCAPIX_META_STRING("EXTHDR"), jint>(); }
inline jint ZipOutputStream::EXTLEN_() { return get_static_field<SCAPIX_META_STRING("EXTLEN"), jint>(); }
inline jlong ZipOutputStream::EXTSIG_() { return get_static_field<SCAPIX_META_STRING("EXTSIG"), jlong>(); }
inline jint ZipOutputStream::EXTSIZ_() { return get_static_field<SCAPIX_META_STRING("EXTSIZ"), jint>(); }
inline jint ZipOutputStream::LOCCRC_() { return get_static_field<SCAPIX_META_STRING("LOCCRC"), jint>(); }
inline jint ZipOutputStream::LOCEXT_() { return get_static_field<SCAPIX_META_STRING("LOCEXT"), jint>(); }
inline jint ZipOutputStream::LOCFLG_() { return get_static_field<SCAPIX_META_STRING("LOCFLG"), jint>(); }
inline jint ZipOutputStream::LOCHDR_() { return get_static_field<SCAPIX_META_STRING("LOCHDR"), jint>(); }
inline jint ZipOutputStream::LOCHOW_() { return get_static_field<SCAPIX_META_STRING("LOCHOW"), jint>(); }
inline jint ZipOutputStream::LOCLEN_() { return get_static_field<SCAPIX_META_STRING("LOCLEN"), jint>(); }
inline jint ZipOutputStream::LOCNAM_() { return get_static_field<SCAPIX_META_STRING("LOCNAM"), jint>(); }
inline jlong ZipOutputStream::LOCSIG_() { return get_static_field<SCAPIX_META_STRING("LOCSIG"), jlong>(); }
inline jint ZipOutputStream::LOCSIZ_() { return get_static_field<SCAPIX_META_STRING("LOCSIZ"), jint>(); }
inline jint ZipOutputStream::LOCTIM_() { return get_static_field<SCAPIX_META_STRING("LOCTIM"), jint>(); }
inline jint ZipOutputStream::LOCVER_() { return get_static_field<SCAPIX_META_STRING("LOCVER"), jint>(); }
inline jint ZipOutputStream::STORED_() { return get_static_field<SCAPIX_META_STRING("STORED"), jint>(); }
inline ref<ZipOutputStream> ZipOutputStream::new_object(ref<java::io::OutputStream> out) { return base_::new_object(out); }
inline ref<ZipOutputStream> ZipOutputStream::new_object(ref<java::io::OutputStream> out, ref<java::nio::charset::Charset> charset) { return base_::new_object(out, charset); }
inline void ZipOutputStream::setComment(ref<java::lang::String> comment) { return call_method<SCAPIX_META_STRING("setComment"), void>(comment); }
inline void ZipOutputStream::setMethod(jint method) { return call_method<SCAPIX_META_STRING("setMethod"), void>(method); }
inline void ZipOutputStream::setLevel(jint level) { return call_method<SCAPIX_META_STRING("setLevel"), void>(level); }
inline void ZipOutputStream::putNextEntry(ref<java::util::zip::ZipEntry> e) { return call_method<SCAPIX_META_STRING("putNextEntry"), void>(e); }
inline void ZipOutputStream::closeEntry() { return call_method<SCAPIX_META_STRING("closeEntry"), void>(); }
inline void ZipOutputStream::write(ref<link::java::array<jbyte>> b, jint off, jint len) { return call_method<SCAPIX_META_STRING("write"), void>(b, off, len); }
inline void ZipOutputStream::finish() { return call_method<SCAPIX_META_STRING("finish"), void>(); }
inline void ZipOutputStream::close() { return call_method<SCAPIX_META_STRING("close"), void>(); }

} // namespace java::util::zip
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_UTIL_ZIP_ZIPOUTPUTSTREAM_H
