#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "BluetoothDataFilterInit.hpp"

namespace webbind {

/// Interface BluetoothDataFilter
/// [`BluetoothDataFilter`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothDataFilter)
class BluetoothDataFilter : public emlite::Val {
    explicit BluetoothDataFilter(Handle h) noexcept;
public:
    explicit BluetoothDataFilter(const emlite::Val &val) noexcept;
    static BluetoothDataFilter take_ownership(Handle h) noexcept;
    [[nodiscard]] BluetoothDataFilter clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new BluetoothDataFilter(..)` constructor, creating a new BluetoothDataFilter instance
    BluetoothDataFilter();
    /// The `new BluetoothDataFilter(..)` constructor, creating a new BluetoothDataFilter instance
    BluetoothDataFilter(const BluetoothDataFilterInit& init);
    /// [`BluetoothDataFilter.dataPrefix`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothDataFilter/dataPrefix)
    /// [`BluetoothDataFilter.dataPrefix`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothDataFilter/dataPrefix)
    [[nodiscard]] jsbind::ArrayBuffer dataPrefix() const;
    /// [`BluetoothDataFilter.mask`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothDataFilter/mask)
    /// [`BluetoothDataFilter.mask`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothDataFilter/mask)
    [[nodiscard]] jsbind::ArrayBuffer mask() const;
};

} // namespace webbind