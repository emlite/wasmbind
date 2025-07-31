#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"


/// The DeviceOrientationEvent class.
/// [`DeviceOrientationEvent`](https://developer.mozilla.org/en-US/docs/Web/API/DeviceOrientationEvent)
class DeviceOrientationEvent : public Event {
    explicit DeviceOrientationEvent(Handle h) noexcept;

public:
    explicit DeviceOrientationEvent(const emlite::Val &val) noexcept;
    static DeviceOrientationEvent take_ownership(Handle h) noexcept;

    [[nodiscard]] DeviceOrientationEvent clone() const noexcept;
    /// The `new DeviceOrientationEvent(..)` constructor, creating a new DeviceOrientationEvent instance
    DeviceOrientationEvent(const jsbind::String& type);
    /// The `new DeviceOrientationEvent(..)` constructor, creating a new DeviceOrientationEvent instance
    DeviceOrientationEvent(const jsbind::String& type, const jsbind::Any& eventInitDict);
    /// Getter of the `alpha` attribute.
    /// [`DeviceOrientationEvent.alpha`](https://developer.mozilla.org/en-US/docs/Web/API/DeviceOrientationEvent/alpha)
    [[nodiscard]] double alpha() const;
    /// Getter of the `beta` attribute.
    /// [`DeviceOrientationEvent.beta`](https://developer.mozilla.org/en-US/docs/Web/API/DeviceOrientationEvent/beta)
    [[nodiscard]] double beta() const;
    /// Getter of the `gamma` attribute.
    /// [`DeviceOrientationEvent.gamma`](https://developer.mozilla.org/en-US/docs/Web/API/DeviceOrientationEvent/gamma)
    [[nodiscard]] double gamma() const;
    /// Getter of the `absolute` attribute.
    /// [`DeviceOrientationEvent.absolute`](https://developer.mozilla.org/en-US/docs/Web/API/DeviceOrientationEvent/absolute)
    [[nodiscard]] bool absolute() const;
    /// The requestPermission method.
    /// [`DeviceOrientationEvent.requestPermission`](https://developer.mozilla.org/en-US/docs/Web/API/DeviceOrientationEvent/requestPermission)
    static jsbind::Promise<PermissionState> requestPermission();
    /// The requestPermission method.
    /// [`DeviceOrientationEvent.requestPermission`](https://developer.mozilla.org/en-US/docs/Web/API/DeviceOrientationEvent/requestPermission)
    static jsbind::Promise<PermissionState> requestPermission(bool absolute);
};

