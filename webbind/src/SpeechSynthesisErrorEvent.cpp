#include <webbind/SpeechSynthesisErrorEvent.hpp>


SpeechSynthesisErrorEvent SpeechSynthesisErrorEvent::take_ownership(Handle h) noexcept {
        return SpeechSynthesisErrorEvent(h);
    }
SpeechSynthesisErrorEvent SpeechSynthesisErrorEvent::clone() const noexcept { return *this; }
emlite::Val SpeechSynthesisErrorEvent::instance() noexcept { return emlite::Val::global("SpeechSynthesisErrorEvent"); }
SpeechSynthesisErrorEvent::SpeechSynthesisErrorEvent(Handle h) noexcept : SpeechSynthesisEvent(emlite::Val::take_ownership(h)) {}
SpeechSynthesisErrorEvent::SpeechSynthesisErrorEvent(const emlite::Val &val) noexcept: SpeechSynthesisEvent(val) {}


SpeechSynthesisErrorEvent::SpeechSynthesisErrorEvent(const jsbind::String& type, const jsbind::Any& eventInitDict) : SpeechSynthesisEvent(emlite::Val::global("SpeechSynthesisErrorEvent").new_(type, eventInitDict)) {}

SpeechSynthesisErrorCode SpeechSynthesisErrorEvent::error() const {
    return SpeechSynthesisEvent::get("error").as<SpeechSynthesisErrorCode>();
}

