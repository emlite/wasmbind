#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "BluetoothDataFilterInit.hpp"

namespace webbind {

/// Dictionary type BluetoothServiceDataFilterInit
/// [`BluetoothServiceDataFilterInit`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothServiceDataFilterInit)
class BluetoothServiceDataFilterInit : public BluetoothDataFilterInit {
  explicit BluetoothServiceDataFilterInit(Handle h) noexcept;
public:
    static BluetoothServiceDataFilterInit take_ownership(Handle h) noexcept;
    explicit BluetoothServiceDataFilterInit(const emlite::Val &val) noexcept;
    BluetoothServiceDataFilterInit() noexcept;
    [[nodiscard]] BluetoothServiceDataFilterInit clone() const noexcept;
    [[nodiscard]] jsbind::Any service() const;
    void service(const jsbind::Any& value);
};

} // namespace webbind