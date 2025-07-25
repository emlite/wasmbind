#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class SpeechGrammar : public emlite::Val {
    explicit SpeechGrammar(Handle h) noexcept;

public:
    explicit SpeechGrammar(const emlite::Val &val) noexcept;
    static SpeechGrammar take_ownership(Handle h) noexcept;

    SpeechGrammar clone() const noexcept;
    jsbind::DOMString src() const;
    void src(const jsbind::DOMString& value);
    float weight() const;
    void weight(float value);
};

