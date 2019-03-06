// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_DATABASE_DATABASEUTILS_H
#define SCAPIX_ANDROID_DATABASE_DATABASEUTILS_H

namespace scapix::java_api {

namespace android::content { class ContentValues; }
namespace android::content { class Context; }
namespace android::database { class Cursor; }
namespace android::database { class DatabaseUtils_InsertHelper; }
namespace android::database::sqlite { class SQLiteDatabase; }
namespace android::database::sqlite { class SQLiteProgram; }
namespace android::database::sqlite { class SQLiteStatement; }
namespace android::os { class Parcel; }
namespace android::os { class ParcelFileDescriptor; }
namespace java::io { class PrintStream; }
namespace java::lang { class Exception; }
namespace java::lang { class String; }
namespace java::lang { class StringBuilder; }

namespace android::database {

class DatabaseUtils : public object_base<SCAPIX_META_STRING("android/database/DatabaseUtils"),
	java::lang::Object>
{
public:

	using InsertHelper = DatabaseUtils_InsertHelper;

	static jint STATEMENT_ABORT_();
	static jint STATEMENT_ATTACH_();
	static jint STATEMENT_BEGIN_();
	static jint STATEMENT_COMMIT_();
	static jint STATEMENT_DDL_();
	static jint STATEMENT_OTHER_();
	static jint STATEMENT_PRAGMA_();
	static jint STATEMENT_SELECT_();
	static jint STATEMENT_UNPREPARED_();
	static jint STATEMENT_UPDATE_();

	static ref<DatabaseUtils> new_object();
	static void writeExceptionToParcel(ref<android::os::Parcel> reply, ref<java::lang::Exception> e);
	static void readExceptionFromParcel(ref<android::os::Parcel> reply);
	static void readExceptionWithFileNotFoundExceptionFromParcel(ref<android::os::Parcel> reply);
	static void readExceptionWithOperationApplicationExceptionFromParcel(ref<android::os::Parcel> reply);
	static void bindObjectToProgram(ref<android::database::sqlite::SQLiteProgram> prog, jint index, ref<java::lang::Object> value);
	static void appendEscapedSQLString(ref<java::lang::StringBuilder> sb, ref<java::lang::String> sqlString);
	static ref<java::lang::String> sqlEscapeString(ref<java::lang::String> value);
	static void appendValueToSql(ref<java::lang::StringBuilder> sql, ref<java::lang::Object> value);
	static ref<java::lang::String> concatenateWhere(ref<java::lang::String> a, ref<java::lang::String> b);
	static ref<java::lang::String> getCollationKey(ref<java::lang::String> name);
	static ref<java::lang::String> getHexCollationKey(ref<java::lang::String> name);
	static void dumpCursor(ref<android::database::Cursor> cursor);
	static void dumpCursor(ref<android::database::Cursor> cursor, ref<java::io::PrintStream> stream);
	static void dumpCursor(ref<android::database::Cursor> cursor, ref<java::lang::StringBuilder> sb);
	static ref<java::lang::String> dumpCursorToString(ref<android::database::Cursor> cursor);
	static void dumpCurrentRow(ref<android::database::Cursor> cursor);
	static void dumpCurrentRow(ref<android::database::Cursor> cursor, ref<java::io::PrintStream> stream);
	static void dumpCurrentRow(ref<android::database::Cursor> cursor, ref<java::lang::StringBuilder> sb);
	static ref<java::lang::String> dumpCurrentRowToString(ref<android::database::Cursor> cursor);
	static void cursorStringToContentValues(ref<android::database::Cursor> cursor, ref<java::lang::String> field, ref<android::content::ContentValues> values);
	static void cursorStringToInsertHelper(ref<android::database::Cursor> cursor, ref<java::lang::String> field, ref<android::database::DatabaseUtils_InsertHelper> inserter, jint index);
	static void cursorStringToContentValues(ref<android::database::Cursor> cursor, ref<java::lang::String> field, ref<android::content::ContentValues> values, ref<java::lang::String> key);
	static void cursorIntToContentValues(ref<android::database::Cursor> cursor, ref<java::lang::String> field, ref<android::content::ContentValues> values);
	static void cursorIntToContentValues(ref<android::database::Cursor> cursor, ref<java::lang::String> field, ref<android::content::ContentValues> values, ref<java::lang::String> key);
	static void cursorLongToContentValues(ref<android::database::Cursor> cursor, ref<java::lang::String> field, ref<android::content::ContentValues> values);
	static void cursorLongToContentValues(ref<android::database::Cursor> cursor, ref<java::lang::String> field, ref<android::content::ContentValues> values, ref<java::lang::String> key);
	static void cursorDoubleToCursorValues(ref<android::database::Cursor> cursor, ref<java::lang::String> field, ref<android::content::ContentValues> values);
	static void cursorDoubleToContentValues(ref<android::database::Cursor> cursor, ref<java::lang::String> field, ref<android::content::ContentValues> values, ref<java::lang::String> key);
	static void cursorRowToContentValues(ref<android::database::Cursor> cursor, ref<android::content::ContentValues> values);
	static jlong queryNumEntries(ref<android::database::sqlite::SQLiteDatabase> db, ref<java::lang::String> table);
	static jlong queryNumEntries(ref<android::database::sqlite::SQLiteDatabase> db, ref<java::lang::String> table, ref<java::lang::String> selection);
	static jlong queryNumEntries(ref<android::database::sqlite::SQLiteDatabase> db, ref<java::lang::String> table, ref<java::lang::String> selection, ref<link::java::array<java::lang::String>> selectionArgs);
	static jlong longForQuery(ref<android::database::sqlite::SQLiteDatabase> db, ref<java::lang::String> query, ref<link::java::array<java::lang::String>> selectionArgs);
	static jlong longForQuery(ref<android::database::sqlite::SQLiteStatement> prog, ref<link::java::array<java::lang::String>> selectionArgs);
	static ref<java::lang::String> stringForQuery(ref<android::database::sqlite::SQLiteDatabase> db, ref<java::lang::String> query, ref<link::java::array<java::lang::String>> selectionArgs);
	static ref<java::lang::String> stringForQuery(ref<android::database::sqlite::SQLiteStatement> prog, ref<link::java::array<java::lang::String>> selectionArgs);
	static ref<android::os::ParcelFileDescriptor> blobFileDescriptorForQuery(ref<android::database::sqlite::SQLiteDatabase> db, ref<java::lang::String> query, ref<link::java::array<java::lang::String>> selectionArgs);
	static ref<android::os::ParcelFileDescriptor> blobFileDescriptorForQuery(ref<android::database::sqlite::SQLiteStatement> prog, ref<link::java::array<java::lang::String>> selectionArgs);
	static void cursorStringToContentValuesIfPresent(ref<android::database::Cursor> cursor, ref<android::content::ContentValues> values, ref<java::lang::String> column);
	static void cursorLongToContentValuesIfPresent(ref<android::database::Cursor> cursor, ref<android::content::ContentValues> values, ref<java::lang::String> column);
	static void cursorShortToContentValuesIfPresent(ref<android::database::Cursor> cursor, ref<android::content::ContentValues> values, ref<java::lang::String> column);
	static void cursorIntToContentValuesIfPresent(ref<android::database::Cursor> cursor, ref<android::content::ContentValues> values, ref<java::lang::String> column);
	static void cursorFloatToContentValuesIfPresent(ref<android::database::Cursor> cursor, ref<android::content::ContentValues> values, ref<java::lang::String> column);
	static void cursorDoubleToContentValuesIfPresent(ref<android::database::Cursor> cursor, ref<android::content::ContentValues> values, ref<java::lang::String> column);
	static void createDbFromSqlStatements(ref<android::content::Context> context, ref<java::lang::String> dbName, jint dbVersion, ref<java::lang::String> sqlStatements);
	static jint getSqlStatementType(ref<java::lang::String> sql);
	static ref<link::java::array<java::lang::String>> appendSelectionArgs(ref<link::java::array<java::lang::String>> originalValues, ref<link::java::array<java::lang::String>> newValues);

protected:

	DatabaseUtils(handle_type h) : base_(h) {}

};

} // namespace android::database
} // namespace scapix::java_api

#include <scapix/java_api/android/content/ContentValues.h>
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/database/Cursor.h>
#include <scapix/java_api/android/database/DatabaseUtils_InsertHelper.h>
#include <scapix/java_api/android/database/sqlite/SQLiteDatabase.h>
#include <scapix/java_api/android/database/sqlite/SQLiteProgram.h>
#include <scapix/java_api/android/database/sqlite/SQLiteStatement.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/ParcelFileDescriptor.h>
#include <scapix/java_api/java/io/PrintStream.h>
#include <scapix/java_api/java/lang/Exception.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/StringBuilder.h>

namespace scapix::java_api {
namespace android::database {

inline jint DatabaseUtils::STATEMENT_ABORT_() { return get_static_field<SCAPIX_META_STRING("STATEMENT_ABORT"), jint>(); }
inline jint DatabaseUtils::STATEMENT_ATTACH_() { return get_static_field<SCAPIX_META_STRING("STATEMENT_ATTACH"), jint>(); }
inline jint DatabaseUtils::STATEMENT_BEGIN_() { return get_static_field<SCAPIX_META_STRING("STATEMENT_BEGIN"), jint>(); }
inline jint DatabaseUtils::STATEMENT_COMMIT_() { return get_static_field<SCAPIX_META_STRING("STATEMENT_COMMIT"), jint>(); }
inline jint DatabaseUtils::STATEMENT_DDL_() { return get_static_field<SCAPIX_META_STRING("STATEMENT_DDL"), jint>(); }
inline jint DatabaseUtils::STATEMENT_OTHER_() { return get_static_field<SCAPIX_META_STRING("STATEMENT_OTHER"), jint>(); }
inline jint DatabaseUtils::STATEMENT_PRAGMA_() { return get_static_field<SCAPIX_META_STRING("STATEMENT_PRAGMA"), jint>(); }
inline jint DatabaseUtils::STATEMENT_SELECT_() { return get_static_field<SCAPIX_META_STRING("STATEMENT_SELECT"), jint>(); }
inline jint DatabaseUtils::STATEMENT_UNPREPARED_() { return get_static_field<SCAPIX_META_STRING("STATEMENT_UNPREPARED"), jint>(); }
inline jint DatabaseUtils::STATEMENT_UPDATE_() { return get_static_field<SCAPIX_META_STRING("STATEMENT_UPDATE"), jint>(); }
inline ref<DatabaseUtils> DatabaseUtils::new_object() { return base_::new_object(); }
inline void DatabaseUtils::writeExceptionToParcel(ref<android::os::Parcel> reply, ref<java::lang::Exception> e) { return call_static_method<SCAPIX_META_STRING("writeExceptionToParcel"), void>(reply, e); }
inline void DatabaseUtils::readExceptionFromParcel(ref<android::os::Parcel> reply) { return call_static_method<SCAPIX_META_STRING("readExceptionFromParcel"), void>(reply); }
inline void DatabaseUtils::readExceptionWithFileNotFoundExceptionFromParcel(ref<android::os::Parcel> reply) { return call_static_method<SCAPIX_META_STRING("readExceptionWithFileNotFoundExceptionFromParcel"), void>(reply); }
inline void DatabaseUtils::readExceptionWithOperationApplicationExceptionFromParcel(ref<android::os::Parcel> reply) { return call_static_method<SCAPIX_META_STRING("readExceptionWithOperationApplicationExceptionFromParcel"), void>(reply); }
inline void DatabaseUtils::bindObjectToProgram(ref<android::database::sqlite::SQLiteProgram> prog, jint index, ref<java::lang::Object> value) { return call_static_method<SCAPIX_META_STRING("bindObjectToProgram"), void>(prog, index, value); }
inline void DatabaseUtils::appendEscapedSQLString(ref<java::lang::StringBuilder> sb, ref<java::lang::String> sqlString) { return call_static_method<SCAPIX_META_STRING("appendEscapedSQLString"), void>(sb, sqlString); }
inline ref<java::lang::String> DatabaseUtils::sqlEscapeString(ref<java::lang::String> value) { return call_static_method<SCAPIX_META_STRING("sqlEscapeString"), ref<java::lang::String>>(value); }
inline void DatabaseUtils::appendValueToSql(ref<java::lang::StringBuilder> sql, ref<java::lang::Object> value) { return call_static_method<SCAPIX_META_STRING("appendValueToSql"), void>(sql, value); }
inline ref<java::lang::String> DatabaseUtils::concatenateWhere(ref<java::lang::String> a, ref<java::lang::String> b) { return call_static_method<SCAPIX_META_STRING("concatenateWhere"), ref<java::lang::String>>(a, b); }
inline ref<java::lang::String> DatabaseUtils::getCollationKey(ref<java::lang::String> name) { return call_static_method<SCAPIX_META_STRING("getCollationKey"), ref<java::lang::String>>(name); }
inline ref<java::lang::String> DatabaseUtils::getHexCollationKey(ref<java::lang::String> name) { return call_static_method<SCAPIX_META_STRING("getHexCollationKey"), ref<java::lang::String>>(name); }
inline void DatabaseUtils::dumpCursor(ref<android::database::Cursor> cursor) { return call_static_method<SCAPIX_META_STRING("dumpCursor"), void>(cursor); }
inline void DatabaseUtils::dumpCursor(ref<android::database::Cursor> cursor, ref<java::io::PrintStream> stream) { return call_static_method<SCAPIX_META_STRING("dumpCursor"), void>(cursor, stream); }
inline void DatabaseUtils::dumpCursor(ref<android::database::Cursor> cursor, ref<java::lang::StringBuilder> sb) { return call_static_method<SCAPIX_META_STRING("dumpCursor"), void>(cursor, sb); }
inline ref<java::lang::String> DatabaseUtils::dumpCursorToString(ref<android::database::Cursor> cursor) { return call_static_method<SCAPIX_META_STRING("dumpCursorToString"), ref<java::lang::String>>(cursor); }
inline void DatabaseUtils::dumpCurrentRow(ref<android::database::Cursor> cursor) { return call_static_method<SCAPIX_META_STRING("dumpCurrentRow"), void>(cursor); }
inline void DatabaseUtils::dumpCurrentRow(ref<android::database::Cursor> cursor, ref<java::io::PrintStream> stream) { return call_static_method<SCAPIX_META_STRING("dumpCurrentRow"), void>(cursor, stream); }
inline void DatabaseUtils::dumpCurrentRow(ref<android::database::Cursor> cursor, ref<java::lang::StringBuilder> sb) { return call_static_method<SCAPIX_META_STRING("dumpCurrentRow"), void>(cursor, sb); }
inline ref<java::lang::String> DatabaseUtils::dumpCurrentRowToString(ref<android::database::Cursor> cursor) { return call_static_method<SCAPIX_META_STRING("dumpCurrentRowToString"), ref<java::lang::String>>(cursor); }
inline void DatabaseUtils::cursorStringToContentValues(ref<android::database::Cursor> cursor, ref<java::lang::String> field, ref<android::content::ContentValues> values) { return call_static_method<SCAPIX_META_STRING("cursorStringToContentValues"), void>(cursor, field, values); }
inline void DatabaseUtils::cursorStringToInsertHelper(ref<android::database::Cursor> cursor, ref<java::lang::String> field, ref<android::database::DatabaseUtils_InsertHelper> inserter, jint index) { return call_static_method<SCAPIX_META_STRING("cursorStringToInsertHelper"), void>(cursor, field, inserter, index); }
inline void DatabaseUtils::cursorStringToContentValues(ref<android::database::Cursor> cursor, ref<java::lang::String> field, ref<android::content::ContentValues> values, ref<java::lang::String> key) { return call_static_method<SCAPIX_META_STRING("cursorStringToContentValues"), void>(cursor, field, values, key); }
inline void DatabaseUtils::cursorIntToContentValues(ref<android::database::Cursor> cursor, ref<java::lang::String> field, ref<android::content::ContentValues> values) { return call_static_method<SCAPIX_META_STRING("cursorIntToContentValues"), void>(cursor, field, values); }
inline void DatabaseUtils::cursorIntToContentValues(ref<android::database::Cursor> cursor, ref<java::lang::String> field, ref<android::content::ContentValues> values, ref<java::lang::String> key) { return call_static_method<SCAPIX_META_STRING("cursorIntToContentValues"), void>(cursor, field, values, key); }
inline void DatabaseUtils::cursorLongToContentValues(ref<android::database::Cursor> cursor, ref<java::lang::String> field, ref<android::content::ContentValues> values) { return call_static_method<SCAPIX_META_STRING("cursorLongToContentValues"), void>(cursor, field, values); }
inline void DatabaseUtils::cursorLongToContentValues(ref<android::database::Cursor> cursor, ref<java::lang::String> field, ref<android::content::ContentValues> values, ref<java::lang::String> key) { return call_static_method<SCAPIX_META_STRING("cursorLongToContentValues"), void>(cursor, field, values, key); }
inline void DatabaseUtils::cursorDoubleToCursorValues(ref<android::database::Cursor> cursor, ref<java::lang::String> field, ref<android::content::ContentValues> values) { return call_static_method<SCAPIX_META_STRING("cursorDoubleToCursorValues"), void>(cursor, field, values); }
inline void DatabaseUtils::cursorDoubleToContentValues(ref<android::database::Cursor> cursor, ref<java::lang::String> field, ref<android::content::ContentValues> values, ref<java::lang::String> key) { return call_static_method<SCAPIX_META_STRING("cursorDoubleToContentValues"), void>(cursor, field, values, key); }
inline void DatabaseUtils::cursorRowToContentValues(ref<android::database::Cursor> cursor, ref<android::content::ContentValues> values) { return call_static_method<SCAPIX_META_STRING("cursorRowToContentValues"), void>(cursor, values); }
inline jlong DatabaseUtils::queryNumEntries(ref<android::database::sqlite::SQLiteDatabase> db, ref<java::lang::String> table) { return call_static_method<SCAPIX_META_STRING("queryNumEntries"), jlong>(db, table); }
inline jlong DatabaseUtils::queryNumEntries(ref<android::database::sqlite::SQLiteDatabase> db, ref<java::lang::String> table, ref<java::lang::String> selection) { return call_static_method<SCAPIX_META_STRING("queryNumEntries"), jlong>(db, table, selection); }
inline jlong DatabaseUtils::queryNumEntries(ref<android::database::sqlite::SQLiteDatabase> db, ref<java::lang::String> table, ref<java::lang::String> selection, ref<link::java::array<java::lang::String>> selectionArgs) { return call_static_method<SCAPIX_META_STRING("queryNumEntries"), jlong>(db, table, selection, selectionArgs); }
inline jlong DatabaseUtils::longForQuery(ref<android::database::sqlite::SQLiteDatabase> db, ref<java::lang::String> query, ref<link::java::array<java::lang::String>> selectionArgs) { return call_static_method<SCAPIX_META_STRING("longForQuery"), jlong>(db, query, selectionArgs); }
inline jlong DatabaseUtils::longForQuery(ref<android::database::sqlite::SQLiteStatement> prog, ref<link::java::array<java::lang::String>> selectionArgs) { return call_static_method<SCAPIX_META_STRING("longForQuery"), jlong>(prog, selectionArgs); }
inline ref<java::lang::String> DatabaseUtils::stringForQuery(ref<android::database::sqlite::SQLiteDatabase> db, ref<java::lang::String> query, ref<link::java::array<java::lang::String>> selectionArgs) { return call_static_method<SCAPIX_META_STRING("stringForQuery"), ref<java::lang::String>>(db, query, selectionArgs); }
inline ref<java::lang::String> DatabaseUtils::stringForQuery(ref<android::database::sqlite::SQLiteStatement> prog, ref<link::java::array<java::lang::String>> selectionArgs) { return call_static_method<SCAPIX_META_STRING("stringForQuery"), ref<java::lang::String>>(prog, selectionArgs); }
inline ref<android::os::ParcelFileDescriptor> DatabaseUtils::blobFileDescriptorForQuery(ref<android::database::sqlite::SQLiteDatabase> db, ref<java::lang::String> query, ref<link::java::array<java::lang::String>> selectionArgs) { return call_static_method<SCAPIX_META_STRING("blobFileDescriptorForQuery"), ref<android::os::ParcelFileDescriptor>>(db, query, selectionArgs); }
inline ref<android::os::ParcelFileDescriptor> DatabaseUtils::blobFileDescriptorForQuery(ref<android::database::sqlite::SQLiteStatement> prog, ref<link::java::array<java::lang::String>> selectionArgs) { return call_static_method<SCAPIX_META_STRING("blobFileDescriptorForQuery"), ref<android::os::ParcelFileDescriptor>>(prog, selectionArgs); }
inline void DatabaseUtils::cursorStringToContentValuesIfPresent(ref<android::database::Cursor> cursor, ref<android::content::ContentValues> values, ref<java::lang::String> column) { return call_static_method<SCAPIX_META_STRING("cursorStringToContentValuesIfPresent"), void>(cursor, values, column); }
inline void DatabaseUtils::cursorLongToContentValuesIfPresent(ref<android::database::Cursor> cursor, ref<android::content::ContentValues> values, ref<java::lang::String> column) { return call_static_method<SCAPIX_META_STRING("cursorLongToContentValuesIfPresent"), void>(cursor, values, column); }
inline void DatabaseUtils::cursorShortToContentValuesIfPresent(ref<android::database::Cursor> cursor, ref<android::content::ContentValues> values, ref<java::lang::String> column) { return call_static_method<SCAPIX_META_STRING("cursorShortToContentValuesIfPresent"), void>(cursor, values, column); }
inline void DatabaseUtils::cursorIntToContentValuesIfPresent(ref<android::database::Cursor> cursor, ref<android::content::ContentValues> values, ref<java::lang::String> column) { return call_static_method<SCAPIX_META_STRING("cursorIntToContentValuesIfPresent"), void>(cursor, values, column); }
inline void DatabaseUtils::cursorFloatToContentValuesIfPresent(ref<android::database::Cursor> cursor, ref<android::content::ContentValues> values, ref<java::lang::String> column) { return call_static_method<SCAPIX_META_STRING("cursorFloatToContentValuesIfPresent"), void>(cursor, values, column); }
inline void DatabaseUtils::cursorDoubleToContentValuesIfPresent(ref<android::database::Cursor> cursor, ref<android::content::ContentValues> values, ref<java::lang::String> column) { return call_static_method<SCAPIX_META_STRING("cursorDoubleToContentValuesIfPresent"), void>(cursor, values, column); }
inline void DatabaseUtils::createDbFromSqlStatements(ref<android::content::Context> context, ref<java::lang::String> dbName, jint dbVersion, ref<java::lang::String> sqlStatements) { return call_static_method<SCAPIX_META_STRING("createDbFromSqlStatements"), void>(context, dbName, dbVersion, sqlStatements); }
inline jint DatabaseUtils::getSqlStatementType(ref<java::lang::String> sql) { return call_static_method<SCAPIX_META_STRING("getSqlStatementType"), jint>(sql); }
inline ref<link::java::array<java::lang::String>> DatabaseUtils::appendSelectionArgs(ref<link::java::array<java::lang::String>> originalValues, ref<link::java::array<java::lang::String>> newValues) { return call_static_method<SCAPIX_META_STRING("appendSelectionArgs"), ref<link::java::array<java::lang::String>>>(originalValues, newValues); }

} // namespace android::database
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_DATABASE_DATABASEUTILS_H
