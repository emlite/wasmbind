#include <webbind/SpeechGrammar.hpp>


SpeechGrammar SpeechGrammar::take_ownership(Handle h) noexcept {
        return SpeechGrammar(h);
    }
SpeechGrammar SpeechGrammar::clone() const noexcept { return *this; }
SpeechGrammar::SpeechGrammar(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
SpeechGrammar::SpeechGrammar(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::DOMString SpeechGrammar::src() const {
    return emlite::Val::get("src").as<jsbind::DOMString>();
}

void SpeechGrammar::src(const jsbind::DOMString& value) {
    emlite::Val::set("src", value);
}

float SpeechGrammar::weight() const {
    return emlite::Val::get("weight").as<float>();
}

void SpeechGrammar::weight(float value) {
    emlite::Val::set("weight", value);
}

