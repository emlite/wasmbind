#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class SpeechRecognitionAlternative;


class SpeechRecognitionResult : public emlite::Val {
    explicit SpeechRecognitionResult(Handle h) noexcept;

public:
    explicit SpeechRecognitionResult(const emlite::Val &val) noexcept;
    static SpeechRecognitionResult take_ownership(Handle h) noexcept;

    SpeechRecognitionResult clone() const noexcept;
    unsigned long length() const;
    SpeechRecognitionAlternative item(unsigned long index);
    bool isFinal() const;
};

