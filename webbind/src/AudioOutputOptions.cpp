#include <webbind/AudioOutputOptions.hpp>

using emlite::Val;
namespace webbind {

AudioOutputOptions::AudioOutputOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
AudioOutputOptions AudioOutputOptions::take_ownership(Handle h) noexcept {
        return AudioOutputOptions(h);
    }
AudioOutputOptions::AudioOutputOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
AudioOutputOptions::AudioOutputOptions() noexcept: emlite::Val(emlite::Val::object()) {}
AudioOutputOptions AudioOutputOptions::clone() const noexcept { return *this; }

jsbind::String AudioOutputOptions::deviceId() const {
    return emlite::Val::get("deviceId").as<jsbind::String>();
}

void AudioOutputOptions::deviceId(const jsbind::String& value) {
    emlite::Val::set("deviceId", value);
}


} // namespace webbind