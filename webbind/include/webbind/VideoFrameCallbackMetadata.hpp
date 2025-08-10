#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type VideoFrameCallbackMetadata
/// [`VideoFrameCallbackMetadata`](https://developer.mozilla.org/en-US/docs/Web/API/VideoFrameCallbackMetadata)
class VideoFrameCallbackMetadata : public emlite::Val {
  explicit VideoFrameCallbackMetadata(Handle h) noexcept;
public:
    static VideoFrameCallbackMetadata take_ownership(Handle h) noexcept;
    explicit VideoFrameCallbackMetadata(const emlite::Val &val) noexcept;
    VideoFrameCallbackMetadata() noexcept;
    [[nodiscard]] VideoFrameCallbackMetadata clone() const noexcept;
    [[nodiscard]] jsbind::Any presentationTime() const;
    void presentationTime(const jsbind::Any& value);
    [[nodiscard]] jsbind::Any expectedDisplayTime() const;
    void expectedDisplayTime(const jsbind::Any& value);
    [[nodiscard]] unsigned long width() const;
    void width(unsigned long value);
    [[nodiscard]] unsigned long height() const;
    void height(unsigned long value);
    [[nodiscard]] double mediaTime() const;
    void mediaTime(double value);
    [[nodiscard]] unsigned long presentedFrames() const;
    void presentedFrames(unsigned long value);
    [[nodiscard]] double processingDuration() const;
    void processingDuration(double value);
    [[nodiscard]] jsbind::Any captureTime() const;
    void captureTime(const jsbind::Any& value);
    [[nodiscard]] jsbind::Any receiveTime() const;
    void receiveTime(const jsbind::Any& value);
    [[nodiscard]] unsigned long rtpTimestamp() const;
    void rtpTimestamp(unsigned long value);
};

} // namespace webbind