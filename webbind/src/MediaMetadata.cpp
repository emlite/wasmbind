#include <webbind/MediaMetadata.hpp>
#include <webbind/MediaMetadataInit.hpp>
#include <webbind/ChapterInformation.hpp>

namespace webbind {

MediaMetadata MediaMetadata::take_ownership(Handle h) noexcept {
    return MediaMetadata(h);
}

MediaMetadata MediaMetadata::clone() const noexcept { return *this; }

emlite::Val MediaMetadata::instance() noexcept { return emlite::Val::global("MediaMetadata"); }

MediaMetadata::MediaMetadata(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

MediaMetadata::MediaMetadata(const emlite::Val &val) noexcept: emlite::Val(val) {}

MediaMetadata::MediaMetadata() : emlite::Val(emlite::Val::global("MediaMetadata").new_()) {}

MediaMetadata::MediaMetadata(const MediaMetadataInit& init) : emlite::Val(emlite::Val::global("MediaMetadata").new_(init)) {}

jsbind::String MediaMetadata::title() const {
    return emlite::Val::get("title").as<jsbind::String>();
}

void MediaMetadata::title(const jsbind::String& value) {
    emlite::Val::set("title", value);
}

jsbind::String MediaMetadata::artist() const {
    return emlite::Val::get("artist").as<jsbind::String>();
}

void MediaMetadata::artist(const jsbind::String& value) {
    emlite::Val::set("artist", value);
}

jsbind::String MediaMetadata::album() const {
    return emlite::Val::get("album").as<jsbind::String>();
}

void MediaMetadata::album(const jsbind::String& value) {
    emlite::Val::set("album", value);
}

jsbind::TypedArray<jsbind::Object> MediaMetadata::artwork() const {
    return emlite::Val::get("artwork").as<jsbind::TypedArray<jsbind::Object>>();
}

void MediaMetadata::artwork(const jsbind::TypedArray<jsbind::Object>& value) {
    emlite::Val::set("artwork", value);
}

jsbind::TypedArray<ChapterInformation> MediaMetadata::chapterInfo() const {
    return emlite::Val::get("chapterInfo").as<jsbind::TypedArray<ChapterInformation>>();
}


} // namespace webbind