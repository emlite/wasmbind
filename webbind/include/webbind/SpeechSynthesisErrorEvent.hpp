#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "SpeechSynthesisEvent.hpp"
#include "enums.hpp"

namespace webbind {

class SpeechSynthesisErrorEventInit;

/// Interface SpeechSynthesisErrorEvent
/// [`SpeechSynthesisErrorEvent`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechSynthesisErrorEvent)
class SpeechSynthesisErrorEvent : public SpeechSynthesisEvent {
    explicit SpeechSynthesisErrorEvent(Handle h) noexcept;
public:
    explicit SpeechSynthesisErrorEvent(const emlite::Val &val) noexcept;
    static SpeechSynthesisErrorEvent take_ownership(Handle h) noexcept;
    [[nodiscard]] SpeechSynthesisErrorEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new SpeechSynthesisErrorEvent(..)` constructor, creating a new SpeechSynthesisErrorEvent instance
    SpeechSynthesisErrorEvent(const jsbind::String& type, const SpeechSynthesisErrorEventInit& eventInitDict);
    /// [`SpeechSynthesisErrorEvent.error`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechSynthesisErrorEvent/error)
    /// [`SpeechSynthesisErrorEvent.error`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechSynthesisErrorEvent/error)
    [[nodiscard]] SpeechSynthesisErrorCode error() const;
};

} // namespace webbind