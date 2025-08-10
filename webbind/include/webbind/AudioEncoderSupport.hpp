#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "AudioEncoderConfig.hpp"

namespace webbind {

/// Dictionary type AudioEncoderSupport
/// [`AudioEncoderSupport`](https://developer.mozilla.org/en-US/docs/Web/API/AudioEncoderSupport)
class AudioEncoderSupport : public emlite::Val {
  explicit AudioEncoderSupport(Handle h) noexcept;
public:
    static AudioEncoderSupport take_ownership(Handle h) noexcept;
    explicit AudioEncoderSupport(const emlite::Val &val) noexcept;
    AudioEncoderSupport() noexcept;
    [[nodiscard]] AudioEncoderSupport clone() const noexcept;
    [[nodiscard]] bool supported() const;
    void supported(bool value);
    [[nodiscard]] AudioEncoderConfig config() const;
    void config(const AudioEncoderConfig& value);
};

} // namespace webbind