#include "webbind/SpeechGrammarList.hpp"
#include "webbind/SpeechGrammar.hpp"

namespace webbind {

SpeechGrammarList SpeechGrammarList::take_ownership(Handle h) noexcept {
        return SpeechGrammarList(h);
    }
SpeechGrammarList SpeechGrammarList::clone() const noexcept { return *this; }
emlite::Val SpeechGrammarList::instance() noexcept { return emlite::Val::global("SpeechGrammarList"); }
SpeechGrammarList::SpeechGrammarList(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
SpeechGrammarList::SpeechGrammarList(const emlite::Val &val) noexcept: emlite::Val(val) {}

SpeechGrammarList::SpeechGrammarList() : emlite::Val(emlite::Val::global("SpeechGrammarList").new_()) {}

unsigned long SpeechGrammarList::length() const {
    return emlite::Val::get("length").as<unsigned long>();
}

SpeechGrammar SpeechGrammarList::item(unsigned long index) {
    return emlite::Val::call("item", index).as<SpeechGrammar>();
}

jsbind::Undefined SpeechGrammarList::addFromURI(const jsbind::String& src) {
    return emlite::Val::call("addFromURI", src).as<jsbind::Undefined>();
}

jsbind::Undefined SpeechGrammarList::addFromURI(const jsbind::String& src, float weight) {
    return emlite::Val::call("addFromURI", src, weight).as<jsbind::Undefined>();
}

jsbind::Undefined SpeechGrammarList::addFromString(const jsbind::String& string) {
    return emlite::Val::call("addFromString", string).as<jsbind::Undefined>();
}

jsbind::Undefined SpeechGrammarList::addFromString(const jsbind::String& string, float weight) {
    return emlite::Val::call("addFromString", string, weight).as<jsbind::Undefined>();
}


} // namespace webbind