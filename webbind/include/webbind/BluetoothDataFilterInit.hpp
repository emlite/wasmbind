#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type BluetoothDataFilterInit
class BluetoothDataFilterInit : public emlite::Val {
  explicit BluetoothDataFilterInit(Handle h) noexcept;
public:
    static BluetoothDataFilterInit take_ownership(Handle h) noexcept;
    explicit BluetoothDataFilterInit(const emlite::Val &val) noexcept;
    BluetoothDataFilterInit() noexcept;
    [[nodiscard]] BluetoothDataFilterInit clone() const noexcept;
    /// Getter of the `dataPrefix` attribute.
    [[nodiscard]] jsbind::Any dataPrefix() const;
    /// Setter of the `dataPrefix` attribute.
    void dataPrefix(const jsbind::Any& value);
    /// Getter of the `mask` attribute.
    [[nodiscard]] jsbind::Any mask() const;
    /// Setter of the `mask` attribute.
    void mask(const jsbind::Any& value);
};

} // namespace webbind