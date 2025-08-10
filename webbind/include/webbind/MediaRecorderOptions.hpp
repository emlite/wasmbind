#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type MediaRecorderOptions
/// [`MediaRecorderOptions`](https://developer.mozilla.org/en-US/docs/Web/API/MediaRecorderOptions)
class MediaRecorderOptions : public emlite::Val {
  explicit MediaRecorderOptions(Handle h) noexcept;
public:
    static MediaRecorderOptions take_ownership(Handle h) noexcept;
    explicit MediaRecorderOptions(const emlite::Val &val) noexcept;
    MediaRecorderOptions() noexcept;
    [[nodiscard]] MediaRecorderOptions clone() const noexcept;
    [[nodiscard]] jsbind::String mimeType() const;
    void mimeType(const jsbind::String& value);
    [[nodiscard]] unsigned long audioBitsPerSecond() const;
    void audioBitsPerSecond(unsigned long value);
    [[nodiscard]] unsigned long videoBitsPerSecond() const;
    void videoBitsPerSecond(unsigned long value);
    [[nodiscard]] unsigned long bitsPerSecond() const;
    void bitsPerSecond(unsigned long value);
    [[nodiscard]] BitrateMode audioBitrateMode() const;
    void audioBitrateMode(const BitrateMode& value);
    [[nodiscard]] jsbind::Any videoKeyFrameIntervalDuration() const;
    void videoKeyFrameIntervalDuration(const jsbind::Any& value);
    [[nodiscard]] unsigned long videoKeyFrameIntervalCount() const;
    void videoKeyFrameIntervalCount(unsigned long value);
};

} // namespace webbind