#include <webbind/AudioDecoderConfig.hpp>

using emlite::Val;
namespace webbind {

AudioDecoderConfig::AudioDecoderConfig(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
AudioDecoderConfig AudioDecoderConfig::take_ownership(Handle h) noexcept {
        return AudioDecoderConfig(h);
    }
AudioDecoderConfig::AudioDecoderConfig(const emlite::Val &val) noexcept: emlite::Val(val) {}
AudioDecoderConfig::AudioDecoderConfig() noexcept: emlite::Val(emlite::Val::object()) {}
AudioDecoderConfig AudioDecoderConfig::clone() const noexcept { return *this; }

jsbind::String AudioDecoderConfig::codec() const {
    return emlite::Val::get("codec").as<jsbind::String>();
}

void AudioDecoderConfig::codec(const jsbind::String& value) {
    emlite::Val::set("codec", value);
}

unsigned long AudioDecoderConfig::sampleRate() const {
    return emlite::Val::get("sampleRate").as<unsigned long>();
}

void AudioDecoderConfig::sampleRate(unsigned long value) {
    emlite::Val::set("sampleRate", value);
}

unsigned long AudioDecoderConfig::numberOfChannels() const {
    return emlite::Val::get("numberOfChannels").as<unsigned long>();
}

void AudioDecoderConfig::numberOfChannels(unsigned long value) {
    emlite::Val::set("numberOfChannels", value);
}

jsbind::Any AudioDecoderConfig::description() const {
    return emlite::Val::get("description").as<jsbind::Any>();
}

void AudioDecoderConfig::description(const jsbind::Any& value) {
    emlite::Val::set("description", value);
}


} // namespace webbind