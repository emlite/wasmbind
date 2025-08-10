#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type USBBlocklistEntry
class USBBlocklistEntry : public emlite::Val {
  explicit USBBlocklistEntry(Handle h) noexcept;
public:
    static USBBlocklistEntry take_ownership(Handle h) noexcept;
    explicit USBBlocklistEntry(const emlite::Val &val) noexcept;
    USBBlocklistEntry() noexcept;
    [[nodiscard]] USBBlocklistEntry clone() const noexcept;
    /// Getter of the `idVendor` attribute.
    [[nodiscard]] unsigned short idVendor() const;
    /// Setter of the `idVendor` attribute.
    void idVendor(unsigned short value);
    /// Getter of the `idProduct` attribute.
    [[nodiscard]] unsigned short idProduct() const;
    /// Setter of the `idProduct` attribute.
    void idProduct(unsigned short value);
    /// Getter of the `bcdDevice` attribute.
    [[nodiscard]] unsigned short bcdDevice() const;
    /// Setter of the `bcdDevice` attribute.
    void bcdDevice(unsigned short value);
};

} // namespace webbind