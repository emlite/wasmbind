#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "HIDReportInfo.hpp"

namespace webbind {

/// Dictionary type HIDCollectionInfo
class HIDCollectionInfo : public emlite::Val {
  explicit HIDCollectionInfo(Handle h) noexcept;
public:
    static HIDCollectionInfo take_ownership(Handle h) noexcept;
    explicit HIDCollectionInfo(const emlite::Val &val) noexcept;
    HIDCollectionInfo() noexcept;
    [[nodiscard]] HIDCollectionInfo clone() const noexcept;
    /// Getter of the `usagePage` attribute.
    [[nodiscard]] unsigned short usagePage() const;
    /// Setter of the `usagePage` attribute.
    void usagePage(unsigned short value);
    /// Getter of the `usage` attribute.
    [[nodiscard]] unsigned short usage() const;
    /// Setter of the `usage` attribute.
    void usage(unsigned short value);
    /// Getter of the `type` attribute.
    [[nodiscard]] unsigned char type() const;
    /// Setter of the `type` attribute.
    void type(unsigned char value);
    /// Getter of the `children` attribute.
    [[nodiscard]] jsbind::TypedArray<HIDCollectionInfo> children() const;
    /// Setter of the `children` attribute.
    void children(const jsbind::TypedArray<HIDCollectionInfo>& value);
    /// Getter of the `inputReports` attribute.
    [[nodiscard]] jsbind::TypedArray<HIDReportInfo> inputReports() const;
    /// Setter of the `inputReports` attribute.
    void inputReports(const jsbind::TypedArray<HIDReportInfo>& value);
    /// Getter of the `outputReports` attribute.
    [[nodiscard]] jsbind::TypedArray<HIDReportInfo> outputReports() const;
    /// Setter of the `outputReports` attribute.
    void outputReports(const jsbind::TypedArray<HIDReportInfo>& value);
    /// Getter of the `featureReports` attribute.
    [[nodiscard]] jsbind::TypedArray<HIDReportInfo> featureReports() const;
    /// Setter of the `featureReports` attribute.
    void featureReports(const jsbind::TypedArray<HIDReportInfo>& value);
};

} // namespace webbind