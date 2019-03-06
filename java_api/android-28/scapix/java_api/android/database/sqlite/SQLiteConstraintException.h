// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/android/database/sqlite/SQLiteException.h>

#ifndef SCAPIX_ANDROID_DATABASE_SQLITE_SQLITECONSTRAINTEXCEPTION_H
#define SCAPIX_ANDROID_DATABASE_SQLITE_SQLITECONSTRAINTEXCEPTION_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace android::database::sqlite {

class SQLiteConstraintException : public object_base<SCAPIX_META_STRING("android/database/sqlite/SQLiteConstraintException"),
	android::database::sqlite::SQLiteException>
{
public:

	static ref<SQLiteConstraintException> new_object();
	static ref<SQLiteConstraintException> new_object(ref<java::lang::String> error);

protected:

	SQLiteConstraintException(handle_type h) : base_(h) {}

};

} // namespace android::database::sqlite
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::database::sqlite {

inline ref<SQLiteConstraintException> SQLiteConstraintException::new_object() { return base_::new_object(); }
inline ref<SQLiteConstraintException> SQLiteConstraintException::new_object(ref<java::lang::String> error) { return base_::new_object(error); }

} // namespace android::database::sqlite
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_DATABASE_SQLITE_SQLITECONSTRAINTEXCEPTION_H
