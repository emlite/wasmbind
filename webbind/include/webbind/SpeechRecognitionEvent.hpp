#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Event.hpp"
#include "SpeechRecognitionEventInit.hpp"

namespace webbind {

class SpeechRecognitionResultList;

/// Interface SpeechRecognitionEvent
/// [`SpeechRecognitionEvent`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechRecognitionEvent)
class SpeechRecognitionEvent : public Event {
    explicit SpeechRecognitionEvent(Handle h) noexcept;
public:
    explicit SpeechRecognitionEvent(const emlite::Val &val) noexcept;
    static SpeechRecognitionEvent take_ownership(Handle h) noexcept;
    [[nodiscard]] SpeechRecognitionEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new SpeechRecognitionEvent(..)` constructor, creating a new SpeechRecognitionEvent instance
    SpeechRecognitionEvent(const jsbind::String& type, const SpeechRecognitionEventInit& eventInitDict);
    /// [`SpeechRecognitionEvent.resultIndex`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechRecognitionEvent/resultIndex)
    /// [`SpeechRecognitionEvent.resultIndex`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechRecognitionEvent/resultIndex)
    [[nodiscard]] unsigned long resultIndex() const;
    /// [`SpeechRecognitionEvent.results`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechRecognitionEvent/results)
    /// [`SpeechRecognitionEvent.results`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechRecognitionEvent/results)
    [[nodiscard]] SpeechRecognitionResultList results() const;
};

} // namespace webbind