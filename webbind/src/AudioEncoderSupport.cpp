#include <webbind/AudioEncoderSupport.hpp>
#include <webbind/AudioEncoderConfig.hpp>

namespace webbind {

AudioEncoderSupport::AudioEncoderSupport(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
AudioEncoderSupport AudioEncoderSupport::take_ownership(Handle h) noexcept {
    return AudioEncoderSupport(h);
}

AudioEncoderSupport::AudioEncoderSupport(const emlite::Val &val) noexcept: emlite::Val(val) {}

AudioEncoderSupport::AudioEncoderSupport() noexcept: emlite::Val(emlite::Val::object()) {}

AudioEncoderSupport AudioEncoderSupport::clone() const noexcept { return *this; }

bool AudioEncoderSupport::supported() const {
    return emlite::Val::get("supported").as<bool>();
}

void AudioEncoderSupport::supported(bool value) {
    emlite::Val::set("supported", value);
}

AudioEncoderConfig AudioEncoderSupport::config() const {
    return emlite::Val::get("config").as<AudioEncoderConfig>();
}

void AudioEncoderSupport::config(const AudioEncoderConfig& value) {
    emlite::Val::set("config", value);
}


} // namespace webbind