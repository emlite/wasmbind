#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type MediaRecorderOptions
class MediaRecorderOptions : public emlite::Val {
  explicit MediaRecorderOptions(Handle h) noexcept;
public:
    static MediaRecorderOptions take_ownership(Handle h) noexcept;
    explicit MediaRecorderOptions(const emlite::Val &val) noexcept;
    MediaRecorderOptions() noexcept;
    [[nodiscard]] MediaRecorderOptions clone() const noexcept;
    /// Getter of the `mimeType` attribute.
    [[nodiscard]] jsbind::String mimeType() const;
    /// Setter of the `mimeType` attribute.
    void mimeType(const jsbind::String& value);
    /// Getter of the `audioBitsPerSecond` attribute.
    [[nodiscard]] unsigned long audioBitsPerSecond() const;
    /// Setter of the `audioBitsPerSecond` attribute.
    void audioBitsPerSecond(unsigned long value);
    /// Getter of the `videoBitsPerSecond` attribute.
    [[nodiscard]] unsigned long videoBitsPerSecond() const;
    /// Setter of the `videoBitsPerSecond` attribute.
    void videoBitsPerSecond(unsigned long value);
    /// Getter of the `bitsPerSecond` attribute.
    [[nodiscard]] unsigned long bitsPerSecond() const;
    /// Setter of the `bitsPerSecond` attribute.
    void bitsPerSecond(unsigned long value);
    /// Getter of the `audioBitrateMode` attribute.
    [[nodiscard]] BitrateMode audioBitrateMode() const;
    /// Setter of the `audioBitrateMode` attribute.
    void audioBitrateMode(const BitrateMode& value);
    /// Getter of the `videoKeyFrameIntervalDuration` attribute.
    [[nodiscard]] jsbind::Any videoKeyFrameIntervalDuration() const;
    /// Setter of the `videoKeyFrameIntervalDuration` attribute.
    void videoKeyFrameIntervalDuration(const jsbind::Any& value);
    /// Getter of the `videoKeyFrameIntervalCount` attribute.
    [[nodiscard]] unsigned long videoKeyFrameIntervalCount() const;
    /// Setter of the `videoKeyFrameIntervalCount` attribute.
    void videoKeyFrameIntervalCount(unsigned long value);
};

} // namespace webbind