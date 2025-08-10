#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Event.hpp"

namespace webbind {

class HIDConnectionEventInit;
class HIDDevice;

/// Interface HIDConnectionEvent
/// [`HIDConnectionEvent`](https://developer.mozilla.org/en-US/docs/Web/API/HIDConnectionEvent)
class HIDConnectionEvent : public Event {
    explicit HIDConnectionEvent(Handle h) noexcept;
public:
    explicit HIDConnectionEvent(const emlite::Val &val) noexcept;
    static HIDConnectionEvent take_ownership(Handle h) noexcept;
    [[nodiscard]] HIDConnectionEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new HIDConnectionEvent(..)` constructor, creating a new HIDConnectionEvent instance
    HIDConnectionEvent(const jsbind::String& type, const HIDConnectionEventInit& eventInitDict);
    /// [`HIDConnectionEvent.device`](https://developer.mozilla.org/en-US/docs/Web/API/HIDConnectionEvent/device)
    /// [`HIDConnectionEvent.device`](https://developer.mozilla.org/en-US/docs/Web/API/HIDConnectionEvent/device)
    [[nodiscard]] HIDDevice device() const;
};

} // namespace webbind