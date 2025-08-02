#include <webbind/SpeechRecognitionPhrase.hpp>


SpeechRecognitionPhrase SpeechRecognitionPhrase::take_ownership(Handle h) noexcept {
        return SpeechRecognitionPhrase(h);
    }
SpeechRecognitionPhrase SpeechRecognitionPhrase::clone() const noexcept { return *this; }
emlite::Val SpeechRecognitionPhrase::instance() noexcept { return emlite::Val::global("SpeechRecognitionPhrase"); }
SpeechRecognitionPhrase::SpeechRecognitionPhrase(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
SpeechRecognitionPhrase::SpeechRecognitionPhrase(const emlite::Val &val) noexcept: emlite::Val(val) {}


SpeechRecognitionPhrase::SpeechRecognitionPhrase(const jsbind::String& phrase) : emlite::Val(emlite::Val::global("SpeechRecognitionPhrase").new_(phrase)) {}

SpeechRecognitionPhrase::SpeechRecognitionPhrase(const jsbind::String& phrase, float boost) : emlite::Val(emlite::Val::global("SpeechRecognitionPhrase").new_(phrase, boost)) {}

jsbind::String SpeechRecognitionPhrase::phrase() const {
    return emlite::Val::get("phrase").as<jsbind::String>();
}

float SpeechRecognitionPhrase::boost() const {
    return emlite::Val::get("boost").as<float>();
}

