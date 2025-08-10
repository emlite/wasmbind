#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Event.hpp"
#include "DeviceChangeEventInit.hpp"

namespace webbind {

class MediaDeviceInfo;

/// Interface DeviceChangeEvent
/// [`DeviceChangeEvent`](https://developer.mozilla.org/en-US/docs/Web/API/DeviceChangeEvent)
class DeviceChangeEvent : public Event {
    explicit DeviceChangeEvent(Handle h) noexcept;
public:
    explicit DeviceChangeEvent(const emlite::Val &val) noexcept;
    static DeviceChangeEvent take_ownership(Handle h) noexcept;
    [[nodiscard]] DeviceChangeEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new DeviceChangeEvent(..)` constructor, creating a new DeviceChangeEvent instance
    DeviceChangeEvent(const jsbind::String& type);
    /// The `new DeviceChangeEvent(..)` constructor, creating a new DeviceChangeEvent instance
    DeviceChangeEvent(const jsbind::String& type, const DeviceChangeEventInit& eventInitDict);
    /// [`DeviceChangeEvent.devices`](https://developer.mozilla.org/en-US/docs/Web/API/DeviceChangeEvent/devices)
    /// [`DeviceChangeEvent.devices`](https://developer.mozilla.org/en-US/docs/Web/API/DeviceChangeEvent/devices)
    [[nodiscard]] jsbind::TypedArray<MediaDeviceInfo> devices() const;
    /// [`DeviceChangeEvent.userInsertedDevices`](https://developer.mozilla.org/en-US/docs/Web/API/DeviceChangeEvent/userInsertedDevices)
    /// [`DeviceChangeEvent.userInsertedDevices`](https://developer.mozilla.org/en-US/docs/Web/API/DeviceChangeEvent/userInsertedDevices)
    [[nodiscard]] jsbind::TypedArray<MediaDeviceInfo> userInsertedDevices() const;
};

} // namespace webbind