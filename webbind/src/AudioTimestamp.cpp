#include <webbind/AudioTimestamp.hpp>

namespace webbind {

AudioTimestamp::AudioTimestamp(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
AudioTimestamp AudioTimestamp::take_ownership(Handle h) noexcept {
    return AudioTimestamp(h);
}

AudioTimestamp::AudioTimestamp(const emlite::Val &val) noexcept: emlite::Val(val) {}

AudioTimestamp::AudioTimestamp() noexcept: emlite::Val(emlite::Val::object()) {}

AudioTimestamp AudioTimestamp::clone() const noexcept { return *this; }

double AudioTimestamp::contextTime() const {
    return emlite::Val::get("contextTime").as<double>();
}

void AudioTimestamp::contextTime(double value) {
    emlite::Val::set("contextTime", value);
}

jsbind::Any AudioTimestamp::performanceTime() const {
    return emlite::Val::get("performanceTime").as<jsbind::Any>();
}

void AudioTimestamp::performanceTime(const jsbind::Any& value) {
    emlite::Val::set("performanceTime", value);
}


} // namespace webbind