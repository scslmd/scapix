// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/android/database/sqlite/SQLiteClosable.h>

#ifndef SCAPIX_ANDROID_DATABASE_SQLITE_SQLITEDATABASE_H
#define SCAPIX_ANDROID_DATABASE_SQLITE_SQLITEDATABASE_H

namespace scapix::java_api {

namespace android::content { class ContentValues; }
namespace android::database { class Cursor; }
namespace android::database { class DatabaseErrorHandler; }
namespace android::database::sqlite { class SQLiteDatabase_CursorFactory; }
namespace android::database::sqlite { class SQLiteDatabase_OpenParams; }
namespace android::database::sqlite { class SQLiteStatement; }
namespace android::database::sqlite { class SQLiteTransactionListener; }
namespace android::os { class CancellationSignal; }
namespace java::io { class File; }
namespace java::lang { class Object; }
namespace java::lang { class String; }
namespace java::util { class List; }
namespace java::util { class Locale; }
namespace java::util { class Map; }

namespace android::database::sqlite {

class SQLiteDatabase : public object_base<SCAPIX_META_STRING("android/database/sqlite/SQLiteDatabase"),
	android::database::sqlite::SQLiteClosable>
{
public:

	using OpenParams = SQLiteDatabase_OpenParams;
	using CursorFactory = SQLiteDatabase_CursorFactory;

	static jint CONFLICT_ABORT_();
	static jint CONFLICT_FAIL_();
	static jint CONFLICT_IGNORE_();
	static jint CONFLICT_NONE_();
	static jint CONFLICT_REPLACE_();
	static jint CONFLICT_ROLLBACK_();
	static jint CREATE_IF_NECESSARY_();
	static jint ENABLE_WRITE_AHEAD_LOGGING_();
	static jint MAX_SQL_CACHE_SIZE_();
	static jint NO_LOCALIZED_COLLATORS_();
	static jint OPEN_READONLY_();
	static jint OPEN_READWRITE_();
	static jint SQLITE_MAX_LIKE_PATTERN_LENGTH_();

	static jint releaseMemory();
	void setLockingEnabled(jboolean lockingEnabled);
	void beginTransaction();
	void beginTransactionNonExclusive();
	void beginTransactionWithListener(ref<android::database::sqlite::SQLiteTransactionListener> transactionListener);
	void beginTransactionWithListenerNonExclusive(ref<android::database::sqlite::SQLiteTransactionListener> transactionListener);
	void endTransaction();
	void setTransactionSuccessful();
	jboolean inTransaction();
	jboolean isDbLockedByCurrentThread();
	jboolean isDbLockedByOtherThreads();
	jboolean yieldIfContended();
	jboolean yieldIfContendedSafely();
	jboolean yieldIfContendedSafely(jlong sleepAfterYieldDelay);
	ref<java::util::Map> getSyncedTables();
	static ref<android::database::sqlite::SQLiteDatabase> openDatabase(ref<java::lang::String> path, ref<android::database::sqlite::SQLiteDatabase_CursorFactory> factory, jint flags);
	static ref<android::database::sqlite::SQLiteDatabase> openDatabase(ref<java::io::File> path, ref<android::database::sqlite::SQLiteDatabase_OpenParams> openParams);
	static ref<android::database::sqlite::SQLiteDatabase> openDatabase(ref<java::lang::String> path, ref<android::database::sqlite::SQLiteDatabase_CursorFactory> factory, jint flags, ref<android::database::DatabaseErrorHandler> errorHandler);
	static ref<android::database::sqlite::SQLiteDatabase> openOrCreateDatabase(ref<java::io::File> file, ref<android::database::sqlite::SQLiteDatabase_CursorFactory> factory);
	static ref<android::database::sqlite::SQLiteDatabase> openOrCreateDatabase(ref<java::lang::String> path, ref<android::database::sqlite::SQLiteDatabase_CursorFactory> factory);
	static ref<android::database::sqlite::SQLiteDatabase> openOrCreateDatabase(ref<java::lang::String> path, ref<android::database::sqlite::SQLiteDatabase_CursorFactory> factory, ref<android::database::DatabaseErrorHandler> errorHandler);
	static jboolean deleteDatabase(ref<java::io::File> file);
	static ref<android::database::sqlite::SQLiteDatabase> create(ref<android::database::sqlite::SQLiteDatabase_CursorFactory> factory);
	static ref<android::database::sqlite::SQLiteDatabase> createInMemory(ref<android::database::sqlite::SQLiteDatabase_OpenParams> openParams);
	jint getVersion();
	void setVersion(jint version);
	jlong getMaximumSize();
	jlong setMaximumSize(jlong numBytes);
	jlong getPageSize();
	void setPageSize(jlong numBytes);
	void markTableSyncable(ref<java::lang::String> table, ref<java::lang::String> deletedTable);
	void markTableSyncable(ref<java::lang::String> table, ref<java::lang::String> foreignKey, ref<java::lang::String> updateTable);
	static ref<java::lang::String> findEditTable(ref<java::lang::String> tables);
	ref<android::database::sqlite::SQLiteStatement> compileStatement(ref<java::lang::String> sql);
	ref<android::database::Cursor> query(jboolean distinct, ref<java::lang::String> table, ref<link::java::array<java::lang::String>> columns, ref<java::lang::String> selection, ref<link::java::array<java::lang::String>> selectionArgs, ref<java::lang::String> groupBy, ref<java::lang::String> having, ref<java::lang::String> orderBy, ref<java::lang::String> limit);
	ref<android::database::Cursor> query(jboolean distinct, ref<java::lang::String> table, ref<link::java::array<java::lang::String>> columns, ref<java::lang::String> selection, ref<link::java::array<java::lang::String>> selectionArgs, ref<java::lang::String> groupBy, ref<java::lang::String> having, ref<java::lang::String> orderBy, ref<java::lang::String> limit, ref<android::os::CancellationSignal> cancellationSignal);
	ref<android::database::Cursor> queryWithFactory(ref<android::database::sqlite::SQLiteDatabase_CursorFactory> cursorFactory, jboolean distinct, ref<java::lang::String> table, ref<link::java::array<java::lang::String>> columns, ref<java::lang::String> selection, ref<link::java::array<java::lang::String>> selectionArgs, ref<java::lang::String> groupBy, ref<java::lang::String> having, ref<java::lang::String> orderBy, ref<java::lang::String> limit);
	ref<android::database::Cursor> queryWithFactory(ref<android::database::sqlite::SQLiteDatabase_CursorFactory> cursorFactory, jboolean distinct, ref<java::lang::String> table, ref<link::java::array<java::lang::String>> columns, ref<java::lang::String> selection, ref<link::java::array<java::lang::String>> selectionArgs, ref<java::lang::String> groupBy, ref<java::lang::String> having, ref<java::lang::String> orderBy, ref<java::lang::String> limit, ref<android::os::CancellationSignal> cancellationSignal);
	ref<android::database::Cursor> query(ref<java::lang::String> table, ref<link::java::array<java::lang::String>> columns, ref<java::lang::String> selection, ref<link::java::array<java::lang::String>> selectionArgs, ref<java::lang::String> groupBy, ref<java::lang::String> having, ref<java::lang::String> orderBy);
	ref<android::database::Cursor> query(ref<java::lang::String> table, ref<link::java::array<java::lang::String>> columns, ref<java::lang::String> selection, ref<link::java::array<java::lang::String>> selectionArgs, ref<java::lang::String> groupBy, ref<java::lang::String> having, ref<java::lang::String> orderBy, ref<java::lang::String> limit);
	ref<android::database::Cursor> rawQuery(ref<java::lang::String> sql, ref<link::java::array<java::lang::String>> selectionArgs);
	ref<android::database::Cursor> rawQuery(ref<java::lang::String> sql, ref<link::java::array<java::lang::String>> selectionArgs, ref<android::os::CancellationSignal> cancellationSignal);
	ref<android::database::Cursor> rawQueryWithFactory(ref<android::database::sqlite::SQLiteDatabase_CursorFactory> cursorFactory, ref<java::lang::String> sql, ref<link::java::array<java::lang::String>> selectionArgs, ref<java::lang::String> editTable);
	ref<android::database::Cursor> rawQueryWithFactory(ref<android::database::sqlite::SQLiteDatabase_CursorFactory> cursorFactory, ref<java::lang::String> sql, ref<link::java::array<java::lang::String>> selectionArgs, ref<java::lang::String> editTable, ref<android::os::CancellationSignal> cancellationSignal);
	jlong insert(ref<java::lang::String> table, ref<java::lang::String> nullColumnHack, ref<android::content::ContentValues> values);
	jlong insertOrThrow(ref<java::lang::String> table, ref<java::lang::String> nullColumnHack, ref<android::content::ContentValues> values);
	jlong replace(ref<java::lang::String> table, ref<java::lang::String> nullColumnHack, ref<android::content::ContentValues> initialValues);
	jlong replaceOrThrow(ref<java::lang::String> table, ref<java::lang::String> nullColumnHack, ref<android::content::ContentValues> initialValues);
	jlong insertWithOnConflict(ref<java::lang::String> table, ref<java::lang::String> nullColumnHack, ref<android::content::ContentValues> initialValues, jint conflictAlgorithm);
	jint delete_(ref<java::lang::String> table, ref<java::lang::String> whereClause, ref<link::java::array<java::lang::String>> whereArgs);
	jint update(ref<java::lang::String> table, ref<android::content::ContentValues> values, ref<java::lang::String> whereClause, ref<link::java::array<java::lang::String>> whereArgs);
	jint updateWithOnConflict(ref<java::lang::String> table, ref<android::content::ContentValues> values, ref<java::lang::String> whereClause, ref<link::java::array<java::lang::String>> whereArgs, jint conflictAlgorithm);
	void execSQL(ref<java::lang::String> sql);
	void execSQL(ref<java::lang::String> sql, ref<link::java::array<java::lang::Object>> bindArgs);
	void validateSql(ref<java::lang::String> sql, ref<android::os::CancellationSignal> cancellationSignal);
	jboolean isReadOnly();
	jboolean isOpen();
	jboolean needUpgrade(jint newVersion);
	ref<java::lang::String> getPath();
	void setLocale(ref<java::util::Locale> locale);
	void setMaxSqlCacheSize(jint cacheSize);
	void setForeignKeyConstraintsEnabled(jboolean enable);
	jboolean enableWriteAheadLogging();
	void disableWriteAheadLogging();
	jboolean isWriteAheadLoggingEnabled();
	ref<java::util::List> getAttachedDbs();
	jboolean isDatabaseIntegrityOk();
	ref<java::lang::String> toString();

protected:

	SQLiteDatabase(handle_type h) : base_(h) {}

};

} // namespace android::database::sqlite
} // namespace scapix::java_api

#include <scapix/java_api/android/content/ContentValues.h>
#include <scapix/java_api/android/database/Cursor.h>
#include <scapix/java_api/android/database/DatabaseErrorHandler.h>
#include <scapix/java_api/android/database/sqlite/SQLiteDatabase_CursorFactory.h>
#include <scapix/java_api/android/database/sqlite/SQLiteDatabase_OpenParams.h>
#include <scapix/java_api/android/database/sqlite/SQLiteStatement.h>
#include <scapix/java_api/android/database/sqlite/SQLiteTransactionListener.h>
#include <scapix/java_api/android/os/CancellationSignal.h>
#include <scapix/java_api/java/io/File.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/java/util/Locale.h>
#include <scapix/java_api/java/util/Map.h>

namespace scapix::java_api {
namespace android::database::sqlite {

inline jint SQLiteDatabase::CONFLICT_ABORT_() { return get_static_field<SCAPIX_META_STRING("CONFLICT_ABORT"), jint>(); }
inline jint SQLiteDatabase::CONFLICT_FAIL_() { return get_static_field<SCAPIX_META_STRING("CONFLICT_FAIL"), jint>(); }
inline jint SQLiteDatabase::CONFLICT_IGNORE_() { return get_static_field<SCAPIX_META_STRING("CONFLICT_IGNORE"), jint>(); }
inline jint SQLiteDatabase::CONFLICT_NONE_() { return get_static_field<SCAPIX_META_STRING("CONFLICT_NONE"), jint>(); }
inline jint SQLiteDatabase::CONFLICT_REPLACE_() { return get_static_field<SCAPIX_META_STRING("CONFLICT_REPLACE"), jint>(); }
inline jint SQLiteDatabase::CONFLICT_ROLLBACK_() { return get_static_field<SCAPIX_META_STRING("CONFLICT_ROLLBACK"), jint>(); }
inline jint SQLiteDatabase::CREATE_IF_NECESSARY_() { return get_static_field<SCAPIX_META_STRING("CREATE_IF_NECESSARY"), jint>(); }
inline jint SQLiteDatabase::ENABLE_WRITE_AHEAD_LOGGING_() { return get_static_field<SCAPIX_META_STRING("ENABLE_WRITE_AHEAD_LOGGING"), jint>(); }
inline jint SQLiteDatabase::MAX_SQL_CACHE_SIZE_() { return get_static_field<SCAPIX_META_STRING("MAX_SQL_CACHE_SIZE"), jint>(); }
inline jint SQLiteDatabase::NO_LOCALIZED_COLLATORS_() { return get_static_field<SCAPIX_META_STRING("NO_LOCALIZED_COLLATORS"), jint>(); }
inline jint SQLiteDatabase::OPEN_READONLY_() { return get_static_field<SCAPIX_META_STRING("OPEN_READONLY"), jint>(); }
inline jint SQLiteDatabase::OPEN_READWRITE_() { return get_static_field<SCAPIX_META_STRING("OPEN_READWRITE"), jint>(); }
inline jint SQLiteDatabase::SQLITE_MAX_LIKE_PATTERN_LENGTH_() { return get_static_field<SCAPIX_META_STRING("SQLITE_MAX_LIKE_PATTERN_LENGTH"), jint>(); }
inline jint SQLiteDatabase::releaseMemory() { return call_static_method<SCAPIX_META_STRING("releaseMemory"), jint>(); }
inline void SQLiteDatabase::setLockingEnabled(jboolean lockingEnabled) { return call_method<SCAPIX_META_STRING("setLockingEnabled"), void>(lockingEnabled); }
inline void SQLiteDatabase::beginTransaction() { return call_method<SCAPIX_META_STRING("beginTransaction"), void>(); }
inline void SQLiteDatabase::beginTransactionNonExclusive() { return call_method<SCAPIX_META_STRING("beginTransactionNonExclusive"), void>(); }
inline void SQLiteDatabase::beginTransactionWithListener(ref<android::database::sqlite::SQLiteTransactionListener> transactionListener) { return call_method<SCAPIX_META_STRING("beginTransactionWithListener"), void>(transactionListener); }
inline void SQLiteDatabase::beginTransactionWithListenerNonExclusive(ref<android::database::sqlite::SQLiteTransactionListener> transactionListener) { return call_method<SCAPIX_META_STRING("beginTransactionWithListenerNonExclusive"), void>(transactionListener); }
inline void SQLiteDatabase::endTransaction() { return call_method<SCAPIX_META_STRING("endTransaction"), void>(); }
inline void SQLiteDatabase::setTransactionSuccessful() { return call_method<SCAPIX_META_STRING("setTransactionSuccessful"), void>(); }
inline jboolean SQLiteDatabase::inTransaction() { return call_method<SCAPIX_META_STRING("inTransaction"), jboolean>(); }
inline jboolean SQLiteDatabase::isDbLockedByCurrentThread() { return call_method<SCAPIX_META_STRING("isDbLockedByCurrentThread"), jboolean>(); }
inline jboolean SQLiteDatabase::isDbLockedByOtherThreads() { return call_method<SCAPIX_META_STRING("isDbLockedByOtherThreads"), jboolean>(); }
inline jboolean SQLiteDatabase::yieldIfContended() { return call_method<SCAPIX_META_STRING("yieldIfContended"), jboolean>(); }
inline jboolean SQLiteDatabase::yieldIfContendedSafely() { return call_method<SCAPIX_META_STRING("yieldIfContendedSafely"), jboolean>(); }
inline jboolean SQLiteDatabase::yieldIfContendedSafely(jlong sleepAfterYieldDelay) { return call_method<SCAPIX_META_STRING("yieldIfContendedSafely"), jboolean>(sleepAfterYieldDelay); }
inline ref<java::util::Map> SQLiteDatabase::getSyncedTables() { return call_method<SCAPIX_META_STRING("getSyncedTables"), ref<java::util::Map>>(); }
inline ref<android::database::sqlite::SQLiteDatabase> SQLiteDatabase::openDatabase(ref<java::lang::String> path, ref<android::database::sqlite::SQLiteDatabase_CursorFactory> factory, jint flags) { return call_static_method<SCAPIX_META_STRING("openDatabase"), ref<android::database::sqlite::SQLiteDatabase>>(path, factory, flags); }
inline ref<android::database::sqlite::SQLiteDatabase> SQLiteDatabase::openDatabase(ref<java::io::File> path, ref<android::database::sqlite::SQLiteDatabase_OpenParams> openParams) { return call_static_method<SCAPIX_META_STRING("openDatabase"), ref<android::database::sqlite::SQLiteDatabase>>(path, openParams); }
inline ref<android::database::sqlite::SQLiteDatabase> SQLiteDatabase::openDatabase(ref<java::lang::String> path, ref<android::database::sqlite::SQLiteDatabase_CursorFactory> factory, jint flags, ref<android::database::DatabaseErrorHandler> errorHandler) { return call_static_method<SCAPIX_META_STRING("openDatabase"), ref<android::database::sqlite::SQLiteDatabase>>(path, factory, flags, errorHandler); }
inline ref<android::database::sqlite::SQLiteDatabase> SQLiteDatabase::openOrCreateDatabase(ref<java::io::File> file, ref<android::database::sqlite::SQLiteDatabase_CursorFactory> factory) { return call_static_method<SCAPIX_META_STRING("openOrCreateDatabase"), ref<android::database::sqlite::SQLiteDatabase>>(file, factory); }
inline ref<android::database::sqlite::SQLiteDatabase> SQLiteDatabase::openOrCreateDatabase(ref<java::lang::String> path, ref<android::database::sqlite::SQLiteDatabase_CursorFactory> factory) { return call_static_method<SCAPIX_META_STRING("openOrCreateDatabase"), ref<android::database::sqlite::SQLiteDatabase>>(path, factory); }
inline ref<android::database::sqlite::SQLiteDatabase> SQLiteDatabase::openOrCreateDatabase(ref<java::lang::String> path, ref<android::database::sqlite::SQLiteDatabase_CursorFactory> factory, ref<android::database::DatabaseErrorHandler> errorHandler) { return call_static_method<SCAPIX_META_STRING("openOrCreateDatabase"), ref<android::database::sqlite::SQLiteDatabase>>(path, factory, errorHandler); }
inline jboolean SQLiteDatabase::deleteDatabase(ref<java::io::File> file) { return call_static_method<SCAPIX_META_STRING("deleteDatabase"), jboolean>(file); }
inline ref<android::database::sqlite::SQLiteDatabase> SQLiteDatabase::create(ref<android::database::sqlite::SQLiteDatabase_CursorFactory> factory) { return call_static_method<SCAPIX_META_STRING("create"), ref<android::database::sqlite::SQLiteDatabase>>(factory); }
inline ref<android::database::sqlite::SQLiteDatabase> SQLiteDatabase::createInMemory(ref<android::database::sqlite::SQLiteDatabase_OpenParams> openParams) { return call_static_method<SCAPIX_META_STRING("createInMemory"), ref<android::database::sqlite::SQLiteDatabase>>(openParams); }
inline jint SQLiteDatabase::getVersion() { return call_method<SCAPIX_META_STRING("getVersion"), jint>(); }
inline void SQLiteDatabase::setVersion(jint version) { return call_method<SCAPIX_META_STRING("setVersion"), void>(version); }
inline jlong SQLiteDatabase::getMaximumSize() { return call_method<SCAPIX_META_STRING("getMaximumSize"), jlong>(); }
inline jlong SQLiteDatabase::setMaximumSize(jlong numBytes) { return call_method<SCAPIX_META_STRING("setMaximumSize"), jlong>(numBytes); }
inline jlong SQLiteDatabase::getPageSize() { return call_method<SCAPIX_META_STRING("getPageSize"), jlong>(); }
inline void SQLiteDatabase::setPageSize(jlong numBytes) { return call_method<SCAPIX_META_STRING("setPageSize"), void>(numBytes); }
inline void SQLiteDatabase::markTableSyncable(ref<java::lang::String> table, ref<java::lang::String> deletedTable) { return call_method<SCAPIX_META_STRING("markTableSyncable"), void>(table, deletedTable); }
inline void SQLiteDatabase::markTableSyncable(ref<java::lang::String> table, ref<java::lang::String> foreignKey, ref<java::lang::String> updateTable) { return call_method<SCAPIX_META_STRING("markTableSyncable"), void>(table, foreignKey, updateTable); }
inline ref<java::lang::String> SQLiteDatabase::findEditTable(ref<java::lang::String> tables) { return call_static_method<SCAPIX_META_STRING("findEditTable"), ref<java::lang::String>>(tables); }
inline ref<android::database::sqlite::SQLiteStatement> SQLiteDatabase::compileStatement(ref<java::lang::String> sql) { return call_method<SCAPIX_META_STRING("compileStatement"), ref<android::database::sqlite::SQLiteStatement>>(sql); }
inline ref<android::database::Cursor> SQLiteDatabase::query(jboolean distinct, ref<java::lang::String> table, ref<link::java::array<java::lang::String>> columns, ref<java::lang::String> selection, ref<link::java::array<java::lang::String>> selectionArgs, ref<java::lang::String> groupBy, ref<java::lang::String> having, ref<java::lang::String> orderBy, ref<java::lang::String> limit) { return call_method<SCAPIX_META_STRING("query"), ref<android::database::Cursor>>(distinct, table, columns, selection, selectionArgs, groupBy, having, orderBy, limit); }
inline ref<android::database::Cursor> SQLiteDatabase::query(jboolean distinct, ref<java::lang::String> table, ref<link::java::array<java::lang::String>> columns, ref<java::lang::String> selection, ref<link::java::array<java::lang::String>> selectionArgs, ref<java::lang::String> groupBy, ref<java::lang::String> having, ref<java::lang::String> orderBy, ref<java::lang::String> limit, ref<android::os::CancellationSignal> cancellationSignal) { return call_method<SCAPIX_META_STRING("query"), ref<android::database::Cursor>>(distinct, table, columns, selection, selectionArgs, groupBy, having, orderBy, limit, cancellationSignal); }
inline ref<android::database::Cursor> SQLiteDatabase::queryWithFactory(ref<android::database::sqlite::SQLiteDatabase_CursorFactory> cursorFactory, jboolean distinct, ref<java::lang::String> table, ref<link::java::array<java::lang::String>> columns, ref<java::lang::String> selection, ref<link::java::array<java::lang::String>> selectionArgs, ref<java::lang::String> groupBy, ref<java::lang::String> having, ref<java::lang::String> orderBy, ref<java::lang::String> limit) { return call_method<SCAPIX_META_STRING("queryWithFactory"), ref<android::database::Cursor>>(cursorFactory, distinct, table, columns, selection, selectionArgs, groupBy, having, orderBy, limit); }
inline ref<android::database::Cursor> SQLiteDatabase::queryWithFactory(ref<android::database::sqlite::SQLiteDatabase_CursorFactory> cursorFactory, jboolean distinct, ref<java::lang::String> table, ref<link::java::array<java::lang::String>> columns, ref<java::lang::String> selection, ref<link::java::array<java::lang::String>> selectionArgs, ref<java::lang::String> groupBy, ref<java::lang::String> having, ref<java::lang::String> orderBy, ref<java::lang::String> limit, ref<android::os::CancellationSignal> cancellationSignal) { return call_method<SCAPIX_META_STRING("queryWithFactory"), ref<android::database::Cursor>>(cursorFactory, distinct, table, columns, selection, selectionArgs, groupBy, having, orderBy, limit, cancellationSignal); }
inline ref<android::database::Cursor> SQLiteDatabase::query(ref<java::lang::String> table, ref<link::java::array<java::lang::String>> columns, ref<java::lang::String> selection, ref<link::java::array<java::lang::String>> selectionArgs, ref<java::lang::String> groupBy, ref<java::lang::String> having, ref<java::lang::String> orderBy) { return call_method<SCAPIX_META_STRING("query"), ref<android::database::Cursor>>(table, columns, selection, selectionArgs, groupBy, having, orderBy); }
inline ref<android::database::Cursor> SQLiteDatabase::query(ref<java::lang::String> table, ref<link::java::array<java::lang::String>> columns, ref<java::lang::String> selection, ref<link::java::array<java::lang::String>> selectionArgs, ref<java::lang::String> groupBy, ref<java::lang::String> having, ref<java::lang::String> orderBy, ref<java::lang::String> limit) { return call_method<SCAPIX_META_STRING("query"), ref<android::database::Cursor>>(table, columns, selection, selectionArgs, groupBy, having, orderBy, limit); }
inline ref<android::database::Cursor> SQLiteDatabase::rawQuery(ref<java::lang::String> sql, ref<link::java::array<java::lang::String>> selectionArgs) { return call_method<SCAPIX_META_STRING("rawQuery"), ref<android::database::Cursor>>(sql, selectionArgs); }
inline ref<android::database::Cursor> SQLiteDatabase::rawQuery(ref<java::lang::String> sql, ref<link::java::array<java::lang::String>> selectionArgs, ref<android::os::CancellationSignal> cancellationSignal) { return call_method<SCAPIX_META_STRING("rawQuery"), ref<android::database::Cursor>>(sql, selectionArgs, cancellationSignal); }
inline ref<android::database::Cursor> SQLiteDatabase::rawQueryWithFactory(ref<android::database::sqlite::SQLiteDatabase_CursorFactory> cursorFactory, ref<java::lang::String> sql, ref<link::java::array<java::lang::String>> selectionArgs, ref<java::lang::String> editTable) { return call_method<SCAPIX_META_STRING("rawQueryWithFactory"), ref<android::database::Cursor>>(cursorFactory, sql, selectionArgs, editTable); }
inline ref<android::database::Cursor> SQLiteDatabase::rawQueryWithFactory(ref<android::database::sqlite::SQLiteDatabase_CursorFactory> cursorFactory, ref<java::lang::String> sql, ref<link::java::array<java::lang::String>> selectionArgs, ref<java::lang::String> editTable, ref<android::os::CancellationSignal> cancellationSignal) { return call_method<SCAPIX_META_STRING("rawQueryWithFactory"), ref<android::database::Cursor>>(cursorFactory, sql, selectionArgs, editTable, cancellationSignal); }
inline jlong SQLiteDatabase::insert(ref<java::lang::String> table, ref<java::lang::String> nullColumnHack, ref<android::content::ContentValues> values) { return call_method<SCAPIX_META_STRING("insert"), jlong>(table, nullColumnHack, values); }
inline jlong SQLiteDatabase::insertOrThrow(ref<java::lang::String> table, ref<java::lang::String> nullColumnHack, ref<android::content::ContentValues> values) { return call_method<SCAPIX_META_STRING("insertOrThrow"), jlong>(table, nullColumnHack, values); }
inline jlong SQLiteDatabase::replace(ref<java::lang::String> table, ref<java::lang::String> nullColumnHack, ref<android::content::ContentValues> initialValues) { return call_method<SCAPIX_META_STRING("replace"), jlong>(table, nullColumnHack, initialValues); }
inline jlong SQLiteDatabase::replaceOrThrow(ref<java::lang::String> table, ref<java::lang::String> nullColumnHack, ref<android::content::ContentValues> initialValues) { return call_method<SCAPIX_META_STRING("replaceOrThrow"), jlong>(table, nullColumnHack, initialValues); }
inline jlong SQLiteDatabase::insertWithOnConflict(ref<java::lang::String> table, ref<java::lang::String> nullColumnHack, ref<android::content::ContentValues> initialValues, jint conflictAlgorithm) { return call_method<SCAPIX_META_STRING("insertWithOnConflict"), jlong>(table, nullColumnHack, initialValues, conflictAlgorithm); }
inline jint SQLiteDatabase::delete_(ref<java::lang::String> table, ref<java::lang::String> whereClause, ref<link::java::array<java::lang::String>> whereArgs) { return call_method<SCAPIX_META_STRING("delete"), jint>(table, whereClause, whereArgs); }
inline jint SQLiteDatabase::update(ref<java::lang::String> table, ref<android::content::ContentValues> values, ref<java::lang::String> whereClause, ref<link::java::array<java::lang::String>> whereArgs) { return call_method<SCAPIX_META_STRING("update"), jint>(table, values, whereClause, whereArgs); }
inline jint SQLiteDatabase::updateWithOnConflict(ref<java::lang::String> table, ref<android::content::ContentValues> values, ref<java::lang::String> whereClause, ref<link::java::array<java::lang::String>> whereArgs, jint conflictAlgorithm) { return call_method<SCAPIX_META_STRING("updateWithOnConflict"), jint>(table, values, whereClause, whereArgs, conflictAlgorithm); }
inline void SQLiteDatabase::execSQL(ref<java::lang::String> sql) { return call_method<SCAPIX_META_STRING("execSQL"), void>(sql); }
inline void SQLiteDatabase::execSQL(ref<java::lang::String> sql, ref<link::java::array<java::lang::Object>> bindArgs) { return call_method<SCAPIX_META_STRING("execSQL"), void>(sql, bindArgs); }
inline void SQLiteDatabase::validateSql(ref<java::lang::String> sql, ref<android::os::CancellationSignal> cancellationSignal) { return call_method<SCAPIX_META_STRING("validateSql"), void>(sql, cancellationSignal); }
inline jboolean SQLiteDatabase::isReadOnly() { return call_method<SCAPIX_META_STRING("isReadOnly"), jboolean>(); }
inline jboolean SQLiteDatabase::isOpen() { return call_method<SCAPIX_META_STRING("isOpen"), jboolean>(); }
inline jboolean SQLiteDatabase::needUpgrade(jint newVersion) { return call_method<SCAPIX_META_STRING("needUpgrade"), jboolean>(newVersion); }
inline ref<java::lang::String> SQLiteDatabase::getPath() { return call_method<SCAPIX_META_STRING("getPath"), ref<java::lang::String>>(); }
inline void SQLiteDatabase::setLocale(ref<java::util::Locale> locale) { return call_method<SCAPIX_META_STRING("setLocale"), void>(locale); }
inline void SQLiteDatabase::setMaxSqlCacheSize(jint cacheSize) { return call_method<SCAPIX_META_STRING("setMaxSqlCacheSize"), void>(cacheSize); }
inline void SQLiteDatabase::setForeignKeyConstraintsEnabled(jboolean enable) { return call_method<SCAPIX_META_STRING("setForeignKeyConstraintsEnabled"), void>(enable); }
inline jboolean SQLiteDatabase::enableWriteAheadLogging() { return call_method<SCAPIX_META_STRING("enableWriteAheadLogging"), jboolean>(); }
inline void SQLiteDatabase::disableWriteAheadLogging() { return call_method<SCAPIX_META_STRING("disableWriteAheadLogging"), void>(); }
inline jboolean SQLiteDatabase::isWriteAheadLoggingEnabled() { return call_method<SCAPIX_META_STRING("isWriteAheadLoggingEnabled"), jboolean>(); }
inline ref<java::util::List> SQLiteDatabase::getAttachedDbs() { return call_method<SCAPIX_META_STRING("getAttachedDbs"), ref<java::util::List>>(); }
inline jboolean SQLiteDatabase::isDatabaseIntegrityOk() { return call_method<SCAPIX_META_STRING("isDatabaseIntegrityOk"), jboolean>(); }
inline ref<java::lang::String> SQLiteDatabase::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }

} // namespace android::database::sqlite
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_DATABASE_SQLITE_SQLITEDATABASE_H
