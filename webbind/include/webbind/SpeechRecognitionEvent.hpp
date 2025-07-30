#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"

class SpeechRecognitionResultList;


class SpeechRecognitionEvent : public Event {
    explicit SpeechRecognitionEvent(Handle h) noexcept;

public:
    explicit SpeechRecognitionEvent(const emlite::Val &val) noexcept;
    static SpeechRecognitionEvent take_ownership(Handle h) noexcept;

    SpeechRecognitionEvent clone() const noexcept;
    SpeechRecognitionEvent(const jsbind::String& type, const jsbind::Any& eventInitDict);
    unsigned long resultIndex() const;
    SpeechRecognitionResultList results() const;
};

