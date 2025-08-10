#include "webbind/AudioEncoderInit.hpp"

using emlite::Val;
namespace webbind {

AudioEncoderInit::AudioEncoderInit(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
AudioEncoderInit AudioEncoderInit::take_ownership(Handle h) noexcept {
        return AudioEncoderInit(h);
    }
AudioEncoderInit::AudioEncoderInit(const emlite::Val &val) noexcept: emlite::Val(val) {}
AudioEncoderInit::AudioEncoderInit() noexcept: emlite::Val(emlite::Val::object()) {}
AudioEncoderInit AudioEncoderInit::clone() const noexcept { return *this; }

jsbind::Function AudioEncoderInit::output() const {
    return emlite::Val::get("output").as<jsbind::Function>();
}

void AudioEncoderInit::output(const jsbind::Function& value) {
    emlite::Val::set("output", value);
}

jsbind::Function AudioEncoderInit::error() const {
    return emlite::Val::get("error").as<jsbind::Function>();
}

void AudioEncoderInit::error(const jsbind::Function& value) {
    emlite::Val::set("error", value);
}


} // namespace webbind