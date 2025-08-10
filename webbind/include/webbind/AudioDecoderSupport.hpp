#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "AudioDecoderConfig.hpp"

namespace webbind {

/// Dictionary type AudioDecoderSupport
/// [`AudioDecoderSupport`](https://developer.mozilla.org/en-US/docs/Web/API/AudioDecoderSupport)
class AudioDecoderSupport : public emlite::Val {
  explicit AudioDecoderSupport(Handle h) noexcept;
public:
    static AudioDecoderSupport take_ownership(Handle h) noexcept;
    explicit AudioDecoderSupport(const emlite::Val &val) noexcept;
    AudioDecoderSupport() noexcept;
    [[nodiscard]] AudioDecoderSupport clone() const noexcept;
    [[nodiscard]] bool supported() const;
    void supported(bool value);
    [[nodiscard]] AudioDecoderConfig config() const;
    void config(const AudioDecoderConfig& value);
};

} // namespace webbind