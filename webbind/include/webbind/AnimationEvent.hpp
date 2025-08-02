#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"


/// The AnimationEvent class.
/// [`AnimationEvent`](https://developer.mozilla.org/en-US/docs/Web/API/AnimationEvent)
class AnimationEvent : public Event {
    explicit AnimationEvent(Handle h) noexcept;

public:
    explicit AnimationEvent(const emlite::Val &val) noexcept;
    static AnimationEvent take_ownership(Handle h) noexcept;

    [[nodiscard]] AnimationEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new AnimationEvent(..)` constructor, creating a new AnimationEvent instance
    AnimationEvent(const jsbind::String& type);
    /// The `new AnimationEvent(..)` constructor, creating a new AnimationEvent instance
    AnimationEvent(const jsbind::String& type, const jsbind::Any& animationEventInitDict);
    /// Getter of the `animationName` attribute.
    /// [`AnimationEvent.animationName`](https://developer.mozilla.org/en-US/docs/Web/API/AnimationEvent/animationName)
    [[nodiscard]] jsbind::String animationName() const;
    /// Getter of the `elapsedTime` attribute.
    /// [`AnimationEvent.elapsedTime`](https://developer.mozilla.org/en-US/docs/Web/API/AnimationEvent/elapsedTime)
    [[nodiscard]] double elapsedTime() const;
    /// Getter of the `pseudoElement` attribute.
    /// [`AnimationEvent.pseudoElement`](https://developer.mozilla.org/en-US/docs/Web/API/AnimationEvent/pseudoElement)
    [[nodiscard]] jsbind::String pseudoElement() const;
};

