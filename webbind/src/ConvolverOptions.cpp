#include <webbind/ConvolverOptions.hpp>
#include <webbind/AudioBuffer.hpp>

namespace webbind {

ConvolverOptions::ConvolverOptions(Handle h) noexcept : AudioNodeOptions(emlite::Val::take_ownership(h)) {}
ConvolverOptions ConvolverOptions::take_ownership(Handle h) noexcept {
    return ConvolverOptions(h);
}

ConvolverOptions::ConvolverOptions(const emlite::Val &val) noexcept: AudioNodeOptions(val) {}

ConvolverOptions::ConvolverOptions() noexcept: AudioNodeOptions(emlite::Val::object()) {}

ConvolverOptions ConvolverOptions::clone() const noexcept { return *this; }

AudioBuffer ConvolverOptions::buffer() const {
    return emlite::Val::get("buffer").as<AudioBuffer>();
}

void ConvolverOptions::buffer(const AudioBuffer& value) {
    emlite::Val::set("buffer", value);
}

bool ConvolverOptions::disableNormalization() const {
    return emlite::Val::get("disableNormalization").as<bool>();
}

void ConvolverOptions::disableNormalization(bool value) {
    emlite::Val::set("disableNormalization", value);
}


} // namespace webbind