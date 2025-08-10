#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type AudioEncoderConfig
/// [`AudioEncoderConfig`](https://developer.mozilla.org/en-US/docs/Web/API/AudioEncoderConfig)
class AudioEncoderConfig : public emlite::Val {
  explicit AudioEncoderConfig(Handle h) noexcept;
public:
    static AudioEncoderConfig take_ownership(Handle h) noexcept;
    explicit AudioEncoderConfig(const emlite::Val &val) noexcept;
    AudioEncoderConfig() noexcept;
    [[nodiscard]] AudioEncoderConfig clone() const noexcept;
    [[nodiscard]] jsbind::String codec() const;
    void codec(const jsbind::String& value);
    [[nodiscard]] unsigned long sampleRate() const;
    void sampleRate(unsigned long value);
    [[nodiscard]] unsigned long numberOfChannels() const;
    void numberOfChannels(unsigned long value);
    [[nodiscard]] long long bitrate() const;
    void bitrate(long long value);
    [[nodiscard]] BitrateMode bitrateMode() const;
    void bitrateMode(const BitrateMode& value);
};

} // namespace webbind