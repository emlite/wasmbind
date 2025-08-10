#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "HIDDeviceFilter.hpp"

namespace webbind {

/// Dictionary type HIDDeviceRequestOptions
/// [`HIDDeviceRequestOptions`](https://developer.mozilla.org/en-US/docs/Web/API/HIDDeviceRequestOptions)
class HIDDeviceRequestOptions : public emlite::Val {
  explicit HIDDeviceRequestOptions(Handle h) noexcept;
public:
    static HIDDeviceRequestOptions take_ownership(Handle h) noexcept;
    explicit HIDDeviceRequestOptions(const emlite::Val &val) noexcept;
    HIDDeviceRequestOptions() noexcept;
    [[nodiscard]] HIDDeviceRequestOptions clone() const noexcept;
    [[nodiscard]] jsbind::TypedArray<HIDDeviceFilter> filters() const;
    void filters(const jsbind::TypedArray<HIDDeviceFilter>& value);
    [[nodiscard]] jsbind::TypedArray<HIDDeviceFilter> exclusionFilters() const;
    void exclusionFilters(const jsbind::TypedArray<HIDDeviceFilter>& value);
};

} // namespace webbind