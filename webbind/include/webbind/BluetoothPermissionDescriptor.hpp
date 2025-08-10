#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "PermissionDescriptor.hpp"

namespace webbind {

class BluetoothLEScanFilterInit;

/// Dictionary type BluetoothPermissionDescriptor
class BluetoothPermissionDescriptor : public PermissionDescriptor {
  explicit BluetoothPermissionDescriptor(Handle h) noexcept;
public:
    static BluetoothPermissionDescriptor take_ownership(Handle h) noexcept;
    explicit BluetoothPermissionDescriptor(const emlite::Val &val) noexcept;
    BluetoothPermissionDescriptor() noexcept;
    [[nodiscard]] BluetoothPermissionDescriptor clone() const noexcept;
    /// Getter of the `deviceId` attribute.
    [[nodiscard]] jsbind::String deviceId() const;
    /// Setter of the `deviceId` attribute.
    void deviceId(const jsbind::String& value);
    /// Getter of the `filters` attribute.
    [[nodiscard]] jsbind::TypedArray<BluetoothLEScanFilterInit> filters() const;
    /// Setter of the `filters` attribute.
    void filters(const jsbind::TypedArray<BluetoothLEScanFilterInit>& value);
    /// Getter of the `optionalServices` attribute.
    [[nodiscard]] jsbind::TypedArray<jsbind::Any> optionalServices() const;
    /// Setter of the `optionalServices` attribute.
    void optionalServices(const jsbind::TypedArray<jsbind::Any>& value);
    /// Getter of the `optionalManufacturerData` attribute.
    [[nodiscard]] jsbind::TypedArray<unsigned short> optionalManufacturerData() const;
    /// Setter of the `optionalManufacturerData` attribute.
    void optionalManufacturerData(jsbind::TypedArray<unsigned short> value);
    /// Getter of the `acceptAllDevices` attribute.
    [[nodiscard]] bool acceptAllDevices() const;
    /// Setter of the `acceptAllDevices` attribute.
    void acceptAllDevices(bool value);
};

} // namespace webbind