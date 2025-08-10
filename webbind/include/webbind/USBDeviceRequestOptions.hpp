#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class USBDeviceFilter;

/// Dictionary type USBDeviceRequestOptions
class USBDeviceRequestOptions : public emlite::Val {
  explicit USBDeviceRequestOptions(Handle h) noexcept;
public:
    static USBDeviceRequestOptions take_ownership(Handle h) noexcept;
    explicit USBDeviceRequestOptions(const emlite::Val &val) noexcept;
    USBDeviceRequestOptions() noexcept;
    [[nodiscard]] USBDeviceRequestOptions clone() const noexcept;
    /// Getter of the `filters` attribute.
    [[nodiscard]] jsbind::TypedArray<USBDeviceFilter> filters() const;
    /// Setter of the `filters` attribute.
    void filters(const jsbind::TypedArray<USBDeviceFilter>& value);
    /// Getter of the `exclusionFilters` attribute.
    [[nodiscard]] jsbind::TypedArray<USBDeviceFilter> exclusionFilters() const;
    /// Setter of the `exclusionFilters` attribute.
    void exclusionFilters(const jsbind::TypedArray<USBDeviceFilter>& value);
};

} // namespace webbind