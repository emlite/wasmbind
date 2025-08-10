#include <webbind/SpeechRecognitionErrorEvent.hpp>
#include <webbind/SpeechRecognitionErrorEventInit.hpp>

namespace webbind {

SpeechRecognitionErrorEvent SpeechRecognitionErrorEvent::take_ownership(Handle h) noexcept {
    return SpeechRecognitionErrorEvent(h);
}

SpeechRecognitionErrorEvent SpeechRecognitionErrorEvent::clone() const noexcept { return *this; }

emlite::Val SpeechRecognitionErrorEvent::instance() noexcept { return emlite::Val::global("SpeechRecognitionErrorEvent"); }

SpeechRecognitionErrorEvent::SpeechRecognitionErrorEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}

SpeechRecognitionErrorEvent::SpeechRecognitionErrorEvent(const emlite::Val &val) noexcept: Event(val) {}

SpeechRecognitionErrorEvent::SpeechRecognitionErrorEvent(const jsbind::String& type, const SpeechRecognitionErrorEventInit& eventInitDict) : Event(emlite::Val::global("SpeechRecognitionErrorEvent").new_(type, eventInitDict)) {}

SpeechRecognitionErrorCode SpeechRecognitionErrorEvent::error() const {
    return Event::get("error").as<SpeechRecognitionErrorCode>();
}

jsbind::String SpeechRecognitionErrorEvent::message() const {
    return Event::get("message").as<jsbind::String>();
}


} // namespace webbind