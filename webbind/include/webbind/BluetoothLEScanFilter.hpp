#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "BluetoothLEScanFilterInit.hpp"

namespace webbind {

class BluetoothManufacturerDataFilter;
class BluetoothServiceDataFilter;

/// Interface BluetoothLEScanFilter
/// [`BluetoothLEScanFilter`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothLEScanFilter)
class BluetoothLEScanFilter : public emlite::Val {
    explicit BluetoothLEScanFilter(Handle h) noexcept;
public:
    explicit BluetoothLEScanFilter(const emlite::Val &val) noexcept;
    static BluetoothLEScanFilter take_ownership(Handle h) noexcept;
    [[nodiscard]] BluetoothLEScanFilter clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new BluetoothLEScanFilter(..)` constructor, creating a new BluetoothLEScanFilter instance
    BluetoothLEScanFilter();
    /// The `new BluetoothLEScanFilter(..)` constructor, creating a new BluetoothLEScanFilter instance
    BluetoothLEScanFilter(const BluetoothLEScanFilterInit& init);
    /// Getter of the `name` attribute.
    /// [`BluetoothLEScanFilter.name`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothLEScanFilter/name)
    [[nodiscard]] jsbind::String name() const;
    /// Getter of the `namePrefix` attribute.
    /// [`BluetoothLEScanFilter.namePrefix`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothLEScanFilter/namePrefix)
    [[nodiscard]] jsbind::String namePrefix() const;
    /// Getter of the `services` attribute.
    /// [`BluetoothLEScanFilter.services`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothLEScanFilter/services)
    [[nodiscard]] jsbind::TypedArray<jsbind::Any> services() const;
    /// Getter of the `manufacturerData` attribute.
    /// [`BluetoothLEScanFilter.manufacturerData`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothLEScanFilter/manufacturerData)
    [[nodiscard]] BluetoothManufacturerDataFilter manufacturerData() const;
    /// Getter of the `serviceData` attribute.
    /// [`BluetoothLEScanFilter.serviceData`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothLEScanFilter/serviceData)
    [[nodiscard]] BluetoothServiceDataFilter serviceData() const;
};

} // namespace webbind