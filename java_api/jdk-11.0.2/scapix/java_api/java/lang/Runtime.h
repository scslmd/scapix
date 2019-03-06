// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_LANG_RUNTIME_H
#define SCAPIX_JAVA_LANG_RUNTIME_H

namespace scapix::java_api {

namespace java::io { class File; }
namespace java::lang { class Process; }
namespace java::lang { class Runtime_Version; }
namespace java::lang { class String; }
namespace java::lang { class Thread; }

namespace java::lang {

class Runtime : public object_base<SCAPIX_META_STRING("java/lang/Runtime"),
	java::lang::Object>
{
public:

	using Version = Runtime_Version;

	static ref<java::lang::Runtime> getRuntime();
	void exit(jint status);
	void addShutdownHook(ref<java::lang::Thread> hook);
	jboolean removeShutdownHook(ref<java::lang::Thread> hook);
	void halt(jint status);
	ref<java::lang::Process> exec(ref<java::lang::String> command);
	ref<java::lang::Process> exec(ref<java::lang::String> command, ref<link::java::array<java::lang::String>> envp);
	ref<java::lang::Process> exec(ref<java::lang::String> command, ref<link::java::array<java::lang::String>> envp, ref<java::io::File> dir);
	ref<java::lang::Process> exec(ref<link::java::array<java::lang::String>> cmdarray);
	ref<java::lang::Process> exec(ref<link::java::array<java::lang::String>> cmdarray, ref<link::java::array<java::lang::String>> envp);
	ref<java::lang::Process> exec(ref<link::java::array<java::lang::String>> cmdarray, ref<link::java::array<java::lang::String>> envp, ref<java::io::File> dir);
	jint availableProcessors();
	jlong freeMemory();
	jlong totalMemory();
	jlong maxMemory();
	void gc();
	void runFinalization();
	void traceInstructions(jboolean on);
	void traceMethodCalls(jboolean on);
	void load(ref<java::lang::String> filename);
	void loadLibrary(ref<java::lang::String> libname);
	static ref<java::lang::Runtime_Version> version();

protected:

	Runtime(handle_type h) : base_(h) {}

};

} // namespace java::lang
} // namespace scapix::java_api

#include <scapix/java_api/java/io/File.h>
#include <scapix/java_api/java/lang/Process.h>
#include <scapix/java_api/java/lang/Runtime_Version.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Thread.h>

namespace scapix::java_api {
namespace java::lang {

inline ref<java::lang::Runtime> Runtime::getRuntime() { return call_static_method<SCAPIX_META_STRING("getRuntime"), ref<java::lang::Runtime>>(); }
inline void Runtime::exit(jint status) { return call_method<SCAPIX_META_STRING("exit"), void>(status); }
inline void Runtime::addShutdownHook(ref<java::lang::Thread> hook) { return call_method<SCAPIX_META_STRING("addShutdownHook"), void>(hook); }
inline jboolean Runtime::removeShutdownHook(ref<java::lang::Thread> hook) { return call_method<SCAPIX_META_STRING("removeShutdownHook"), jboolean>(hook); }
inline void Runtime::halt(jint status) { return call_method<SCAPIX_META_STRING("halt"), void>(status); }
inline ref<java::lang::Process> Runtime::exec(ref<java::lang::String> command) { return call_method<SCAPIX_META_STRING("exec"), ref<java::lang::Process>>(command); }
inline ref<java::lang::Process> Runtime::exec(ref<java::lang::String> command, ref<link::java::array<java::lang::String>> envp) { return call_method<SCAPIX_META_STRING("exec"), ref<java::lang::Process>>(command, envp); }
inline ref<java::lang::Process> Runtime::exec(ref<java::lang::String> command, ref<link::java::array<java::lang::String>> envp, ref<java::io::File> dir) { return call_method<SCAPIX_META_STRING("exec"), ref<java::lang::Process>>(command, envp, dir); }
inline ref<java::lang::Process> Runtime::exec(ref<link::java::array<java::lang::String>> cmdarray) { return call_method<SCAPIX_META_STRING("exec"), ref<java::lang::Process>>(cmdarray); }
inline ref<java::lang::Process> Runtime::exec(ref<link::java::array<java::lang::String>> cmdarray, ref<link::java::array<java::lang::String>> envp) { return call_method<SCAPIX_META_STRING("exec"), ref<java::lang::Process>>(cmdarray, envp); }
inline ref<java::lang::Process> Runtime::exec(ref<link::java::array<java::lang::String>> cmdarray, ref<link::java::array<java::lang::String>> envp, ref<java::io::File> dir) { return call_method<SCAPIX_META_STRING("exec"), ref<java::lang::Process>>(cmdarray, envp, dir); }
inline jint Runtime::availableProcessors() { return call_method<SCAPIX_META_STRING("availableProcessors"), jint>(); }
inline jlong Runtime::freeMemory() { return call_method<SCAPIX_META_STRING("freeMemory"), jlong>(); }
inline jlong Runtime::totalMemory() { return call_method<SCAPIX_META_STRING("totalMemory"), jlong>(); }
inline jlong Runtime::maxMemory() { return call_method<SCAPIX_META_STRING("maxMemory"), jlong>(); }
inline void Runtime::gc() { return call_method<SCAPIX_META_STRING("gc"), void>(); }
inline void Runtime::runFinalization() { return call_method<SCAPIX_META_STRING("runFinalization"), void>(); }
inline void Runtime::traceInstructions(jboolean on) { return call_method<SCAPIX_META_STRING("traceInstructions"), void>(on); }
inline void Runtime::traceMethodCalls(jboolean on) { return call_method<SCAPIX_META_STRING("traceMethodCalls"), void>(on); }
inline void Runtime::load(ref<java::lang::String> filename) { return call_method<SCAPIX_META_STRING("load"), void>(filename); }
inline void Runtime::loadLibrary(ref<java::lang::String> libname) { return call_method<SCAPIX_META_STRING("loadLibrary"), void>(libname); }
inline ref<java::lang::Runtime_Version> Runtime::version() { return call_static_method<SCAPIX_META_STRING("version"), ref<java::lang::Runtime_Version>>(); }

} // namespace java::lang
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_LANG_RUNTIME_H
