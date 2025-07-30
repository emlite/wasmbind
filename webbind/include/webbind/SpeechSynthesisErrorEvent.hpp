#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SpeechSynthesisEvent.hpp"
#include "enums.hpp"


class SpeechSynthesisErrorEvent : public SpeechSynthesisEvent {
    explicit SpeechSynthesisErrorEvent(Handle h) noexcept;

public:
    explicit SpeechSynthesisErrorEvent(const emlite::Val &val) noexcept;
    static SpeechSynthesisErrorEvent take_ownership(Handle h) noexcept;

    SpeechSynthesisErrorEvent clone() const noexcept;
    SpeechSynthesisErrorEvent(const jsbind::String& type, const jsbind::Any& eventInitDict);
    SpeechSynthesisErrorCode error() const;
};

