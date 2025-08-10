#include <webbind/ChapterInformation.hpp>
#include <webbind/MediaImage.hpp>

namespace webbind {

ChapterInformation ChapterInformation::take_ownership(Handle h) noexcept {
        return ChapterInformation(h);
    }
ChapterInformation ChapterInformation::clone() const noexcept { return *this; }
emlite::Val ChapterInformation::instance() noexcept { return emlite::Val::global("ChapterInformation"); }
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


} // namespace webbind