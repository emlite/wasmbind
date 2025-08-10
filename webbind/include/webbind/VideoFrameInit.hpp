#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class DOMRectInit;
class VideoFrameMetadata;

/// Dictionary type VideoFrameInit
class VideoFrameInit : public emlite::Val {
  explicit VideoFrameInit(Handle h) noexcept;
public:
    static VideoFrameInit take_ownership(Handle h) noexcept;
    explicit VideoFrameInit(const emlite::Val &val) noexcept;
    VideoFrameInit() noexcept;
    [[nodiscard]] VideoFrameInit clone() const noexcept;
    /// Getter of the `duration` attribute.
    [[nodiscard]] long long duration() const;
    /// Setter of the `duration` attribute.
    void duration(long long value);
    /// Getter of the `timestamp` attribute.
    [[nodiscard]] long long timestamp() const;
    /// Setter of the `timestamp` attribute.
    void timestamp(long long value);
    /// Getter of the `alpha` attribute.
    [[nodiscard]] AlphaOption alpha() const;
    /// Setter of the `alpha` attribute.
    void alpha(const AlphaOption& value);
    /// Getter of the `visibleRect` attribute.
    [[nodiscard]] DOMRectInit visibleRect() const;
    /// Setter of the `visibleRect` attribute.
    void visibleRect(const DOMRectInit& value);
    /// Getter of the `rotation` attribute.
    [[nodiscard]] double rotation() const;
    /// Setter of the `rotation` attribute.
    void rotation(double value);
    /// Getter of the `flip` attribute.
    [[nodiscard]] bool flip() const;
    /// Setter of the `flip` attribute.
    void flip(bool value);
    /// Getter of the `displayWidth` attribute.
    [[nodiscard]] unsigned long displayWidth() const;
    /// Setter of the `displayWidth` attribute.
    void displayWidth(unsigned long value);
    /// Getter of the `displayHeight` attribute.
    [[nodiscard]] unsigned long displayHeight() const;
    /// Setter of the `displayHeight` attribute.
    void displayHeight(unsigned long value);
    /// Getter of the `metadata` attribute.
    [[nodiscard]] VideoFrameMetadata metadata() const;
    /// Setter of the `metadata` attribute.
    void metadata(const VideoFrameMetadata& value);
};

} // namespace webbind