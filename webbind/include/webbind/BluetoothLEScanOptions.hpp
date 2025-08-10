#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "BluetoothLEScanFilterInit.hpp"

namespace webbind {

/// Dictionary type BluetoothLEScanOptions
class BluetoothLEScanOptions : public emlite::Val {
  explicit BluetoothLEScanOptions(Handle h) noexcept;
public:
    static BluetoothLEScanOptions take_ownership(Handle h) noexcept;
    explicit BluetoothLEScanOptions(const emlite::Val &val) noexcept;
    BluetoothLEScanOptions() noexcept;
    [[nodiscard]] BluetoothLEScanOptions clone() const noexcept;
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