#include "webbind/VideoEncoderSupport.hpp"
#include "webbind/VideoEncoderConfig.hpp"

using emlite::Val;
namespace webbind {

VideoEncoderSupport::VideoEncoderSupport(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
VideoEncoderSupport VideoEncoderSupport::take_ownership(Handle h) noexcept {
        return VideoEncoderSupport(h);
    }
VideoEncoderSupport::VideoEncoderSupport(const emlite::Val &val) noexcept: emlite::Val(val) {}
VideoEncoderSupport::VideoEncoderSupport() noexcept: emlite::Val(emlite::Val::object()) {}
VideoEncoderSupport VideoEncoderSupport::clone() const noexcept { return *this; }

bool VideoEncoderSupport::supported() const {
    return emlite::Val::get("supported").as<bool>();
}

void VideoEncoderSupport::supported(bool value) {
    emlite::Val::set("supported", value);
}

VideoEncoderConfig VideoEncoderSupport::config() const {
    return emlite::Val::get("config").as<VideoEncoderConfig>();
}

void VideoEncoderSupport::config(const VideoEncoderConfig& value) {
    emlite::Val::set("config", value);
}


} // namespace webbind