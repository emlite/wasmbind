#include <webbind/SpeechRecognitionResult.hpp>
#include <webbind/SpeechRecognitionAlternative.hpp>

namespace webbind {

SpeechRecognitionResult SpeechRecognitionResult::take_ownership(Handle h) noexcept {
    return SpeechRecognitionResult(h);
}

SpeechRecognitionResult SpeechRecognitionResult::clone() const noexcept { return *this; }

emlite::Val SpeechRecognitionResult::instance() noexcept { return emlite::Val::global("SpeechRecognitionResult"); }

SpeechRecognitionResult::SpeechRecognitionResult(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

SpeechRecognitionResult::SpeechRecognitionResult(const emlite::Val &val) noexcept: emlite::Val(val) {}

unsigned long SpeechRecognitionResult::length() const {
    return emlite::Val::get("length").as<unsigned long>();
}

SpeechRecognitionAlternative SpeechRecognitionResult::item(unsigned long index) {
    return emlite::Val::call("item", index).as<SpeechRecognitionAlternative>();
}

bool SpeechRecognitionResult::isFinal() const {
    return emlite::Val::get("isFinal").as<bool>();
}


} // namespace webbind