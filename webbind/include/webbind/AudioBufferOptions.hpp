#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type AudioBufferOptions
/// [`AudioBufferOptions`](https://developer.mozilla.org/en-US/docs/Web/API/AudioBufferOptions)
class AudioBufferOptions : public emlite::Val {
  explicit AudioBufferOptions(Handle h) noexcept;
public:
    static AudioBufferOptions take_ownership(Handle h) noexcept;
    explicit AudioBufferOptions(const emlite::Val &val) noexcept;
    AudioBufferOptions() noexcept;
    [[nodiscard]] AudioBufferOptions clone() const noexcept;
    [[nodiscard]] unsigned long numberOfChannels() const;
    void numberOfChannels(unsigned long value);
    [[nodiscard]] unsigned long length() const;
    void length(unsigned long value);
    [[nodiscard]] float sampleRate() const;
    void sampleRate(float value);
};

} // namespace webbind