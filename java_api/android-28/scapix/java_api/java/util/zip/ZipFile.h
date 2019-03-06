// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Closeable.h>

#ifndef SCAPIX_JAVA_UTIL_ZIP_ZIPFILE_H
#define SCAPIX_JAVA_UTIL_ZIP_ZIPFILE_H

namespace scapix::java_api {

namespace java::io { class File; }
namespace java::io { class InputStream; }
namespace java::lang { class String; }
namespace java::nio::charset { class Charset; }
namespace java::util { class Enumeration; }
namespace java::util::stream { class Stream; }
namespace java::util::zip { class ZipEntry; }

namespace java::util::zip {

class ZipFile : public object_base<SCAPIX_META_STRING("java/util/zip/ZipFile"),
	java::lang::Object,
	java::io::Closeable>
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
	static jint OPEN_DELETE_();
	static jint OPEN_READ_();

	static ref<ZipFile> new_object(ref<java::lang::String> name);
	static ref<ZipFile> new_object(ref<java::io::File> file, jint mode);
	static ref<ZipFile> new_object(ref<java::io::File> file);
	static ref<ZipFile> new_object(ref<java::io::File> file, jint mode, ref<java::nio::charset::Charset> charset);
	static ref<ZipFile> new_object(ref<java::lang::String> name, ref<java::nio::charset::Charset> charset);
	static ref<ZipFile> new_object(ref<java::io::File> file, ref<java::nio::charset::Charset> charset);
	ref<java::lang::String> getComment();
	ref<java::util::zip::ZipEntry> getEntry(ref<java::lang::String> name);
	ref<java::io::InputStream> getInputStream(ref<java::util::zip::ZipEntry> entry);
	ref<java::lang::String> getName();
	ref<java::util::Enumeration> entries();
	ref<java::util::stream::Stream> stream();
	jint size();
	void close();

protected:

	ZipFile(handle_type h) : base_(h) {}

};

} // namespace java::util::zip
} // namespace scapix::java_api

#include <scapix/java_api/java/io/File.h>
#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/nio/charset/Charset.h>
#include <scapix/java_api/java/util/Enumeration.h>
#include <scapix/java_api/java/util/stream/Stream.h>
#include <scapix/java_api/java/util/zip/ZipEntry.h>

namespace scapix::java_api {
namespace java::util::zip {

inline jint ZipFile::CENATT_() { return get_static_field<SCAPIX_META_STRING("CENATT"), jint>(); }
inline jint ZipFile::CENATX_() { return get_static_field<SCAPIX_META_STRING("CENATX"), jint>(); }
inline jint ZipFile::CENCOM_() { return get_static_field<SCAPIX_META_STRING("CENCOM"), jint>(); }
inline jint ZipFile::CENCRC_() { return get_static_field<SCAPIX_META_STRING("CENCRC"), jint>(); }
inline jint ZipFile::CENDSK_() { return get_static_field<SCAPIX_META_STRING("CENDSK"), jint>(); }
inline jint ZipFile::CENEXT_() { return get_static_field<SCAPIX_META_STRING("CENEXT"), jint>(); }
inline jint ZipFile::CENFLG_() { return get_static_field<SCAPIX_META_STRING("CENFLG"), jint>(); }
inline jint ZipFile::CENHDR_() { return get_static_field<SCAPIX_META_STRING("CENHDR"), jint>(); }
inline jint ZipFile::CENHOW_() { return get_static_field<SCAPIX_META_STRING("CENHOW"), jint>(); }
inline jint ZipFile::CENLEN_() { return get_static_field<SCAPIX_META_STRING("CENLEN"), jint>(); }
inline jint ZipFile::CENNAM_() { return get_static_field<SCAPIX_META_STRING("CENNAM"), jint>(); }
inline jint ZipFile::CENOFF_() { return get_static_field<SCAPIX_META_STRING("CENOFF"), jint>(); }
inline jlong ZipFile::CENSIG_() { return get_static_field<SCAPIX_META_STRING("CENSIG"), jlong>(); }
inline jint ZipFile::CENSIZ_() { return get_static_field<SCAPIX_META_STRING("CENSIZ"), jint>(); }
inline jint ZipFile::CENTIM_() { return get_static_field<SCAPIX_META_STRING("CENTIM"), jint>(); }
inline jint ZipFile::CENVEM_() { return get_static_field<SCAPIX_META_STRING("CENVEM"), jint>(); }
inline jint ZipFile::CENVER_() { return get_static_field<SCAPIX_META_STRING("CENVER"), jint>(); }
inline jint ZipFile::ENDCOM_() { return get_static_field<SCAPIX_META_STRING("ENDCOM"), jint>(); }
inline jint ZipFile::ENDHDR_() { return get_static_field<SCAPIX_META_STRING("ENDHDR"), jint>(); }
inline jint ZipFile::ENDOFF_() { return get_static_field<SCAPIX_META_STRING("ENDOFF"), jint>(); }
inline jlong ZipFile::ENDSIG_() { return get_static_field<SCAPIX_META_STRING("ENDSIG"), jlong>(); }
inline jint ZipFile::ENDSIZ_() { return get_static_field<SCAPIX_META_STRING("ENDSIZ"), jint>(); }
inline jint ZipFile::ENDSUB_() { return get_static_field<SCAPIX_META_STRING("ENDSUB"), jint>(); }
inline jint ZipFile::ENDTOT_() { return get_static_field<SCAPIX_META_STRING("ENDTOT"), jint>(); }
inline jint ZipFile::EXTCRC_() { return get_static_field<SCAPIX_META_STRING("EXTCRC"), jint>(); }
inline jint ZipFile::EXTHDR_() { return get_static_field<SCAPIX_META_STRING("EXTHDR"), jint>(); }
inline jint ZipFile::EXTLEN_() { return get_static_field<SCAPIX_META_STRING("EXTLEN"), jint>(); }
inline jlong ZipFile::EXTSIG_() { return get_static_field<SCAPIX_META_STRING("EXTSIG"), jlong>(); }
inline jint ZipFile::EXTSIZ_() { return get_static_field<SCAPIX_META_STRING("EXTSIZ"), jint>(); }
inline jint ZipFile::LOCCRC_() { return get_static_field<SCAPIX_META_STRING("LOCCRC"), jint>(); }
inline jint ZipFile::LOCEXT_() { return get_static_field<SCAPIX_META_STRING("LOCEXT"), jint>(); }
inline jint ZipFile::LOCFLG_() { return get_static_field<SCAPIX_META_STRING("LOCFLG"), jint>(); }
inline jint ZipFile::LOCHDR_() { return get_static_field<SCAPIX_META_STRING("LOCHDR"), jint>(); }
inline jint ZipFile::LOCHOW_() { return get_static_field<SCAPIX_META_STRING("LOCHOW"), jint>(); }
inline jint ZipFile::LOCLEN_() { return get_static_field<SCAPIX_META_STRING("LOCLEN"), jint>(); }
inline jint ZipFile::LOCNAM_() { return get_static_field<SCAPIX_META_STRING("LOCNAM"), jint>(); }
inline jlong ZipFile::LOCSIG_() { return get_static_field<SCAPIX_META_STRING("LOCSIG"), jlong>(); }
inline jint ZipFile::LOCSIZ_() { return get_static_field<SCAPIX_META_STRING("LOCSIZ"), jint>(); }
inline jint ZipFile::LOCTIM_() { return get_static_field<SCAPIX_META_STRING("LOCTIM"), jint>(); }
inline jint ZipFile::LOCVER_() { return get_static_field<SCAPIX_META_STRING("LOCVER"), jint>(); }
inline jint ZipFile::OPEN_DELETE_() { return get_static_field<SCAPIX_META_STRING("OPEN_DELETE"), jint>(); }
inline jint ZipFile::OPEN_READ_() { return get_static_field<SCAPIX_META_STRING("OPEN_READ"), jint>(); }
inline ref<ZipFile> ZipFile::new_object(ref<java::lang::String> name) { return base_::new_object(name); }
inline ref<ZipFile> ZipFile::new_object(ref<java::io::File> file, jint mode) { return base_::new_object(file, mode); }
inline ref<ZipFile> ZipFile::new_object(ref<java::io::File> file) { return base_::new_object(file); }
inline ref<ZipFile> ZipFile::new_object(ref<java::io::File> file, jint mode, ref<java::nio::charset::Charset> charset) { return base_::new_object(file, mode, charset); }
inline ref<ZipFile> ZipFile::new_object(ref<java::lang::String> name, ref<java::nio::charset::Charset> charset) { return base_::new_object(name, charset); }
inline ref<ZipFile> ZipFile::new_object(ref<java::io::File> file, ref<java::nio::charset::Charset> charset) { return base_::new_object(file, charset); }
inline ref<java::lang::String> ZipFile::getComment() { return call_method<SCAPIX_META_STRING("getComment"), ref<java::lang::String>>(); }
inline ref<java::util::zip::ZipEntry> ZipFile::getEntry(ref<java::lang::String> name) { return call_method<SCAPIX_META_STRING("getEntry"), ref<java::util::zip::ZipEntry>>(name); }
inline ref<java::io::InputStream> ZipFile::getInputStream(ref<java::util::zip::ZipEntry> entry) { return call_method<SCAPIX_META_STRING("getInputStream"), ref<java::io::InputStream>>(entry); }
inline ref<java::lang::String> ZipFile::getName() { return call_method<SCAPIX_META_STRING("getName"), ref<java::lang::String>>(); }
inline ref<java::util::Enumeration> ZipFile::entries() { return call_method<SCAPIX_META_STRING("entries"), ref<java::util::Enumeration>>(); }
inline ref<java::util::stream::Stream> ZipFile::stream() { return call_method<SCAPIX_META_STRING("stream"), ref<java::util::stream::Stream>>(); }
inline jint ZipFile::size() { return call_method<SCAPIX_META_STRING("size"), jint>(); }
inline void ZipFile::close() { return call_method<SCAPIX_META_STRING("close"), void>(); }

} // namespace java::util::zip
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_UTIL_ZIP_ZIPFILE_H
