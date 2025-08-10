#include <webbind/AudioSinkOptions.hpp>

namespace webbind {

AudioSinkOptions::AudioSinkOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
AudioSinkOptions AudioSinkOptions::take_ownership(Handle h) noexcept {
    return AudioSinkOptions(h);
}

AudioSinkOptions::AudioSinkOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}

AudioSinkOptions::AudioSinkOptions() noexcept: emlite::Val(emlite::Val::object()) {}

AudioSinkOptions AudioSinkOptions::clone() const noexcept { return *this; }

AudioSinkType AudioSinkOptions::type() const {
    return emlite::Val::get("type").as<AudioSinkType>();
}

void AudioSinkOptions::type(const AudioSinkType& value) {
    emlite::Val::set("type", value);
}


} // namespace webbind