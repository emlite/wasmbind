#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class BluetoothLEScanFilter;

/// Interface BluetoothLEScan
/// [`BluetoothLEScan`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothLEScan)
class BluetoothLEScan : public emlite::Val {
    explicit BluetoothLEScan(Handle h) noexcept;
public:
    explicit BluetoothLEScan(const emlite::Val &val) noexcept;
    static BluetoothLEScan take_ownership(Handle h) noexcept;
    [[nodiscard]] BluetoothLEScan clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `filters` attribute.
    /// [`BluetoothLEScan.filters`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothLEScan/filters)
    [[nodiscard]] jsbind::TypedArray<BluetoothLEScanFilter> filters() const;
    /// Getter of the `keepRepeatedDevices` attribute.
    /// [`BluetoothLEScan.keepRepeatedDevices`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothLEScan/keepRepeatedDevices)
    [[nodiscard]] bool keepRepeatedDevices() const;
    /// Getter of the `acceptAllAdvertisements` attribute.
    /// [`BluetoothLEScan.acceptAllAdvertisements`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothLEScan/acceptAllAdvertisements)
    [[nodiscard]] bool acceptAllAdvertisements() const;
    /// Getter of the `active` attribute.
    /// [`BluetoothLEScan.active`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothLEScan/active)
    [[nodiscard]] bool active() const;
    /// The stop method.
    /// [`BluetoothLEScan.stop`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothLEScan/stop)
    jsbind::Undefined stop();
};

} // namespace webbind