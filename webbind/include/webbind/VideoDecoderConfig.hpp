#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class VideoColorSpaceInit;

/// Dictionary type VideoDecoderConfig
class VideoDecoderConfig : public emlite::Val {
  explicit VideoDecoderConfig(Handle h) noexcept;
public:
    static VideoDecoderConfig take_ownership(Handle h) noexcept;
    explicit VideoDecoderConfig(const emlite::Val &val) noexcept;
    VideoDecoderConfig() noexcept;
    [[nodiscard]] VideoDecoderConfig clone() const noexcept;
    /// Getter of the `codec` attribute.
    [[nodiscard]] jsbind::String codec() const;
    /// Setter of the `codec` attribute.
    void codec(const jsbind::String& value);
    /// Getter of the `description` attribute.
    [[nodiscard]] jsbind::Any description() const;
    /// Setter of the `description` attribute.
    void description(const jsbind::Any& value);
    /// Getter of the `codedWidth` attribute.
    [[nodiscard]] unsigned long codedWidth() const;
    /// Setter of the `codedWidth` attribute.
    void codedWidth(unsigned long value);
    /// Getter of the `codedHeight` attribute.
    [[nodiscard]] unsigned long codedHeight() const;
    /// Setter of the `codedHeight` attribute.
    void codedHeight(unsigned long value);
    /// Getter of the `displayAspectWidth` attribute.
    [[nodiscard]] unsigned long displayAspectWidth() const;
    /// Setter of the `displayAspectWidth` attribute.
    void displayAspectWidth(unsigned long value);
    /// Getter of the `displayAspectHeight` attribute.
    [[nodiscard]] unsigned long displayAspectHeight() const;
    /// Setter of the `displayAspectHeight` attribute.
    void displayAspectHeight(unsigned long value);
    /// Getter of the `colorSpace` attribute.
    [[nodiscard]] VideoColorSpaceInit colorSpace() const;
    /// Setter of the `colorSpace` attribute.
    void colorSpace(const VideoColorSpaceInit& value);
    /// Getter of the `hardwareAcceleration` attribute.
    [[nodiscard]] HardwareAcceleration hardwareAcceleration() const;
    /// Setter of the `hardwareAcceleration` attribute.
    void hardwareAcceleration(const HardwareAcceleration& value);
    /// Getter of the `optimizeForLatency` attribute.
    [[nodiscard]] bool optimizeForLatency() const;
    /// Setter of the `optimizeForLatency` attribute.
    void optimizeForLatency(bool value);
    /// Getter of the `rotation` attribute.
    [[nodiscard]] double rotation() const;
    /// Setter of the `rotation` attribute.
    void rotation(double value);
    /// Getter of the `flip` attribute.
    [[nodiscard]] bool flip() const;
    /// Setter of the `flip` attribute.
    void flip(bool value);
};

} // namespace webbind