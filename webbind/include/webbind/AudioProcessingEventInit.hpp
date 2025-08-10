#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

class AudioBuffer;

/// Dictionary type AudioProcessingEventInit
class AudioProcessingEventInit : public EventInit {
  explicit AudioProcessingEventInit(Handle h) noexcept;
public:
    static AudioProcessingEventInit take_ownership(Handle h) noexcept;
    explicit AudioProcessingEventInit(const emlite::Val &val) noexcept;
    AudioProcessingEventInit() noexcept;
    [[nodiscard]] AudioProcessingEventInit clone() const noexcept;
    /// Getter of the `playbackTime` attribute.
    [[nodiscard]] double playbackTime() const;
    /// Setter of the `playbackTime` attribute.
    void playbackTime(double value);
    /// Getter of the `inputBuffer` attribute.
    [[nodiscard]] AudioBuffer inputBuffer() const;
    /// Setter of the `inputBuffer` attribute.
    void inputBuffer(const AudioBuffer& value);
    /// Getter of the `outputBuffer` attribute.
    [[nodiscard]] AudioBuffer outputBuffer() const;
    /// Setter of the `outputBuffer` attribute.
    void outputBuffer(const AudioBuffer& value);
};

} // namespace webbind