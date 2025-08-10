#include "webbind/SpeechSynthesisEventInit.hpp"
#include "webbind/SpeechSynthesisUtterance.hpp"

using emlite::Val;
namespace webbind {

SpeechSynthesisEventInit::SpeechSynthesisEventInit(Handle h) noexcept : EventInit(emlite::Val::take_ownership(h)) {}
SpeechSynthesisEventInit SpeechSynthesisEventInit::take_ownership(Handle h) noexcept {
        return SpeechSynthesisEventInit(h);
    }
SpeechSynthesisEventInit::SpeechSynthesisEventInit(const emlite::Val &val) noexcept: EventInit(val) {}
SpeechSynthesisEventInit::SpeechSynthesisEventInit() noexcept: EventInit(emlite::Val::object()) {}
SpeechSynthesisEventInit SpeechSynthesisEventInit::clone() const noexcept { return *this; }

SpeechSynthesisUtterance SpeechSynthesisEventInit::utterance() const {
    return emlite::Val::get("utterance").as<SpeechSynthesisUtterance>();
}

void SpeechSynthesisEventInit::utterance(const SpeechSynthesisUtterance& value) {
    emlite::Val::set("utterance", value);
}

unsigned long SpeechSynthesisEventInit::charIndex() const {
    return emlite::Val::get("charIndex").as<unsigned long>();
}

void SpeechSynthesisEventInit::charIndex(unsigned long value) {
    emlite::Val::set("charIndex", value);
}

unsigned long SpeechSynthesisEventInit::charLength() const {
    return emlite::Val::get("charLength").as<unsigned long>();
}

void SpeechSynthesisEventInit::charLength(unsigned long value) {
    emlite::Val::set("charLength", value);
}

float SpeechSynthesisEventInit::elapsedTime() const {
    return emlite::Val::get("elapsedTime").as<float>();
}

void SpeechSynthesisEventInit::elapsedTime(float value) {
    emlite::Val::set("elapsedTime", value);
}

jsbind::String SpeechSynthesisEventInit::name() const {
    return emlite::Val::get("name").as<jsbind::String>();
}

void SpeechSynthesisEventInit::name(const jsbind::String& value) {
    emlite::Val::set("name", value);
}


} // namespace webbind