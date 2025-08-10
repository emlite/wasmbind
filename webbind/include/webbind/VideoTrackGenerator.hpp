#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class WritableStream;
class MediaStreamTrack;

/// Interface VideoTrackGenerator
/// [`VideoTrackGenerator`](https://developer.mozilla.org/en-US/docs/Web/API/VideoTrackGenerator)
class VideoTrackGenerator : public emlite::Val {
    explicit VideoTrackGenerator(Handle h) noexcept;
public:
    explicit VideoTrackGenerator(const emlite::Val &val) noexcept;
    static VideoTrackGenerator take_ownership(Handle h) noexcept;
    [[nodiscard]] VideoTrackGenerator clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new VideoTrackGenerator(..)` constructor, creating a new VideoTrackGenerator instance
    VideoTrackGenerator();
    /// [`VideoTrackGenerator.writable`](https://developer.mozilla.org/en-US/docs/Web/API/VideoTrackGenerator/writable)
    /// [`VideoTrackGenerator.writable`](https://developer.mozilla.org/en-US/docs/Web/API/VideoTrackGenerator/writable)
    [[nodiscard]] WritableStream writable() const;
    /// [`VideoTrackGenerator.muted`](https://developer.mozilla.org/en-US/docs/Web/API/VideoTrackGenerator/muted)
    /// [`VideoTrackGenerator.muted`](https://developer.mozilla.org/en-US/docs/Web/API/VideoTrackGenerator/muted)
    [[nodiscard]] bool muted() const;
    /// Setter of the `muted` attribute.
    /// [`VideoTrackGenerator.muted`](https://developer.mozilla.org/en-US/docs/Web/API/VideoTrackGenerator/muted)
    void muted(bool value);
    /// [`VideoTrackGenerator.track`](https://developer.mozilla.org/en-US/docs/Web/API/VideoTrackGenerator/track)
    /// [`VideoTrackGenerator.track`](https://developer.mozilla.org/en-US/docs/Web/API/VideoTrackGenerator/track)
    [[nodiscard]] MediaStreamTrack track() const;
};

} // namespace webbind