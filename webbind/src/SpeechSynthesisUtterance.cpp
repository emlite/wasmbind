#include <webbind/SpeechSynthesisUtterance.hpp>
#include <webbind/SpeechSynthesisVoice.hpp>


SpeechSynthesisUtterance SpeechSynthesisUtterance::take_ownership(Handle h) noexcept {
        return SpeechSynthesisUtterance(h);
    }
SpeechSynthesisUtterance SpeechSynthesisUtterance::clone() const noexcept { return *this; }
SpeechSynthesisUtterance::SpeechSynthesisUtterance(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
SpeechSynthesisUtterance::SpeechSynthesisUtterance(const emlite::Val &val) noexcept: EventTarget(val) {}


SpeechSynthesisUtterance::SpeechSynthesisUtterance() : EventTarget(emlite::Val::global("SpeechSynthesisUtterance").new_()) {}

SpeechSynthesisUtterance::SpeechSynthesisUtterance(const jsbind::DOMString& text) : EventTarget(emlite::Val::global("SpeechSynthesisUtterance").new_(text)) {}

jsbind::DOMString SpeechSynthesisUtterance::text() const {
    return EventTarget::get("text").as<jsbind::DOMString>();
}

void SpeechSynthesisUtterance::text(const jsbind::DOMString& value) {
    EventTarget::set("text", value);
}

jsbind::DOMString SpeechSynthesisUtterance::lang() const {
    return EventTarget::get("lang").as<jsbind::DOMString>();
}

void SpeechSynthesisUtterance::lang(const jsbind::DOMString& value) {
    EventTarget::set("lang", value);
}

SpeechSynthesisVoice SpeechSynthesisUtterance::voice() const {
    return EventTarget::get("voice").as<SpeechSynthesisVoice>();
}

void SpeechSynthesisUtterance::voice(const SpeechSynthesisVoice& value) {
    EventTarget::set("voice", value);
}

float SpeechSynthesisUtterance::volume() const {
    return EventTarget::get("volume").as<float>();
}

void SpeechSynthesisUtterance::volume(float value) {
    EventTarget::set("volume", value);
}

float SpeechSynthesisUtterance::rate() const {
    return EventTarget::get("rate").as<float>();
}

void SpeechSynthesisUtterance::rate(float value) {
    EventTarget::set("rate", value);
}

float SpeechSynthesisUtterance::pitch() const {
    return EventTarget::get("pitch").as<float>();
}

void SpeechSynthesisUtterance::pitch(float value) {
    EventTarget::set("pitch", value);
}

jsbind::Any SpeechSynthesisUtterance::onstart() const {
    return EventTarget::get("onstart").as<jsbind::Any>();
}

void SpeechSynthesisUtterance::onstart(const jsbind::Any& value) {
    EventTarget::set("onstart", value);
}

jsbind::Any SpeechSynthesisUtterance::onend() const {
    return EventTarget::get("onend").as<jsbind::Any>();
}

void SpeechSynthesisUtterance::onend(const jsbind::Any& value) {
    EventTarget::set("onend", value);
}

jsbind::Any SpeechSynthesisUtterance::onerror() const {
    return EventTarget::get("onerror").as<jsbind::Any>();
}

void SpeechSynthesisUtterance::onerror(const jsbind::Any& value) {
    EventTarget::set("onerror", value);
}

jsbind::Any SpeechSynthesisUtterance::onpause() const {
    return EventTarget::get("onpause").as<jsbind::Any>();
}

void SpeechSynthesisUtterance::onpause(const jsbind::Any& value) {
    EventTarget::set("onpause", value);
}

jsbind::Any SpeechSynthesisUtterance::onresume() const {
    return EventTarget::get("onresume").as<jsbind::Any>();
}

void SpeechSynthesisUtterance::onresume(const jsbind::Any& value) {
    EventTarget::set("onresume", value);
}

jsbind::Any SpeechSynthesisUtterance::onmark() const {
    return EventTarget::get("onmark").as<jsbind::Any>();
}

void SpeechSynthesisUtterance::onmark(const jsbind::Any& value) {
    EventTarget::set("onmark", value);
}

jsbind::Any SpeechSynthesisUtterance::onboundary() const {
    return EventTarget::get("onboundary").as<jsbind::Any>();
}

void SpeechSynthesisUtterance::onboundary(const jsbind::Any& value) {
    EventTarget::set("onboundary", value);
}

