#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type USBDeviceFilter
class USBDeviceFilter : public emlite::Val {
  explicit USBDeviceFilter(Handle h) noexcept;
public:
    static USBDeviceFilter take_ownership(Handle h) noexcept;
    explicit USBDeviceFilter(const emlite::Val &val) noexcept;
    USBDeviceFilter() noexcept;
    [[nodiscard]] USBDeviceFilter clone() const noexcept;
    /// Getter of the `vendorId` attribute.
    [[nodiscard]] unsigned short vendorId() const;
    /// Setter of the `vendorId` attribute.
    void vendorId(unsigned short value);
    /// Getter of the `productId` attribute.
    [[nodiscard]] unsigned short productId() const;
    /// Setter of the `productId` attribute.
    void productId(unsigned short value);
    /// Getter of the `classCode` attribute.
    [[nodiscard]] unsigned char classCode() const;
    /// Setter of the `classCode` attribute.
    void classCode(unsigned char value);
    /// Getter of the `subclassCode` attribute.
    [[nodiscard]] unsigned char subclassCode() const;
    /// Setter of the `subclassCode` attribute.
    void subclassCode(unsigned char value);
    /// Getter of the `protocolCode` attribute.
    [[nodiscard]] unsigned char protocolCode() const;
    /// Setter of the `protocolCode` attribute.
    void protocolCode(unsigned char value);
    /// Getter of the `serialNumber` attribute.
    [[nodiscard]] jsbind::String serialNumber() const;
    /// Setter of the `serialNumber` attribute.
    void serialNumber(const jsbind::String& value);
};

} // namespace webbind