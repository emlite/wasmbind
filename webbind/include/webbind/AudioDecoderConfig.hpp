#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type AudioDecoderConfig
/// [`AudioDecoderConfig`](https://developer.mozilla.org/en-US/docs/Web/API/AudioDecoderConfig)
class AudioDecoderConfig : public emlite::Val {
  explicit AudioDecoderConfig(Handle h) noexcept;
public:
    static AudioDecoderConfig take_ownership(Handle h) noexcept;
    explicit AudioDecoderConfig(const emlite::Val &val) noexcept;
    AudioDecoderConfig() noexcept;
    [[nodiscard]] AudioDecoderConfig clone() const noexcept;
    [[nodiscard]] jsbind::String codec() const;
    void codec(const jsbind::String& value);
    [[nodiscard]] unsigned long sampleRate() const;
    void sampleRate(unsigned long value);
    [[nodiscard]] unsigned long numberOfChannels() const;
    void numberOfChannels(unsigned long value);
    [[nodiscard]] jsbind::Any description() const;
    void description(const jsbind::Any& value);
};

} // namespace webbind