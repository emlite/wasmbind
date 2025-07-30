#include <webbind/SpeechRecognitionEvent.hpp>
#include <webbind/SpeechRecognitionResultList.hpp>


SpeechRecognitionEvent SpeechRecognitionEvent::take_ownership(Handle h) noexcept {
        return SpeechRecognitionEvent(h);
    }
SpeechRecognitionEvent SpeechRecognitionEvent::clone() const noexcept { return *this; }
SpeechRecognitionEvent::SpeechRecognitionEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}
SpeechRecognitionEvent::SpeechRecognitionEvent(const emlite::Val &val) noexcept: Event(val) {}


SpeechRecognitionEvent::SpeechRecognitionEvent(const jsbind::String& type, const jsbind::Any& eventInitDict) : Event(emlite::Val::global("SpeechRecognitionEvent").new_(type, eventInitDict)) {}

unsigned long SpeechRecognitionEvent::resultIndex() const {
    return Event::get("resultIndex").as<unsigned long>();
}

SpeechRecognitionResultList SpeechRecognitionEvent::results() const {
    return Event::get("results").as<SpeechRecognitionResultList>();
}

