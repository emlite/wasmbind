#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type HIDDeviceFilter
/// [`HIDDeviceFilter`](https://developer.mozilla.org/en-US/docs/Web/API/HIDDeviceFilter)
class HIDDeviceFilter : public emlite::Val {
  explicit HIDDeviceFilter(Handle h) noexcept;
public:
    static HIDDeviceFilter take_ownership(Handle h) noexcept;
    explicit HIDDeviceFilter(const emlite::Val &val) noexcept;
    HIDDeviceFilter() noexcept;
    [[nodiscard]] HIDDeviceFilter clone() const noexcept;
    [[nodiscard]] unsigned long vendorId() const;
    void vendorId(unsigned long value);
    [[nodiscard]] unsigned short productId() const;
    void productId(unsigned short value);
    [[nodiscard]] unsigned short usagePage() const;
    void usagePage(unsigned short value);
    [[nodiscard]] unsigned short usage() const;
    void usage(unsigned short value);
};

} // namespace webbind