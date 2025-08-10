#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Interface VideoPlaybackQuality
/// [`VideoPlaybackQuality`](https://developer.mozilla.org/en-US/docs/Web/API/VideoPlaybackQuality)
class VideoPlaybackQuality : public emlite::Val {
    explicit VideoPlaybackQuality(Handle h) noexcept;
public:
    explicit VideoPlaybackQuality(const emlite::Val &val) noexcept;
    static VideoPlaybackQuality take_ownership(Handle h) noexcept;
    [[nodiscard]] VideoPlaybackQuality clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`VideoPlaybackQuality.creationTime`](https://developer.mozilla.org/en-US/docs/Web/API/VideoPlaybackQuality/creationTime)
    /// [`VideoPlaybackQuality.creationTime`](https://developer.mozilla.org/en-US/docs/Web/API/VideoPlaybackQuality/creationTime)
    [[nodiscard]] jsbind::Any creationTime() const;
    /// [`VideoPlaybackQuality.droppedVideoFrames`](https://developer.mozilla.org/en-US/docs/Web/API/VideoPlaybackQuality/droppedVideoFrames)
    /// [`VideoPlaybackQuality.droppedVideoFrames`](https://developer.mozilla.org/en-US/docs/Web/API/VideoPlaybackQuality/droppedVideoFrames)
    [[nodiscard]] unsigned long droppedVideoFrames() const;
    /// [`VideoPlaybackQuality.totalVideoFrames`](https://developer.mozilla.org/en-US/docs/Web/API/VideoPlaybackQuality/totalVideoFrames)
    /// [`VideoPlaybackQuality.totalVideoFrames`](https://developer.mozilla.org/en-US/docs/Web/API/VideoPlaybackQuality/totalVideoFrames)
    [[nodiscard]] unsigned long totalVideoFrames() const;
    /// [`VideoPlaybackQuality.corruptedVideoFrames`](https://developer.mozilla.org/en-US/docs/Web/API/VideoPlaybackQuality/corruptedVideoFrames)
    /// [`VideoPlaybackQuality.corruptedVideoFrames`](https://developer.mozilla.org/en-US/docs/Web/API/VideoPlaybackQuality/corruptedVideoFrames)
    [[nodiscard]] unsigned long corruptedVideoFrames() const;
};

} // namespace webbind