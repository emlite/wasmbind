#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "PermissionDescriptor.hpp"
#include "BluetoothLEScanFilterInit.hpp"

namespace webbind {

/// Dictionary type BluetoothLEScanPermissionDescriptor
class BluetoothLEScanPermissionDescriptor : public PermissionDescriptor {
  explicit BluetoothLEScanPermissionDescriptor(Handle h) noexcept;
public:
    static BluetoothLEScanPermissionDescriptor take_ownership(Handle h) noexcept;
    explicit BluetoothLEScanPermissionDescriptor(const emlite::Val &val) noexcept;
    BluetoothLEScanPermissionDescriptor() noexcept;
    [[nodiscard]] BluetoothLEScanPermissionDescriptor clone() const noexcept;
    /// Getter of the `filters` attribute.
    [[nodiscard]] jsbind::TypedArray<BluetoothLEScanFilterInit> filters() const;
    /// Setter of the `filters` attribute.
    void filters(const jsbind::TypedArray<BluetoothLEScanFilterInit>& value);
    /// Getter of the `keepRepeatedDevices` attribute.
    [[nodiscard]] bool keepRepeatedDevices() const;
    /// Setter of the `keepRepeatedDevices` attribute.
    void keepRepeatedDevices(bool value);
    /// Getter of the `acceptAllAdvertisements` attribute.
    [[nodiscard]] bool acceptAllAdvertisements() const;
    /// Setter of the `acceptAllAdvertisements` attribute.
    void acceptAllAdvertisements(bool value);
};

} // namespace webbind