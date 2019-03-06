// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/Cloneable.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_UTIL_LOCALE_H
#define SCAPIX_JAVA_UTIL_LOCALE_H

namespace scapix::java_api {

namespace java::lang { class String; }
namespace java::util { class Collection; }
namespace java::util { class List; }
namespace java::util { class Locale_Category; }
namespace java::util { class Locale_FilteringMode; }
namespace java::util { class Set; }
namespace java::util { class Locale_LanguageRange; }
namespace java::util { class Locale_Builder; }

namespace java::util {

class Locale : public object_base<SCAPIX_META_STRING("java/util/Locale"),
	java::lang::Object,
	java::lang::Cloneable,
	java::io::Serializable>
{
public:

	using LanguageRange = Locale_LanguageRange;
	using FilteringMode = Locale_FilteringMode;
	using Category = Locale_Category;
	using Builder = Locale_Builder;

	static ref<java::util::Locale> CANADA_();
	static ref<java::util::Locale> CANADA_FRENCH_();
	static ref<java::util::Locale> CHINA_();
	static ref<java::util::Locale> CHINESE_();
	static ref<java::util::Locale> ENGLISH_();
	static ref<java::util::Locale> FRANCE_();
	static ref<java::util::Locale> FRENCH_();
	static ref<java::util::Locale> GERMAN_();
	static ref<java::util::Locale> GERMANY_();
	static ref<java::util::Locale> ITALIAN_();
	static ref<java::util::Locale> ITALY_();
	static ref<java::util::Locale> JAPAN_();
	static ref<java::util::Locale> JAPANESE_();
	static ref<java::util::Locale> KOREA_();
	static ref<java::util::Locale> KOREAN_();
	static ref<java::util::Locale> PRC_();
	static jchar PRIVATE_USE_EXTENSION_();
	static ref<java::util::Locale> ROOT_();
	static ref<java::util::Locale> SIMPLIFIED_CHINESE_();
	static ref<java::util::Locale> TAIWAN_();
	static ref<java::util::Locale> TRADITIONAL_CHINESE_();
	static ref<java::util::Locale> UK_();
	static jchar UNICODE_LOCALE_EXTENSION_();
	static ref<java::util::Locale> US_();

	static ref<Locale> new_object(ref<java::lang::String> language, ref<java::lang::String> country, ref<java::lang::String> variant);
	static ref<Locale> new_object(ref<java::lang::String> language, ref<java::lang::String> country);
	static ref<Locale> new_object(ref<java::lang::String> language);
	static ref<java::util::Locale> getDefault();
	static ref<java::util::Locale> getDefault(ref<java::util::Locale_Category> category);
	static void setDefault(ref<java::util::Locale> newLocale);
	static void setDefault(ref<java::util::Locale_Category> category, ref<java::util::Locale> newLocale);
	static ref<link::java::array<java::util::Locale>> getAvailableLocales();
	static ref<link::java::array<java::lang::String>> getISOCountries();
	static ref<link::java::array<java::lang::String>> getISOLanguages();
	ref<java::lang::String> getLanguage();
	ref<java::lang::String> getScript();
	ref<java::lang::String> getCountry();
	ref<java::lang::String> getVariant();
	jboolean hasExtensions();
	ref<java::util::Locale> stripExtensions();
	ref<java::lang::String> getExtension(jchar key);
	ref<java::util::Set> getExtensionKeys();
	ref<java::util::Set> getUnicodeLocaleAttributes();
	ref<java::lang::String> getUnicodeLocaleType(ref<java::lang::String> key);
	ref<java::util::Set> getUnicodeLocaleKeys();
	ref<java::lang::String> toString();
	ref<java::lang::String> toLanguageTag();
	static ref<java::util::Locale> forLanguageTag(ref<java::lang::String> languageTag);
	ref<java::lang::String> getISO3Language();
	ref<java::lang::String> getISO3Country();
	ref<java::lang::String> getDisplayLanguage();
	ref<java::lang::String> getDisplayLanguage(ref<java::util::Locale> locale);
	ref<java::lang::String> getDisplayScript();
	ref<java::lang::String> getDisplayScript(ref<java::util::Locale> inLocale);
	ref<java::lang::String> getDisplayCountry();
	ref<java::lang::String> getDisplayCountry(ref<java::util::Locale> locale);
	ref<java::lang::String> getDisplayVariant();
	ref<java::lang::String> getDisplayVariant(ref<java::util::Locale> inLocale);
	ref<java::lang::String> getDisplayName();
	ref<java::lang::String> getDisplayName(ref<java::util::Locale> locale);
	ref<java::lang::Object> clone();
	jint hashCode();
	jboolean equals(ref<java::lang::Object> obj);
	static ref<java::util::List> filter(ref<java::util::List> priorityList, ref<java::util::Collection> locales, ref<java::util::Locale_FilteringMode> mode);
	static ref<java::util::List> filter(ref<java::util::List> priorityList, ref<java::util::Collection> locales);
	static ref<java::util::List> filterTags(ref<java::util::List> priorityList, ref<java::util::Collection> tags, ref<java::util::Locale_FilteringMode> mode);
	static ref<java::util::List> filterTags(ref<java::util::List> priorityList, ref<java::util::Collection> tags);
	static ref<java::util::Locale> lookup(ref<java::util::List> priorityList, ref<java::util::Collection> locales);
	static ref<java::lang::String> lookupTag(ref<java::util::List> priorityList, ref<java::util::Collection> tags);

protected:

	Locale(handle_type h) : base_(h) {}

};

} // namespace java::util
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Collection.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/java/util/Locale_Category.h>
#include <scapix/java_api/java/util/Locale_FilteringMode.h>
#include <scapix/java_api/java/util/Set.h>

namespace scapix::java_api {
namespace java::util {

inline ref<java::util::Locale> Locale::CANADA_() { return get_static_field<SCAPIX_META_STRING("CANADA"), ref<java::util::Locale>>(); }
inline ref<java::util::Locale> Locale::CANADA_FRENCH_() { return get_static_field<SCAPIX_META_STRING("CANADA_FRENCH"), ref<java::util::Locale>>(); }
inline ref<java::util::Locale> Locale::CHINA_() { return get_static_field<SCAPIX_META_STRING("CHINA"), ref<java::util::Locale>>(); }
inline ref<java::util::Locale> Locale::CHINESE_() { return get_static_field<SCAPIX_META_STRING("CHINESE"), ref<java::util::Locale>>(); }
inline ref<java::util::Locale> Locale::ENGLISH_() { return get_static_field<SCAPIX_META_STRING("ENGLISH"), ref<java::util::Locale>>(); }
inline ref<java::util::Locale> Locale::FRANCE_() { return get_static_field<SCAPIX_META_STRING("FRANCE"), ref<java::util::Locale>>(); }
inline ref<java::util::Locale> Locale::FRENCH_() { return get_static_field<SCAPIX_META_STRING("FRENCH"), ref<java::util::Locale>>(); }
inline ref<java::util::Locale> Locale::GERMAN_() { return get_static_field<SCAPIX_META_STRING("GERMAN"), ref<java::util::Locale>>(); }
inline ref<java::util::Locale> Locale::GERMANY_() { return get_static_field<SCAPIX_META_STRING("GERMANY"), ref<java::util::Locale>>(); }
inline ref<java::util::Locale> Locale::ITALIAN_() { return get_static_field<SCAPIX_META_STRING("ITALIAN"), ref<java::util::Locale>>(); }
inline ref<java::util::Locale> Locale::ITALY_() { return get_static_field<SCAPIX_META_STRING("ITALY"), ref<java::util::Locale>>(); }
inline ref<java::util::Locale> Locale::JAPAN_() { return get_static_field<SCAPIX_META_STRING("JAPAN"), ref<java::util::Locale>>(); }
inline ref<java::util::Locale> Locale::JAPANESE_() { return get_static_field<SCAPIX_META_STRING("JAPANESE"), ref<java::util::Locale>>(); }
inline ref<java::util::Locale> Locale::KOREA_() { return get_static_field<SCAPIX_META_STRING("KOREA"), ref<java::util::Locale>>(); }
inline ref<java::util::Locale> Locale::KOREAN_() { return get_static_field<SCAPIX_META_STRING("KOREAN"), ref<java::util::Locale>>(); }
inline ref<java::util::Locale> Locale::PRC_() { return get_static_field<SCAPIX_META_STRING("PRC"), ref<java::util::Locale>>(); }
inline jchar Locale::PRIVATE_USE_EXTENSION_() { return get_static_field<SCAPIX_META_STRING("PRIVATE_USE_EXTENSION"), jchar>(); }
inline ref<java::util::Locale> Locale::ROOT_() { return get_static_field<SCAPIX_META_STRING("ROOT"), ref<java::util::Locale>>(); }
inline ref<java::util::Locale> Locale::SIMPLIFIED_CHINESE_() { return get_static_field<SCAPIX_META_STRING("SIMPLIFIED_CHINESE"), ref<java::util::Locale>>(); }
inline ref<java::util::Locale> Locale::TAIWAN_() { return get_static_field<SCAPIX_META_STRING("TAIWAN"), ref<java::util::Locale>>(); }
inline ref<java::util::Locale> Locale::TRADITIONAL_CHINESE_() { return get_static_field<SCAPIX_META_STRING("TRADITIONAL_CHINESE"), ref<java::util::Locale>>(); }
inline ref<java::util::Locale> Locale::UK_() { return get_static_field<SCAPIX_META_STRING("UK"), ref<java::util::Locale>>(); }
inline jchar Locale::UNICODE_LOCALE_EXTENSION_() { return get_static_field<SCAPIX_META_STRING("UNICODE_LOCALE_EXTENSION"), jchar>(); }
inline ref<java::util::Locale> Locale::US_() { return get_static_field<SCAPIX_META_STRING("US"), ref<java::util::Locale>>(); }
inline ref<Locale> Locale::new_object(ref<java::lang::String> language, ref<java::lang::String> country, ref<java::lang::String> variant) { return base_::new_object(language, country, variant); }
inline ref<Locale> Locale::new_object(ref<java::lang::String> language, ref<java::lang::String> country) { return base_::new_object(language, country); }
inline ref<Locale> Locale::new_object(ref<java::lang::String> language) { return base_::new_object(language); }
inline ref<java::util::Locale> Locale::getDefault() { return call_static_method<SCAPIX_META_STRING("getDefault"), ref<java::util::Locale>>(); }
inline ref<java::util::Locale> Locale::getDefault(ref<java::util::Locale_Category> category) { return call_static_method<SCAPIX_META_STRING("getDefault"), ref<java::util::Locale>>(category); }
inline void Locale::setDefault(ref<java::util::Locale> newLocale) { return call_static_method<SCAPIX_META_STRING("setDefault"), void>(newLocale); }
inline void Locale::setDefault(ref<java::util::Locale_Category> category, ref<java::util::Locale> newLocale) { return call_static_method<SCAPIX_META_STRING("setDefault"), void>(category, newLocale); }
inline ref<link::java::array<java::util::Locale>> Locale::getAvailableLocales() { return call_static_method<SCAPIX_META_STRING("getAvailableLocales"), ref<link::java::array<java::util::Locale>>>(); }
inline ref<link::java::array<java::lang::String>> Locale::getISOCountries() { return call_static_method<SCAPIX_META_STRING("getISOCountries"), ref<link::java::array<java::lang::String>>>(); }
inline ref<link::java::array<java::lang::String>> Locale::getISOLanguages() { return call_static_method<SCAPIX_META_STRING("getISOLanguages"), ref<link::java::array<java::lang::String>>>(); }
inline ref<java::lang::String> Locale::getLanguage() { return call_method<SCAPIX_META_STRING("getLanguage"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Locale::getScript() { return call_method<SCAPIX_META_STRING("getScript"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Locale::getCountry() { return call_method<SCAPIX_META_STRING("getCountry"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Locale::getVariant() { return call_method<SCAPIX_META_STRING("getVariant"), ref<java::lang::String>>(); }
inline jboolean Locale::hasExtensions() { return call_method<SCAPIX_META_STRING("hasExtensions"), jboolean>(); }
inline ref<java::util::Locale> Locale::stripExtensions() { return call_method<SCAPIX_META_STRING("stripExtensions"), ref<java::util::Locale>>(); }
inline ref<java::lang::String> Locale::getExtension(jchar key) { return call_method<SCAPIX_META_STRING("getExtension"), ref<java::lang::String>>(key); }
inline ref<java::util::Set> Locale::getExtensionKeys() { return call_method<SCAPIX_META_STRING("getExtensionKeys"), ref<java::util::Set>>(); }
inline ref<java::util::Set> Locale::getUnicodeLocaleAttributes() { return call_method<SCAPIX_META_STRING("getUnicodeLocaleAttributes"), ref<java::util::Set>>(); }
inline ref<java::lang::String> Locale::getUnicodeLocaleType(ref<java::lang::String> key) { return call_method<SCAPIX_META_STRING("getUnicodeLocaleType"), ref<java::lang::String>>(key); }
inline ref<java::util::Set> Locale::getUnicodeLocaleKeys() { return call_method<SCAPIX_META_STRING("getUnicodeLocaleKeys"), ref<java::util::Set>>(); }
inline ref<java::lang::String> Locale::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Locale::toLanguageTag() { return call_method<SCAPIX_META_STRING("toLanguageTag"), ref<java::lang::String>>(); }
inline ref<java::util::Locale> Locale::forLanguageTag(ref<java::lang::String> languageTag) { return call_static_method<SCAPIX_META_STRING("forLanguageTag"), ref<java::util::Locale>>(languageTag); }
inline ref<java::lang::String> Locale::getISO3Language() { return call_method<SCAPIX_META_STRING("getISO3Language"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Locale::getISO3Country() { return call_method<SCAPIX_META_STRING("getISO3Country"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Locale::getDisplayLanguage() { return call_method<SCAPIX_META_STRING("getDisplayLanguage"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Locale::getDisplayLanguage(ref<java::util::Locale> locale) { return call_method<SCAPIX_META_STRING("getDisplayLanguage"), ref<java::lang::String>>(locale); }
inline ref<java::lang::String> Locale::getDisplayScript() { return call_method<SCAPIX_META_STRING("getDisplayScript"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Locale::getDisplayScript(ref<java::util::Locale> inLocale) { return call_method<SCAPIX_META_STRING("getDisplayScript"), ref<java::lang::String>>(inLocale); }
inline ref<java::lang::String> Locale::getDisplayCountry() { return call_method<SCAPIX_META_STRING("getDisplayCountry"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Locale::getDisplayCountry(ref<java::util::Locale> locale) { return call_method<SCAPIX_META_STRING("getDisplayCountry"), ref<java::lang::String>>(locale); }
inline ref<java::lang::String> Locale::getDisplayVariant() { return call_method<SCAPIX_META_STRING("getDisplayVariant"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Locale::getDisplayVariant(ref<java::util::Locale> inLocale) { return call_method<SCAPIX_META_STRING("getDisplayVariant"), ref<java::lang::String>>(inLocale); }
inline ref<java::lang::String> Locale::getDisplayName() { return call_method<SCAPIX_META_STRING("getDisplayName"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Locale::getDisplayName(ref<java::util::Locale> locale) { return call_method<SCAPIX_META_STRING("getDisplayName"), ref<java::lang::String>>(locale); }
inline ref<java::lang::Object> Locale::clone() { return call_method<SCAPIX_META_STRING("clone"), ref<java::lang::Object>>(); }
inline jint Locale::hashCode() { return call_method<SCAPIX_META_STRING("hashCode"), jint>(); }
inline jboolean Locale::equals(ref<java::lang::Object> obj) { return call_method<SCAPIX_META_STRING("equals"), jboolean>(obj); }
inline ref<java::util::List> Locale::filter(ref<java::util::List> priorityList, ref<java::util::Collection> locales, ref<java::util::Locale_FilteringMode> mode) { return call_static_method<SCAPIX_META_STRING("filter"), ref<java::util::List>>(priorityList, locales, mode); }
inline ref<java::util::List> Locale::filter(ref<java::util::List> priorityList, ref<java::util::Collection> locales) { return call_static_method<SCAPIX_META_STRING("filter"), ref<java::util::List>>(priorityList, locales); }
inline ref<java::util::List> Locale::filterTags(ref<java::util::List> priorityList, ref<java::util::Collection> tags, ref<java::util::Locale_FilteringMode> mode) { return call_static_method<SCAPIX_META_STRING("filterTags"), ref<java::util::List>>(priorityList, tags, mode); }
inline ref<java::util::List> Locale::filterTags(ref<java::util::List> priorityList, ref<java::util::Collection> tags) { return call_static_method<SCAPIX_META_STRING("filterTags"), ref<java::util::List>>(priorityList, tags); }
inline ref<java::util::Locale> Locale::lookup(ref<java::util::List> priorityList, ref<java::util::Collection> locales) { return call_static_method<SCAPIX_META_STRING("lookup"), ref<java::util::Locale>>(priorityList, locales); }
inline ref<java::lang::String> Locale::lookupTag(ref<java::util::List> priorityList, ref<java::util::Collection> tags) { return call_static_method<SCAPIX_META_STRING("lookupTag"), ref<java::lang::String>>(priorityList, tags); }

} // namespace java::util
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_UTIL_LOCALE_H
