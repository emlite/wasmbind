#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"

class MediaDeviceInfo;


class DeviceChangeEvent : public Event {
    explicit DeviceChangeEvent(Handle h) noexcept;

public:
    explicit DeviceChangeEvent(const emlite::Val &val) noexcept;
    static DeviceChangeEvent take_ownership(Handle h) noexcept;

    DeviceChangeEvent clone() const noexcept;
    DeviceChangeEvent(const jsbind::DOMString& type);
    DeviceChangeEvent(const jsbind::DOMString& type, const jsbind::Any& eventInitDict);
    jsbind::FrozenArray<MediaDeviceInfo> devices() const;
    jsbind::FrozenArray<MediaDeviceInfo> userInsertedDevices() const;
};

