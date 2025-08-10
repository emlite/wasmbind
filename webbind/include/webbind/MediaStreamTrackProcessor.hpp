#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class MediaStreamTrackProcessorInit;
class ReadableStream;

/// Interface MediaStreamTrackProcessor
/// [`MediaStreamTrackProcessor`](https://developer.mozilla.org/en-US/docs/Web/API/MediaStreamTrackProcessor)
class MediaStreamTrackProcessor : public emlite::Val {
    explicit MediaStreamTrackProcessor(Handle h) noexcept;
public:
    explicit MediaStreamTrackProcessor(const emlite::Val &val) noexcept;
    static MediaStreamTrackProcessor take_ownership(Handle h) noexcept;
    [[nodiscard]] MediaStreamTrackProcessor clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new MediaStreamTrackProcessor(..)` constructor, creating a new MediaStreamTrackProcessor instance
    MediaStreamTrackProcessor(const MediaStreamTrackProcessorInit& init);
    /// [`MediaStreamTrackProcessor.readable`](https://developer.mozilla.org/en-US/docs/Web/API/MediaStreamTrackProcessor/readable)
    /// [`MediaStreamTrackProcessor.readable`](https://developer.mozilla.org/en-US/docs/Web/API/MediaStreamTrackProcessor/readable)
    [[nodiscard]] ReadableStream readable() const;
};

} // namespace webbind