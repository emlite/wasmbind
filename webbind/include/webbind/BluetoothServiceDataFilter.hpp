#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The BluetoothServiceDataFilter class.
/// [`BluetoothServiceDataFilter`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothServiceDataFilter)
class BluetoothServiceDataFilter : public emlite::Val {
    explicit BluetoothServiceDataFilter(Handle h) noexcept;

public:
    explicit BluetoothServiceDataFilter(const emlite::Val &val) noexcept;
    static BluetoothServiceDataFilter take_ownership(Handle h) noexcept;

    [[nodiscard]] BluetoothServiceDataFilter clone() const noexcept;
    /// The `new BluetoothServiceDataFilter(..)` constructor, creating a new BluetoothServiceDataFilter instance
    BluetoothServiceDataFilter();
    /// The `new BluetoothServiceDataFilter(..)` constructor, creating a new BluetoothServiceDataFilter instance
    BluetoothServiceDataFilter(const jsbind::Object& init);
};

