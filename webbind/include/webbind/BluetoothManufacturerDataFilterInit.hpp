#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "BluetoothDataFilterInit.hpp"

namespace webbind {

/// Dictionary type BluetoothManufacturerDataFilterInit
/// [`BluetoothManufacturerDataFilterInit`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothManufacturerDataFilterInit)
class BluetoothManufacturerDataFilterInit : public BluetoothDataFilterInit {
  explicit BluetoothManufacturerDataFilterInit(Handle h) noexcept;
public:
    static BluetoothManufacturerDataFilterInit take_ownership(Handle h) noexcept;
    explicit BluetoothManufacturerDataFilterInit(const emlite::Val &val) noexcept;
    BluetoothManufacturerDataFilterInit() noexcept;
    [[nodiscard]] BluetoothManufacturerDataFilterInit clone() const noexcept;
    [[nodiscard]] unsigned short companyIdentifier() const;
    void companyIdentifier(unsigned short value);
};

} // namespace webbind