#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"


class SpeechRecognitionErrorEvent : public Event {
    explicit SpeechRecognitionErrorEvent(Handle h) noexcept;

public:
    explicit SpeechRecognitionErrorEvent(const emlite::Val &val) noexcept;
    static SpeechRecognitionErrorEvent take_ownership(Handle h) noexcept;

    SpeechRecognitionErrorEvent clone() const noexcept;
    SpeechRecognitionErrorEvent(const jsbind::DOMString& type, const jsbind::Any& eventInitDict);
    SpeechRecognitionErrorCode error() const;
    jsbind::DOMString message() const;
};

