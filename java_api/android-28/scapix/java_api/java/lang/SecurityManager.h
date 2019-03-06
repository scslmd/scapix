// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_LANG_SECURITYMANAGER_H
#define SCAPIX_JAVA_LANG_SECURITYMANAGER_H

namespace scapix::java_api {

namespace java::io { class FileDescriptor; }
namespace java::lang { class Class; }
namespace java::lang { class String; }
namespace java::lang { class Thread; }
namespace java::lang { class ThreadGroup; }
namespace java::net { class InetAddress; }
namespace java::security { class Permission; }

namespace java::lang {

class SecurityManager : public object_base<SCAPIX_META_STRING("java/lang/SecurityManager"),
	java::lang::Object>
{
public:

	static ref<SecurityManager> new_object();
	jboolean getInCheck();
	ref<java::lang::Object> getSecurityContext();
	void checkPermission(ref<java::security::Permission> perm);
	void checkPermission(ref<java::security::Permission> perm, ref<java::lang::Object> context);
	void checkCreateClassLoader();
	void checkAccess(ref<java::lang::Thread> t);
	void checkAccess(ref<java::lang::ThreadGroup> g);
	void checkExit(jint status);
	void checkExec(ref<java::lang::String> cmd);
	void checkLink(ref<java::lang::String> lib);
	void checkRead(ref<java::io::FileDescriptor> fd);
	void checkRead(ref<java::lang::String> file);
	void checkRead(ref<java::lang::String> file, ref<java::lang::Object> context);
	void checkWrite(ref<java::io::FileDescriptor> fd);
	void checkWrite(ref<java::lang::String> file);
	void checkDelete(ref<java::lang::String> file);
	void checkConnect(ref<java::lang::String> host, jint port);
	void checkConnect(ref<java::lang::String> host, jint port, ref<java::lang::Object> context);
	void checkListen(jint port);
	void checkAccept(ref<java::lang::String> host, jint port);
	void checkMulticast(ref<java::net::InetAddress> maddr);
	void checkMulticast(ref<java::net::InetAddress> maddr, jbyte ttl);
	void checkPropertiesAccess();
	void checkPropertyAccess(ref<java::lang::String> key);
	jboolean checkTopLevelWindow(ref<java::lang::Object> window);
	void checkPrintJobAccess();
	void checkSystemClipboardAccess();
	void checkAwtEventQueueAccess();
	void checkPackageAccess(ref<java::lang::String> pkg);
	void checkPackageDefinition(ref<java::lang::String> pkg);
	void checkSetFactory();
	void checkMemberAccess(ref<java::lang::Class> clazz, jint which);
	void checkSecurityAccess(ref<java::lang::String> target);
	ref<java::lang::ThreadGroup> getThreadGroup();

protected:

	SecurityManager(handle_type h) : base_(h) {}

};

} // namespace java::lang
} // namespace scapix::java_api

#include <scapix/java_api/java/io/FileDescriptor.h>
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Thread.h>
#include <scapix/java_api/java/lang/ThreadGroup.h>
#include <scapix/java_api/java/net/InetAddress.h>
#include <scapix/java_api/java/security/Permission.h>

namespace scapix::java_api {
namespace java::lang {

inline ref<SecurityManager> SecurityManager::new_object() { return base_::new_object(); }
inline jboolean SecurityManager::getInCheck() { return call_method<SCAPIX_META_STRING("getInCheck"), jboolean>(); }
inline ref<java::lang::Object> SecurityManager::getSecurityContext() { return call_method<SCAPIX_META_STRING("getSecurityContext"), ref<java::lang::Object>>(); }
inline void SecurityManager::checkPermission(ref<java::security::Permission> perm) { return call_method<SCAPIX_META_STRING("checkPermission"), void>(perm); }
inline void SecurityManager::checkPermission(ref<java::security::Permission> perm, ref<java::lang::Object> context) { return call_method<SCAPIX_META_STRING("checkPermission"), void>(perm, context); }
inline void SecurityManager::checkCreateClassLoader() { return call_method<SCAPIX_META_STRING("checkCreateClassLoader"), void>(); }
inline void SecurityManager::checkAccess(ref<java::lang::Thread> t) { return call_method<SCAPIX_META_STRING("checkAccess"), void>(t); }
inline void SecurityManager::checkAccess(ref<java::lang::ThreadGroup> g) { return call_method<SCAPIX_META_STRING("checkAccess"), void>(g); }
inline void SecurityManager::checkExit(jint status) { return call_method<SCAPIX_META_STRING("checkExit"), void>(status); }
inline void SecurityManager::checkExec(ref<java::lang::String> cmd) { return call_method<SCAPIX_META_STRING("checkExec"), void>(cmd); }
inline void SecurityManager::checkLink(ref<java::lang::String> lib) { return call_method<SCAPIX_META_STRING("checkLink"), void>(lib); }
inline void SecurityManager::checkRead(ref<java::io::FileDescriptor> fd) { return call_method<SCAPIX_META_STRING("checkRead"), void>(fd); }
inline void SecurityManager::checkRead(ref<java::lang::String> file) { return call_method<SCAPIX_META_STRING("checkRead"), void>(file); }
inline void SecurityManager::checkRead(ref<java::lang::String> file, ref<java::lang::Object> context) { return call_method<SCAPIX_META_STRING("checkRead"), void>(file, context); }
inline void SecurityManager::checkWrite(ref<java::io::FileDescriptor> fd) { return call_method<SCAPIX_META_STRING("checkWrite"), void>(fd); }
inline void SecurityManager::checkWrite(ref<java::lang::String> file) { return call_method<SCAPIX_META_STRING("checkWrite"), void>(file); }
inline void SecurityManager::checkDelete(ref<java::lang::String> file) { return call_method<SCAPIX_META_STRING("checkDelete"), void>(file); }
inline void SecurityManager::checkConnect(ref<java::lang::String> host, jint port) { return call_method<SCAPIX_META_STRING("checkConnect"), void>(host, port); }
inline void SecurityManager::checkConnect(ref<java::lang::String> host, jint port, ref<java::lang::Object> context) { return call_method<SCAPIX_META_STRING("checkConnect"), void>(host, port, context); }
inline void SecurityManager::checkListen(jint port) { return call_method<SCAPIX_META_STRING("checkListen"), void>(port); }
inline void SecurityManager::checkAccept(ref<java::lang::String> host, jint port) { return call_method<SCAPIX_META_STRING("checkAccept"), void>(host, port); }
inline void SecurityManager::checkMulticast(ref<java::net::InetAddress> maddr) { return call_method<SCAPIX_META_STRING("checkMulticast"), void>(maddr); }
inline void SecurityManager::checkMulticast(ref<java::net::InetAddress> maddr, jbyte ttl) { return call_method<SCAPIX_META_STRING("checkMulticast"), void>(maddr, ttl); }
inline void SecurityManager::checkPropertiesAccess() { return call_method<SCAPIX_META_STRING("checkPropertiesAccess"), void>(); }
inline void SecurityManager::checkPropertyAccess(ref<java::lang::String> key) { return call_method<SCAPIX_META_STRING("checkPropertyAccess"), void>(key); }
inline jboolean SecurityManager::checkTopLevelWindow(ref<java::lang::Object> window) { return call_method<SCAPIX_META_STRING("checkTopLevelWindow"), jboolean>(window); }
inline void SecurityManager::checkPrintJobAccess() { return call_method<SCAPIX_META_STRING("checkPrintJobAccess"), void>(); }
inline void SecurityManager::checkSystemClipboardAccess() { return call_method<SCAPIX_META_STRING("checkSystemClipboardAccess"), void>(); }
inline void SecurityManager::checkAwtEventQueueAccess() { return call_method<SCAPIX_META_STRING("checkAwtEventQueueAccess"), void>(); }
inline void SecurityManager::checkPackageAccess(ref<java::lang::String> pkg) { return call_method<SCAPIX_META_STRING("checkPackageAccess"), void>(pkg); }
inline void SecurityManager::checkPackageDefinition(ref<java::lang::String> pkg) { return call_method<SCAPIX_META_STRING("checkPackageDefinition"), void>(pkg); }
inline void SecurityManager::checkSetFactory() { return call_method<SCAPIX_META_STRING("checkSetFactory"), void>(); }
inline void SecurityManager::checkMemberAccess(ref<java::lang::Class> clazz, jint which) { return call_method<SCAPIX_META_STRING("checkMemberAccess"), void>(clazz, which); }
inline void SecurityManager::checkSecurityAccess(ref<java::lang::String> target) { return call_method<SCAPIX_META_STRING("checkSecurityAccess"), void>(target); }
inline ref<java::lang::ThreadGroup> SecurityManager::getThreadGroup() { return call_method<SCAPIX_META_STRING("getThreadGroup"), ref<java::lang::ThreadGroup>>(); }

} // namespace java::lang
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_LANG_SECURITYMANAGER_H
