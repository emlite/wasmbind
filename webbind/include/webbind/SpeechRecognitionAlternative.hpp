#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class SpeechRecognitionAlternative : public emlite::Val {
    explicit SpeechRecognitionAlternative(Handle h) noexcept;

public:
    explicit SpeechRecognitionAlternative(const emlite::Val &val) noexcept;
    static SpeechRecognitionAlternative take_ownership(Handle h) noexcept;

    SpeechRecognitionAlternative clone() const noexcept;
    jsbind::DOMString transcript() const;
    float confidence() const;
};

