#include <webbind/SpeechSynthesisVoice.hpp>


SpeechSynthesisVoice SpeechSynthesisVoice::take_ownership(Handle h) noexcept {
        return SpeechSynthesisVoice(h);
    }
SpeechSynthesisVoice SpeechSynthesisVoice::clone() const noexcept { return *this; }
SpeechSynthesisVoice::SpeechSynthesisVoice(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
SpeechSynthesisVoice::SpeechSynthesisVoice(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::DOMString SpeechSynthesisVoice::voiceURI() const {
    return emlite::Val::get("voiceURI").as<jsbind::DOMString>();
}

jsbind::DOMString SpeechSynthesisVoice::name() const {
    return emlite::Val::get("name").as<jsbind::DOMString>();
}

jsbind::DOMString SpeechSynthesisVoice::lang() const {
    return emlite::Val::get("lang").as<jsbind::DOMString>();
}

bool SpeechSynthesisVoice::localService() const {
    return emlite::Val::get("localService").as<bool>();
}

bool SpeechSynthesisVoice::default_() const {
    return emlite::Val::get("default").as<bool>();
}

