#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

class AudioBuffer;

/// Dictionary type AudioProcessingEventInit
/// [`AudioProcessingEventInit`](https://developer.mozilla.org/en-US/docs/Web/API/AudioProcessingEventInit)
class AudioProcessingEventInit : public EventInit {
  explicit AudioProcessingEventInit(Handle h) noexcept;
public:
    static AudioProcessingEventInit take_ownership(Handle h) noexcept;
    explicit AudioProcessingEventInit(const emlite::Val &val) noexcept;
    AudioProcessingEventInit() noexcept;
    [[nodiscard]] AudioProcessingEventInit clone() const noexcept;
    [[nodiscard]] double playbackTime() const;
    void playbackTime(double value);
    [[nodiscard]] AudioBuffer inputBuffer() const;
    void inputBuffer(const AudioBuffer& value);
    [[nodiscard]] AudioBuffer outputBuffer() const;
    void outputBuffer(const AudioBuffer& value);
};

} // namespace webbind