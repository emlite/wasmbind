#include "webbind/MediaMetadataInit.hpp"
#include "webbind/MediaImage.hpp"
#include "webbind/ChapterInformationInit.hpp"

using emlite::Val;
namespace webbind {

MediaMetadataInit::MediaMetadataInit(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MediaMetadataInit MediaMetadataInit::take_ownership(Handle h) noexcept {
        return MediaMetadataInit(h);
    }
MediaMetadataInit::MediaMetadataInit(const emlite::Val &val) noexcept: emlite::Val(val) {}
MediaMetadataInit::MediaMetadataInit() noexcept: emlite::Val(emlite::Val::object()) {}
MediaMetadataInit MediaMetadataInit::clone() const noexcept { return *this; }

jsbind::String MediaMetadataInit::title() const {
    return emlite::Val::get("title").as<jsbind::String>();
}

void MediaMetadataInit::title(const jsbind::String& value) {
    emlite::Val::set("title", value);
}

jsbind::String MediaMetadataInit::artist() const {
    return emlite::Val::get("artist").as<jsbind::String>();
}

void MediaMetadataInit::artist(const jsbind::String& value) {
    emlite::Val::set("artist", value);
}

jsbind::String MediaMetadataInit::album() const {
    return emlite::Val::get("album").as<jsbind::String>();
}

void MediaMetadataInit::album(const jsbind::String& value) {
    emlite::Val::set("album", value);
}

jsbind::TypedArray<MediaImage> MediaMetadataInit::artwork() const {
    return emlite::Val::get("artwork").as<jsbind::TypedArray<MediaImage>>();
}

void MediaMetadataInit::artwork(const jsbind::TypedArray<MediaImage>& value) {
    emlite::Val::set("artwork", value);
}

jsbind::TypedArray<ChapterInformationInit> MediaMetadataInit::chapterInfo() const {
    return emlite::Val::get("chapterInfo").as<jsbind::TypedArray<ChapterInformationInit>>();
}

void MediaMetadataInit::chapterInfo(const jsbind::TypedArray<ChapterInformationInit>& value) {
    emlite::Val::set("chapterInfo", value);
}


} // namespace webbind