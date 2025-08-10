#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class HIDReportItem;

/// Dictionary type HIDReportInfo
class HIDReportInfo : public emlite::Val {
  explicit HIDReportInfo(Handle h) noexcept;
public:
    static HIDReportInfo take_ownership(Handle h) noexcept;
    explicit HIDReportInfo(const emlite::Val &val) noexcept;
    HIDReportInfo() noexcept;
    [[nodiscard]] HIDReportInfo clone() const noexcept;
    /// Getter of the `reportId` attribute.
    [[nodiscard]] unsigned char reportId() const;
    /// Setter of the `reportId` attribute.
    void reportId(unsigned char value);
    /// Getter of the `items` attribute.
    [[nodiscard]] jsbind::TypedArray<HIDReportItem> items() const;
    /// Setter of the `items` attribute.
    void items(const jsbind::TypedArray<HIDReportItem>& value);
};

} // namespace webbind