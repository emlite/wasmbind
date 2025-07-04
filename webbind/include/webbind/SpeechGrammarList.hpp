#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class SpeechGrammar;


class SpeechGrammarList : public emlite::Val {
    explicit SpeechGrammarList(Handle h) noexcept;

public:
    explicit SpeechGrammarList(const emlite::Val &val) noexcept;
    static SpeechGrammarList take_ownership(Handle h) noexcept;

    SpeechGrammarList clone() const noexcept;
    SpeechGrammarList();
    unsigned long length() const;
    SpeechGrammar item(unsigned long index);
    jsbind::Undefined addFromURI(const jsbind::DOMString& src, float weight);
    jsbind::Undefined addFromString(const jsbind::DOMString& string, float weight);
};

