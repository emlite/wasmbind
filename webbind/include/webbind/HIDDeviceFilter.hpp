#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type HIDDeviceFilter
class HIDDeviceFilter : public emlite::Val {
  explicit HIDDeviceFilter(Handle h) noexcept;
public:
    static HIDDeviceFilter take_ownership(Handle h) noexcept;
    explicit HIDDeviceFilter(const emlite::Val &val) noexcept;
    HIDDeviceFilter() noexcept;
    [[nodiscard]] HIDDeviceFilter clone() const noexcept;
    /// Getter of the `vendorId` attribute.
    [[nodiscard]] unsigned long vendorId() const;
    /// Setter of the `vendorId` attribute.
    void vendorId(unsigned long value);
    /// Getter of the `productId` attribute.
    [[nodiscard]] unsigned short productId() const;
    /// Setter of the `productId` attribute.
    void productId(unsigned short value);
    /// Getter of the `usagePage` attribute.
    [[nodiscard]] unsigned short usagePage() const;
    /// Setter of the `usagePage` attribute.
    void usagePage(unsigned short value);
    /// Getter of the `usage` attribute.
    [[nodiscard]] unsigned short usage() const;
    /// Setter of the `usage` attribute.
    void usage(unsigned short value);
};

} // namespace webbind