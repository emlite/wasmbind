#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Event.hpp"
#include "SpeechSynthesisEventInit.hpp"

namespace webbind {

class SpeechSynthesisUtterance;

/// Interface SpeechSynthesisEvent
/// [`SpeechSynthesisEvent`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechSynthesisEvent)
class SpeechSynthesisEvent : public Event {
    explicit SpeechSynthesisEvent(Handle h) noexcept;
public:
    explicit SpeechSynthesisEvent(const emlite::Val &val) noexcept;
    static SpeechSynthesisEvent take_ownership(Handle h) noexcept;
    [[nodiscard]] SpeechSynthesisEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new SpeechSynthesisEvent(..)` constructor, creating a new SpeechSynthesisEvent instance
    SpeechSynthesisEvent(const jsbind::String& type, const SpeechSynthesisEventInit& eventInitDict);
    /// [`SpeechSynthesisEvent.utterance`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechSynthesisEvent/utterance)
    /// [`SpeechSynthesisEvent.utterance`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechSynthesisEvent/utterance)
    [[nodiscard]] SpeechSynthesisUtterance utterance() const;
    /// [`SpeechSynthesisEvent.charIndex`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechSynthesisEvent/charIndex)
    /// [`SpeechSynthesisEvent.charIndex`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechSynthesisEvent/charIndex)
    [[nodiscard]] unsigned long charIndex() const;
    /// [`SpeechSynthesisEvent.charLength`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechSynthesisEvent/charLength)
    /// [`SpeechSynthesisEvent.charLength`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechSynthesisEvent/charLength)
    [[nodiscard]] unsigned long charLength() const;
    /// [`SpeechSynthesisEvent.elapsedTime`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechSynthesisEvent/elapsedTime)
    /// [`SpeechSynthesisEvent.elapsedTime`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechSynthesisEvent/elapsedTime)
    [[nodiscard]] float elapsedTime() const;
    /// [`SpeechSynthesisEvent.name`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechSynthesisEvent/name)
    /// [`SpeechSynthesisEvent.name`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechSynthesisEvent/name)
    [[nodiscard]] jsbind::String name() const;
};

} // namespace webbind