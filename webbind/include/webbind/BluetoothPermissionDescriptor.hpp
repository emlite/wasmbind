#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "PermissionDescriptor.hpp"
#include "BluetoothLEScanFilterInit.hpp"

namespace webbind {

/// Dictionary type BluetoothPermissionDescriptor
/// [`BluetoothPermissionDescriptor`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothPermissionDescriptor)
class BluetoothPermissionDescriptor : public PermissionDescriptor {
  explicit BluetoothPermissionDescriptor(Handle h) noexcept;
public:
    static BluetoothPermissionDescriptor take_ownership(Handle h) noexcept;
    explicit BluetoothPermissionDescriptor(const emlite::Val &val) noexcept;
    BluetoothPermissionDescriptor() noexcept;
    [[nodiscard]] BluetoothPermissionDescriptor clone() const noexcept;
    [[nodiscard]] jsbind::String deviceId() const;
    void deviceId(const jsbind::String& value);
    [[nodiscard]] jsbind::TypedArray<BluetoothLEScanFilterInit> filters() const;
    void filters(const jsbind::TypedArray<BluetoothLEScanFilterInit>& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::Any> optionalServices() const;
    void optionalServices(const jsbind::TypedArray<jsbind::Any>& value);
    [[nodiscard]] jsbind::TypedArray<unsigned short> optionalManufacturerData() const;
    void optionalManufacturerData(jsbind::TypedArray<unsigned short> value);
    [[nodiscard]] bool acceptAllDevices() const;
    void acceptAllDevices(bool value);
};

} // namespace webbind