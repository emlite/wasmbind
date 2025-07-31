#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"

class USBDevice;


/// The USBConnectionEvent class.
/// [`USBConnectionEvent`](https://developer.mozilla.org/en-US/docs/Web/API/USBConnectionEvent)
class USBConnectionEvent : public Event {
    explicit USBConnectionEvent(Handle h) noexcept;

public:
    explicit USBConnectionEvent(const emlite::Val &val) noexcept;
    static USBConnectionEvent take_ownership(Handle h) noexcept;

    [[nodiscard]] USBConnectionEvent clone() const noexcept;
    /// The `new USBConnectionEvent(..)` constructor, creating a new USBConnectionEvent instance
    USBConnectionEvent(const jsbind::String& type, const jsbind::Any& eventInitDict);
    /// Getter of the `device` attribute.
    /// [`USBConnectionEvent.device`](https://developer.mozilla.org/en-US/docs/Web/API/USBConnectionEvent/device)
    [[nodiscard]] USBDevice device() const;
};

