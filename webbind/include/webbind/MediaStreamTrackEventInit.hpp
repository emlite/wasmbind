#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

class MediaStreamTrack;

/// Dictionary type MediaStreamTrackEventInit
class MediaStreamTrackEventInit : public EventInit {
  explicit MediaStreamTrackEventInit(Handle h) noexcept;
public:
    static MediaStreamTrackEventInit take_ownership(Handle h) noexcept;
    explicit MediaStreamTrackEventInit(const emlite::Val &val) noexcept;
    MediaStreamTrackEventInit() noexcept;
    [[nodiscard]] MediaStreamTrackEventInit clone() const noexcept;
    /// Getter of the `track` attribute.
    [[nodiscard]] MediaStreamTrack track() const;
    /// Setter of the `track` attribute.
    void track(const MediaStreamTrack& value);
};

} // namespace webbind