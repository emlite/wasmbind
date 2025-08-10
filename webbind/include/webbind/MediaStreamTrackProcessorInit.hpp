#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class MediaStreamTrack;

/// Dictionary type MediaStreamTrackProcessorInit
/// [`MediaStreamTrackProcessorInit`](https://developer.mozilla.org/en-US/docs/Web/API/MediaStreamTrackProcessorInit)
class MediaStreamTrackProcessorInit : public emlite::Val {
  explicit MediaStreamTrackProcessorInit(Handle h) noexcept;
public:
    static MediaStreamTrackProcessorInit take_ownership(Handle h) noexcept;
    explicit MediaStreamTrackProcessorInit(const emlite::Val &val) noexcept;
    MediaStreamTrackProcessorInit() noexcept;
    [[nodiscard]] MediaStreamTrackProcessorInit clone() const noexcept;
    [[nodiscard]] MediaStreamTrack track() const;
    void track(const MediaStreamTrack& value);
    [[nodiscard]] unsigned short maxBufferSize() const;
    void maxBufferSize(unsigned short value);
};

} // namespace webbind