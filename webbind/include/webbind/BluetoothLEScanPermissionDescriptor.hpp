#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "PermissionDescriptor.hpp"
#include "BluetoothLEScanFilterInit.hpp"

namespace webbind {

/// Dictionary type BluetoothLEScanPermissionDescriptor
/// [`BluetoothLEScanPermissionDescriptor`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothLEScanPermissionDescriptor)
class BluetoothLEScanPermissionDescriptor : public PermissionDescriptor {
  explicit BluetoothLEScanPermissionDescriptor(Handle h) noexcept;
public:
    static BluetoothLEScanPermissionDescriptor take_ownership(Handle h) noexcept;
    explicit BluetoothLEScanPermissionDescriptor(const emlite::Val &val) noexcept;
    BluetoothLEScanPermissionDescriptor() noexcept;
    [[nodiscard]] BluetoothLEScanPermissionDescriptor clone() const noexcept;
    [[nodiscard]] jsbind::TypedArray<BluetoothLEScanFilterInit> filters() const;
    void filters(const jsbind::TypedArray<BluetoothLEScanFilterInit>& value);
    [[nodiscard]] bool keepRepeatedDevices() const;
    void keepRepeatedDevices(bool value);
    [[nodiscard]] bool acceptAllAdvertisements() const;
    void acceptAllAdvertisements(bool value);
};

} // namespace webbind