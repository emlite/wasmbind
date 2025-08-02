#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"


/// The CharacterBoundsUpdateEvent class.
/// [`CharacterBoundsUpdateEvent`](https://developer.mozilla.org/en-US/docs/Web/API/CharacterBoundsUpdateEvent)
class CharacterBoundsUpdateEvent : public Event {
    explicit CharacterBoundsUpdateEvent(Handle h) noexcept;

public:
    explicit CharacterBoundsUpdateEvent(const emlite::Val &val) noexcept;
    static CharacterBoundsUpdateEvent take_ownership(Handle h) noexcept;

    [[nodiscard]] CharacterBoundsUpdateEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new CharacterBoundsUpdateEvent(..)` constructor, creating a new CharacterBoundsUpdateEvent instance
    CharacterBoundsUpdateEvent(const jsbind::String& type);
    /// The `new CharacterBoundsUpdateEvent(..)` constructor, creating a new CharacterBoundsUpdateEvent instance
    CharacterBoundsUpdateEvent(const jsbind::String& type, const jsbind::Any& options);
    /// Getter of the `rangeStart` attribute.
    /// [`CharacterBoundsUpdateEvent.rangeStart`](https://developer.mozilla.org/en-US/docs/Web/API/CharacterBoundsUpdateEvent/rangeStart)
    [[nodiscard]] unsigned long rangeStart() const;
    /// Getter of the `rangeEnd` attribute.
    /// [`CharacterBoundsUpdateEvent.rangeEnd`](https://developer.mozilla.org/en-US/docs/Web/API/CharacterBoundsUpdateEvent/rangeEnd)
    [[nodiscard]] unsigned long rangeEnd() const;
};

