#include <webbind/SpeechSynthesis.hpp>
#include <webbind/SpeechSynthesisUtterance.hpp>
#include <webbind/SpeechSynthesisVoice.hpp>

namespace webbind {

SpeechSynthesis SpeechSynthesis::take_ownership(Handle h) noexcept {
    return SpeechSynthesis(h);
}

SpeechSynthesis SpeechSynthesis::clone() const noexcept { return *this; }

emlite::Val SpeechSynthesis::instance() noexcept { return emlite::Val::global("SpeechSynthesis"); }

SpeechSynthesis::SpeechSynthesis(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}

SpeechSynthesis::SpeechSynthesis(const emlite::Val &val) noexcept: EventTarget(val) {}

bool SpeechSynthesis::pending() const {
    return EventTarget::get("pending").as<bool>();
}

bool SpeechSynthesis::speaking() const {
    return EventTarget::get("speaking").as<bool>();
}

bool SpeechSynthesis::paused() const {
    return EventTarget::get("paused").as<bool>();
}

jsbind::Any SpeechSynthesis::onvoiceschanged() const {
    return EventTarget::get("onvoiceschanged").as<jsbind::Any>();
}

void SpeechSynthesis::onvoiceschanged(const jsbind::Any& value) {
    EventTarget::set("onvoiceschanged", value);
}

jsbind::Undefined SpeechSynthesis::speak(const SpeechSynthesisUtterance& utterance) {
    return EventTarget::call("speak", utterance).as<jsbind::Undefined>();
}

jsbind::Undefined SpeechSynthesis::cancel() {
    return EventTarget::call("cancel").as<jsbind::Undefined>();
}

jsbind::Undefined SpeechSynthesis::pause() {
    return EventTarget::call("pause").as<jsbind::Undefined>();
}

jsbind::Undefined SpeechSynthesis::resume() {
    return EventTarget::call("resume").as<jsbind::Undefined>();
}

jsbind::TypedArray<SpeechSynthesisVoice> SpeechSynthesis::getVoices() {
    return EventTarget::call("getVoices").as<jsbind::TypedArray<SpeechSynthesisVoice>>();
}


} // namespace webbind