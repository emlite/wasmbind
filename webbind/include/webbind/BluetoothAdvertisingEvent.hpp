#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"

class BluetoothDevice;
class BluetoothManufacturerDataMap;
class BluetoothServiceDataMap;


class BluetoothAdvertisingEvent : public Event {
    explicit BluetoothAdvertisingEvent(Handle h) noexcept;

public:
    explicit BluetoothAdvertisingEvent(const emlite::Val &val) noexcept;
    static BluetoothAdvertisingEvent take_ownership(Handle h) noexcept;

    BluetoothAdvertisingEvent clone() const noexcept;
    BluetoothAdvertisingEvent(const jsbind::DOMString& type, const jsbind::Any& init);
    BluetoothDevice device() const;
    jsbind::FrozenArray<jsbind::Any> uuids() const;
    jsbind::DOMString name() const;
    unsigned short appearance() const;
    char txPower() const;
    char rssi() const;
    BluetoothManufacturerDataMap manufacturerData() const;
    BluetoothServiceDataMap serviceData() const;
};

