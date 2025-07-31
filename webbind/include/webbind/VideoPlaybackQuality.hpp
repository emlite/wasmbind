#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The VideoPlaybackQuality class.
/// [`VideoPlaybackQuality`](https://developer.mozilla.org/en-US/docs/Web/API/VideoPlaybackQuality)
class VideoPlaybackQuality : public emlite::Val {
    explicit VideoPlaybackQuality(Handle h) noexcept;

public:
    explicit VideoPlaybackQuality(const emlite::Val &val) noexcept;
    static VideoPlaybackQuality take_ownership(Handle h) noexcept;

    [[nodiscard]] VideoPlaybackQuality clone() const noexcept;
    /// Getter of the `creationTime` attribute.
    /// [`VideoPlaybackQuality.creationTime`](https://developer.mozilla.org/en-US/docs/Web/API/VideoPlaybackQuality/creationTime)
    [[nodiscard]] jsbind::Any creationTime() const;
    /// Getter of the `droppedVideoFrames` attribute.
    /// [`VideoPlaybackQuality.droppedVideoFrames`](https://developer.mozilla.org/en-US/docs/Web/API/VideoPlaybackQuality/droppedVideoFrames)
    [[nodiscard]] unsigned long droppedVideoFrames() const;
    /// Getter of the `totalVideoFrames` attribute.
    /// [`VideoPlaybackQuality.totalVideoFrames`](https://developer.mozilla.org/en-US/docs/Web/API/VideoPlaybackQuality/totalVideoFrames)
    [[nodiscard]] unsigned long totalVideoFrames() const;
    /// Getter of the `corruptedVideoFrames` attribute.
    /// [`VideoPlaybackQuality.corruptedVideoFrames`](https://developer.mozilla.org/en-US/docs/Web/API/VideoPlaybackQuality/corruptedVideoFrames)
    [[nodiscard]] unsigned long corruptedVideoFrames() const;
};

