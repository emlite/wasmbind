#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Event.hpp"

namespace webbind {

class AudioProcessingEventInit;
class AudioBuffer;

/// Interface AudioProcessingEvent
/// [`AudioProcessingEvent`](https://developer.mozilla.org/en-US/docs/Web/API/AudioProcessingEvent)
class AudioProcessingEvent : public Event {
    explicit AudioProcessingEvent(Handle h) noexcept;
public:
    explicit AudioProcessingEvent(const emlite::Val &val) noexcept;
    static AudioProcessingEvent take_ownership(Handle h) noexcept;
    [[nodiscard]] AudioProcessingEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new AudioProcessingEvent(..)` constructor, creating a new AudioProcessingEvent instance
    AudioProcessingEvent(const jsbind::String& type, const AudioProcessingEventInit& eventInitDict);
    /// [`AudioProcessingEvent.playbackTime`](https://developer.mozilla.org/en-US/docs/Web/API/AudioProcessingEvent/playbackTime)
    /// [`AudioProcessingEvent.playbackTime`](https://developer.mozilla.org/en-US/docs/Web/API/AudioProcessingEvent/playbackTime)
    [[nodiscard]] double playbackTime() const;
    /// [`AudioProcessingEvent.inputBuffer`](https://developer.mozilla.org/en-US/docs/Web/API/AudioProcessingEvent/inputBuffer)
    /// [`AudioProcessingEvent.inputBuffer`](https://developer.mozilla.org/en-US/docs/Web/API/AudioProcessingEvent/inputBuffer)
    [[nodiscard]] AudioBuffer inputBuffer() const;
    /// [`AudioProcessingEvent.outputBuffer`](https://developer.mozilla.org/en-US/docs/Web/API/AudioProcessingEvent/outputBuffer)
    /// [`AudioProcessingEvent.outputBuffer`](https://developer.mozilla.org/en-US/docs/Web/API/AudioProcessingEvent/outputBuffer)
    [[nodiscard]] AudioBuffer outputBuffer() const;
};

} // namespace webbind