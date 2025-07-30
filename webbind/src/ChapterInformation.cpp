#include <webbind/ChapterInformation.hpp>


MediaImage::MediaImage(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MediaImage MediaImage::take_ownership(Handle h) noexcept {
        return MediaImage(h);
    }
MediaImage::MediaImage(const emlite::Val &val) noexcept: emlite::Val(val) {}
MediaImage::MediaImage() noexcept: emlite::Val(emlite::Val::object()) {}
MediaImage MediaImage::clone() const noexcept { return *this; }

jsbind::String MediaImage::src() const {
    return emlite::Val::get("src").as<jsbind::String>();
}

void MediaImage::src(const jsbind::String& value) {
    emlite::Val::set("src", value);
}

jsbind::String MediaImage::sizes() const {
    return emlite::Val::get("sizes").as<jsbind::String>();
}

void MediaImage::sizes(const jsbind::String& value) {
    emlite::Val::set("sizes", value);
}

jsbind::String MediaImage::type() const {
    return emlite::Val::get("type").as<jsbind::String>();
}

void MediaImage::type(const jsbind::String& value) {
    emlite::Val::set("type", value);
}

ChapterInformation ChapterInformation::take_ownership(Handle h) noexcept {
        return ChapterInformation(h);
    }
ChapterInformation ChapterInformation::clone() const noexcept { return *this; }
ChapterInformation::ChapterInformation(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ChapterInformation::ChapterInformation(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::String ChapterInformation::title() const {
    return emlite::Val::get("title").as<jsbind::String>();
}

double ChapterInformation::startTime() const {
    return emlite::Val::get("startTime").as<double>();
}

jsbind::TypedArray<MediaImage> ChapterInformation::artwork() const {
    return emlite::Val::get("artwork").as<jsbind::TypedArray<MediaImage>>();
}

