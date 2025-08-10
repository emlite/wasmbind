#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Interface BluetoothServiceDataFilter
/// [`BluetoothServiceDataFilter`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothServiceDataFilter)
class BluetoothServiceDataFilter : public emlite::Val {
    explicit BluetoothServiceDataFilter(Handle h) noexcept;
public:
    explicit BluetoothServiceDataFilter(const emlite::Val &val) noexcept;
    static BluetoothServiceDataFilter take_ownership(Handle h) noexcept;
    [[nodiscard]] BluetoothServiceDataFilter clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new BluetoothServiceDataFilter(..)` constructor, creating a new BluetoothServiceDataFilter instance
    BluetoothServiceDataFilter();
    /// The `new BluetoothServiceDataFilter(..)` constructor, creating a new BluetoothServiceDataFilter instance
    BluetoothServiceDataFilter(const jsbind::Object& init);
};

} // namespace webbind