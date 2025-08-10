#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class AudioDecoderConfig;

/// Dictionary type AudioDecoderSupport
class AudioDecoderSupport : public emlite::Val {
  explicit AudioDecoderSupport(Handle h) noexcept;
public:
    static AudioDecoderSupport take_ownership(Handle h) noexcept;
    explicit AudioDecoderSupport(const emlite::Val &val) noexcept;
    AudioDecoderSupport() noexcept;
    [[nodiscard]] AudioDecoderSupport clone() const noexcept;
    /// Getter of the `supported` attribute.
    [[nodiscard]] bool supported() const;
    /// Setter of the `supported` attribute.
    void supported(bool value);
    /// Getter of the `config` attribute.
    [[nodiscard]] AudioDecoderConfig config() const;
    /// Setter of the `config` attribute.
    void config(const AudioDecoderConfig& value);
};

} // namespace webbind