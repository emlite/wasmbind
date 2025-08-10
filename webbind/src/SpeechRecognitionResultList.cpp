#include <webbind/SpeechRecognitionResultList.hpp>
#include <webbind/SpeechRecognitionResult.hpp>

namespace webbind {

SpeechRecognitionResultList SpeechRecognitionResultList::take_ownership(Handle h) noexcept {
    return SpeechRecognitionResultList(h);
}

SpeechRecognitionResultList SpeechRecognitionResultList::clone() const noexcept { return *this; }

emlite::Val SpeechRecognitionResultList::instance() noexcept { return emlite::Val::global("SpeechRecognitionResultList"); }

SpeechRecognitionResultList::SpeechRecognitionResultList(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

SpeechRecognitionResultList::SpeechRecognitionResultList(const emlite::Val &val) noexcept: emlite::Val(val) {}

unsigned long SpeechRecognitionResultList::length() const {
    return emlite::Val::get("length").as<unsigned long>();
}

SpeechRecognitionResult SpeechRecognitionResultList::item(unsigned long index) {
    return emlite::Val::call("item", index).as<SpeechRecognitionResult>();
}


} // namespace webbind