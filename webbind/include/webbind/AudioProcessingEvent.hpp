#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Event.hpp"
#include "AudioProcessingEventInit.hpp"

namespace webbind {

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
    /// Getter of the `playbackTime` attribute.
    /// [`AudioProcessingEvent.playbackTime`](https://developer.mozilla.org/en-US/docs/Web/API/AudioProcessingEvent/playbackTime)
    [[nodiscard]] double playbackTime() const;
    /// Getter of the `inputBuffer` attribute.
    /// [`AudioProcessingEvent.inputBuffer`](https://developer.mozilla.org/en-US/docs/Web/API/AudioProcessingEvent/inputBuffer)
    [[nodiscard]] AudioBuffer inputBuffer() const;
    /// Getter of the `outputBuffer` attribute.
    /// [`AudioProcessingEvent.outputBuffer`](https://developer.mozilla.org/en-US/docs/Web/API/AudioProcessingEvent/outputBuffer)
    [[nodiscard]] AudioBuffer outputBuffer() const;
};

} // namespace webbind