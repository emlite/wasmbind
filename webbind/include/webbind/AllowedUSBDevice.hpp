#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type AllowedUSBDevice
/// [`AllowedUSBDevice`](https://developer.mozilla.org/en-US/docs/Web/API/AllowedUSBDevice)
class AllowedUSBDevice : public emlite::Val {
  explicit AllowedUSBDevice(Handle h) noexcept;
public:
    static AllowedUSBDevice take_ownership(Handle h) noexcept;
    explicit AllowedUSBDevice(const emlite::Val &val) noexcept;
    AllowedUSBDevice() noexcept;
    [[nodiscard]] AllowedUSBDevice clone() const noexcept;
    [[nodiscard]] unsigned char vendorId() const;
    void vendorId(unsigned char value);
    [[nodiscard]] unsigned char productId() const;
    void productId(unsigned char value);
    [[nodiscard]] jsbind::String serialNumber() const;
    void serialNumber(const jsbind::String& value);
};

} // namespace webbind