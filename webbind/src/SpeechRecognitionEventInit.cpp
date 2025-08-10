#include <webbind/SpeechRecognitionEventInit.hpp>
#include <webbind/SpeechRecognitionResultList.hpp>

using emlite::Val;
namespace webbind {

SpeechRecognitionEventInit::SpeechRecognitionEventInit(Handle h) noexcept : EventInit(emlite::Val::take_ownership(h)) {}
SpeechRecognitionEventInit SpeechRecognitionEventInit::take_ownership(Handle h) noexcept {
        return SpeechRecognitionEventInit(h);
    }
SpeechRecognitionEventInit::SpeechRecognitionEventInit(const emlite::Val &val) noexcept: EventInit(val) {}
SpeechRecognitionEventInit::SpeechRecognitionEventInit() noexcept: EventInit(emlite::Val::object()) {}
SpeechRecognitionEventInit SpeechRecognitionEventInit::clone() const noexcept { return *this; }

unsigned long SpeechRecognitionEventInit::resultIndex() const {
    return emlite::Val::get("resultIndex").as<unsigned long>();
}

void SpeechRecognitionEventInit::resultIndex(unsigned long value) {
    emlite::Val::set("resultIndex", value);
}

SpeechRecognitionResultList SpeechRecognitionEventInit::results() const {
    return emlite::Val::get("results").as<SpeechRecognitionResultList>();
}

void SpeechRecognitionEventInit::results(const SpeechRecognitionResultList& value) {
    emlite::Val::set("results", value);
}


} // namespace webbind