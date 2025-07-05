#include <webbind/MediaMetadata.hpp>
#include <webbind/ChapterInformation.hpp>


MediaMetadata MediaMetadata::take_ownership(Handle h) noexcept {
        return MediaMetadata(h);
    }
MediaMetadata MediaMetadata::clone() const noexcept { return *this; }
MediaMetadata::MediaMetadata(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MediaMetadata::MediaMetadata(const emlite::Val &val) noexcept: emlite::Val(val) {}


MediaMetadata::MediaMetadata() : emlite::Val(emlite::Val::global("MediaMetadata").new_()) {}

MediaMetadata::MediaMetadata(const jsbind::Any& init) : emlite::Val(emlite::Val::global("MediaMetadata").new_(init)) {}

jsbind::DOMString MediaMetadata::title() const {
    return emlite::Val::get("title").as<jsbind::DOMString>();
}

void MediaMetadata::title(const jsbind::DOMString& value) {
    emlite::Val::set("title", value);
}

jsbind::DOMString MediaMetadata::artist() const {
    return emlite::Val::get("artist").as<jsbind::DOMString>();
}

void MediaMetadata::artist(const jsbind::DOMString& value) {
    emlite::Val::set("artist", value);
}

jsbind::DOMString MediaMetadata::album() const {
    return emlite::Val::get("album").as<jsbind::DOMString>();
}

void MediaMetadata::album(const jsbind::DOMString& value) {
    emlite::Val::set("album", value);
}

jsbind::FrozenArray<jsbind::Object> MediaMetadata::artwork() const {
    return emlite::Val::get("artwork").as<jsbind::FrozenArray<jsbind::Object>>();
}

void MediaMetadata::artwork(const jsbind::FrozenArray<jsbind::Object>& value) {
    emlite::Val::set("artwork", value);
}

jsbind::FrozenArray<ChapterInformation> MediaMetadata::chapterInfo() const {
    return emlite::Val::get("chapterInfo").as<jsbind::FrozenArray<ChapterInformation>>();
}

