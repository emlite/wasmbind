#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type AudioDecoderConfig
class AudioDecoderConfig : public emlite::Val {
  explicit AudioDecoderConfig(Handle h) noexcept;
public:
    static AudioDecoderConfig take_ownership(Handle h) noexcept;
    explicit AudioDecoderConfig(const emlite::Val &val) noexcept;
    AudioDecoderConfig() noexcept;
    [[nodiscard]] AudioDecoderConfig clone() const noexcept;
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
    /// Getter of the `description` attribute.
    [[nodiscard]] jsbind::Any description() const;
    /// Setter of the `description` attribute.
    void description(const jsbind::Any& value);
};

} // namespace webbind