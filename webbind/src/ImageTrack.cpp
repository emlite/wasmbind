#include <webbind/ImageTrack.hpp>


ImageTrack ImageTrack::take_ownership(Handle h) noexcept {
        return ImageTrack(h);
    }
ImageTrack ImageTrack::clone() const noexcept { return *this; }
ImageTrack::ImageTrack(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ImageTrack::ImageTrack(const emlite::Val &val) noexcept: emlite::Val(val) {}


bool ImageTrack::animated() const {
    return emlite::Val::get("animated").as<bool>();
}

unsigned long ImageTrack::frameCount() const {
    return emlite::Val::get("frameCount").as<unsigned long>();
}

float ImageTrack::repetitionCount() const {
    return emlite::Val::get("repetitionCount").as<float>();
}

bool ImageTrack::selected() const {
    return emlite::Val::get("selected").as<bool>();
}

void ImageTrack::selected(bool value) {
    emlite::Val::set("selected", value);
}

