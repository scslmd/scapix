// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/content/ComponentCallbacks2.h>

#ifndef SCAPIX_ANDROID_CONTENT_CONTENTPROVIDER_H
#define SCAPIX_ANDROID_CONTENT_CONTENTPROVIDER_H

namespace scapix::java_api {

namespace android::content { class ContentProvider_PipeDataWriter; }
namespace android::content { class ContentProviderResult; }
namespace android::content { class ContentValues; }
namespace android::content { class Context; }
namespace android::content::pm { class PathPermission; }
namespace android::content::pm { class ProviderInfo; }
namespace android::content::res { class AssetFileDescriptor; }
namespace android::content::res { class Configuration; }
namespace android::database { class Cursor; }
namespace android::net { class Uri; }
namespace android::os { class Bundle; }
namespace android::os { class CancellationSignal; }
namespace android::os { class ParcelFileDescriptor; }
namespace java::io { class FileDescriptor; }
namespace java::io { class PrintWriter; }
namespace java::lang { class String; }
namespace java::util { class ArrayList; }

namespace android::content {

class ContentProvider : public object_base<SCAPIX_META_STRING("android/content/ContentProvider"),
	java::lang::Object,
	android::content::ComponentCallbacks2>
{
public:

	using PipeDataWriter = ContentProvider_PipeDataWriter;

	static ref<ContentProvider> new_object();
	ref<android::content::Context> getContext();
	ref<java::lang::String> getCallingPackage();
	ref<java::lang::String> getReadPermission();
	ref<java::lang::String> getWritePermission();
	ref<link::java::array<android::content::pm::PathPermission>> getPathPermissions();
	jboolean onCreate();
	void onConfigurationChanged(ref<android::content::res::Configuration> newConfig);
	void onLowMemory();
	void onTrimMemory(jint level);
	ref<android::database::Cursor> query(ref<android::net::Uri> p1, ref<link::java::array<java::lang::String>> p2, ref<java::lang::String> p3, ref<link::java::array<java::lang::String>> p4, ref<java::lang::String> p5);
	ref<android::database::Cursor> query(ref<android::net::Uri> uri, ref<link::java::array<java::lang::String>> projection, ref<java::lang::String> selection, ref<link::java::array<java::lang::String>> selectionArgs, ref<java::lang::String> sortOrder, ref<android::os::CancellationSignal> cancellationSignal);
	ref<android::database::Cursor> query(ref<android::net::Uri> uri, ref<link::java::array<java::lang::String>> projection, ref<android::os::Bundle> queryArgs, ref<android::os::CancellationSignal> cancellationSignal);
	ref<java::lang::String> getType(ref<android::net::Uri> p1);
	ref<android::net::Uri> canonicalize(ref<android::net::Uri> url);
	ref<android::net::Uri> uncanonicalize(ref<android::net::Uri> url);
	jboolean refresh(ref<android::net::Uri> uri, ref<android::os::Bundle> args, ref<android::os::CancellationSignal> cancellationSignal);
	ref<android::net::Uri> insert(ref<android::net::Uri> p1, ref<android::content::ContentValues> p2);
	jint bulkInsert(ref<android::net::Uri> uri, ref<link::java::array<android::content::ContentValues>> values);
	jint delete_(ref<android::net::Uri> p1, ref<java::lang::String> p2, ref<link::java::array<java::lang::String>> p3);
	jint update(ref<android::net::Uri> p1, ref<android::content::ContentValues> p2, ref<java::lang::String> p3, ref<link::java::array<java::lang::String>> p4);
	ref<android::os::ParcelFileDescriptor> openFile(ref<android::net::Uri> uri, ref<java::lang::String> mode);
	ref<android::os::ParcelFileDescriptor> openFile(ref<android::net::Uri> uri, ref<java::lang::String> mode, ref<android::os::CancellationSignal> signal);
	ref<android::content::res::AssetFileDescriptor> openAssetFile(ref<android::net::Uri> uri, ref<java::lang::String> mode);
	ref<android::content::res::AssetFileDescriptor> openAssetFile(ref<android::net::Uri> uri, ref<java::lang::String> mode, ref<android::os::CancellationSignal> signal);
	ref<link::java::array<java::lang::String>> getStreamTypes(ref<android::net::Uri> uri, ref<java::lang::String> mimeTypeFilter);
	ref<android::content::res::AssetFileDescriptor> openTypedAssetFile(ref<android::net::Uri> uri, ref<java::lang::String> mimeTypeFilter, ref<android::os::Bundle> opts);
	ref<android::content::res::AssetFileDescriptor> openTypedAssetFile(ref<android::net::Uri> uri, ref<java::lang::String> mimeTypeFilter, ref<android::os::Bundle> opts, ref<android::os::CancellationSignal> signal);
	ref<android::os::ParcelFileDescriptor> openPipeHelper(ref<android::net::Uri> uri, ref<java::lang::String> mimeType, ref<android::os::Bundle> opts, ref<java::lang::Object> args, ref<android::content::ContentProvider_PipeDataWriter> func);
	void attachInfo(ref<android::content::Context> context, ref<android::content::pm::ProviderInfo> info);
	ref<link::java::array<android::content::ContentProviderResult>> applyBatch(ref<java::util::ArrayList> operations);
	ref<android::os::Bundle> call(ref<java::lang::String> method, ref<java::lang::String> arg, ref<android::os::Bundle> extras);
	void shutdown();
	void dump(ref<java::io::FileDescriptor> fd, ref<java::io::PrintWriter> writer, ref<link::java::array<java::lang::String>> args);

protected:

	ContentProvider(handle_type h) : base_(h) {}

};

} // namespace android::content
} // namespace scapix::java_api

#include <scapix/java_api/android/content/ContentProvider_PipeDataWriter.h>
#include <scapix/java_api/android/content/ContentProviderResult.h>
#include <scapix/java_api/android/content/ContentValues.h>
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/content/pm/PathPermission.h>
#include <scapix/java_api/android/content/pm/ProviderInfo.h>
#include <scapix/java_api/android/content/res/AssetFileDescriptor.h>
#include <scapix/java_api/android/content/res/Configuration.h>
#include <scapix/java_api/android/database/Cursor.h>
#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/android/os/CancellationSignal.h>
#include <scapix/java_api/android/os/ParcelFileDescriptor.h>
#include <scapix/java_api/java/io/FileDescriptor.h>
#include <scapix/java_api/java/io/PrintWriter.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/ArrayList.h>

namespace scapix::java_api {
namespace android::content {

inline ref<ContentProvider> ContentProvider::new_object() { return base_::new_object(); }
inline ref<android::content::Context> ContentProvider::getContext() { return call_method<SCAPIX_META_STRING("getContext"), ref<android::content::Context>>(); }
inline ref<java::lang::String> ContentProvider::getCallingPackage() { return call_method<SCAPIX_META_STRING("getCallingPackage"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ContentProvider::getReadPermission() { return call_method<SCAPIX_META_STRING("getReadPermission"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ContentProvider::getWritePermission() { return call_method<SCAPIX_META_STRING("getWritePermission"), ref<java::lang::String>>(); }
inline ref<link::java::array<android::content::pm::PathPermission>> ContentProvider::getPathPermissions() { return call_method<SCAPIX_META_STRING("getPathPermissions"), ref<link::java::array<android::content::pm::PathPermission>>>(); }
inline jboolean ContentProvider::onCreate() { return call_method<SCAPIX_META_STRING("onCreate"), jboolean>(); }
inline void ContentProvider::onConfigurationChanged(ref<android::content::res::Configuration> newConfig) { return call_method<SCAPIX_META_STRING("onConfigurationChanged"), void>(newConfig); }
inline void ContentProvider::onLowMemory() { return call_method<SCAPIX_META_STRING("onLowMemory"), void>(); }
inline void ContentProvider::onTrimMemory(jint level) { return call_method<SCAPIX_META_STRING("onTrimMemory"), void>(level); }
inline ref<android::database::Cursor> ContentProvider::query(ref<android::net::Uri> p1, ref<link::java::array<java::lang::String>> p2, ref<java::lang::String> p3, ref<link::java::array<java::lang::String>> p4, ref<java::lang::String> p5) { return call_method<SCAPIX_META_STRING("query"), ref<android::database::Cursor>>(p1, p2, p3, p4, p5); }
inline ref<android::database::Cursor> ContentProvider::query(ref<android::net::Uri> uri, ref<link::java::array<java::lang::String>> projection, ref<java::lang::String> selection, ref<link::java::array<java::lang::String>> selectionArgs, ref<java::lang::String> sortOrder, ref<android::os::CancellationSignal> cancellationSignal) { return call_method<SCAPIX_META_STRING("query"), ref<android::database::Cursor>>(uri, projection, selection, selectionArgs, sortOrder, cancellationSignal); }
inline ref<android::database::Cursor> ContentProvider::query(ref<android::net::Uri> uri, ref<link::java::array<java::lang::String>> projection, ref<android::os::Bundle> queryArgs, ref<android::os::CancellationSignal> cancellationSignal) { return call_method<SCAPIX_META_STRING("query"), ref<android::database::Cursor>>(uri, projection, queryArgs, cancellationSignal); }
inline ref<java::lang::String> ContentProvider::getType(ref<android::net::Uri> p1) { return call_method<SCAPIX_META_STRING("getType"), ref<java::lang::String>>(p1); }
inline ref<android::net::Uri> ContentProvider::canonicalize(ref<android::net::Uri> url) { return call_method<SCAPIX_META_STRING("canonicalize"), ref<android::net::Uri>>(url); }
inline ref<android::net::Uri> ContentProvider::uncanonicalize(ref<android::net::Uri> url) { return call_method<SCAPIX_META_STRING("uncanonicalize"), ref<android::net::Uri>>(url); }
inline jboolean ContentProvider::refresh(ref<android::net::Uri> uri, ref<android::os::Bundle> args, ref<android::os::CancellationSignal> cancellationSignal) { return call_method<SCAPIX_META_STRING("refresh"), jboolean>(uri, args, cancellationSignal); }
inline ref<android::net::Uri> ContentProvider::insert(ref<android::net::Uri> p1, ref<android::content::ContentValues> p2) { return call_method<SCAPIX_META_STRING("insert"), ref<android::net::Uri>>(p1, p2); }
inline jint ContentProvider::bulkInsert(ref<android::net::Uri> uri, ref<link::java::array<android::content::ContentValues>> values) { return call_method<SCAPIX_META_STRING("bulkInsert"), jint>(uri, values); }
inline jint ContentProvider::delete_(ref<android::net::Uri> p1, ref<java::lang::String> p2, ref<link::java::array<java::lang::String>> p3) { return call_method<SCAPIX_META_STRING("delete"), jint>(p1, p2, p3); }
inline jint ContentProvider::update(ref<android::net::Uri> p1, ref<android::content::ContentValues> p2, ref<java::lang::String> p3, ref<link::java::array<java::lang::String>> p4) { return call_method<SCAPIX_META_STRING("update"), jint>(p1, p2, p3, p4); }
inline ref<android::os::ParcelFileDescriptor> ContentProvider::openFile(ref<android::net::Uri> uri, ref<java::lang::String> mode) { return call_method<SCAPIX_META_STRING("openFile"), ref<android::os::ParcelFileDescriptor>>(uri, mode); }
inline ref<android::os::ParcelFileDescriptor> ContentProvider::openFile(ref<android::net::Uri> uri, ref<java::lang::String> mode, ref<android::os::CancellationSignal> signal) { return call_method<SCAPIX_META_STRING("openFile"), ref<android::os::ParcelFileDescriptor>>(uri, mode, signal); }
inline ref<android::content::res::AssetFileDescriptor> ContentProvider::openAssetFile(ref<android::net::Uri> uri, ref<java::lang::String> mode) { return call_method<SCAPIX_META_STRING("openAssetFile"), ref<android::content::res::AssetFileDescriptor>>(uri, mode); }
inline ref<android::content::res::AssetFileDescriptor> ContentProvider::openAssetFile(ref<android::net::Uri> uri, ref<java::lang::String> mode, ref<android::os::CancellationSignal> signal) { return call_method<SCAPIX_META_STRING("openAssetFile"), ref<android::content::res::AssetFileDescriptor>>(uri, mode, signal); }
inline ref<link::java::array<java::lang::String>> ContentProvider::getStreamTypes(ref<android::net::Uri> uri, ref<java::lang::String> mimeTypeFilter) { return call_method<SCAPIX_META_STRING("getStreamTypes"), ref<link::java::array<java::lang::String>>>(uri, mimeTypeFilter); }
inline ref<android::content::res::AssetFileDescriptor> ContentProvider::openTypedAssetFile(ref<android::net::Uri> uri, ref<java::lang::String> mimeTypeFilter, ref<android::os::Bundle> opts) { return call_method<SCAPIX_META_STRING("openTypedAssetFile"), ref<android::content::res::AssetFileDescriptor>>(uri, mimeTypeFilter, opts); }
inline ref<android::content::res::AssetFileDescriptor> ContentProvider::openTypedAssetFile(ref<android::net::Uri> uri, ref<java::lang::String> mimeTypeFilter, ref<android::os::Bundle> opts, ref<android::os::CancellationSignal> signal) { return call_method<SCAPIX_META_STRING("openTypedAssetFile"), ref<android::content::res::AssetFileDescriptor>>(uri, mimeTypeFilter, opts, signal); }
inline ref<android::os::ParcelFileDescriptor> ContentProvider::openPipeHelper(ref<android::net::Uri> uri, ref<java::lang::String> mimeType, ref<android::os::Bundle> opts, ref<java::lang::Object> args, ref<android::content::ContentProvider_PipeDataWriter> func) { return call_method<SCAPIX_META_STRING("openPipeHelper"), ref<android::os::ParcelFileDescriptor>>(uri, mimeType, opts, args, func); }
inline void ContentProvider::attachInfo(ref<android::content::Context> context, ref<android::content::pm::ProviderInfo> info) { return call_method<SCAPIX_META_STRING("attachInfo"), void>(context, info); }
inline ref<link::java::array<android::content::ContentProviderResult>> ContentProvider::applyBatch(ref<java::util::ArrayList> operations) { return call_method<SCAPIX_META_STRING("applyBatch"), ref<link::java::array<android::content::ContentProviderResult>>>(operations); }
inline ref<android::os::Bundle> ContentProvider::call(ref<java::lang::String> method, ref<java::lang::String> arg, ref<android::os::Bundle> extras) { return call_method<SCAPIX_META_STRING("call"), ref<android::os::Bundle>>(method, arg, extras); }
inline void ContentProvider::shutdown() { return call_method<SCAPIX_META_STRING("shutdown"), void>(); }
inline void ContentProvider::dump(ref<java::io::FileDescriptor> fd, ref<java::io::PrintWriter> writer, ref<link::java::array<java::lang::String>> args) { return call_method<SCAPIX_META_STRING("dump"), void>(fd, writer, args); }

} // namespace android::content
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_CONTENT_CONTENTPROVIDER_H
