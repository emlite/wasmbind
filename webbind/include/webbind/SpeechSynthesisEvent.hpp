#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"

class SpeechSynthesisUtterance;


class SpeechSynthesisEvent : public Event {
    explicit SpeechSynthesisEvent(Handle h) noexcept;

public:
    explicit SpeechSynthesisEvent(const emlite::Val &val) noexcept;
    static SpeechSynthesisEvent take_ownership(Handle h) noexcept;

    SpeechSynthesisEvent clone() const noexcept;
    SpeechSynthesisEvent(const jsbind::String& type, const jsbind::Any& eventInitDict);
    SpeechSynthesisUtterance utterance() const;
    unsigned long charIndex() const;
    unsigned long charLength() const;
    float elapsedTime() const;
    jsbind::String name() const;
};

