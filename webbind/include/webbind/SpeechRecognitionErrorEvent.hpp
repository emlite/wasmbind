#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Event.hpp"
#include "SpeechRecognitionErrorEventInit.hpp"
#include "enums.hpp"

namespace webbind {

/// Interface SpeechRecognitionErrorEvent
/// [`SpeechRecognitionErrorEvent`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechRecognitionErrorEvent)
class SpeechRecognitionErrorEvent : public Event {
    explicit SpeechRecognitionErrorEvent(Handle h) noexcept;
public:
    explicit SpeechRecognitionErrorEvent(const emlite::Val &val) noexcept;
    static SpeechRecognitionErrorEvent take_ownership(Handle h) noexcept;
    [[nodiscard]] SpeechRecognitionErrorEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new SpeechRecognitionErrorEvent(..)` constructor, creating a new SpeechRecognitionErrorEvent instance
    SpeechRecognitionErrorEvent(const jsbind::String& type, const SpeechRecognitionErrorEventInit& eventInitDict);
    /// [`SpeechRecognitionErrorEvent.error`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechRecognitionErrorEvent/error)
    /// [`SpeechRecognitionErrorEvent.error`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechRecognitionErrorEvent/error)
    [[nodiscard]] SpeechRecognitionErrorCode error() const;
    /// [`SpeechRecognitionErrorEvent.message`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechRecognitionErrorEvent/message)
    /// [`SpeechRecognitionErrorEvent.message`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechRecognitionErrorEvent/message)
    [[nodiscard]] jsbind::String message() const;
};

} // namespace webbind