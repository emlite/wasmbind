#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type SerialPortInfo
/// [`SerialPortInfo`](https://developer.mozilla.org/en-US/docs/Web/API/SerialPortInfo)
class SerialPortInfo : public emlite::Val {
  explicit SerialPortInfo(Handle h) noexcept;
public:
    static SerialPortInfo take_ownership(Handle h) noexcept;
    explicit SerialPortInfo(const emlite::Val &val) noexcept;
    SerialPortInfo() noexcept;
    [[nodiscard]] SerialPortInfo clone() const noexcept;
    [[nodiscard]] unsigned short usbVendorId() const;
    void usbVendorId(unsigned short value);
    [[nodiscard]] unsigned short usbProductId() const;
    void usbProductId(unsigned short value);
    [[nodiscard]] jsbind::Any bluetoothServiceClassId() const;
    void bluetoothServiceClassId(const jsbind::Any& value);
};

} // namespace webbind