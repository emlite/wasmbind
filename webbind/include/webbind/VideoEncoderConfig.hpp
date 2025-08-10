#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type VideoEncoderConfig
class VideoEncoderConfig : public emlite::Val {
  explicit VideoEncoderConfig(Handle h) noexcept;
public:
    static VideoEncoderConfig take_ownership(Handle h) noexcept;
    explicit VideoEncoderConfig(const emlite::Val &val) noexcept;
    VideoEncoderConfig() noexcept;
    [[nodiscard]] VideoEncoderConfig clone() const noexcept;
    /// Getter of the `codec` attribute.
    [[nodiscard]] jsbind::String codec() const;
    /// Setter of the `codec` attribute.
    void codec(const jsbind::String& value);
    /// Getter of the `width` attribute.
    [[nodiscard]] unsigned long width() const;
    /// Setter of the `width` attribute.
    void width(unsigned long value);
    /// Getter of the `height` attribute.
    [[nodiscard]] unsigned long height() const;
    /// Setter of the `height` attribute.
    void height(unsigned long value);
    /// Getter of the `displayWidth` attribute.
    [[nodiscard]] unsigned long displayWidth() const;
    /// Setter of the `displayWidth` attribute.
    void displayWidth(unsigned long value);
    /// Getter of the `displayHeight` attribute.
    [[nodiscard]] unsigned long displayHeight() const;
    /// Setter of the `displayHeight` attribute.
    void displayHeight(unsigned long value);
    /// Getter of the `bitrate` attribute.
    [[nodiscard]] long long bitrate() const;
    /// Setter of the `bitrate` attribute.
    void bitrate(long long value);
    /// Getter of the `framerate` attribute.
    [[nodiscard]] double framerate() const;
    /// Setter of the `framerate` attribute.
    void framerate(double value);
    /// Getter of the `hardwareAcceleration` attribute.
    [[nodiscard]] HardwareAcceleration hardwareAcceleration() const;
    /// Setter of the `hardwareAcceleration` attribute.
    void hardwareAcceleration(const HardwareAcceleration& value);
    /// Getter of the `alpha` attribute.
    [[nodiscard]] AlphaOption alpha() const;
    /// Setter of the `alpha` attribute.
    void alpha(const AlphaOption& value);
    /// Getter of the `scalabilityMode` attribute.
    [[nodiscard]] jsbind::String scalabilityMode() const;
    /// Setter of the `scalabilityMode` attribute.
    void scalabilityMode(const jsbind::String& value);
    /// Getter of the `bitrateMode` attribute.
    [[nodiscard]] VideoEncoderBitrateMode bitrateMode() const;
    /// Setter of the `bitrateMode` attribute.
    void bitrateMode(const VideoEncoderBitrateMode& value);
    /// Getter of the `latencyMode` attribute.
    [[nodiscard]] LatencyMode latencyMode() const;
    /// Setter of the `latencyMode` attribute.
    void latencyMode(const LatencyMode& value);
    /// Getter of the `contentHint` attribute.
    [[nodiscard]] jsbind::String contentHint() const;
    /// Setter of the `contentHint` attribute.
    void contentHint(const jsbind::String& value);
};

} // namespace webbind