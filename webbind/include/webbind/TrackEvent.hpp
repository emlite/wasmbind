#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Event.hpp"

namespace webbind {

class TrackEventInit;

/// Interface TrackEvent
/// [`TrackEvent`](https://developer.mozilla.org/en-US/docs/Web/API/TrackEvent)
class TrackEvent : public Event {
    explicit TrackEvent(Handle h) noexcept;
public:
    explicit TrackEvent(const emlite::Val &val) noexcept;
    static TrackEvent take_ownership(Handle h) noexcept;
    [[nodiscard]] TrackEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new TrackEvent(..)` constructor, creating a new TrackEvent instance
    TrackEvent(const jsbind::String& type);
    /// The `new TrackEvent(..)` constructor, creating a new TrackEvent instance
    TrackEvent(const jsbind::String& type, const TrackEventInit& eventInitDict);
    /// [`TrackEvent.track`](https://developer.mozilla.org/en-US/docs/Web/API/TrackEvent/track)
    /// [`TrackEvent.track`](https://developer.mozilla.org/en-US/docs/Web/API/TrackEvent/track)
    [[nodiscard]] jsbind::Any track() const;
};

} // namespace webbind