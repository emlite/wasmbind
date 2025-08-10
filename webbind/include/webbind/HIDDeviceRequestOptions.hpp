#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "HIDDeviceFilter.hpp"

namespace webbind {

/// Dictionary type HIDDeviceRequestOptions
class HIDDeviceRequestOptions : public emlite::Val {
  explicit HIDDeviceRequestOptions(Handle h) noexcept;
public:
    static HIDDeviceRequestOptions take_ownership(Handle h) noexcept;
    explicit HIDDeviceRequestOptions(const emlite::Val &val) noexcept;
    HIDDeviceRequestOptions() noexcept;
    [[nodiscard]] HIDDeviceRequestOptions clone() const noexcept;
    /// Getter of the `filters` attribute.
    [[nodiscard]] jsbind::TypedArray<HIDDeviceFilter> filters() const;
    /// Setter of the `filters` attribute.
    void filters(const jsbind::TypedArray<HIDDeviceFilter>& value);
    /// Getter of the `exclusionFilters` attribute.
    [[nodiscard]] jsbind::TypedArray<HIDDeviceFilter> exclusionFilters() const;
    /// Setter of the `exclusionFilters` attribute.
    void exclusionFilters(const jsbind::TypedArray<HIDDeviceFilter>& value);
};

} // namespace webbind