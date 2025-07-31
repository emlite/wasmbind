#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"

class SpeechRecognitionResultList;


/// The SpeechRecognitionEvent class.
/// [`SpeechRecognitionEvent`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechRecognitionEvent)
class SpeechRecognitionEvent : public Event {
    explicit SpeechRecognitionEvent(Handle h) noexcept;

public:
    explicit SpeechRecognitionEvent(const emlite::Val &val) noexcept;
    static SpeechRecognitionEvent take_ownership(Handle h) noexcept;

    [[nodiscard]] SpeechRecognitionEvent clone() const noexcept;
    /// The `new SpeechRecognitionEvent(..)` constructor, creating a new SpeechRecognitionEvent instance
    SpeechRecognitionEvent(const jsbind::String& type, const jsbind::Any& eventInitDict);
    /// Getter of the `resultIndex` attribute.
    /// [`SpeechRecognitionEvent.resultIndex`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechRecognitionEvent/resultIndex)
    [[nodiscard]] unsigned long resultIndex() const;
    /// Getter of the `results` attribute.
    /// [`SpeechRecognitionEvent.results`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechRecognitionEvent/results)
    [[nodiscard]] SpeechRecognitionResultList results() const;
};

