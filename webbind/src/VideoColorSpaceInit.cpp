#include <webbind/VideoColorSpaceInit.hpp>

namespace webbind {

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


} // namespace webbind