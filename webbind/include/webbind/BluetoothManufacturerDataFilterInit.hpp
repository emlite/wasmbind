#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "BluetoothDataFilterInit.hpp"

namespace webbind {

/// Dictionary type BluetoothManufacturerDataFilterInit
class BluetoothManufacturerDataFilterInit : public BluetoothDataFilterInit {
  explicit BluetoothManufacturerDataFilterInit(Handle h) noexcept;
public:
    static BluetoothManufacturerDataFilterInit take_ownership(Handle h) noexcept;
    explicit BluetoothManufacturerDataFilterInit(const emlite::Val &val) noexcept;
    BluetoothManufacturerDataFilterInit() noexcept;
    [[nodiscard]] BluetoothManufacturerDataFilterInit clone() const noexcept;
    /// Getter of the `companyIdentifier` attribute.
    [[nodiscard]] unsigned short companyIdentifier() const;
    /// Setter of the `companyIdentifier` attribute.
    void companyIdentifier(unsigned short value);
};

} // namespace webbind