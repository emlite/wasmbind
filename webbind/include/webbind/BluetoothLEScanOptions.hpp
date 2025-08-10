#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "BluetoothLEScanFilterInit.hpp"

namespace webbind {

/// Dictionary type BluetoothLEScanOptions
/// [`BluetoothLEScanOptions`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothLEScanOptions)
class BluetoothLEScanOptions : public emlite::Val {
  explicit BluetoothLEScanOptions(Handle h) noexcept;
public:
    static BluetoothLEScanOptions take_ownership(Handle h) noexcept;
    explicit BluetoothLEScanOptions(const emlite::Val &val) noexcept;
    BluetoothLEScanOptions() noexcept;
    [[nodiscard]] BluetoothLEScanOptions clone() const noexcept;
    [[nodiscard]] jsbind::TypedArray<BluetoothLEScanFilterInit> filters() const;
    void filters(const jsbind::TypedArray<BluetoothLEScanFilterInit>& value);
    [[nodiscard]] bool keepRepeatedDevices() const;
    void keepRepeatedDevices(bool value);
    [[nodiscard]] bool acceptAllAdvertisements() const;
    void acceptAllAdvertisements(bool value);
};

} // namespace webbind