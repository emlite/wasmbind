#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type USBDeviceFilter
/// [`USBDeviceFilter`](https://developer.mozilla.org/en-US/docs/Web/API/USBDeviceFilter)
class USBDeviceFilter : public emlite::Val {
  explicit USBDeviceFilter(Handle h) noexcept;
public:
    static USBDeviceFilter take_ownership(Handle h) noexcept;
    explicit USBDeviceFilter(const emlite::Val &val) noexcept;
    USBDeviceFilter() noexcept;
    [[nodiscard]] USBDeviceFilter clone() const noexcept;
    [[nodiscard]] unsigned short vendorId() const;
    void vendorId(unsigned short value);
    [[nodiscard]] unsigned short productId() const;
    void productId(unsigned short value);
    [[nodiscard]] unsigned char classCode() const;
    void classCode(unsigned char value);
    [[nodiscard]] unsigned char subclassCode() const;
    void subclassCode(unsigned char value);
    [[nodiscard]] unsigned char protocolCode() const;
    void protocolCode(unsigned char value);
    [[nodiscard]] jsbind::String serialNumber() const;
    void serialNumber(const jsbind::String& value);
};

} // namespace webbind