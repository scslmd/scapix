// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/sql/Wrapper.h>
#include <scapix/java_api/java/lang/AutoCloseable.h>

#ifndef SCAPIX_JAVA_SQL_STATEMENT_H
#define SCAPIX_JAVA_SQL_STATEMENT_H

namespace scapix::java_api {

namespace java::lang { class String; }
namespace java::sql { class Connection; }
namespace java::sql { class ResultSet; }
namespace java::sql { class SQLWarning; }

namespace java::sql {

class Statement : public object_base<SCAPIX_META_STRING("java/sql/Statement"),
	java::lang::Object,
	java::sql::Wrapper,
	java::lang::AutoCloseable>
{
public:

	static jint CLOSE_ALL_RESULTS_();
	static jint CLOSE_CURRENT_RESULT_();
	static jint EXECUTE_FAILED_();
	static jint KEEP_CURRENT_RESULT_();
	static jint NO_GENERATED_KEYS_();
	static jint RETURN_GENERATED_KEYS_();
	static jint SUCCESS_NO_INFO_();

	ref<java::sql::ResultSet> executeQuery(ref<java::lang::String> p1);
	jint executeUpdate(ref<java::lang::String> p1);
	void close();
	jint getMaxFieldSize();
	void setMaxFieldSize(jint p1);
	jint getMaxRows();
	void setMaxRows(jint p1);
	void setEscapeProcessing(jboolean p1);
	jint getQueryTimeout();
	void setQueryTimeout(jint p1);
	void cancel();
	ref<java::sql::SQLWarning> getWarnings();
	void clearWarnings();
	void setCursorName(ref<java::lang::String> p1);
	jboolean execute(ref<java::lang::String> p1);
	ref<java::sql::ResultSet> getResultSet();
	jint getUpdateCount();
	jboolean getMoreResults();
	void setFetchDirection(jint p1);
	jint getFetchDirection();
	void setFetchSize(jint p1);
	jint getFetchSize();
	jint getResultSetConcurrency();
	jint getResultSetType();
	void addBatch(ref<java::lang::String> p1);
	void clearBatch();
	ref<link::java::array<jint>> executeBatch();
	ref<java::sql::Connection> getConnection();
	jboolean getMoreResults(jint p1);
	ref<java::sql::ResultSet> getGeneratedKeys();
	jint executeUpdate(ref<java::lang::String> p1, jint p2);
	jint executeUpdate(ref<java::lang::String> p1, ref<link::java::array<jint>> p2);
	jint executeUpdate(ref<java::lang::String> p1, ref<link::java::array<java::lang::String>> p2);
	jboolean execute(ref<java::lang::String> p1, jint p2);
	jboolean execute(ref<java::lang::String> p1, ref<link::java::array<jint>> p2);
	jboolean execute(ref<java::lang::String> p1, ref<link::java::array<java::lang::String>> p2);
	jint getResultSetHoldability();
	jboolean isClosed();
	void setPoolable(jboolean p1);
	jboolean isPoolable();

protected:

	Statement(handle_type h) : base_(h) {}

};

} // namespace java::sql
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/sql/Connection.h>
#include <scapix/java_api/java/sql/ResultSet.h>
#include <scapix/java_api/java/sql/SQLWarning.h>

namespace scapix::java_api {
namespace java::sql {

inline jint Statement::CLOSE_ALL_RESULTS_() { return get_static_field<SCAPIX_META_STRING("CLOSE_ALL_RESULTS"), jint>(); }
inline jint Statement::CLOSE_CURRENT_RESULT_() { return get_static_field<SCAPIX_META_STRING("CLOSE_CURRENT_RESULT"), jint>(); }
inline jint Statement::EXECUTE_FAILED_() { return get_static_field<SCAPIX_META_STRING("EXECUTE_FAILED"), jint>(); }
inline jint Statement::KEEP_CURRENT_RESULT_() { return get_static_field<SCAPIX_META_STRING("KEEP_CURRENT_RESULT"), jint>(); }
inline jint Statement::NO_GENERATED_KEYS_() { return get_static_field<SCAPIX_META_STRING("NO_GENERATED_KEYS"), jint>(); }
inline jint Statement::RETURN_GENERATED_KEYS_() { return get_static_field<SCAPIX_META_STRING("RETURN_GENERATED_KEYS"), jint>(); }
inline jint Statement::SUCCESS_NO_INFO_() { return get_static_field<SCAPIX_META_STRING("SUCCESS_NO_INFO"), jint>(); }
inline ref<java::sql::ResultSet> Statement::executeQuery(ref<java::lang::String> p1) { return call_method<SCAPIX_META_STRING("executeQuery"), ref<java::sql::ResultSet>>(p1); }
inline jint Statement::executeUpdate(ref<java::lang::String> p1) { return call_method<SCAPIX_META_STRING("executeUpdate"), jint>(p1); }
inline void Statement::close() { return call_method<SCAPIX_META_STRING("close"), void>(); }
inline jint Statement::getMaxFieldSize() { return call_method<SCAPIX_META_STRING("getMaxFieldSize"), jint>(); }
inline void Statement::setMaxFieldSize(jint p1) { return call_method<SCAPIX_META_STRING("setMaxFieldSize"), void>(p1); }
inline jint Statement::getMaxRows() { return call_method<SCAPIX_META_STRING("getMaxRows"), jint>(); }
inline void Statement::setMaxRows(jint p1) { return call_method<SCAPIX_META_STRING("setMaxRows"), void>(p1); }
inline void Statement::setEscapeProcessing(jboolean p1) { return call_method<SCAPIX_META_STRING("setEscapeProcessing"), void>(p1); }
inline jint Statement::getQueryTimeout() { return call_method<SCAPIX_META_STRING("getQueryTimeout"), jint>(); }
inline void Statement::setQueryTimeout(jint p1) { return call_method<SCAPIX_META_STRING("setQueryTimeout"), void>(p1); }
inline void Statement::cancel() { return call_method<SCAPIX_META_STRING("cancel"), void>(); }
inline ref<java::sql::SQLWarning> Statement::getWarnings() { return call_method<SCAPIX_META_STRING("getWarnings"), ref<java::sql::SQLWarning>>(); }
inline void Statement::clearWarnings() { return call_method<SCAPIX_META_STRING("clearWarnings"), void>(); }
inline void Statement::setCursorName(ref<java::lang::String> p1) { return call_method<SCAPIX_META_STRING("setCursorName"), void>(p1); }
inline jboolean Statement::execute(ref<java::lang::String> p1) { return call_method<SCAPIX_META_STRING("execute"), jboolean>(p1); }
inline ref<java::sql::ResultSet> Statement::getResultSet() { return call_method<SCAPIX_META_STRING("getResultSet"), ref<java::sql::ResultSet>>(); }
inline jint Statement::getUpdateCount() { return call_method<SCAPIX_META_STRING("getUpdateCount"), jint>(); }
inline jboolean Statement::getMoreResults() { return call_method<SCAPIX_META_STRING("getMoreResults"), jboolean>(); }
inline void Statement::setFetchDirection(jint p1) { return call_method<SCAPIX_META_STRING("setFetchDirection"), void>(p1); }
inline jint Statement::getFetchDirection() { return call_method<SCAPIX_META_STRING("getFetchDirection"), jint>(); }
inline void Statement::setFetchSize(jint p1) { return call_method<SCAPIX_META_STRING("setFetchSize"), void>(p1); }
inline jint Statement::getFetchSize() { return call_method<SCAPIX_META_STRING("getFetchSize"), jint>(); }
inline jint Statement::getResultSetConcurrency() { return call_method<SCAPIX_META_STRING("getResultSetConcurrency"), jint>(); }
inline jint Statement::getResultSetType() { return call_method<SCAPIX_META_STRING("getResultSetType"), jint>(); }
inline void Statement::addBatch(ref<java::lang::String> p1) { return call_method<SCAPIX_META_STRING("addBatch"), void>(p1); }
inline void Statement::clearBatch() { return call_method<SCAPIX_META_STRING("clearBatch"), void>(); }
inline ref<link::java::array<jint>> Statement::executeBatch() { return call_method<SCAPIX_META_STRING("executeBatch"), ref<link::java::array<jint>>>(); }
inline ref<java::sql::Connection> Statement::getConnection() { return call_method<SCAPIX_META_STRING("getConnection"), ref<java::sql::Connection>>(); }
inline jboolean Statement::getMoreResults(jint p1) { return call_method<SCAPIX_META_STRING("getMoreResults"), jboolean>(p1); }
inline ref<java::sql::ResultSet> Statement::getGeneratedKeys() { return call_method<SCAPIX_META_STRING("getGeneratedKeys"), ref<java::sql::ResultSet>>(); }
inline jint Statement::executeUpdate(ref<java::lang::String> p1, jint p2) { return call_method<SCAPIX_META_STRING("executeUpdate"), jint>(p1, p2); }
inline jint Statement::executeUpdate(ref<java::lang::String> p1, ref<link::java::array<jint>> p2) { return call_method<SCAPIX_META_STRING("executeUpdate"), jint>(p1, p2); }
inline jint Statement::executeUpdate(ref<java::lang::String> p1, ref<link::java::array<java::lang::String>> p2) { return call_method<SCAPIX_META_STRING("executeUpdate"), jint>(p1, p2); }
inline jboolean Statement::execute(ref<java::lang::String> p1, jint p2) { return call_method<SCAPIX_META_STRING("execute"), jboolean>(p1, p2); }
inline jboolean Statement::execute(ref<java::lang::String> p1, ref<link::java::array<jint>> p2) { return call_method<SCAPIX_META_STRING("execute"), jboolean>(p1, p2); }
inline jboolean Statement::execute(ref<java::lang::String> p1, ref<link::java::array<java::lang::String>> p2) { return call_method<SCAPIX_META_STRING("execute"), jboolean>(p1, p2); }
inline jint Statement::getResultSetHoldability() { return call_method<SCAPIX_META_STRING("getResultSetHoldability"), jint>(); }
inline jboolean Statement::isClosed() { return call_method<SCAPIX_META_STRING("isClosed"), jboolean>(); }
inline void Statement::setPoolable(jboolean p1) { return call_method<SCAPIX_META_STRING("setPoolable"), void>(p1); }
inline jboolean Statement::isPoolable() { return call_method<SCAPIX_META_STRING("isPoolable"), jboolean>(); }

} // namespace java::sql
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_SQL_STATEMENT_H
