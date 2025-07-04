#include <webbind/SpeechRecognitionAlternative.hpp>


SpeechRecognitionAlternative SpeechRecognitionAlternative::take_ownership(Handle h) noexcept {
        return SpeechRecognitionAlternative(h);
    }
SpeechRecognitionAlternative SpeechRecognitionAlternative::clone() const noexcept { return *this; }
SpeechRecognitionAlternative::SpeechRecognitionAlternative(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
SpeechRecognitionAlternative::SpeechRecognitionAlternative(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::DOMString SpeechRecognitionAlternative::transcript() const {
    return emlite::Val::get("transcript").as<jsbind::DOMString>();
}

float SpeechRecognitionAlternative::confidence() const {
    return emlite::Val::get("confidence").as<float>();
}

