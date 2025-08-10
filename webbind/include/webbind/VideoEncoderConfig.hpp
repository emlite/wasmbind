#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type VideoEncoderConfig
/// [`VideoEncoderConfig`](https://developer.mozilla.org/en-US/docs/Web/API/VideoEncoderConfig)
class VideoEncoderConfig : public emlite::Val {
  explicit VideoEncoderConfig(Handle h) noexcept;
public:
    static VideoEncoderConfig take_ownership(Handle h) noexcept;
    explicit VideoEncoderConfig(const emlite::Val &val) noexcept;
    VideoEncoderConfig() noexcept;
    [[nodiscard]] VideoEncoderConfig clone() const noexcept;
    [[nodiscard]] jsbind::String codec() const;
    void codec(const jsbind::String& value);
    [[nodiscard]] unsigned long width() const;
    void width(unsigned long value);
    [[nodiscard]] unsigned long height() const;
    void height(unsigned long value);
    [[nodiscard]] unsigned long displayWidth() const;
    void displayWidth(unsigned long value);
    [[nodiscard]] unsigned long displayHeight() const;
    void displayHeight(unsigned long value);
    [[nodiscard]] long long bitrate() const;
    void bitrate(long long value);
    [[nodiscard]] double framerate() const;
    void framerate(double value);
    [[nodiscard]] HardwareAcceleration hardwareAcceleration() const;
    void hardwareAcceleration(const HardwareAcceleration& value);
    [[nodiscard]] AlphaOption alpha() const;
    void alpha(const AlphaOption& value);
    [[nodiscard]] jsbind::String scalabilityMode() const;
    void scalabilityMode(const jsbind::String& value);
    [[nodiscard]] VideoEncoderBitrateMode bitrateMode() const;
    void bitrateMode(const VideoEncoderBitrateMode& value);
    [[nodiscard]] LatencyMode latencyMode() const;
    void latencyMode(const LatencyMode& value);
    [[nodiscard]] jsbind::String contentHint() const;
    void contentHint(const jsbind::String& value);
};

} // namespace webbind