#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type AllowedBluetoothDevice
class AllowedBluetoothDevice : public emlite::Val {
  explicit AllowedBluetoothDevice(Handle h) noexcept;
public:
    static AllowedBluetoothDevice take_ownership(Handle h) noexcept;
    explicit AllowedBluetoothDevice(const emlite::Val &val) noexcept;
    AllowedBluetoothDevice() noexcept;
    [[nodiscard]] AllowedBluetoothDevice clone() const noexcept;
    /// Getter of the `deviceId` attribute.
    [[nodiscard]] jsbind::String deviceId() const;
    /// Setter of the `deviceId` attribute.
    void deviceId(const jsbind::String& value);
    /// Getter of the `mayUseGATT` attribute.
    [[nodiscard]] bool mayUseGATT() const;
    /// Setter of the `mayUseGATT` attribute.
    void mayUseGATT(bool value);
    /// Getter of the `allowedServices` attribute.
    [[nodiscard]] jsbind::Any allowedServices() const;
    /// Setter of the `allowedServices` attribute.
    void allowedServices(const jsbind::Any& value);
    /// Getter of the `allowedManufacturerData` attribute.
    [[nodiscard]] jsbind::TypedArray<unsigned short> allowedManufacturerData() const;
    /// Setter of the `allowedManufacturerData` attribute.
    void allowedManufacturerData(jsbind::TypedArray<unsigned short> value);
};

} // namespace webbind