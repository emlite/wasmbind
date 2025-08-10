#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type VideoFrameCallbackMetadata
class VideoFrameCallbackMetadata : public emlite::Val {
  explicit VideoFrameCallbackMetadata(Handle h) noexcept;
public:
    static VideoFrameCallbackMetadata take_ownership(Handle h) noexcept;
    explicit VideoFrameCallbackMetadata(const emlite::Val &val) noexcept;
    VideoFrameCallbackMetadata() noexcept;
    [[nodiscard]] VideoFrameCallbackMetadata clone() const noexcept;
    /// Getter of the `presentationTime` attribute.
    [[nodiscard]] jsbind::Any presentationTime() const;
    /// Setter of the `presentationTime` attribute.
    void presentationTime(const jsbind::Any& value);
    /// Getter of the `expectedDisplayTime` attribute.
    [[nodiscard]] jsbind::Any expectedDisplayTime() const;
    /// Setter of the `expectedDisplayTime` attribute.
    void expectedDisplayTime(const jsbind::Any& value);
    /// Getter of the `width` attribute.
    [[nodiscard]] unsigned long width() const;
    /// Setter of the `width` attribute.
    void width(unsigned long value);
    /// Getter of the `height` attribute.
    [[nodiscard]] unsigned long height() const;
    /// Setter of the `height` attribute.
    void height(unsigned long value);
    /// Getter of the `mediaTime` attribute.
    [[nodiscard]] double mediaTime() const;
    /// Setter of the `mediaTime` attribute.
    void mediaTime(double value);
    /// Getter of the `presentedFrames` attribute.
    [[nodiscard]] unsigned long presentedFrames() const;
    /// Setter of the `presentedFrames` attribute.
    void presentedFrames(unsigned long value);
    /// Getter of the `processingDuration` attribute.
    [[nodiscard]] double processingDuration() const;
    /// Setter of the `processingDuration` attribute.
    void processingDuration(double value);
    /// Getter of the `captureTime` attribute.
    [[nodiscard]] jsbind::Any captureTime() const;
    /// Setter of the `captureTime` attribute.
    void captureTime(const jsbind::Any& value);
    /// Getter of the `receiveTime` attribute.
    [[nodiscard]] jsbind::Any receiveTime() const;
    /// Setter of the `receiveTime` attribute.
    void receiveTime(const jsbind::Any& value);
    /// Getter of the `rtpTimestamp` attribute.
    [[nodiscard]] unsigned long rtpTimestamp() const;
    /// Setter of the `rtpTimestamp` attribute.
    void rtpTimestamp(unsigned long value);
};

} // namespace webbind