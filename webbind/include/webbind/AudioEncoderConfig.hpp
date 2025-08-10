#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type AudioEncoderConfig
class AudioEncoderConfig : public emlite::Val {
  explicit AudioEncoderConfig(Handle h) noexcept;
public:
    static AudioEncoderConfig take_ownership(Handle h) noexcept;
    explicit AudioEncoderConfig(const emlite::Val &val) noexcept;
    AudioEncoderConfig() noexcept;
    [[nodiscard]] AudioEncoderConfig clone() const noexcept;
    /// Getter of the `codec` attribute.
    [[nodiscard]] jsbind::String codec() const;
    /// Setter of the `codec` attribute.
    void codec(const jsbind::String& value);
    /// Getter of the `sampleRate` attribute.
    [[nodiscard]] unsigned long sampleRate() const;
    /// Setter of the `sampleRate` attribute.
    void sampleRate(unsigned long value);
    /// Getter of the `numberOfChannels` attribute.
    [[nodiscard]] unsigned long numberOfChannels() const;
    /// Setter of the `numberOfChannels` attribute.
    void numberOfChannels(unsigned long value);
    /// Getter of the `bitrate` attribute.
    [[nodiscard]] long long bitrate() const;
    /// Setter of the `bitrate` attribute.
    void bitrate(long long value);
    /// Getter of the `bitrateMode` attribute.
    [[nodiscard]] BitrateMode bitrateMode() const;
    /// Setter of the `bitrateMode` attribute.
    void bitrateMode(const BitrateMode& value);
};

} // namespace webbind