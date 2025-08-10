#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Event.hpp"
#include "USBConnectionEventInit.hpp"

namespace webbind {

class USBDevice;

/// Interface USBConnectionEvent
/// [`USBConnectionEvent`](https://developer.mozilla.org/en-US/docs/Web/API/USBConnectionEvent)
class USBConnectionEvent : public Event {
    explicit USBConnectionEvent(Handle h) noexcept;
public:
    explicit USBConnectionEvent(const emlite::Val &val) noexcept;
    static USBConnectionEvent take_ownership(Handle h) noexcept;
    [[nodiscard]] USBConnectionEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new USBConnectionEvent(..)` constructor, creating a new USBConnectionEvent instance
    USBConnectionEvent(const jsbind::String& type, const USBConnectionEventInit& eventInitDict);
    /// [`USBConnectionEvent.device`](https://developer.mozilla.org/en-US/docs/Web/API/USBConnectionEvent/device)
    /// [`USBConnectionEvent.device`](https://developer.mozilla.org/en-US/docs/Web/API/USBConnectionEvent/device)
    [[nodiscard]] USBDevice device() const;
};

} // namespace webbind