#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type USBBlocklistEntry
/// [`USBBlocklistEntry`](https://developer.mozilla.org/en-US/docs/Web/API/USBBlocklistEntry)
class USBBlocklistEntry : public emlite::Val {
  explicit USBBlocklistEntry(Handle h) noexcept;
public:
    static USBBlocklistEntry take_ownership(Handle h) noexcept;
    explicit USBBlocklistEntry(const emlite::Val &val) noexcept;
    USBBlocklistEntry() noexcept;
    [[nodiscard]] USBBlocklistEntry clone() const noexcept;
    [[nodiscard]] unsigned short idVendor() const;
    void idVendor(unsigned short value);
    [[nodiscard]] unsigned short idProduct() const;
    void idProduct(unsigned short value);
    [[nodiscard]] unsigned short bcdDevice() const;
    void bcdDevice(unsigned short value);
};

} // namespace webbind