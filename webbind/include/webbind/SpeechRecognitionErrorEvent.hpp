#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"


/// The SpeechRecognitionErrorEvent class.
/// [`SpeechRecognitionErrorEvent`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechRecognitionErrorEvent)
class SpeechRecognitionErrorEvent : public Event {
    explicit SpeechRecognitionErrorEvent(Handle h) noexcept;

public:
    explicit SpeechRecognitionErrorEvent(const emlite::Val &val) noexcept;
    static SpeechRecognitionErrorEvent take_ownership(Handle h) noexcept;

    [[nodiscard]] SpeechRecognitionErrorEvent clone() const noexcept;
    /// The `new SpeechRecognitionErrorEvent(..)` constructor, creating a new SpeechRecognitionErrorEvent instance
    SpeechRecognitionErrorEvent(const jsbind::String& type, const jsbind::Any& eventInitDict);
    /// Getter of the `error` attribute.
    /// [`SpeechRecognitionErrorEvent.error`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechRecognitionErrorEvent/error)
    [[nodiscard]] SpeechRecognitionErrorCode error() const;
    /// Getter of the `message` attribute.
    /// [`SpeechRecognitionErrorEvent.message`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechRecognitionErrorEvent/message)
    [[nodiscard]] jsbind::String message() const;
};

