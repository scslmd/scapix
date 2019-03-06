// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/io/InputStream.h>

#ifndef SCAPIX_ANDROID_CONTENT_RES_ASSETMANAGER_ASSETINPUTSTREAM_H
#define SCAPIX_ANDROID_CONTENT_RES_ASSETMANAGER_ASSETINPUTSTREAM_H

namespace scapix::java_api {


namespace android::content::res {

class AssetManager_AssetInputStream : public object_base<SCAPIX_META_STRING("android/content/res/AssetManager$AssetInputStream"),
	java::io::InputStream>
{
public:

	jint read();
	jint read(ref<link::java::array<jbyte>> b);
	jint read(ref<link::java::array<jbyte>> b, jint off, jint len);
	jlong skip(jlong n);
	jint available();
	jboolean markSupported();
	void mark(jint readlimit);
	void reset();
	void close();

protected:

	AssetManager_AssetInputStream(handle_type h) : base_(h) {}

};

} // namespace android::content::res
} // namespace scapix::java_api


namespace scapix::java_api {
namespace android::content::res {

inline jint AssetManager_AssetInputStream::read() { return call_method<SCAPIX_META_STRING("read"), jint>(); }
inline jint AssetManager_AssetInputStream::read(ref<link::java::array<jbyte>> b) { return call_method<SCAPIX_META_STRING("read"), jint>(b); }
inline jint AssetManager_AssetInputStream::read(ref<link::java::array<jbyte>> b, jint off, jint len) { return call_method<SCAPIX_META_STRING("read"), jint>(b, off, len); }
inline jlong AssetManager_AssetInputStream::skip(jlong n) { return call_method<SCAPIX_META_STRING("skip"), jlong>(n); }
inline jint AssetManager_AssetInputStream::available() { return call_method<SCAPIX_META_STRING("available"), jint>(); }
inline jboolean AssetManager_AssetInputStream::markSupported() { return call_method<SCAPIX_META_STRING("markSupported"), jboolean>(); }
inline void AssetManager_AssetInputStream::mark(jint readlimit) { return call_method<SCAPIX_META_STRING("mark"), void>(readlimit); }
inline void AssetManager_AssetInputStream::reset() { return call_method<SCAPIX_META_STRING("reset"), void>(); }
inline void AssetManager_AssetInputStream::close() { return call_method<SCAPIX_META_STRING("close"), void>(); }

} // namespace android::content::res
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_CONTENT_RES_ASSETMANAGER_ASSETINPUTSTREAM_H
