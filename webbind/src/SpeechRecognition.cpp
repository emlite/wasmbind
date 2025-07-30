#include <webbind/SpeechRecognition.hpp>
#include <webbind/SpeechGrammarList.hpp>
#include <webbind/SpeechRecognitionPhraseList.hpp>
#include <webbind/MediaStreamTrack.hpp>


SpeechRecognitionOptions::SpeechRecognitionOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
SpeechRecognitionOptions SpeechRecognitionOptions::take_ownership(Handle h) noexcept {
        return SpeechRecognitionOptions(h);
    }
SpeechRecognitionOptions::SpeechRecognitionOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
SpeechRecognitionOptions::SpeechRecognitionOptions() noexcept: emlite::Val(emlite::Val::object()) {}
SpeechRecognitionOptions SpeechRecognitionOptions::clone() const noexcept { return *this; }

jsbind::TypedArray<jsbind::String> SpeechRecognitionOptions::langs() const {
    return emlite::Val::get("langs").as<jsbind::TypedArray<jsbind::String>>();
}

void SpeechRecognitionOptions::langs(const jsbind::TypedArray<jsbind::String>& value) {
    emlite::Val::set("langs", value);
}

bool SpeechRecognitionOptions::processLocally() const {
    return emlite::Val::get("processLocally").as<bool>();
}

void SpeechRecognitionOptions::processLocally(bool value) {
    emlite::Val::set("processLocally", value);
}

SpeechRecognition SpeechRecognition::take_ownership(Handle h) noexcept {
        return SpeechRecognition(h);
    }
SpeechRecognition SpeechRecognition::clone() const noexcept { return *this; }
SpeechRecognition::SpeechRecognition(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
SpeechRecognition::SpeechRecognition(const emlite::Val &val) noexcept: EventTarget(val) {}


SpeechRecognition::SpeechRecognition() : EventTarget(emlite::Val::global("SpeechRecognition").new_()) {}

SpeechGrammarList SpeechRecognition::grammars() const {
    return EventTarget::get("grammars").as<SpeechGrammarList>();
}

void SpeechRecognition::grammars(const SpeechGrammarList& value) {
    EventTarget::set("grammars", value);
}

jsbind::String SpeechRecognition::lang() const {
    return EventTarget::get("lang").as<jsbind::String>();
}

void SpeechRecognition::lang(const jsbind::String& value) {
    EventTarget::set("lang", value);
}

bool SpeechRecognition::continuous() const {
    return EventTarget::get("continuous").as<bool>();
}

void SpeechRecognition::continuous(bool value) {
    EventTarget::set("continuous", value);
}

bool SpeechRecognition::interimResults() const {
    return EventTarget::get("interimResults").as<bool>();
}

void SpeechRecognition::interimResults(bool value) {
    EventTarget::set("interimResults", value);
}

unsigned long SpeechRecognition::maxAlternatives() const {
    return EventTarget::get("maxAlternatives").as<unsigned long>();
}

void SpeechRecognition::maxAlternatives(unsigned long value) {
    EventTarget::set("maxAlternatives", value);
}

bool SpeechRecognition::processLocally() const {
    return EventTarget::get("processLocally").as<bool>();
}

void SpeechRecognition::processLocally(bool value) {
    EventTarget::set("processLocally", value);
}

SpeechRecognitionPhraseList SpeechRecognition::phrases() const {
    return EventTarget::get("phrases").as<SpeechRecognitionPhraseList>();
}

void SpeechRecognition::phrases(const SpeechRecognitionPhraseList& value) {
    EventTarget::set("phrases", value);
}

jsbind::Undefined SpeechRecognition::start(const MediaStreamTrack& audioTrack) {
    return EventTarget::call("start", audioTrack).as<jsbind::Undefined>();
}

jsbind::Undefined SpeechRecognition::stop() {
    return EventTarget::call("stop").as<jsbind::Undefined>();
}

jsbind::Undefined SpeechRecognition::abort() {
    return EventTarget::call("abort").as<jsbind::Undefined>();
}

jsbind::Promise<AvailabilityStatus> SpeechRecognition::available(const SpeechRecognitionOptions& options) {
    return emlite::Val::global("speechrecognition").call("available", options).as<jsbind::Promise<AvailabilityStatus>>();
}

jsbind::Promise<bool> SpeechRecognition::install(const SpeechRecognitionOptions& options) {
    return emlite::Val::global("speechrecognition").call("install", options).as<jsbind::Promise<bool>>();
}

jsbind::Any SpeechRecognition::onaudiostart() const {
    return EventTarget::get("onaudiostart").as<jsbind::Any>();
}

void SpeechRecognition::onaudiostart(const jsbind::Any& value) {
    EventTarget::set("onaudiostart", value);
}

jsbind::Any SpeechRecognition::onsoundstart() const {
    return EventTarget::get("onsoundstart").as<jsbind::Any>();
}

void SpeechRecognition::onsoundstart(const jsbind::Any& value) {
    EventTarget::set("onsoundstart", value);
}

jsbind::Any SpeechRecognition::onspeechstart() const {
    return EventTarget::get("onspeechstart").as<jsbind::Any>();
}

void SpeechRecognition::onspeechstart(const jsbind::Any& value) {
    EventTarget::set("onspeechstart", value);
}

jsbind::Any SpeechRecognition::onspeechend() const {
    return EventTarget::get("onspeechend").as<jsbind::Any>();
}

void SpeechRecognition::onspeechend(const jsbind::Any& value) {
    EventTarget::set("onspeechend", value);
}

jsbind::Any SpeechRecognition::onsoundend() const {
    return EventTarget::get("onsoundend").as<jsbind::Any>();
}

void SpeechRecognition::onsoundend(const jsbind::Any& value) {
    EventTarget::set("onsoundend", value);
}

jsbind::Any SpeechRecognition::onaudioend() const {
    return EventTarget::get("onaudioend").as<jsbind::Any>();
}

void SpeechRecognition::onaudioend(const jsbind::Any& value) {
    EventTarget::set("onaudioend", value);
}

jsbind::Any SpeechRecognition::onresult() const {
    return EventTarget::get("onresult").as<jsbind::Any>();
}

void SpeechRecognition::onresult(const jsbind::Any& value) {
    EventTarget::set("onresult", value);
}

jsbind::Any SpeechRecognition::onnomatch() const {
    return EventTarget::get("onnomatch").as<jsbind::Any>();
}

void SpeechRecognition::onnomatch(const jsbind::Any& value) {
    EventTarget::set("onnomatch", value);
}

jsbind::Any SpeechRecognition::onerror() const {
    return EventTarget::get("onerror").as<jsbind::Any>();
}

void SpeechRecognition::onerror(const jsbind::Any& value) {
    EventTarget::set("onerror", value);
}

jsbind::Any SpeechRecognition::onstart() const {
    return EventTarget::get("onstart").as<jsbind::Any>();
}

void SpeechRecognition::onstart(const jsbind::Any& value) {
    EventTarget::set("onstart", value);
}

jsbind::Any SpeechRecognition::onend() const {
    return EventTarget::get("onend").as<jsbind::Any>();
}

void SpeechRecognition::onend(const jsbind::Any& value) {
    EventTarget::set("onend", value);
}

