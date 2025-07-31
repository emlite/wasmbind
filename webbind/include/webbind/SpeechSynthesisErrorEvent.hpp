#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SpeechSynthesisEvent.hpp"
#include "enums.hpp"


/// The SpeechSynthesisErrorEvent class.
/// [`SpeechSynthesisErrorEvent`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechSynthesisErrorEvent)
class SpeechSynthesisErrorEvent : public SpeechSynthesisEvent {
    explicit SpeechSynthesisErrorEvent(Handle h) noexcept;

public:
    explicit SpeechSynthesisErrorEvent(const emlite::Val &val) noexcept;
    static SpeechSynthesisErrorEvent take_ownership(Handle h) noexcept;

    [[nodiscard]] SpeechSynthesisErrorEvent clone() const noexcept;
    /// The `new SpeechSynthesisErrorEvent(..)` constructor, creating a new SpeechSynthesisErrorEvent instance
    SpeechSynthesisErrorEvent(const jsbind::String& type, const jsbind::Any& eventInitDict);
    /// Getter of the `error` attribute.
    /// [`SpeechSynthesisErrorEvent.error`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechSynthesisErrorEvent/error)
    [[nodiscard]] SpeechSynthesisErrorCode error() const;
};

