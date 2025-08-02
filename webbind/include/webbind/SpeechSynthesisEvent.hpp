#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"

class SpeechSynthesisUtterance;


/// The SpeechSynthesisEvent class.
/// [`SpeechSynthesisEvent`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechSynthesisEvent)
class SpeechSynthesisEvent : public Event {
    explicit SpeechSynthesisEvent(Handle h) noexcept;

public:
    explicit SpeechSynthesisEvent(const emlite::Val &val) noexcept;
    static SpeechSynthesisEvent take_ownership(Handle h) noexcept;

    [[nodiscard]] SpeechSynthesisEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new SpeechSynthesisEvent(..)` constructor, creating a new SpeechSynthesisEvent instance
    SpeechSynthesisEvent(const jsbind::String& type, const jsbind::Any& eventInitDict);
    /// Getter of the `utterance` attribute.
    /// [`SpeechSynthesisEvent.utterance`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechSynthesisEvent/utterance)
    [[nodiscard]] SpeechSynthesisUtterance utterance() const;
    /// Getter of the `charIndex` attribute.
    /// [`SpeechSynthesisEvent.charIndex`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechSynthesisEvent/charIndex)
    [[nodiscard]] unsigned long charIndex() const;
    /// Getter of the `charLength` attribute.
    /// [`SpeechSynthesisEvent.charLength`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechSynthesisEvent/charLength)
    [[nodiscard]] unsigned long charLength() const;
    /// Getter of the `elapsedTime` attribute.
    /// [`SpeechSynthesisEvent.elapsedTime`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechSynthesisEvent/elapsedTime)
    [[nodiscard]] float elapsedTime() const;
    /// Getter of the `name` attribute.
    /// [`SpeechSynthesisEvent.name`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechSynthesisEvent/name)
    [[nodiscard]] jsbind::String name() const;
};

