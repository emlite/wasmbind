#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type BluetoothDataFilterInit
/// [`BluetoothDataFilterInit`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothDataFilterInit)
class BluetoothDataFilterInit : public emlite::Val {
  explicit BluetoothDataFilterInit(Handle h) noexcept;
public:
    static BluetoothDataFilterInit take_ownership(Handle h) noexcept;
    explicit BluetoothDataFilterInit(const emlite::Val &val) noexcept;
    BluetoothDataFilterInit() noexcept;
    [[nodiscard]] BluetoothDataFilterInit clone() const noexcept;
    [[nodiscard]] jsbind::Any dataPrefix() const;
    void dataPrefix(const jsbind::Any& value);
    [[nodiscard]] jsbind::Any mask() const;
    void mask(const jsbind::Any& value);
};

} // namespace webbind