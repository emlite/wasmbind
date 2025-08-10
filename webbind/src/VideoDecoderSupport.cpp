#include <webbind/VideoDecoderSupport.hpp>
#include <webbind/VideoDecoderConfig.hpp>

using emlite::Val;
namespace webbind {

VideoDecoderSupport::VideoDecoderSupport(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
VideoDecoderSupport VideoDecoderSupport::take_ownership(Handle h) noexcept {
        return VideoDecoderSupport(h);
    }
VideoDecoderSupport::VideoDecoderSupport(const emlite::Val &val) noexcept: emlite::Val(val) {}
VideoDecoderSupport::VideoDecoderSupport() noexcept: emlite::Val(emlite::Val::object()) {}
VideoDecoderSupport VideoDecoderSupport::clone() const noexcept { return *this; }

bool VideoDecoderSupport::supported() const {
    return emlite::Val::get("supported").as<bool>();
}

void VideoDecoderSupport::supported(bool value) {
    emlite::Val::set("supported", value);
}

VideoDecoderConfig VideoDecoderSupport::config() const {
    return emlite::Val::get("config").as<VideoDecoderConfig>();
}

void VideoDecoderSupport::config(const VideoDecoderConfig& value) {
    emlite::Val::set("config", value);
}


} // namespace webbind