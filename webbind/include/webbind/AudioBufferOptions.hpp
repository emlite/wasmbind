#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type AudioBufferOptions
class AudioBufferOptions : public emlite::Val {
  explicit AudioBufferOptions(Handle h) noexcept;
public:
    static AudioBufferOptions take_ownership(Handle h) noexcept;
    explicit AudioBufferOptions(const emlite::Val &val) noexcept;
    AudioBufferOptions() noexcept;
    [[nodiscard]] AudioBufferOptions clone() const noexcept;
    /// Getter of the `numberOfChannels` attribute.
    [[nodiscard]] unsigned long numberOfChannels() const;
    /// Setter of the `numberOfChannels` attribute.
    void numberOfChannels(unsigned long value);
    /// Getter of the `length` attribute.
    [[nodiscard]] unsigned long length() const;
    /// Setter of the `length` attribute.
    void length(unsigned long value);
    /// Getter of the `sampleRate` attribute.
    [[nodiscard]] float sampleRate() const;
    /// Setter of the `sampleRate` attribute.
    void sampleRate(float value);
};

} // namespace webbind