#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

class BluetoothDevice;
class BluetoothManufacturerDataMap;
class BluetoothServiceDataMap;

/// Dictionary type BluetoothAdvertisingEventInit
class BluetoothAdvertisingEventInit : public EventInit {
  explicit BluetoothAdvertisingEventInit(Handle h) noexcept;
public:
    static BluetoothAdvertisingEventInit take_ownership(Handle h) noexcept;
    explicit BluetoothAdvertisingEventInit(const emlite::Val &val) noexcept;
    BluetoothAdvertisingEventInit() noexcept;
    [[nodiscard]] BluetoothAdvertisingEventInit clone() const noexcept;
    /// Getter of the `device` attribute.
    [[nodiscard]] BluetoothDevice device() const;
    /// Setter of the `device` attribute.
    void device(const BluetoothDevice& value);
    /// Getter of the `uuids` attribute.
    [[nodiscard]] jsbind::TypedArray<jsbind::Any> uuids() const;
    /// Setter of the `uuids` attribute.
    void uuids(const jsbind::TypedArray<jsbind::Any>& value);
    /// Getter of the `name` attribute.
    [[nodiscard]] jsbind::String name() const;
    /// Setter of the `name` attribute.
    void name(const jsbind::String& value);
    /// Getter of the `appearance` attribute.
    [[nodiscard]] unsigned short appearance() const;
    /// Setter of the `appearance` attribute.
    void appearance(unsigned short value);
    /// Getter of the `txPower` attribute.
    [[nodiscard]] char txPower() const;
    /// Setter of the `txPower` attribute.
    void txPower(char value);
    /// Getter of the `rssi` attribute.
    [[nodiscard]] char rssi() const;
    /// Setter of the `rssi` attribute.
    void rssi(char value);
    /// Getter of the `manufacturerData` attribute.
    [[nodiscard]] BluetoothManufacturerDataMap manufacturerData() const;
    /// Setter of the `manufacturerData` attribute.
    void manufacturerData(const BluetoothManufacturerDataMap& value);
    /// Getter of the `serviceData` attribute.
    [[nodiscard]] BluetoothServiceDataMap serviceData() const;
    /// Setter of the `serviceData` attribute.
    void serviceData(const BluetoothServiceDataMap& value);
};

} // namespace webbind