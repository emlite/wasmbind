#include <webbind/SpeechRecognitionErrorEvent.hpp>


SpeechRecognitionErrorEvent SpeechRecognitionErrorEvent::take_ownership(Handle h) noexcept {
        return SpeechRecognitionErrorEvent(h);
    }
SpeechRecognitionErrorEvent SpeechRecognitionErrorEvent::clone() const noexcept { return *this; }
SpeechRecognitionErrorEvent::SpeechRecognitionErrorEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}
SpeechRecognitionErrorEvent::SpeechRecognitionErrorEvent(const emlite::Val &val) noexcept: Event(val) {}


SpeechRecognitionErrorEvent::SpeechRecognitionErrorEvent(const jsbind::DOMString& type, const jsbind::Any& eventInitDict) : Event(emlite::Val::global("SpeechRecognitionErrorEvent").new_(type, eventInitDict)) {}

SpeechRecognitionErrorCode SpeechRecognitionErrorEvent::error() const {
    return Event::get("error").as<SpeechRecognitionErrorCode>();
}

jsbind::DOMString SpeechRecognitionErrorEvent::message() const {
    return Event::get("message").as<jsbind::DOMString>();
}

