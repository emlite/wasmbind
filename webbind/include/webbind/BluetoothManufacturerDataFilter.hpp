#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The BluetoothManufacturerDataFilter class.
/// [`BluetoothManufacturerDataFilter`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothManufacturerDataFilter)
class BluetoothManufacturerDataFilter : public emlite::Val {
    explicit BluetoothManufacturerDataFilter(Handle h) noexcept;

public:
    explicit BluetoothManufacturerDataFilter(const emlite::Val &val) noexcept;
    static BluetoothManufacturerDataFilter take_ownership(Handle h) noexcept;

    [[nodiscard]] BluetoothManufacturerDataFilter clone() const noexcept;
    /// The `new BluetoothManufacturerDataFilter(..)` constructor, creating a new BluetoothManufacturerDataFilter instance
    BluetoothManufacturerDataFilter();
    /// The `new BluetoothManufacturerDataFilter(..)` constructor, creating a new BluetoothManufacturerDataFilter instance
    BluetoothManufacturerDataFilter(const jsbind::Object& init);
};

