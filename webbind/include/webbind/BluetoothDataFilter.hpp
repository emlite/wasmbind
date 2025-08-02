#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The BluetoothDataFilter class.
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
    BluetoothDataFilter(const jsbind::Any& init);
    /// Getter of the `dataPrefix` attribute.
    /// [`BluetoothDataFilter.dataPrefix`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothDataFilter/dataPrefix)
    [[nodiscard]] jsbind::ArrayBuffer dataPrefix() const;
    /// Getter of the `mask` attribute.
    /// [`BluetoothDataFilter.mask`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothDataFilter/mask)
    [[nodiscard]] jsbind::ArrayBuffer mask() const;
};

