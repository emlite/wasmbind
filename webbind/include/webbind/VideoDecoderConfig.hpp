#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "VideoColorSpaceInit.hpp"

namespace webbind {

/// Dictionary type VideoDecoderConfig
/// [`VideoDecoderConfig`](https://developer.mozilla.org/en-US/docs/Web/API/VideoDecoderConfig)
class VideoDecoderConfig : public emlite::Val {
  explicit VideoDecoderConfig(Handle h) noexcept;
public:
    static VideoDecoderConfig take_ownership(Handle h) noexcept;
    explicit VideoDecoderConfig(const emlite::Val &val) noexcept;
    VideoDecoderConfig() noexcept;
    [[nodiscard]] VideoDecoderConfig clone() const noexcept;
    [[nodiscard]] jsbind::String codec() const;
    void codec(const jsbind::String& value);
    [[nodiscard]] jsbind::Any description() const;
    void description(const jsbind::Any& value);
    [[nodiscard]] unsigned long codedWidth() const;
    void codedWidth(unsigned long value);
    [[nodiscard]] unsigned long codedHeight() const;
    void codedHeight(unsigned long value);
    [[nodiscard]] unsigned long displayAspectWidth() const;
    void displayAspectWidth(unsigned long value);
    [[nodiscard]] unsigned long displayAspectHeight() const;
    void displayAspectHeight(unsigned long value);
    [[nodiscard]] VideoColorSpaceInit colorSpace() const;
    void colorSpace(const VideoColorSpaceInit& value);
    [[nodiscard]] HardwareAcceleration hardwareAcceleration() const;
    void hardwareAcceleration(const HardwareAcceleration& value);
    [[nodiscard]] bool optimizeForLatency() const;
    void optimizeForLatency(bool value);
    [[nodiscard]] double rotation() const;
    void rotation(double value);
    [[nodiscard]] bool flip() const;
    void flip(bool value);
};

} // namespace webbind