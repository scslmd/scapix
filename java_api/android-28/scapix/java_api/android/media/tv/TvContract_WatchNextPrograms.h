// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/media/tv/TvContract_BaseTvColumns.h>

#ifndef SCAPIX_ANDROID_MEDIA_TV_TVCONTRACT_WATCHNEXTPROGRAMS_H
#define SCAPIX_ANDROID_MEDIA_TV_TVCONTRACT_WATCHNEXTPROGRAMS_H

namespace scapix::java_api {

namespace android::net { class Uri; }
namespace java::lang { class String; }

namespace android::media::tv {

class TvContract_WatchNextPrograms : public object_base<SCAPIX_META_STRING("android/media/tv/TvContract$WatchNextPrograms"),
	java::lang::Object,
	android::media::tv::TvContract_BaseTvColumns>
{
public:

	static jint ASPECT_RATIO_16_9_();
	static jint ASPECT_RATIO_1_1_();
	static jint ASPECT_RATIO_2_3_();
	static jint ASPECT_RATIO_3_2_();
	static jint ASPECT_RATIO_4_3_();
	static jint AVAILABILITY_AVAILABLE_();
	static jint AVAILABILITY_FREE_WITH_SUBSCRIPTION_();
	static jint AVAILABILITY_PAID_CONTENT_();
	static ref<java::lang::String> COLUMN_AUDIO_LANGUAGE_();
	static ref<java::lang::String> COLUMN_AUTHOR_();
	static ref<java::lang::String> COLUMN_AVAILABILITY_();
	static ref<java::lang::String> COLUMN_BROWSABLE_();
	static ref<java::lang::String> COLUMN_CANONICAL_GENRE_();
	static ref<java::lang::String> COLUMN_CONTENT_ID_();
	static ref<java::lang::String> COLUMN_CONTENT_RATING_();
	static ref<java::lang::String> COLUMN_DURATION_MILLIS_();
	static ref<java::lang::String> COLUMN_EPISODE_DISPLAY_NUMBER_();
	static ref<java::lang::String> COLUMN_EPISODE_TITLE_();
	static ref<java::lang::String> COLUMN_INTENT_URI_();
	static ref<java::lang::String> COLUMN_INTERACTION_COUNT_();
	static ref<java::lang::String> COLUMN_INTERACTION_TYPE_();
	static ref<java::lang::String> COLUMN_INTERNAL_PROVIDER_DATA_();
	static ref<java::lang::String> COLUMN_INTERNAL_PROVIDER_FLAG1_();
	static ref<java::lang::String> COLUMN_INTERNAL_PROVIDER_FLAG2_();
	static ref<java::lang::String> COLUMN_INTERNAL_PROVIDER_FLAG3_();
	static ref<java::lang::String> COLUMN_INTERNAL_PROVIDER_FLAG4_();
	static ref<java::lang::String> COLUMN_INTERNAL_PROVIDER_ID_();
	static ref<java::lang::String> COLUMN_ITEM_COUNT_();
	static ref<java::lang::String> COLUMN_LAST_ENGAGEMENT_TIME_UTC_MILLIS_();
	static ref<java::lang::String> COLUMN_LAST_PLAYBACK_POSITION_MILLIS_();
	static ref<java::lang::String> COLUMN_LIVE_();
	static ref<java::lang::String> COLUMN_LOGO_URI_();
	static ref<java::lang::String> COLUMN_LONG_DESCRIPTION_();
	static ref<java::lang::String> COLUMN_OFFER_PRICE_();
	static ref<java::lang::String> COLUMN_POSTER_ART_ASPECT_RATIO_();
	static ref<java::lang::String> COLUMN_POSTER_ART_URI_();
	static ref<java::lang::String> COLUMN_PREVIEW_VIDEO_URI_();
	static ref<java::lang::String> COLUMN_RELEASE_DATE_();
	static ref<java::lang::String> COLUMN_REVIEW_RATING_();
	static ref<java::lang::String> COLUMN_REVIEW_RATING_STYLE_();
	static ref<java::lang::String> COLUMN_SEARCHABLE_();
	static ref<java::lang::String> COLUMN_SEASON_DISPLAY_NUMBER_();
	static ref<java::lang::String> COLUMN_SEASON_TITLE_();
	static ref<java::lang::String> COLUMN_SHORT_DESCRIPTION_();
	static ref<java::lang::String> COLUMN_STARTING_PRICE_();
	static ref<java::lang::String> COLUMN_THUMBNAIL_ASPECT_RATIO_();
	static ref<java::lang::String> COLUMN_THUMBNAIL_URI_();
	static ref<java::lang::String> COLUMN_TITLE_();
	static ref<java::lang::String> COLUMN_TRANSIENT_();
	static ref<java::lang::String> COLUMN_TYPE_();
	static ref<java::lang::String> COLUMN_VERSION_NUMBER_();
	static ref<java::lang::String> COLUMN_VIDEO_HEIGHT_();
	static ref<java::lang::String> COLUMN_VIDEO_WIDTH_();
	static ref<java::lang::String> COLUMN_WATCH_NEXT_TYPE_();
	static ref<java::lang::String> CONTENT_ITEM_TYPE_();
	static ref<java::lang::String> CONTENT_TYPE_();
	static ref<android::net::Uri> CONTENT_URI_();
	static jint INTERACTION_TYPE_FANS_();
	static jint INTERACTION_TYPE_FOLLOWERS_();
	static jint INTERACTION_TYPE_LIKES_();
	static jint INTERACTION_TYPE_LISTENS_();
	static jint INTERACTION_TYPE_THUMBS_();
	static jint INTERACTION_TYPE_VIEWERS_();
	static jint INTERACTION_TYPE_VIEWS_();
	static jint REVIEW_RATING_STYLE_PERCENTAGE_();
	static jint REVIEW_RATING_STYLE_STARS_();
	static jint REVIEW_RATING_STYLE_THUMBS_UP_DOWN_();
	static jint TYPE_ALBUM_();
	static jint TYPE_ARTIST_();
	static jint TYPE_CHANNEL_();
	static jint TYPE_CLIP_();
	static jint TYPE_EVENT_();
	static jint TYPE_MOVIE_();
	static jint TYPE_PLAYLIST_();
	static jint TYPE_STATION_();
	static jint TYPE_TRACK_();
	static jint TYPE_TV_EPISODE_();
	static jint TYPE_TV_SEASON_();
	static jint TYPE_TV_SERIES_();
	static jint WATCH_NEXT_TYPE_CONTINUE_();
	static jint WATCH_NEXT_TYPE_NEW_();
	static jint WATCH_NEXT_TYPE_NEXT_();
	static jint WATCH_NEXT_TYPE_WATCHLIST_();


protected:

	TvContract_WatchNextPrograms(handle_type h) : base_(h) {}

};

} // namespace android::media::tv
} // namespace scapix::java_api

#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::media::tv {

inline jint TvContract_WatchNextPrograms::ASPECT_RATIO_16_9_() { return get_static_field<SCAPIX_META_STRING("ASPECT_RATIO_16_9"), jint>(); }
inline jint TvContract_WatchNextPrograms::ASPECT_RATIO_1_1_() { return get_static_field<SCAPIX_META_STRING("ASPECT_RATIO_1_1"), jint>(); }
inline jint TvContract_WatchNextPrograms::ASPECT_RATIO_2_3_() { return get_static_field<SCAPIX_META_STRING("ASPECT_RATIO_2_3"), jint>(); }
inline jint TvContract_WatchNextPrograms::ASPECT_RATIO_3_2_() { return get_static_field<SCAPIX_META_STRING("ASPECT_RATIO_3_2"), jint>(); }
inline jint TvContract_WatchNextPrograms::ASPECT_RATIO_4_3_() { return get_static_field<SCAPIX_META_STRING("ASPECT_RATIO_4_3"), jint>(); }
inline jint TvContract_WatchNextPrograms::AVAILABILITY_AVAILABLE_() { return get_static_field<SCAPIX_META_STRING("AVAILABILITY_AVAILABLE"), jint>(); }
inline jint TvContract_WatchNextPrograms::AVAILABILITY_FREE_WITH_SUBSCRIPTION_() { return get_static_field<SCAPIX_META_STRING("AVAILABILITY_FREE_WITH_SUBSCRIPTION"), jint>(); }
inline jint TvContract_WatchNextPrograms::AVAILABILITY_PAID_CONTENT_() { return get_static_field<SCAPIX_META_STRING("AVAILABILITY_PAID_CONTENT"), jint>(); }
inline ref<java::lang::String> TvContract_WatchNextPrograms::COLUMN_AUDIO_LANGUAGE_() { return get_static_field<SCAPIX_META_STRING("COLUMN_AUDIO_LANGUAGE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_WatchNextPrograms::COLUMN_AUTHOR_() { return get_static_field<SCAPIX_META_STRING("COLUMN_AUTHOR"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_WatchNextPrograms::COLUMN_AVAILABILITY_() { return get_static_field<SCAPIX_META_STRING("COLUMN_AVAILABILITY"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_WatchNextPrograms::COLUMN_BROWSABLE_() { return get_static_field<SCAPIX_META_STRING("COLUMN_BROWSABLE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_WatchNextPrograms::COLUMN_CANONICAL_GENRE_() { return get_static_field<SCAPIX_META_STRING("COLUMN_CANONICAL_GENRE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_WatchNextPrograms::COLUMN_CONTENT_ID_() { return get_static_field<SCAPIX_META_STRING("COLUMN_CONTENT_ID"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_WatchNextPrograms::COLUMN_CONTENT_RATING_() { return get_static_field<SCAPIX_META_STRING("COLUMN_CONTENT_RATING"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_WatchNextPrograms::COLUMN_DURATION_MILLIS_() { return get_static_field<SCAPIX_META_STRING("COLUMN_DURATION_MILLIS"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_WatchNextPrograms::COLUMN_EPISODE_DISPLAY_NUMBER_() { return get_static_field<SCAPIX_META_STRING("COLUMN_EPISODE_DISPLAY_NUMBER"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_WatchNextPrograms::COLUMN_EPISODE_TITLE_() { return get_static_field<SCAPIX_META_STRING("COLUMN_EPISODE_TITLE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_WatchNextPrograms::COLUMN_INTENT_URI_() { return get_static_field<SCAPIX_META_STRING("COLUMN_INTENT_URI"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_WatchNextPrograms::COLUMN_INTERACTION_COUNT_() { return get_static_field<SCAPIX_META_STRING("COLUMN_INTERACTION_COUNT"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_WatchNextPrograms::COLUMN_INTERACTION_TYPE_() { return get_static_field<SCAPIX_META_STRING("COLUMN_INTERACTION_TYPE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_WatchNextPrograms::COLUMN_INTERNAL_PROVIDER_DATA_() { return get_static_field<SCAPIX_META_STRING("COLUMN_INTERNAL_PROVIDER_DATA"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_WatchNextPrograms::COLUMN_INTERNAL_PROVIDER_FLAG1_() { return get_static_field<SCAPIX_META_STRING("COLUMN_INTERNAL_PROVIDER_FLAG1"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_WatchNextPrograms::COLUMN_INTERNAL_PROVIDER_FLAG2_() { return get_static_field<SCAPIX_META_STRING("COLUMN_INTERNAL_PROVIDER_FLAG2"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_WatchNextPrograms::COLUMN_INTERNAL_PROVIDER_FLAG3_() { return get_static_field<SCAPIX_META_STRING("COLUMN_INTERNAL_PROVIDER_FLAG3"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_WatchNextPrograms::COLUMN_INTERNAL_PROVIDER_FLAG4_() { return get_static_field<SCAPIX_META_STRING("COLUMN_INTERNAL_PROVIDER_FLAG4"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_WatchNextPrograms::COLUMN_INTERNAL_PROVIDER_ID_() { return get_static_field<SCAPIX_META_STRING("COLUMN_INTERNAL_PROVIDER_ID"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_WatchNextPrograms::COLUMN_ITEM_COUNT_() { return get_static_field<SCAPIX_META_STRING("COLUMN_ITEM_COUNT"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_WatchNextPrograms::COLUMN_LAST_ENGAGEMENT_TIME_UTC_MILLIS_() { return get_static_field<SCAPIX_META_STRING("COLUMN_LAST_ENGAGEMENT_TIME_UTC_MILLIS"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_WatchNextPrograms::COLUMN_LAST_PLAYBACK_POSITION_MILLIS_() { return get_static_field<SCAPIX_META_STRING("COLUMN_LAST_PLAYBACK_POSITION_MILLIS"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_WatchNextPrograms::COLUMN_LIVE_() { return get_static_field<SCAPIX_META_STRING("COLUMN_LIVE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_WatchNextPrograms::COLUMN_LOGO_URI_() { return get_static_field<SCAPIX_META_STRING("COLUMN_LOGO_URI"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_WatchNextPrograms::COLUMN_LONG_DESCRIPTION_() { return get_static_field<SCAPIX_META_STRING("COLUMN_LONG_DESCRIPTION"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_WatchNextPrograms::COLUMN_OFFER_PRICE_() { return get_static_field<SCAPIX_META_STRING("COLUMN_OFFER_PRICE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_WatchNextPrograms::COLUMN_POSTER_ART_ASPECT_RATIO_() { return get_static_field<SCAPIX_META_STRING("COLUMN_POSTER_ART_ASPECT_RATIO"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_WatchNextPrograms::COLUMN_POSTER_ART_URI_() { return get_static_field<SCAPIX_META_STRING("COLUMN_POSTER_ART_URI"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_WatchNextPrograms::COLUMN_PREVIEW_VIDEO_URI_() { return get_static_field<SCAPIX_META_STRING("COLUMN_PREVIEW_VIDEO_URI"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_WatchNextPrograms::COLUMN_RELEASE_DATE_() { return get_static_field<SCAPIX_META_STRING("COLUMN_RELEASE_DATE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_WatchNextPrograms::COLUMN_REVIEW_RATING_() { return get_static_field<SCAPIX_META_STRING("COLUMN_REVIEW_RATING"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_WatchNextPrograms::COLUMN_REVIEW_RATING_STYLE_() { return get_static_field<SCAPIX_META_STRING("COLUMN_REVIEW_RATING_STYLE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_WatchNextPrograms::COLUMN_SEARCHABLE_() { return get_static_field<SCAPIX_META_STRING("COLUMN_SEARCHABLE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_WatchNextPrograms::COLUMN_SEASON_DISPLAY_NUMBER_() { return get_static_field<SCAPIX_META_STRING("COLUMN_SEASON_DISPLAY_NUMBER"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_WatchNextPrograms::COLUMN_SEASON_TITLE_() { return get_static_field<SCAPIX_META_STRING("COLUMN_SEASON_TITLE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_WatchNextPrograms::COLUMN_SHORT_DESCRIPTION_() { return get_static_field<SCAPIX_META_STRING("COLUMN_SHORT_DESCRIPTION"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_WatchNextPrograms::COLUMN_STARTING_PRICE_() { return get_static_field<SCAPIX_META_STRING("COLUMN_STARTING_PRICE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_WatchNextPrograms::COLUMN_THUMBNAIL_ASPECT_RATIO_() { return get_static_field<SCAPIX_META_STRING("COLUMN_THUMBNAIL_ASPECT_RATIO"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_WatchNextPrograms::COLUMN_THUMBNAIL_URI_() { return get_static_field<SCAPIX_META_STRING("COLUMN_THUMBNAIL_URI"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_WatchNextPrograms::COLUMN_TITLE_() { return get_static_field<SCAPIX_META_STRING("COLUMN_TITLE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_WatchNextPrograms::COLUMN_TRANSIENT_() { return get_static_field<SCAPIX_META_STRING("COLUMN_TRANSIENT"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_WatchNextPrograms::COLUMN_TYPE_() { return get_static_field<SCAPIX_META_STRING("COLUMN_TYPE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_WatchNextPrograms::COLUMN_VERSION_NUMBER_() { return get_static_field<SCAPIX_META_STRING("COLUMN_VERSION_NUMBER"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_WatchNextPrograms::COLUMN_VIDEO_HEIGHT_() { return get_static_field<SCAPIX_META_STRING("COLUMN_VIDEO_HEIGHT"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_WatchNextPrograms::COLUMN_VIDEO_WIDTH_() { return get_static_field<SCAPIX_META_STRING("COLUMN_VIDEO_WIDTH"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_WatchNextPrograms::COLUMN_WATCH_NEXT_TYPE_() { return get_static_field<SCAPIX_META_STRING("COLUMN_WATCH_NEXT_TYPE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_WatchNextPrograms::CONTENT_ITEM_TYPE_() { return get_static_field<SCAPIX_META_STRING("CONTENT_ITEM_TYPE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_WatchNextPrograms::CONTENT_TYPE_() { return get_static_field<SCAPIX_META_STRING("CONTENT_TYPE"), ref<java::lang::String>>(); }
inline ref<android::net::Uri> TvContract_WatchNextPrograms::CONTENT_URI_() { return get_static_field<SCAPIX_META_STRING("CONTENT_URI"), ref<android::net::Uri>>(); }
inline jint TvContract_WatchNextPrograms::INTERACTION_TYPE_FANS_() { return get_static_field<SCAPIX_META_STRING("INTERACTION_TYPE_FANS"), jint>(); }
inline jint TvContract_WatchNextPrograms::INTERACTION_TYPE_FOLLOWERS_() { return get_static_field<SCAPIX_META_STRING("INTERACTION_TYPE_FOLLOWERS"), jint>(); }
inline jint TvContract_WatchNextPrograms::INTERACTION_TYPE_LIKES_() { return get_static_field<SCAPIX_META_STRING("INTERACTION_TYPE_LIKES"), jint>(); }
inline jint TvContract_WatchNextPrograms::INTERACTION_TYPE_LISTENS_() { return get_static_field<SCAPIX_META_STRING("INTERACTION_TYPE_LISTENS"), jint>(); }
inline jint TvContract_WatchNextPrograms::INTERACTION_TYPE_THUMBS_() { return get_static_field<SCAPIX_META_STRING("INTERACTION_TYPE_THUMBS"), jint>(); }
inline jint TvContract_WatchNextPrograms::INTERACTION_TYPE_VIEWERS_() { return get_static_field<SCAPIX_META_STRING("INTERACTION_TYPE_VIEWERS"), jint>(); }
inline jint TvContract_WatchNextPrograms::INTERACTION_TYPE_VIEWS_() { return get_static_field<SCAPIX_META_STRING("INTERACTION_TYPE_VIEWS"), jint>(); }
inline jint TvContract_WatchNextPrograms::REVIEW_RATING_STYLE_PERCENTAGE_() { return get_static_field<SCAPIX_META_STRING("REVIEW_RATING_STYLE_PERCENTAGE"), jint>(); }
inline jint TvContract_WatchNextPrograms::REVIEW_RATING_STYLE_STARS_() { return get_static_field<SCAPIX_META_STRING("REVIEW_RATING_STYLE_STARS"), jint>(); }
inline jint TvContract_WatchNextPrograms::REVIEW_RATING_STYLE_THUMBS_UP_DOWN_() { return get_static_field<SCAPIX_META_STRING("REVIEW_RATING_STYLE_THUMBS_UP_DOWN"), jint>(); }
inline jint TvContract_WatchNextPrograms::TYPE_ALBUM_() { return get_static_field<SCAPIX_META_STRING("TYPE_ALBUM"), jint>(); }
inline jint TvContract_WatchNextPrograms::TYPE_ARTIST_() { return get_static_field<SCAPIX_META_STRING("TYPE_ARTIST"), jint>(); }
inline jint TvContract_WatchNextPrograms::TYPE_CHANNEL_() { return get_static_field<SCAPIX_META_STRING("TYPE_CHANNEL"), jint>(); }
inline jint TvContract_WatchNextPrograms::TYPE_CLIP_() { return get_static_field<SCAPIX_META_STRING("TYPE_CLIP"), jint>(); }
inline jint TvContract_WatchNextPrograms::TYPE_EVENT_() { return get_static_field<SCAPIX_META_STRING("TYPE_EVENT"), jint>(); }
inline jint TvContract_WatchNextPrograms::TYPE_MOVIE_() { return get_static_field<SCAPIX_META_STRING("TYPE_MOVIE"), jint>(); }
inline jint TvContract_WatchNextPrograms::TYPE_PLAYLIST_() { return get_static_field<SCAPIX_META_STRING("TYPE_PLAYLIST"), jint>(); }
inline jint TvContract_WatchNextPrograms::TYPE_STATION_() { return get_static_field<SCAPIX_META_STRING("TYPE_STATION"), jint>(); }
inline jint TvContract_WatchNextPrograms::TYPE_TRACK_() { return get_static_field<SCAPIX_META_STRING("TYPE_TRACK"), jint>(); }
inline jint TvContract_WatchNextPrograms::TYPE_TV_EPISODE_() { return get_static_field<SCAPIX_META_STRING("TYPE_TV_EPISODE"), jint>(); }
inline jint TvContract_WatchNextPrograms::TYPE_TV_SEASON_() { return get_static_field<SCAPIX_META_STRING("TYPE_TV_SEASON"), jint>(); }
inline jint TvContract_WatchNextPrograms::TYPE_TV_SERIES_() { return get_static_field<SCAPIX_META_STRING("TYPE_TV_SERIES"), jint>(); }
inline jint TvContract_WatchNextPrograms::WATCH_NEXT_TYPE_CONTINUE_() { return get_static_field<SCAPIX_META_STRING("WATCH_NEXT_TYPE_CONTINUE"), jint>(); }
inline jint TvContract_WatchNextPrograms::WATCH_NEXT_TYPE_NEW_() { return get_static_field<SCAPIX_META_STRING("WATCH_NEXT_TYPE_NEW"), jint>(); }
inline jint TvContract_WatchNextPrograms::WATCH_NEXT_TYPE_NEXT_() { return get_static_field<SCAPIX_META_STRING("WATCH_NEXT_TYPE_NEXT"), jint>(); }
inline jint TvContract_WatchNextPrograms::WATCH_NEXT_TYPE_WATCHLIST_() { return get_static_field<SCAPIX_META_STRING("WATCH_NEXT_TYPE_WATCHLIST"), jint>(); }

} // namespace android::media::tv
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_MEDIA_TV_TVCONTRACT_WATCHNEXTPROGRAMS_H
