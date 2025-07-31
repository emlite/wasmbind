#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"

class HIDDevice;


/// The HIDConnectionEvent class.
/// [`HIDConnectionEvent`](https://developer.mozilla.org/en-US/docs/Web/API/HIDConnectionEvent)
class HIDConnectionEvent : public Event {
    explicit HIDConnectionEvent(Handle h) noexcept;

public:
    explicit HIDConnectionEvent(const emlite::Val &val) noexcept;
    static HIDConnectionEvent take_ownership(Handle h) noexcept;

    [[nodiscard]] HIDConnectionEvent clone() const noexcept;
    /// The `new HIDConnectionEvent(..)` constructor, creating a new HIDConnectionEvent instance
    HIDConnectionEvent(const jsbind::String& type, const jsbind::Any& eventInitDict);
    /// Getter of the `device` attribute.
    /// [`HIDConnectionEvent.device`](https://developer.mozilla.org/en-US/docs/Web/API/HIDConnectionEvent/device)
    [[nodiscard]] HIDDevice device() const;
};

