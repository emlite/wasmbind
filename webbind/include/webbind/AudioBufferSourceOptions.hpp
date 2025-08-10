#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class AudioBuffer;

/// Dictionary type AudioBufferSourceOptions
/// [`AudioBufferSourceOptions`](https://developer.mozilla.org/en-US/docs/Web/API/AudioBufferSourceOptions)
class AudioBufferSourceOptions : public emlite::Val {
  explicit AudioBufferSourceOptions(Handle h) noexcept;
public:
    static AudioBufferSourceOptions take_ownership(Handle h) noexcept;
    explicit AudioBufferSourceOptions(const emlite::Val &val) noexcept;
    AudioBufferSourceOptions() noexcept;
    [[nodiscard]] AudioBufferSourceOptions clone() const noexcept;
    [[nodiscard]] AudioBuffer buffer() const;
    void buffer(const AudioBuffer& value);
    [[nodiscard]] float detune() const;
    void detune(float value);
    [[nodiscard]] bool loop() const;
    void loop(bool value);
    [[nodiscard]] double loopEnd() const;
    void loopEnd(double value);
    [[nodiscard]] double loopStart() const;
    void loopStart(double value);
    [[nodiscard]] float playbackRate() const;
    void playbackRate(float value);
};

} // namespace webbind