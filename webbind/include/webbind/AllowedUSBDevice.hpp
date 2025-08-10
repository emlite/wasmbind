#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type AllowedUSBDevice
class AllowedUSBDevice : public emlite::Val {
  explicit AllowedUSBDevice(Handle h) noexcept;
public:
    static AllowedUSBDevice take_ownership(Handle h) noexcept;
    explicit AllowedUSBDevice(const emlite::Val &val) noexcept;
    AllowedUSBDevice() noexcept;
    [[nodiscard]] AllowedUSBDevice clone() const noexcept;
    /// Getter of the `vendorId` attribute.
    [[nodiscard]] unsigned char vendorId() const;
    /// Setter of the `vendorId` attribute.
    void vendorId(unsigned char value);
    /// Getter of the `productId` attribute.
    [[nodiscard]] unsigned char productId() const;
    /// Setter of the `productId` attribute.
    void productId(unsigned char value);
    /// Getter of the `serialNumber` attribute.
    [[nodiscard]] jsbind::String serialNumber() const;
    /// Setter of the `serialNumber` attribute.
    void serialNumber(const jsbind::String& value);
};

} // namespace webbind