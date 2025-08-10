#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "AudioEncoderConfig.hpp"

namespace webbind {

/// Dictionary type AudioEncoderSupport
class AudioEncoderSupport : public emlite::Val {
  explicit AudioEncoderSupport(Handle h) noexcept;
public:
    static AudioEncoderSupport take_ownership(Handle h) noexcept;
    explicit AudioEncoderSupport(const emlite::Val &val) noexcept;
    AudioEncoderSupport() noexcept;
    [[nodiscard]] AudioEncoderSupport clone() const noexcept;
    /// Getter of the `supported` attribute.
    [[nodiscard]] bool supported() const;
    /// Setter of the `supported` attribute.
    void supported(bool value);
    /// Getter of the `config` attribute.
    [[nodiscard]] AudioEncoderConfig config() const;
    /// Setter of the `config` attribute.
    void config(const AudioEncoderConfig& value);
};

} // namespace webbind