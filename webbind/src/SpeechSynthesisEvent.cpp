#include <webbind/SpeechSynthesisEvent.hpp>
#include <webbind/SpeechSynthesisUtterance.hpp>


SpeechSynthesisEvent SpeechSynthesisEvent::take_ownership(Handle h) noexcept {
        return SpeechSynthesisEvent(h);
    }
SpeechSynthesisEvent SpeechSynthesisEvent::clone() const noexcept { return *this; }
SpeechSynthesisEvent::SpeechSynthesisEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}
SpeechSynthesisEvent::SpeechSynthesisEvent(const emlite::Val &val) noexcept: Event(val) {}


SpeechSynthesisEvent::SpeechSynthesisEvent(const jsbind::String& type, const jsbind::Any& eventInitDict) : Event(emlite::Val::global("SpeechSynthesisEvent").new_(type, eventInitDict)) {}

SpeechSynthesisUtterance SpeechSynthesisEvent::utterance() const {
    return Event::get("utterance").as<SpeechSynthesisUtterance>();
}

unsigned long SpeechSynthesisEvent::charIndex() const {
    return Event::get("charIndex").as<unsigned long>();
}

unsigned long SpeechSynthesisEvent::charLength() const {
    return Event::get("charLength").as<unsigned long>();
}

float SpeechSynthesisEvent::elapsedTime() const {
    return Event::get("elapsedTime").as<float>();
}

jsbind::String SpeechSynthesisEvent::name() const {
    return Event::get("name").as<jsbind::String>();
}

