#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type SerialPortInfo
class SerialPortInfo : public emlite::Val {
  explicit SerialPortInfo(Handle h) noexcept;
public:
    static SerialPortInfo take_ownership(Handle h) noexcept;
    explicit SerialPortInfo(const emlite::Val &val) noexcept;
    SerialPortInfo() noexcept;
    [[nodiscard]] SerialPortInfo clone() const noexcept;
    /// Getter of the `usbVendorId` attribute.
    [[nodiscard]] unsigned short usbVendorId() const;
    /// Setter of the `usbVendorId` attribute.
    void usbVendorId(unsigned short value);
    /// Getter of the `usbProductId` attribute.
    [[nodiscard]] unsigned short usbProductId() const;
    /// Setter of the `usbProductId` attribute.
    void usbProductId(unsigned short value);
    /// Getter of the `bluetoothServiceClassId` attribute.
    [[nodiscard]] jsbind::Any bluetoothServiceClassId() const;
    /// Setter of the `bluetoothServiceClassId` attribute.
    void bluetoothServiceClassId(const jsbind::Any& value);
};

} // namespace webbind