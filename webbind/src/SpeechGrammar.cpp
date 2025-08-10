#include <webbind/SpeechGrammar.hpp>

namespace webbind {

SpeechGrammar SpeechGrammar::take_ownership(Handle h) noexcept {
    return SpeechGrammar(h);
}

SpeechGrammar SpeechGrammar::clone() const noexcept { return *this; }

emlite::Val SpeechGrammar::instance() noexcept { return emlite::Val::global("SpeechGrammar"); }

SpeechGrammar::SpeechGrammar(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

SpeechGrammar::SpeechGrammar(const emlite::Val &val) noexcept: emlite::Val(val) {}

jsbind::String SpeechGrammar::src() const {
    return emlite::Val::get("src").as<jsbind::String>();
}

void SpeechGrammar::src(const jsbind::String& value) {
    emlite::Val::set("src", value);
}

float SpeechGrammar::weight() const {
    return emlite::Val::get("weight").as<float>();
}

void SpeechGrammar::weight(float value) {
    emlite::Val::set("weight", value);
}


} // namespace webbind