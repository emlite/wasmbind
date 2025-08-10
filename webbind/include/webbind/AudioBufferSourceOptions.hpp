#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class AudioBuffer;

/// Dictionary type AudioBufferSourceOptions
class AudioBufferSourceOptions : public emlite::Val {
  explicit AudioBufferSourceOptions(Handle h) noexcept;
public:
    static AudioBufferSourceOptions take_ownership(Handle h) noexcept;
    explicit AudioBufferSourceOptions(const emlite::Val &val) noexcept;
    AudioBufferSourceOptions() noexcept;
    [[nodiscard]] AudioBufferSourceOptions clone() const noexcept;
    /// Getter of the `buffer` attribute.
    [[nodiscard]] AudioBuffer buffer() const;
    /// Setter of the `buffer` attribute.
    void buffer(const AudioBuffer& value);
    /// Getter of the `detune` attribute.
    [[nodiscard]] float detune() const;
    /// Setter of the `detune` attribute.
    void detune(float value);
    /// Getter of the `loop` attribute.
    [[nodiscard]] bool loop() const;
    /// Setter of the `loop` attribute.
    void loop(bool value);
    /// Getter of the `loopEnd` attribute.
    [[nodiscard]] double loopEnd() const;
    /// Setter of the `loopEnd` attribute.
    void loopEnd(double value);
    /// Getter of the `loopStart` attribute.
    [[nodiscard]] double loopStart() const;
    /// Setter of the `loopStart` attribute.
    void loopStart(double value);
    /// Getter of the `playbackRate` attribute.
    [[nodiscard]] float playbackRate() const;
    /// Setter of the `playbackRate` attribute.
    void playbackRate(float value);
};

} // namespace webbind