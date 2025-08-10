#include "webbind/SpeechRecognitionErrorEventInit.hpp"

using emlite::Val;
namespace webbind {

SpeechRecognitionErrorEventInit::SpeechRecognitionErrorEventInit(Handle h) noexcept : EventInit(emlite::Val::take_ownership(h)) {}
SpeechRecognitionErrorEventInit SpeechRecognitionErrorEventInit::take_ownership(Handle h) noexcept {
        return SpeechRecognitionErrorEventInit(h);
    }
SpeechRecognitionErrorEventInit::SpeechRecognitionErrorEventInit(const emlite::Val &val) noexcept: EventInit(val) {}
SpeechRecognitionErrorEventInit::SpeechRecognitionErrorEventInit() noexcept: EventInit(emlite::Val::object()) {}
SpeechRecognitionErrorEventInit SpeechRecognitionErrorEventInit::clone() const noexcept { return *this; }

SpeechRecognitionErrorCode SpeechRecognitionErrorEventInit::error() const {
    return emlite::Val::get("error").as<SpeechRecognitionErrorCode>();
}

void SpeechRecognitionErrorEventInit::error(const SpeechRecognitionErrorCode& value) {
    emlite::Val::set("error", value);
}

jsbind::String SpeechRecognitionErrorEventInit::message() const {
    return emlite::Val::get("message").as<jsbind::String>();
}

void SpeechRecognitionErrorEventInit::message(const jsbind::String& value) {
    emlite::Val::set("message", value);
}


} // namespace webbind