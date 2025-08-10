#include <webbind/SpeechSynthesisVoice.hpp>

namespace webbind {

SpeechSynthesisVoice SpeechSynthesisVoice::take_ownership(Handle h) noexcept {
        return SpeechSynthesisVoice(h);
    }
SpeechSynthesisVoice SpeechSynthesisVoice::clone() const noexcept { return *this; }
emlite::Val SpeechSynthesisVoice::instance() noexcept { return emlite::Val::global("SpeechSynthesisVoice"); }
SpeechSynthesisVoice::SpeechSynthesisVoice(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
SpeechSynthesisVoice::SpeechSynthesisVoice(const emlite::Val &val) noexcept: emlite::Val(val) {}

jsbind::String SpeechSynthesisVoice::voiceURI() const {
    return emlite::Val::get("voiceURI").as<jsbind::String>();
}

jsbind::String SpeechSynthesisVoice::name() const {
    return emlite::Val::get("name").as<jsbind::String>();
}

jsbind::String SpeechSynthesisVoice::lang() const {
    return emlite::Val::get("lang").as<jsbind::String>();
}

bool SpeechSynthesisVoice::localService() const {
    return emlite::Val::get("localService").as<bool>();
}

bool SpeechSynthesisVoice::default_() const {
    return emlite::Val::get("default").as<bool>();
}


} // namespace webbind