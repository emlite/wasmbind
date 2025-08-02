#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"


/// The AnimationPlaybackEvent class.
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
    AnimationPlaybackEvent(const jsbind::String& type, const jsbind::Any& eventInitDict);
    /// Getter of the `currentTime` attribute.
    /// [`AnimationPlaybackEvent.currentTime`](https://developer.mozilla.org/en-US/docs/Web/API/AnimationPlaybackEvent/currentTime)
    [[nodiscard]] jsbind::Any currentTime() const;
    /// Getter of the `timelineTime` attribute.
    /// [`AnimationPlaybackEvent.timelineTime`](https://developer.mozilla.org/en-US/docs/Web/API/AnimationPlaybackEvent/timelineTime)
    [[nodiscard]] jsbind::Any timelineTime() const;
};

