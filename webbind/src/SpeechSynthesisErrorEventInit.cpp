#include "webbind/SpeechSynthesisErrorEventInit.hpp"

using emlite::Val;
namespace webbind {

SpeechSynthesisErrorEventInit::SpeechSynthesisErrorEventInit(Handle h) noexcept : SpeechSynthesisEventInit(emlite::Val::take_ownership(h)) {}
SpeechSynthesisErrorEventInit SpeechSynthesisErrorEventInit::take_ownership(Handle h) noexcept {
        return SpeechSynthesisErrorEventInit(h);
    }
SpeechSynthesisErrorEventInit::SpeechSynthesisErrorEventInit(const emlite::Val &val) noexcept: SpeechSynthesisEventInit(val) {}
SpeechSynthesisErrorEventInit::SpeechSynthesisErrorEventInit() noexcept: SpeechSynthesisEventInit(emlite::Val::object()) {}
SpeechSynthesisErrorEventInit SpeechSynthesisErrorEventInit::clone() const noexcept { return *this; }

SpeechSynthesisErrorCode SpeechSynthesisErrorEventInit::error() const {
    return emlite::Val::get("error").as<SpeechSynthesisErrorCode>();
}

void SpeechSynthesisErrorEventInit::error(const SpeechSynthesisErrorCode& value) {
    emlite::Val::set("error", value);
}


} // namespace webbind