#include <webbind/OfflineAudioContextOptions.hpp>

namespace webbind {

OfflineAudioContextOptions::OfflineAudioContextOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
OfflineAudioContextOptions OfflineAudioContextOptions::take_ownership(Handle h) noexcept {
    return OfflineAudioContextOptions(h);
}

OfflineAudioContextOptions::OfflineAudioContextOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}

OfflineAudioContextOptions::OfflineAudioContextOptions() noexcept: emlite::Val(emlite::Val::object()) {}

OfflineAudioContextOptions OfflineAudioContextOptions::clone() const noexcept { return *this; }

unsigned long OfflineAudioContextOptions::numberOfChannels() const {
    return emlite::Val::get("numberOfChannels").as<unsigned long>();
}

void OfflineAudioContextOptions::numberOfChannels(unsigned long value) {
    emlite::Val::set("numberOfChannels", value);
}

unsigned long OfflineAudioContextOptions::length() const {
    return emlite::Val::get("length").as<unsigned long>();
}

void OfflineAudioContextOptions::length(unsigned long value) {
    emlite::Val::set("length", value);
}

float OfflineAudioContextOptions::sampleRate() const {
    return emlite::Val::get("sampleRate").as<float>();
}

void OfflineAudioContextOptions::sampleRate(float value) {
    emlite::Val::set("sampleRate", value);
}

jsbind::Any OfflineAudioContextOptions::renderSizeHint() const {
    return emlite::Val::get("renderSizeHint").as<jsbind::Any>();
}

void OfflineAudioContextOptions::renderSizeHint(const jsbind::Any& value) {
    emlite::Val::set("renderSizeHint", value);
}


} // namespace webbind