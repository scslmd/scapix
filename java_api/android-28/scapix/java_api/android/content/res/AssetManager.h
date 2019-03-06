// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/AutoCloseable.h>

#ifndef SCAPIX_ANDROID_CONTENT_RES_ASSETMANAGER_H
#define SCAPIX_ANDROID_CONTENT_RES_ASSETMANAGER_H

namespace scapix::java_api {

namespace android::content::res { class AssetFileDescriptor; }
namespace android::content::res { class XmlResourceParser; }
namespace java::io { class InputStream; }
namespace java::lang { class String; }
namespace android::content::res { class AssetManager_AssetInputStream; }

namespace android::content::res {

class AssetManager : public object_base<SCAPIX_META_STRING("android/content/res/AssetManager"),
	java::lang::Object,
	java::lang::AutoCloseable>
{
public:

	using AssetInputStream = AssetManager_AssetInputStream;

	static jint ACCESS_BUFFER_();
	static jint ACCESS_RANDOM_();
	static jint ACCESS_STREAMING_();
	static jint ACCESS_UNKNOWN_();

	void close();
	ref<java::io::InputStream> open(ref<java::lang::String> fileName);
	ref<java::io::InputStream> open(ref<java::lang::String> fileName, jint accessMode);
	ref<android::content::res::AssetFileDescriptor> openFd(ref<java::lang::String> fileName);
	ref<link::java::array<java::lang::String>> list(ref<java::lang::String> path);
	ref<android::content::res::AssetFileDescriptor> openNonAssetFd(ref<java::lang::String> fileName);
	ref<android::content::res::AssetFileDescriptor> openNonAssetFd(jint cookie, ref<java::lang::String> fileName);
	ref<android::content::res::XmlResourceParser> openXmlResourceParser(ref<java::lang::String> fileName);
	ref<android::content::res::XmlResourceParser> openXmlResourceParser(jint cookie, ref<java::lang::String> fileName);
	ref<link::java::array<java::lang::String>> getLocales();

protected:

	AssetManager(handle_type h) : base_(h) {}

};

} // namespace android::content::res
} // namespace scapix::java_api

#include <scapix/java_api/android/content/res/AssetFileDescriptor.h>
#include <scapix/java_api/android/content/res/XmlResourceParser.h>
#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::content::res {

inline jint AssetManager::ACCESS_BUFFER_() { return get_static_field<SCAPIX_META_STRING("ACCESS_BUFFER"), jint>(); }
inline jint AssetManager::ACCESS_RANDOM_() { return get_static_field<SCAPIX_META_STRING("ACCESS_RANDOM"), jint>(); }
inline jint AssetManager::ACCESS_STREAMING_() { return get_static_field<SCAPIX_META_STRING("ACCESS_STREAMING"), jint>(); }
inline jint AssetManager::ACCESS_UNKNOWN_() { return get_static_field<SCAPIX_META_STRING("ACCESS_UNKNOWN"), jint>(); }
inline void AssetManager::close() { return call_method<SCAPIX_META_STRING("close"), void>(); }
inline ref<java::io::InputStream> AssetManager::open(ref<java::lang::String> fileName) { return call_method<SCAPIX_META_STRING("open"), ref<java::io::InputStream>>(fileName); }
inline ref<java::io::InputStream> AssetManager::open(ref<java::lang::String> fileName, jint accessMode) { return call_method<SCAPIX_META_STRING("open"), ref<java::io::InputStream>>(fileName, accessMode); }
inline ref<android::content::res::AssetFileDescriptor> AssetManager::openFd(ref<java::lang::String> fileName) { return call_method<SCAPIX_META_STRING("openFd"), ref<android::content::res::AssetFileDescriptor>>(fileName); }
inline ref<link::java::array<java::lang::String>> AssetManager::list(ref<java::lang::String> path) { return call_method<SCAPIX_META_STRING("list"), ref<link::java::array<java::lang::String>>>(path); }
inline ref<android::content::res::AssetFileDescriptor> AssetManager::openNonAssetFd(ref<java::lang::String> fileName) { return call_method<SCAPIX_META_STRING("openNonAssetFd"), ref<android::content::res::AssetFileDescriptor>>(fileName); }
inline ref<android::content::res::AssetFileDescriptor> AssetManager::openNonAssetFd(jint cookie, ref<java::lang::String> fileName) { return call_method<SCAPIX_META_STRING("openNonAssetFd"), ref<android::content::res::AssetFileDescriptor>>(cookie, fileName); }
inline ref<android::content::res::XmlResourceParser> AssetManager::openXmlResourceParser(ref<java::lang::String> fileName) { return call_method<SCAPIX_META_STRING("openXmlResourceParser"), ref<android::content::res::XmlResourceParser>>(fileName); }
inline ref<android::content::res::XmlResourceParser> AssetManager::openXmlResourceParser(jint cookie, ref<java::lang::String> fileName) { return call_method<SCAPIX_META_STRING("openXmlResourceParser"), ref<android::content::res::XmlResourceParser>>(cookie, fileName); }
inline ref<link::java::array<java::lang::String>> AssetManager::getLocales() { return call_method<SCAPIX_META_STRING("getLocales"), ref<link::java::array<java::lang::String>>>(); }

} // namespace android::content::res
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_CONTENT_RES_ASSETMANAGER_H
