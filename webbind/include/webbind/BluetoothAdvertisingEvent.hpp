#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Event.hpp"

namespace webbind {

class BluetoothAdvertisingEventInit;
class BluetoothDevice;
class BluetoothManufacturerDataMap;
class BluetoothServiceDataMap;

/// Interface BluetoothAdvertisingEvent
/// [`BluetoothAdvertisingEvent`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothAdvertisingEvent)
class BluetoothAdvertisingEvent : public Event {
    explicit BluetoothAdvertisingEvent(Handle h) noexcept;
public:
    explicit BluetoothAdvertisingEvent(const emlite::Val &val) noexcept;
    static BluetoothAdvertisingEvent take_ownership(Handle h) noexcept;
    [[nodiscard]] BluetoothAdvertisingEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new BluetoothAdvertisingEvent(..)` constructor, creating a new BluetoothAdvertisingEvent instance
    BluetoothAdvertisingEvent(const jsbind::String& type, const BluetoothAdvertisingEventInit& init);
    /// [`BluetoothAdvertisingEvent.device`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothAdvertisingEvent/device)
    /// [`BluetoothAdvertisingEvent.device`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothAdvertisingEvent/device)
    [[nodiscard]] BluetoothDevice device() const;
    /// [`BluetoothAdvertisingEvent.uuids`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothAdvertisingEvent/uuids)
    /// [`BluetoothAdvertisingEvent.uuids`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothAdvertisingEvent/uuids)
    [[nodiscard]] jsbind::TypedArray<jsbind::Any> uuids() const;
    /// [`BluetoothAdvertisingEvent.name`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothAdvertisingEvent/name)
    /// [`BluetoothAdvertisingEvent.name`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothAdvertisingEvent/name)
    [[nodiscard]] jsbind::String name() const;
    /// [`BluetoothAdvertisingEvent.appearance`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothAdvertisingEvent/appearance)
    /// [`BluetoothAdvertisingEvent.appearance`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothAdvertisingEvent/appearance)
    [[nodiscard]] unsigned short appearance() const;
    /// [`BluetoothAdvertisingEvent.txPower`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothAdvertisingEvent/txPower)
    /// [`BluetoothAdvertisingEvent.txPower`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothAdvertisingEvent/txPower)
    [[nodiscard]] char txPower() const;
    /// [`BluetoothAdvertisingEvent.rssi`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothAdvertisingEvent/rssi)
    /// [`BluetoothAdvertisingEvent.rssi`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothAdvertisingEvent/rssi)
    [[nodiscard]] char rssi() const;
    /// [`BluetoothAdvertisingEvent.manufacturerData`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothAdvertisingEvent/manufacturerData)
    /// [`BluetoothAdvertisingEvent.manufacturerData`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothAdvertisingEvent/manufacturerData)
    [[nodiscard]] BluetoothManufacturerDataMap manufacturerData() const;
    /// [`BluetoothAdvertisingEvent.serviceData`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothAdvertisingEvent/serviceData)
    /// [`BluetoothAdvertisingEvent.serviceData`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothAdvertisingEvent/serviceData)
    [[nodiscard]] BluetoothServiceDataMap serviceData() const;
};

} // namespace webbind