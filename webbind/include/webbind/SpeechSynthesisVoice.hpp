#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class SpeechSynthesisVoice : public emlite::Val {
    explicit SpeechSynthesisVoice(Handle h) noexcept;

public:
    explicit SpeechSynthesisVoice(const emlite::Val &val) noexcept;
    static SpeechSynthesisVoice take_ownership(Handle h) noexcept;

    SpeechSynthesisVoice clone() const noexcept;
    jsbind::String voiceURI() const;
    jsbind::String name() const;
    jsbind::String lang() const;
    bool localService() const;
    bool default_() const;
};

