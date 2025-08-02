#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"

class MediaDeviceInfo;


/// The DeviceChangeEvent class.
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
    DeviceChangeEvent(const jsbind::String& type, const jsbind::Any& eventInitDict);
    /// Getter of the `devices` attribute.
    /// [`DeviceChangeEvent.devices`](https://developer.mozilla.org/en-US/docs/Web/API/DeviceChangeEvent/devices)
    [[nodiscard]] jsbind::TypedArray<MediaDeviceInfo> devices() const;
    /// Getter of the `userInsertedDevices` attribute.
    /// [`DeviceChangeEvent.userInsertedDevices`](https://developer.mozilla.org/en-US/docs/Web/API/DeviceChangeEvent/userInsertedDevices)
    [[nodiscard]] jsbind::TypedArray<MediaDeviceInfo> userInsertedDevices() const;
};

