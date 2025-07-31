#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"


/// The TrackEvent class.
/// [`TrackEvent`](https://developer.mozilla.org/en-US/docs/Web/API/TrackEvent)
class TrackEvent : public Event {
    explicit TrackEvent(Handle h) noexcept;

public:
    explicit TrackEvent(const emlite::Val &val) noexcept;
    static TrackEvent take_ownership(Handle h) noexcept;

    [[nodiscard]] TrackEvent clone() const noexcept;
    /// The `new TrackEvent(..)` constructor, creating a new TrackEvent instance
    TrackEvent(const jsbind::String& type);
    /// The `new TrackEvent(..)` constructor, creating a new TrackEvent instance
    TrackEvent(const jsbind::String& type, const jsbind::Any& eventInitDict);
    /// Getter of the `track` attribute.
    /// [`TrackEvent.track`](https://developer.mozilla.org/en-US/docs/Web/API/TrackEvent/track)
    [[nodiscard]] jsbind::Any track() const;
};

