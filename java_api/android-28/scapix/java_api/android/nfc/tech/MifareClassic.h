// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/nfc/tech/TagTechnology.h>

#ifndef SCAPIX_ANDROID_NFC_TECH_MIFARECLASSIC_H
#define SCAPIX_ANDROID_NFC_TECH_MIFARECLASSIC_H

namespace scapix::java_api {

namespace android::nfc { class Tag; }

namespace android::nfc::tech {

class MifareClassic : public object_base<SCAPIX_META_STRING("android/nfc/tech/MifareClassic"),
	java::lang::Object,
	android::nfc::tech::TagTechnology>
{
public:

	static jint BLOCK_SIZE_();
	static ref<link::java::array<jbyte>> KEY_DEFAULT_();
	static ref<link::java::array<jbyte>> KEY_MIFARE_APPLICATION_DIRECTORY_();
	static ref<link::java::array<jbyte>> KEY_NFC_FORUM_();
	static jint SIZE_1K_();
	static jint SIZE_2K_();
	static jint SIZE_4K_();
	static jint SIZE_MINI_();
	static jint TYPE_CLASSIC_();
	static jint TYPE_PLUS_();
	static jint TYPE_PRO_();
	static jint TYPE_UNKNOWN_();

	static ref<android::nfc::tech::MifareClassic> get(ref<android::nfc::Tag> tag);
	jint getType();
	jint getSize();
	jint getSectorCount();
	jint getBlockCount();
	jint getBlockCountInSector(jint sectorIndex);
	jint blockToSector(jint blockIndex);
	jint sectorToBlock(jint sectorIndex);
	jboolean authenticateSectorWithKeyA(jint sectorIndex, ref<link::java::array<jbyte>> key);
	jboolean authenticateSectorWithKeyB(jint sectorIndex, ref<link::java::array<jbyte>> key);
	ref<link::java::array<jbyte>> readBlock(jint blockIndex);
	void writeBlock(jint blockIndex, ref<link::java::array<jbyte>> data);
	void increment(jint blockIndex, jint value);
	void decrement(jint blockIndex, jint value);
	void transfer(jint blockIndex);
	void restore(jint blockIndex);
	ref<link::java::array<jbyte>> transceive(ref<link::java::array<jbyte>> data);
	jint getMaxTransceiveLength();
	void setTimeout(jint timeout);
	jint getTimeout();
	jboolean isConnected();
	ref<android::nfc::Tag> getTag();
	void close();
	void connect();

protected:

	MifareClassic(handle_type h) : base_(h) {}

};

} // namespace android::nfc::tech
} // namespace scapix::java_api

#include <scapix/java_api/android/nfc/Tag.h>

namespace scapix::java_api {
namespace android::nfc::tech {

inline jint MifareClassic::BLOCK_SIZE_() { return get_static_field<SCAPIX_META_STRING("BLOCK_SIZE"), jint>(); }
inline ref<link::java::array<jbyte>> MifareClassic::KEY_DEFAULT_() { return get_static_field<SCAPIX_META_STRING("KEY_DEFAULT"), ref<link::java::array<jbyte>>>(); }
inline ref<link::java::array<jbyte>> MifareClassic::KEY_MIFARE_APPLICATION_DIRECTORY_() { return get_static_field<SCAPIX_META_STRING("KEY_MIFARE_APPLICATION_DIRECTORY"), ref<link::java::array<jbyte>>>(); }
inline ref<link::java::array<jbyte>> MifareClassic::KEY_NFC_FORUM_() { return get_static_field<SCAPIX_META_STRING("KEY_NFC_FORUM"), ref<link::java::array<jbyte>>>(); }
inline jint MifareClassic::SIZE_1K_() { return get_static_field<SCAPIX_META_STRING("SIZE_1K"), jint>(); }
inline jint MifareClassic::SIZE_2K_() { return get_static_field<SCAPIX_META_STRING("SIZE_2K"), jint>(); }
inline jint MifareClassic::SIZE_4K_() { return get_static_field<SCAPIX_META_STRING("SIZE_4K"), jint>(); }
inline jint MifareClassic::SIZE_MINI_() { return get_static_field<SCAPIX_META_STRING("SIZE_MINI"), jint>(); }
inline jint MifareClassic::TYPE_CLASSIC_() { return get_static_field<SCAPIX_META_STRING("TYPE_CLASSIC"), jint>(); }
inline jint MifareClassic::TYPE_PLUS_() { return get_static_field<SCAPIX_META_STRING("TYPE_PLUS"), jint>(); }
inline jint MifareClassic::TYPE_PRO_() { return get_static_field<SCAPIX_META_STRING("TYPE_PRO"), jint>(); }
inline jint MifareClassic::TYPE_UNKNOWN_() { return get_static_field<SCAPIX_META_STRING("TYPE_UNKNOWN"), jint>(); }
inline ref<android::nfc::tech::MifareClassic> MifareClassic::get(ref<android::nfc::Tag> tag) { return call_static_method<SCAPIX_META_STRING("get"), ref<android::nfc::tech::MifareClassic>>(tag); }
inline jint MifareClassic::getType() { return call_method<SCAPIX_META_STRING("getType"), jint>(); }
inline jint MifareClassic::getSize() { return call_method<SCAPIX_META_STRING("getSize"), jint>(); }
inline jint MifareClassic::getSectorCount() { return call_method<SCAPIX_META_STRING("getSectorCount"), jint>(); }
inline jint MifareClassic::getBlockCount() { return call_method<SCAPIX_META_STRING("getBlockCount"), jint>(); }
inline jint MifareClassic::getBlockCountInSector(jint sectorIndex) { return call_method<SCAPIX_META_STRING("getBlockCountInSector"), jint>(sectorIndex); }
inline jint MifareClassic::blockToSector(jint blockIndex) { return call_method<SCAPIX_META_STRING("blockToSector"), jint>(blockIndex); }
inline jint MifareClassic::sectorToBlock(jint sectorIndex) { return call_method<SCAPIX_META_STRING("sectorToBlock"), jint>(sectorIndex); }
inline jboolean MifareClassic::authenticateSectorWithKeyA(jint sectorIndex, ref<link::java::array<jbyte>> key) { return call_method<SCAPIX_META_STRING("authenticateSectorWithKeyA"), jboolean>(sectorIndex, key); }
inline jboolean MifareClassic::authenticateSectorWithKeyB(jint sectorIndex, ref<link::java::array<jbyte>> key) { return call_method<SCAPIX_META_STRING("authenticateSectorWithKeyB"), jboolean>(sectorIndex, key); }
inline ref<link::java::array<jbyte>> MifareClassic::readBlock(jint blockIndex) { return call_method<SCAPIX_META_STRING("readBlock"), ref<link::java::array<jbyte>>>(blockIndex); }
inline void MifareClassic::writeBlock(jint blockIndex, ref<link::java::array<jbyte>> data) { return call_method<SCAPIX_META_STRING("writeBlock"), void>(blockIndex, data); }
inline void MifareClassic::increment(jint blockIndex, jint value) { return call_method<SCAPIX_META_STRING("increment"), void>(blockIndex, value); }
inline void MifareClassic::decrement(jint blockIndex, jint value) { return call_method<SCAPIX_META_STRING("decrement"), void>(blockIndex, value); }
inline void MifareClassic::transfer(jint blockIndex) { return call_method<SCAPIX_META_STRING("transfer"), void>(blockIndex); }
inline void MifareClassic::restore(jint blockIndex) { return call_method<SCAPIX_META_STRING("restore"), void>(blockIndex); }
inline ref<link::java::array<jbyte>> MifareClassic::transceive(ref<link::java::array<jbyte>> data) { return call_method<SCAPIX_META_STRING("transceive"), ref<link::java::array<jbyte>>>(data); }
inline jint MifareClassic::getMaxTransceiveLength() { return call_method<SCAPIX_META_STRING("getMaxTransceiveLength"), jint>(); }
inline void MifareClassic::setTimeout(jint timeout) { return call_method<SCAPIX_META_STRING("setTimeout"), void>(timeout); }
inline jint MifareClassic::getTimeout() { return call_method<SCAPIX_META_STRING("getTimeout"), jint>(); }
inline jboolean MifareClassic::isConnected() { return call_method<SCAPIX_META_STRING("isConnected"), jboolean>(); }
inline ref<android::nfc::Tag> MifareClassic::getTag() { return call_method<SCAPIX_META_STRING("getTag"), ref<android::nfc::Tag>>(); }
inline void MifareClassic::close() { return call_method<SCAPIX_META_STRING("close"), void>(); }
inline void MifareClassic::connect() { return call_method<SCAPIX_META_STRING("connect"), void>(); }

} // namespace android::nfc::tech
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_NFC_TECH_MIFARECLASSIC_H
