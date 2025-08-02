#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The BluetoothManufacturerDataMap class.
/// [`BluetoothManufacturerDataMap`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothManufacturerDataMap)
class BluetoothManufacturerDataMap : public emlite::Val {
    explicit BluetoothManufacturerDataMap(Handle h) noexcept;

public:
    explicit BluetoothManufacturerDataMap(const emlite::Val &val) noexcept;
    static BluetoothManufacturerDataMap take_ownership(Handle h) noexcept;

    [[nodiscard]] BluetoothManufacturerDataMap clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
};

