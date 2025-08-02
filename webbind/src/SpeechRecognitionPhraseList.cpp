#include <webbind/SpeechRecognitionPhraseList.hpp>
#include <webbind/SpeechRecognitionPhrase.hpp>


SpeechRecognitionPhraseList SpeechRecognitionPhraseList::take_ownership(Handle h) noexcept {
        return SpeechRecognitionPhraseList(h);
    }
SpeechRecognitionPhraseList SpeechRecognitionPhraseList::clone() const noexcept { return *this; }
emlite::Val SpeechRecognitionPhraseList::instance() noexcept { return emlite::Val::global("SpeechRecognitionPhraseList"); }
SpeechRecognitionPhraseList::SpeechRecognitionPhraseList(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
SpeechRecognitionPhraseList::SpeechRecognitionPhraseList(const emlite::Val &val) noexcept: emlite::Val(val) {}


SpeechRecognitionPhraseList::SpeechRecognitionPhraseList(const jsbind::TypedArray<SpeechRecognitionPhrase>& phrases) : emlite::Val(emlite::Val::global("SpeechRecognitionPhraseList").new_(phrases)) {}

unsigned long SpeechRecognitionPhraseList::length() const {
    return emlite::Val::get("length").as<unsigned long>();
}

SpeechRecognitionPhrase SpeechRecognitionPhraseList::item(unsigned long index) {
    return emlite::Val::call("item", index).as<SpeechRecognitionPhrase>();
}

jsbind::Undefined SpeechRecognitionPhraseList::addItem(const SpeechRecognitionPhrase& item) {
    return emlite::Val::call("addItem", item).as<jsbind::Undefined>();
}

jsbind::Undefined SpeechRecognitionPhraseList::removeItem(unsigned long index) {
    return emlite::Val::call("removeItem", index).as<jsbind::Undefined>();
}

