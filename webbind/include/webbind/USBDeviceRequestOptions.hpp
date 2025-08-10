#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "USBDeviceFilter.hpp"

namespace webbind {

/// Dictionary type USBDeviceRequestOptions
/// [`USBDeviceRequestOptions`](https://developer.mozilla.org/en-US/docs/Web/API/USBDeviceRequestOptions)
class USBDeviceRequestOptions : public emlite::Val {
  explicit USBDeviceRequestOptions(Handle h) noexcept;
public:
    static USBDeviceRequestOptions take_ownership(Handle h) noexcept;
    explicit USBDeviceRequestOptions(const emlite::Val &val) noexcept;
    USBDeviceRequestOptions() noexcept;
    [[nodiscard]] USBDeviceRequestOptions clone() const noexcept;
    [[nodiscard]] jsbind::TypedArray<USBDeviceFilter> filters() const;
    void filters(const jsbind::TypedArray<USBDeviceFilter>& value);
    [[nodiscard]] jsbind::TypedArray<USBDeviceFilter> exclusionFilters() const;
    void exclusionFilters(const jsbind::TypedArray<USBDeviceFilter>& value);
};

} // namespace webbind