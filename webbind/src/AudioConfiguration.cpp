#include "webbind/AudioConfiguration.hpp"

using emlite::Val;
namespace webbind {

AudioConfiguration::AudioConfiguration(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
AudioConfiguration AudioConfiguration::take_ownership(Handle h) noexcept {
        return AudioConfiguration(h);
    }
AudioConfiguration::AudioConfiguration(const emlite::Val &val) noexcept: emlite::Val(val) {}
AudioConfiguration::AudioConfiguration() noexcept: emlite::Val(emlite::Val::object()) {}
AudioConfiguration AudioConfiguration::clone() const noexcept { return *this; }

jsbind::String AudioConfiguration::contentType() const {
    return emlite::Val::get("contentType").as<jsbind::String>();
}

void AudioConfiguration::contentType(const jsbind::String& value) {
    emlite::Val::set("contentType", value);
}

jsbind::String AudioConfiguration::channels() const {
    return emlite::Val::get("channels").as<jsbind::String>();
}

void AudioConfiguration::channels(const jsbind::String& value) {
    emlite::Val::set("channels", value);
}

long long AudioConfiguration::bitrate() const {
    return emlite::Val::get("bitrate").as<long long>();
}

void AudioConfiguration::bitrate(long long value) {
    emlite::Val::set("bitrate", value);
}

unsigned long AudioConfiguration::samplerate() const {
    return emlite::Val::get("samplerate").as<unsigned long>();
}

void AudioConfiguration::samplerate(unsigned long value) {
    emlite::Val::set("samplerate", value);
}

bool AudioConfiguration::spatialRendering() const {
    return emlite::Val::get("spatialRendering").as<bool>();
}

void AudioConfiguration::spatialRendering(bool value) {
    emlite::Val::set("spatialRendering", value);
}


} // namespace webbind