#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class ReadableStream;


/// The MediaStreamTrackProcessor class.
/// [`MediaStreamTrackProcessor`](https://developer.mozilla.org/en-US/docs/Web/API/MediaStreamTrackProcessor)
class MediaStreamTrackProcessor : public emlite::Val {
    explicit MediaStreamTrackProcessor(Handle h) noexcept;

public:
    explicit MediaStreamTrackProcessor(const emlite::Val &val) noexcept;
    static MediaStreamTrackProcessor take_ownership(Handle h) noexcept;

    [[nodiscard]] MediaStreamTrackProcessor clone() const noexcept;
    /// The `new MediaStreamTrackProcessor(..)` constructor, creating a new MediaStreamTrackProcessor instance
    MediaStreamTrackProcessor(const jsbind::Any& init);
    /// Getter of the `readable` attribute.
    /// [`MediaStreamTrackProcessor.readable`](https://developer.mozilla.org/en-US/docs/Web/API/MediaStreamTrackProcessor/readable)
    [[nodiscard]] ReadableStream readable() const;
};

