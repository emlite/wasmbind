#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Event.hpp"
#include "DeviceOrientationEventInit.hpp"
#include "enums.hpp"

namespace webbind {

/// Interface DeviceOrientationEvent
/// [`DeviceOrientationEvent`](https://developer.mozilla.org/en-US/docs/Web/API/DeviceOrientationEvent)
class DeviceOrientationEvent : public Event {
    explicit DeviceOrientationEvent(Handle h) noexcept;
public:
    explicit DeviceOrientationEvent(const emlite::Val &val) noexcept;
    static DeviceOrientationEvent take_ownership(Handle h) noexcept;
    [[nodiscard]] DeviceOrientationEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new DeviceOrientationEvent(..)` constructor, creating a new DeviceOrientationEvent instance
    DeviceOrientationEvent(const jsbind::String& type);
    /// The `new DeviceOrientationEvent(..)` constructor, creating a new DeviceOrientationEvent instance
    DeviceOrientationEvent(const jsbind::String& type, const DeviceOrientationEventInit& eventInitDict);
    /// [`DeviceOrientationEvent.alpha`](https://developer.mozilla.org/en-US/docs/Web/API/DeviceOrientationEvent/alpha)
    /// [`DeviceOrientationEvent.alpha`](https://developer.mozilla.org/en-US/docs/Web/API/DeviceOrientationEvent/alpha)
    [[nodiscard]] double alpha() const;
    /// [`DeviceOrientationEvent.beta`](https://developer.mozilla.org/en-US/docs/Web/API/DeviceOrientationEvent/beta)
    /// [`DeviceOrientationEvent.beta`](https://developer.mozilla.org/en-US/docs/Web/API/DeviceOrientationEvent/beta)
    [[nodiscard]] double beta() const;
    /// [`DeviceOrientationEvent.gamma`](https://developer.mozilla.org/en-US/docs/Web/API/DeviceOrientationEvent/gamma)
    /// [`DeviceOrientationEvent.gamma`](https://developer.mozilla.org/en-US/docs/Web/API/DeviceOrientationEvent/gamma)
    [[nodiscard]] double gamma() const;
    /// [`DeviceOrientationEvent.absolute`](https://developer.mozilla.org/en-US/docs/Web/API/DeviceOrientationEvent/absolute)
    /// [`DeviceOrientationEvent.absolute`](https://developer.mozilla.org/en-US/docs/Web/API/DeviceOrientationEvent/absolute)
    [[nodiscard]] bool absolute() const;
    /// The requestPermission method.
    /// [`DeviceOrientationEvent.requestPermission`](https://developer.mozilla.org/en-US/docs/Web/API/DeviceOrientationEvent/requestPermission)
    static jsbind::Promise<PermissionState> requestPermission();
    /// The requestPermission method.
    /// [`DeviceOrientationEvent.requestPermission`](https://developer.mozilla.org/en-US/docs/Web/API/DeviceOrientationEvent/requestPermission)
    static jsbind::Promise<PermissionState> requestPermission(bool absolute);
};

} // namespace webbind