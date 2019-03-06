// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/AutoCloseable.h>

#ifndef SCAPIX_ANDROID_NET_IPSECTRANSFORM_H
#define SCAPIX_ANDROID_NET_IPSECTRANSFORM_H

namespace scapix::java_api {

namespace java::lang { class String; }
namespace android::net { class IpSecTransform_Builder; }

namespace android::net {

class IpSecTransform : public object_base<SCAPIX_META_STRING("android/net/IpSecTransform"),
	java::lang::Object,
	java::lang::AutoCloseable>
{
public:

	using Builder = IpSecTransform_Builder;

	void close();
	ref<java::lang::String> toString();

protected:

	IpSecTransform(handle_type h) : base_(h) {}

};

} // namespace android::net
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::net {

inline void IpSecTransform::close() { return call_method<SCAPIX_META_STRING("close"), void>(); }
inline ref<java::lang::String> IpSecTransform::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }

} // namespace android::net
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_NET_IPSECTRANSFORM_H
