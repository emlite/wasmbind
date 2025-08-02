#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"

class MediaStreamTrack;


/// The MediaStreamTrackEvent class.
/// [`MediaStreamTrackEvent`](https://developer.mozilla.org/en-US/docs/Web/API/MediaStreamTrackEvent)
class MediaStreamTrackEvent : public Event {
    explicit MediaStreamTrackEvent(Handle h) noexcept;

public:
    explicit MediaStreamTrackEvent(const emlite::Val &val) noexcept;
    static MediaStreamTrackEvent take_ownership(Handle h) noexcept;

    [[nodiscard]] MediaStreamTrackEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new MediaStreamTrackEvent(..)` constructor, creating a new MediaStreamTrackEvent instance
    MediaStreamTrackEvent(const jsbind::String& type, const jsbind::Any& eventInitDict);
    /// Getter of the `track` attribute.
    /// [`MediaStreamTrackEvent.track`](https://developer.mozilla.org/en-US/docs/Web/API/MediaStreamTrackEvent/track)
    [[nodiscard]] MediaStreamTrack track() const;
};

