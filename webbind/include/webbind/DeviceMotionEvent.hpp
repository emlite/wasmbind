#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Event.hpp"
#include "DeviceMotionEventInit.hpp"
#include "enums.hpp"

namespace webbind {

class DeviceMotionEventAcceleration;
class DeviceMotionEventRotationRate;

/// Interface DeviceMotionEvent
/// [`DeviceMotionEvent`](https://developer.mozilla.org/en-US/docs/Web/API/DeviceMotionEvent)
class DeviceMotionEvent : public Event {
    explicit DeviceMotionEvent(Handle h) noexcept;
public:
    explicit DeviceMotionEvent(const emlite::Val &val) noexcept;
    static DeviceMotionEvent take_ownership(Handle h) noexcept;
    [[nodiscard]] DeviceMotionEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new DeviceMotionEvent(..)` constructor, creating a new DeviceMotionEvent instance
    DeviceMotionEvent(const jsbind::String& type);
    /// The `new DeviceMotionEvent(..)` constructor, creating a new DeviceMotionEvent instance
    DeviceMotionEvent(const jsbind::String& type, const DeviceMotionEventInit& eventInitDict);
    /// [`DeviceMotionEvent.acceleration`](https://developer.mozilla.org/en-US/docs/Web/API/DeviceMotionEvent/acceleration)
    /// [`DeviceMotionEvent.acceleration`](https://developer.mozilla.org/en-US/docs/Web/API/DeviceMotionEvent/acceleration)
    [[nodiscard]] DeviceMotionEventAcceleration acceleration() const;
    /// [`DeviceMotionEvent.accelerationIncludingGravity`](https://developer.mozilla.org/en-US/docs/Web/API/DeviceMotionEvent/accelerationIncludingGravity)
    /// [`DeviceMotionEvent.accelerationIncludingGravity`](https://developer.mozilla.org/en-US/docs/Web/API/DeviceMotionEvent/accelerationIncludingGravity)
    [[nodiscard]] DeviceMotionEventAcceleration accelerationIncludingGravity() const;
    /// [`DeviceMotionEvent.rotationRate`](https://developer.mozilla.org/en-US/docs/Web/API/DeviceMotionEvent/rotationRate)
    /// [`DeviceMotionEvent.rotationRate`](https://developer.mozilla.org/en-US/docs/Web/API/DeviceMotionEvent/rotationRate)
    [[nodiscard]] DeviceMotionEventRotationRate rotationRate() const;
    /// [`DeviceMotionEvent.interval`](https://developer.mozilla.org/en-US/docs/Web/API/DeviceMotionEvent/interval)
    /// [`DeviceMotionEvent.interval`](https://developer.mozilla.org/en-US/docs/Web/API/DeviceMotionEvent/interval)
    [[nodiscard]] double interval() const;
    /// The requestPermission method.
    /// [`DeviceMotionEvent.requestPermission`](https://developer.mozilla.org/en-US/docs/Web/API/DeviceMotionEvent/requestPermission)
    static jsbind::Promise<PermissionState> requestPermission();
};

} // namespace webbind