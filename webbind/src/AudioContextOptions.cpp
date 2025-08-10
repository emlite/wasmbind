#include <webbind/AudioContextOptions.hpp>

namespace webbind {

AudioContextOptions::AudioContextOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
AudioContextOptions AudioContextOptions::take_ownership(Handle h) noexcept {
    return AudioContextOptions(h);
}

AudioContextOptions::AudioContextOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}

AudioContextOptions::AudioContextOptions() noexcept: emlite::Val(emlite::Val::object()) {}

AudioContextOptions AudioContextOptions::clone() const noexcept { return *this; }

jsbind::Any AudioContextOptions::latencyHint() const {
    return emlite::Val::get("latencyHint").as<jsbind::Any>();
}

void AudioContextOptions::latencyHint(const jsbind::Any& value) {
    emlite::Val::set("latencyHint", value);
}

float AudioContextOptions::sampleRate() const {
    return emlite::Val::get("sampleRate").as<float>();
}

void AudioContextOptions::sampleRate(float value) {
    emlite::Val::set("sampleRate", value);
}

jsbind::Any AudioContextOptions::sinkId() const {
    return emlite::Val::get("sinkId").as<jsbind::Any>();
}

void AudioContextOptions::sinkId(const jsbind::Any& value) {
    emlite::Val::set("sinkId", value);
}

jsbind::Any AudioContextOptions::renderSizeHint() const {
    return emlite::Val::get("renderSizeHint").as<jsbind::Any>();
}

void AudioContextOptions::renderSizeHint(const jsbind::Any& value) {
    emlite::Val::set("renderSizeHint", value);
}


} // namespace webbind