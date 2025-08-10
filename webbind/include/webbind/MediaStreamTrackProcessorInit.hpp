#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class MediaStreamTrack;

/// Dictionary type MediaStreamTrackProcessorInit
class MediaStreamTrackProcessorInit : public emlite::Val {
  explicit MediaStreamTrackProcessorInit(Handle h) noexcept;
public:
    static MediaStreamTrackProcessorInit take_ownership(Handle h) noexcept;
    explicit MediaStreamTrackProcessorInit(const emlite::Val &val) noexcept;
    MediaStreamTrackProcessorInit() noexcept;
    [[nodiscard]] MediaStreamTrackProcessorInit clone() const noexcept;
    /// Getter of the `track` attribute.
    [[nodiscard]] MediaStreamTrack track() const;
    /// Setter of the `track` attribute.
    void track(const MediaStreamTrack& value);
    /// Getter of the `maxBufferSize` attribute.
    [[nodiscard]] unsigned short maxBufferSize() const;
    /// Setter of the `maxBufferSize` attribute.
    void maxBufferSize(unsigned short value);
};

} // namespace webbind