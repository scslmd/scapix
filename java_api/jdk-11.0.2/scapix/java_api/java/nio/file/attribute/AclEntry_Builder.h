// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_NIO_FILE_ATTRIBUTE_ACLENTRY_BUILDER_H
#define SCAPIX_JAVA_NIO_FILE_ATTRIBUTE_ACLENTRY_BUILDER_H

namespace scapix::java_api {

namespace java::nio::file::attribute { class AclEntry; }
namespace java::nio::file::attribute { class AclEntryFlag; }
namespace java::nio::file::attribute { class AclEntryPermission; }
namespace java::nio::file::attribute { class AclEntryType; }
namespace java::nio::file::attribute { class UserPrincipal; }
namespace java::util { class Set; }

namespace java::nio::file::attribute {

class AclEntry_Builder : public object_base<SCAPIX_META_STRING("java/nio/file/attribute/AclEntry$Builder"),
	java::lang::Object>
{
public:

	ref<java::nio::file::attribute::AclEntry> build();
	ref<java::nio::file::attribute::AclEntry_Builder> setType(ref<java::nio::file::attribute::AclEntryType> type);
	ref<java::nio::file::attribute::AclEntry_Builder> setPrincipal(ref<java::nio::file::attribute::UserPrincipal> who);
	ref<java::nio::file::attribute::AclEntry_Builder> setPermissions(ref<java::util::Set> perms);
	ref<java::nio::file::attribute::AclEntry_Builder> setPermissions(ref<link::java::array<java::nio::file::attribute::AclEntryPermission>> perms);
	ref<java::nio::file::attribute::AclEntry_Builder> setFlags(ref<java::util::Set> flags);
	ref<java::nio::file::attribute::AclEntry_Builder> setFlags(ref<link::java::array<java::nio::file::attribute::AclEntryFlag>> flags);

protected:

	AclEntry_Builder(handle_type h) : base_(h) {}

};

} // namespace java::nio::file::attribute
} // namespace scapix::java_api

#include <scapix/java_api/java/nio/file/attribute/AclEntry.h>
#include <scapix/java_api/java/nio/file/attribute/AclEntryFlag.h>
#include <scapix/java_api/java/nio/file/attribute/AclEntryPermission.h>
#include <scapix/java_api/java/nio/file/attribute/AclEntryType.h>
#include <scapix/java_api/java/nio/file/attribute/UserPrincipal.h>
#include <scapix/java_api/java/util/Set.h>

namespace scapix::java_api {
namespace java::nio::file::attribute {

inline ref<java::nio::file::attribute::AclEntry> AclEntry_Builder::build() { return call_method<SCAPIX_META_STRING("build"), ref<java::nio::file::attribute::AclEntry>>(); }
inline ref<java::nio::file::attribute::AclEntry_Builder> AclEntry_Builder::setType(ref<java::nio::file::attribute::AclEntryType> type) { return call_method<SCAPIX_META_STRING("setType"), ref<java::nio::file::attribute::AclEntry_Builder>>(type); }
inline ref<java::nio::file::attribute::AclEntry_Builder> AclEntry_Builder::setPrincipal(ref<java::nio::file::attribute::UserPrincipal> who) { return call_method<SCAPIX_META_STRING("setPrincipal"), ref<java::nio::file::attribute::AclEntry_Builder>>(who); }
inline ref<java::nio::file::attribute::AclEntry_Builder> AclEntry_Builder::setPermissions(ref<java::util::Set> perms) { return call_method<SCAPIX_META_STRING("setPermissions"), ref<java::nio::file::attribute::AclEntry_Builder>>(perms); }
inline ref<java::nio::file::attribute::AclEntry_Builder> AclEntry_Builder::setPermissions(ref<link::java::array<java::nio::file::attribute::AclEntryPermission>> perms) { return call_method<SCAPIX_META_STRING("setPermissions"), ref<java::nio::file::attribute::AclEntry_Builder>>(perms); }
inline ref<java::nio::file::attribute::AclEntry_Builder> AclEntry_Builder::setFlags(ref<java::util::Set> flags) { return call_method<SCAPIX_META_STRING("setFlags"), ref<java::nio::file::attribute::AclEntry_Builder>>(flags); }
inline ref<java::nio::file::attribute::AclEntry_Builder> AclEntry_Builder::setFlags(ref<link::java::array<java::nio::file::attribute::AclEntryFlag>> flags) { return call_method<SCAPIX_META_STRING("setFlags"), ref<java::nio::file::attribute::AclEntry_Builder>>(flags); }

} // namespace java::nio::file::attribute
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_NIO_FILE_ATTRIBUTE_ACLENTRY_BUILDER_H
