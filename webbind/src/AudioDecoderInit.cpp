#include <webbind/AudioDecoderInit.hpp>

using emlite::Val;
namespace webbind {

AudioDecoderInit::AudioDecoderInit(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
AudioDecoderInit AudioDecoderInit::take_ownership(Handle h) noexcept {
        return AudioDecoderInit(h);
    }
AudioDecoderInit::AudioDecoderInit(const emlite::Val &val) noexcept: emlite::Val(val) {}
AudioDecoderInit::AudioDecoderInit() noexcept: emlite::Val(emlite::Val::object()) {}
AudioDecoderInit AudioDecoderInit::clone() const noexcept { return *this; }

jsbind::Function AudioDecoderInit::output() const {
    return emlite::Val::get("output").as<jsbind::Function>();
}

void AudioDecoderInit::output(const jsbind::Function& value) {
    emlite::Val::set("output", value);
}

jsbind::Function AudioDecoderInit::error() const {
    return emlite::Val::get("error").as<jsbind::Function>();
}

void AudioDecoderInit::error(const jsbind::Function& value) {
    emlite::Val::set("error", value);
}


} // namespace webbind