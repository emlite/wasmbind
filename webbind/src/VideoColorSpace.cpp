#include <webbind/VideoColorSpace.hpp>


VideoColorSpaceInit::VideoColorSpaceInit(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
VideoColorSpaceInit VideoColorSpaceInit::take_ownership(Handle h) noexcept {
        return VideoColorSpaceInit(h);
    }
VideoColorSpaceInit::VideoColorSpaceInit(const emlite::Val &val) noexcept: emlite::Val(val) {}
VideoColorSpaceInit::VideoColorSpaceInit() noexcept: emlite::Val(emlite::Val::object()) {}
VideoColorSpaceInit VideoColorSpaceInit::clone() const noexcept { return *this; }

VideoColorPrimaries VideoColorSpaceInit::primaries() const {
    return emlite::Val::get("primaries").as<VideoColorPrimaries>();
}

void VideoColorSpaceInit::primaries(const VideoColorPrimaries& value) {
    emlite::Val::set("primaries", value);
}

VideoTransferCharacteristics VideoColorSpaceInit::transfer() const {
    return emlite::Val::get("transfer").as<VideoTransferCharacteristics>();
}

void VideoColorSpaceInit::transfer(const VideoTransferCharacteristics& value) {
    emlite::Val::set("transfer", value);
}

VideoMatrixCoefficients VideoColorSpaceInit::matrix() const {
    return emlite::Val::get("matrix").as<VideoMatrixCoefficients>();
}

void VideoColorSpaceInit::matrix(const VideoMatrixCoefficients& value) {
    emlite::Val::set("matrix", value);
}

bool VideoColorSpaceInit::fullRange() const {
    return emlite::Val::get("fullRange").as<bool>();
}

void VideoColorSpaceInit::fullRange(bool value) {
    emlite::Val::set("fullRange", value);
}

VideoColorSpace VideoColorSpace::take_ownership(Handle h) noexcept {
        return VideoColorSpace(h);
    }
VideoColorSpace VideoColorSpace::clone() const noexcept { return *this; }
emlite::Val VideoColorSpace::instance() noexcept { return emlite::Val::global("VideoColorSpace"); }
VideoColorSpace::VideoColorSpace(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
VideoColorSpace::VideoColorSpace(const emlite::Val &val) noexcept: emlite::Val(val) {}


VideoColorSpace::VideoColorSpace() : emlite::Val(emlite::Val::global("VideoColorSpace").new_()) {}

VideoColorSpace::VideoColorSpace(const VideoColorSpaceInit& init) : emlite::Val(emlite::Val::global("VideoColorSpace").new_(init)) {}

VideoColorPrimaries VideoColorSpace::primaries() const {
    return emlite::Val::get("primaries").as<VideoColorPrimaries>();
}

VideoTransferCharacteristics VideoColorSpace::transfer() const {
    return emlite::Val::get("transfer").as<VideoTransferCharacteristics>();
}

VideoMatrixCoefficients VideoColorSpace::matrix() const {
    return emlite::Val::get("matrix").as<VideoMatrixCoefficients>();
}

bool VideoColorSpace::fullRange() const {
    return emlite::Val::get("fullRange").as<bool>();
}

VideoColorSpaceInit VideoColorSpace::toJSON() {
    return emlite::Val::call("toJSON").as<VideoColorSpaceInit>();
}

