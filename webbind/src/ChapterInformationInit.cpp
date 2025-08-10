#include "webbind/ChapterInformationInit.hpp"
#include "webbind/MediaImage.hpp"

using emlite::Val;
namespace webbind {

ChapterInformationInit::ChapterInformationInit(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ChapterInformationInit ChapterInformationInit::take_ownership(Handle h) noexcept {
        return ChapterInformationInit(h);
    }
ChapterInformationInit::ChapterInformationInit(const emlite::Val &val) noexcept: emlite::Val(val) {}
ChapterInformationInit::ChapterInformationInit() noexcept: emlite::Val(emlite::Val::object()) {}
ChapterInformationInit ChapterInformationInit::clone() const noexcept { return *this; }

jsbind::String ChapterInformationInit::title() const {
    return emlite::Val::get("title").as<jsbind::String>();
}

void ChapterInformationInit::title(const jsbind::String& value) {
    emlite::Val::set("title", value);
}

double ChapterInformationInit::startTime() const {
    return emlite::Val::get("startTime").as<double>();
}

void ChapterInformationInit::startTime(double value) {
    emlite::Val::set("startTime", value);
}

jsbind::TypedArray<MediaImage> ChapterInformationInit::artwork() const {
    return emlite::Val::get("artwork").as<jsbind::TypedArray<MediaImage>>();
}

void ChapterInformationInit::artwork(const jsbind::TypedArray<MediaImage>& value) {
    emlite::Val::set("artwork", value);
}


} // namespace webbind