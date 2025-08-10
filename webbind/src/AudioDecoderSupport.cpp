#include <webbind/AudioDecoderSupport.hpp>
#include <webbind/AudioDecoderConfig.hpp>

namespace webbind {

AudioDecoderSupport::AudioDecoderSupport(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
AudioDecoderSupport AudioDecoderSupport::take_ownership(Handle h) noexcept {
    return AudioDecoderSupport(h);
}

AudioDecoderSupport::AudioDecoderSupport(const emlite::Val &val) noexcept: emlite::Val(val) {}

AudioDecoderSupport::AudioDecoderSupport() noexcept: emlite::Val(emlite::Val::object()) {}

AudioDecoderSupport AudioDecoderSupport::clone() const noexcept { return *this; }

bool AudioDecoderSupport::supported() const {
    return emlite::Val::get("supported").as<bool>();
}

void AudioDecoderSupport::supported(bool value) {
    emlite::Val::set("supported", value);
}

AudioDecoderConfig AudioDecoderSupport::config() const {
    return emlite::Val::get("config").as<AudioDecoderConfig>();
}

void AudioDecoderSupport::config(const AudioDecoderConfig& value) {
    emlite::Val::set("config", value);
}


} // namespace webbind