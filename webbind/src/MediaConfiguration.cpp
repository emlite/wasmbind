#include "webbind/MediaConfiguration.hpp"
#include "webbind/VideoConfiguration.hpp"
#include "webbind/AudioConfiguration.hpp"

using emlite::Val;
namespace webbind {

MediaConfiguration::MediaConfiguration(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MediaConfiguration MediaConfiguration::take_ownership(Handle h) noexcept {
        return MediaConfiguration(h);
    }
MediaConfiguration::MediaConfiguration(const emlite::Val &val) noexcept: emlite::Val(val) {}
MediaConfiguration::MediaConfiguration() noexcept: emlite::Val(emlite::Val::object()) {}
MediaConfiguration MediaConfiguration::clone() const noexcept { return *this; }

VideoConfiguration MediaConfiguration::video() const {
    return emlite::Val::get("video").as<VideoConfiguration>();
}

void MediaConfiguration::video(const VideoConfiguration& value) {
    emlite::Val::set("video", value);
}

AudioConfiguration MediaConfiguration::audio() const {
    return emlite::Val::get("audio").as<AudioConfiguration>();
}

void MediaConfiguration::audio(const AudioConfiguration& value) {
    emlite::Val::set("audio", value);
}


} // namespace webbind