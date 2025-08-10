#include "webbind/AudioEncoderConfig.hpp"

using emlite::Val;
namespace webbind {

AudioEncoderConfig::AudioEncoderConfig(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
AudioEncoderConfig AudioEncoderConfig::take_ownership(Handle h) noexcept {
        return AudioEncoderConfig(h);
    }
AudioEncoderConfig::AudioEncoderConfig(const emlite::Val &val) noexcept: emlite::Val(val) {}
AudioEncoderConfig::AudioEncoderConfig() noexcept: emlite::Val(emlite::Val::object()) {}
AudioEncoderConfig AudioEncoderConfig::clone() const noexcept { return *this; }

jsbind::String AudioEncoderConfig::codec() const {
    return emlite::Val::get("codec").as<jsbind::String>();
}

void AudioEncoderConfig::codec(const jsbind::String& value) {
    emlite::Val::set("codec", value);
}

unsigned long AudioEncoderConfig::sampleRate() const {
    return emlite::Val::get("sampleRate").as<unsigned long>();
}

void AudioEncoderConfig::sampleRate(unsigned long value) {
    emlite::Val::set("sampleRate", value);
}

unsigned long AudioEncoderConfig::numberOfChannels() const {
    return emlite::Val::get("numberOfChannels").as<unsigned long>();
}

void AudioEncoderConfig::numberOfChannels(unsigned long value) {
    emlite::Val::set("numberOfChannels", value);
}

long long AudioEncoderConfig::bitrate() const {
    return emlite::Val::get("bitrate").as<long long>();
}

void AudioEncoderConfig::bitrate(long long value) {
    emlite::Val::set("bitrate", value);
}

BitrateMode AudioEncoderConfig::bitrateMode() const {
    return emlite::Val::get("bitrateMode").as<BitrateMode>();
}

void AudioEncoderConfig::bitrateMode(const BitrateMode& value) {
    emlite::Val::set("bitrateMode", value);
}


} // namespace webbind