#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "HIDReportItem.hpp"

namespace webbind {

/// Dictionary type HIDReportInfo
/// [`HIDReportInfo`](https://developer.mozilla.org/en-US/docs/Web/API/HIDReportInfo)
class HIDReportInfo : public emlite::Val {
  explicit HIDReportInfo(Handle h) noexcept;
public:
    static HIDReportInfo take_ownership(Handle h) noexcept;
    explicit HIDReportInfo(const emlite::Val &val) noexcept;
    HIDReportInfo() noexcept;
    [[nodiscard]] HIDReportInfo clone() const noexcept;
    [[nodiscard]] unsigned char reportId() const;
    void reportId(unsigned char value);
    [[nodiscard]] jsbind::TypedArray<HIDReportItem> items() const;
    void items(const jsbind::TypedArray<HIDReportItem>& value);
};

} // namespace webbind