// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/android/database/sqlite/SQLiteException.h>

#ifndef SCAPIX_ANDROID_DATABASE_SQLITE_SQLITEDATABASECORRUPTEXCEPTION_H
#define SCAPIX_ANDROID_DATABASE_SQLITE_SQLITEDATABASECORRUPTEXCEPTION_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace android::database::sqlite {

class SQLiteDatabaseCorruptException : public object_base<SCAPIX_META_STRING("android/database/sqlite/SQLiteDatabaseCorruptException"),
	android::database::sqlite::SQLiteException>
{
public:

	static ref<SQLiteDatabaseCorruptException> new_object();
	static ref<SQLiteDatabaseCorruptException> new_object(ref<java::lang::String> error);

protected:

	SQLiteDatabaseCorruptException(handle_type h) : base_(h) {}

};

} // namespace android::database::sqlite
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::database::sqlite {

inline ref<SQLiteDatabaseCorruptException> SQLiteDatabaseCorruptException::new_object() { return base_::new_object(); }
inline ref<SQLiteDatabaseCorruptException> SQLiteDatabaseCorruptException::new_object(ref<java::lang::String> error) { return base_::new_object(error); }

} // namespace android::database::sqlite
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_DATABASE_SQLITE_SQLITEDATABASECORRUPTEXCEPTION_H
