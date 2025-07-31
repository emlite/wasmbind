#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The BluetoothServiceDataMap class.
/// [`BluetoothServiceDataMap`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothServiceDataMap)
class BluetoothServiceDataMap : public emlite::Val {
    explicit BluetoothServiceDataMap(Handle h) noexcept;

public:
    explicit BluetoothServiceDataMap(const emlite::Val &val) noexcept;
    static BluetoothServiceDataMap take_ownership(Handle h) noexcept;

    [[nodiscard]] BluetoothServiceDataMap clone() const noexcept;
};

