#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Event.hpp"

namespace webbind {

class AnimationPlaybackEventInit;

/// Interface AnimationPlaybackEvent
/// [`AnimationPlaybackEvent`](https://developer.mozilla.org/en-US/docs/Web/API/AnimationPlaybackEvent)
class AnimationPlaybackEvent : public Event {
    explicit AnimationPlaybackEvent(Handle h) noexcept;
public:
    explicit AnimationPlaybackEvent(const emlite::Val &val) noexcept;
    static AnimationPlaybackEvent take_ownership(Handle h) noexcept;
    [[nodiscard]] AnimationPlaybackEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new AnimationPlaybackEvent(..)` constructor, creating a new AnimationPlaybackEvent instance
    AnimationPlaybackEvent(const jsbind::String& type);
    /// The `new AnimationPlaybackEvent(..)` constructor, creating a new AnimationPlaybackEvent instance
    AnimationPlaybackEvent(const jsbind::String& type, const AnimationPlaybackEventInit& eventInitDict);
    /// [`AnimationPlaybackEvent.currentTime`](https://developer.mozilla.org/en-US/docs/Web/API/AnimationPlaybackEvent/currentTime)
    /// [`AnimationPlaybackEvent.currentTime`](https://developer.mozilla.org/en-US/docs/Web/API/AnimationPlaybackEvent/currentTime)
    [[nodiscard]] jsbind::Any currentTime() const;
    /// [`AnimationPlaybackEvent.timelineTime`](https://developer.mozilla.org/en-US/docs/Web/API/AnimationPlaybackEvent/timelineTime)
    /// [`AnimationPlaybackEvent.timelineTime`](https://developer.mozilla.org/en-US/docs/Web/API/AnimationPlaybackEvent/timelineTime)
    [[nodiscard]] jsbind::Any timelineTime() const;
};

} // namespace webbind