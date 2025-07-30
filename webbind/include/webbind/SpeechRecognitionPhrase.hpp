#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class SpeechRecognitionPhrase : public emlite::Val {
    explicit SpeechRecognitionPhrase(Handle h) noexcept;

public:
    explicit SpeechRecognitionPhrase(const emlite::Val &val) noexcept;
    static SpeechRecognitionPhrase take_ownership(Handle h) noexcept;

    SpeechRecognitionPhrase clone() const noexcept;
    SpeechRecognitionPhrase(const jsbind::String& phrase);
    SpeechRecognitionPhrase(const jsbind::String& phrase, float boost);
    jsbind::String phrase() const;
    float boost() const;
};

