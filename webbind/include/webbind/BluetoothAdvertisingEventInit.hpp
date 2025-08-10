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
/// [`BluetoothAdvertisingEventInit`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothAdvertisingEventInit)
class BluetoothAdvertisingEventInit : public EventInit {
  explicit BluetoothAdvertisingEventInit(Handle h) noexcept;
public:
    static BluetoothAdvertisingEventInit take_ownership(Handle h) noexcept;
    explicit BluetoothAdvertisingEventInit(const emlite::Val &val) noexcept;
    BluetoothAdvertisingEventInit() noexcept;
    [[nodiscard]] BluetoothAdvertisingEventInit clone() const noexcept;
    [[nodiscard]] BluetoothDevice device() const;
    void device(const BluetoothDevice& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::Any> uuids() const;
    void uuids(const jsbind::TypedArray<jsbind::Any>& value);
    [[nodiscard]] jsbind::String name() const;
    void name(const jsbind::String& value);
    [[nodiscard]] unsigned short appearance() const;
    void appearance(unsigned short value);
    [[nodiscard]] char txPower() const;
    void txPower(char value);
    [[nodiscard]] char rssi() const;
    void rssi(char value);
    [[nodiscard]] BluetoothManufacturerDataMap manufacturerData() const;
    void manufacturerData(const BluetoothManufacturerDataMap& value);
    [[nodiscard]] BluetoothServiceDataMap serviceData() const;
    void serviceData(const BluetoothServiceDataMap& value);
};

} // namespace webbind