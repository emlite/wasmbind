#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"

class BluetoothDevice;
class BluetoothManufacturerDataMap;
class BluetoothServiceDataMap;


/// The BluetoothAdvertisingEvent class.
/// [`BluetoothAdvertisingEvent`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothAdvertisingEvent)
class BluetoothAdvertisingEvent : public Event {
    explicit BluetoothAdvertisingEvent(Handle h) noexcept;

public:
    explicit BluetoothAdvertisingEvent(const emlite::Val &val) noexcept;
    static BluetoothAdvertisingEvent take_ownership(Handle h) noexcept;

    [[nodiscard]] BluetoothAdvertisingEvent clone() const noexcept;
    /// The `new BluetoothAdvertisingEvent(..)` constructor, creating a new BluetoothAdvertisingEvent instance
    BluetoothAdvertisingEvent(const jsbind::String& type, const jsbind::Any& init);
    /// Getter of the `device` attribute.
    /// [`BluetoothAdvertisingEvent.device`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothAdvertisingEvent/device)
    [[nodiscard]] BluetoothDevice device() const;
    /// Getter of the `uuids` attribute.
    /// [`BluetoothAdvertisingEvent.uuids`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothAdvertisingEvent/uuids)
    [[nodiscard]] jsbind::TypedArray<jsbind::Any> uuids() const;
    /// Getter of the `name` attribute.
    /// [`BluetoothAdvertisingEvent.name`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothAdvertisingEvent/name)
    [[nodiscard]] jsbind::String name() const;
    /// Getter of the `appearance` attribute.
    /// [`BluetoothAdvertisingEvent.appearance`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothAdvertisingEvent/appearance)
    [[nodiscard]] unsigned short appearance() const;
    /// Getter of the `txPower` attribute.
    /// [`BluetoothAdvertisingEvent.txPower`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothAdvertisingEvent/txPower)
    [[nodiscard]] char txPower() const;
    /// Getter of the `rssi` attribute.
    /// [`BluetoothAdvertisingEvent.rssi`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothAdvertisingEvent/rssi)
    [[nodiscard]] char rssi() const;
    /// Getter of the `manufacturerData` attribute.
    /// [`BluetoothAdvertisingEvent.manufacturerData`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothAdvertisingEvent/manufacturerData)
    [[nodiscard]] BluetoothManufacturerDataMap manufacturerData() const;
    /// Getter of the `serviceData` attribute.
    /// [`BluetoothAdvertisingEvent.serviceData`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothAdvertisingEvent/serviceData)
    [[nodiscard]] BluetoothServiceDataMap serviceData() const;
};

