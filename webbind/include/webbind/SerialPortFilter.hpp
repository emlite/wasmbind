#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type SerialPortFilter
/// [`SerialPortFilter`](https://developer.mozilla.org/en-US/docs/Web/API/SerialPortFilter)
class SerialPortFilter : public emlite::Val {
  explicit SerialPortFilter(Handle h) noexcept;
public:
    static SerialPortFilter take_ownership(Handle h) noexcept;
    explicit SerialPortFilter(const emlite::Val &val) noexcept;
    SerialPortFilter() noexcept;
    [[nodiscard]] SerialPortFilter clone() const noexcept;
    [[nodiscard]] unsigned short usbVendorId() const;
    void usbVendorId(unsigned short value);
    [[nodiscard]] unsigned short usbProductId() const;
    void usbProductId(unsigned short value);
    [[nodiscard]] jsbind::Any bluetoothServiceClassId() const;
    void bluetoothServiceClassId(const jsbind::Any& value);
};

} // namespace webbind