#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type AllowedBluetoothDevice
/// [`AllowedBluetoothDevice`](https://developer.mozilla.org/en-US/docs/Web/API/AllowedBluetoothDevice)
class AllowedBluetoothDevice : public emlite::Val {
  explicit AllowedBluetoothDevice(Handle h) noexcept;
public:
    static AllowedBluetoothDevice take_ownership(Handle h) noexcept;
    explicit AllowedBluetoothDevice(const emlite::Val &val) noexcept;
    AllowedBluetoothDevice() noexcept;
    [[nodiscard]] AllowedBluetoothDevice clone() const noexcept;
    [[nodiscard]] jsbind::String deviceId() const;
    void deviceId(const jsbind::String& value);
    [[nodiscard]] bool mayUseGATT() const;
    void mayUseGATT(bool value);
    [[nodiscard]] jsbind::Any allowedServices() const;
    void allowedServices(const jsbind::Any& value);
    [[nodiscard]] jsbind::TypedArray<unsigned short> allowedManufacturerData() const;
    void allowedManufacturerData(jsbind::TypedArray<unsigned short> value);
};

} // namespace webbind