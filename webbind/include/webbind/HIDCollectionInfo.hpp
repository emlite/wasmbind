#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "HIDReportInfo.hpp"

namespace webbind {

/// Dictionary type HIDCollectionInfo
/// [`HIDCollectionInfo`](https://developer.mozilla.org/en-US/docs/Web/API/HIDCollectionInfo)
class HIDCollectionInfo : public emlite::Val {
  explicit HIDCollectionInfo(Handle h) noexcept;
public:
    static HIDCollectionInfo take_ownership(Handle h) noexcept;
    explicit HIDCollectionInfo(const emlite::Val &val) noexcept;
    HIDCollectionInfo() noexcept;
    [[nodiscard]] HIDCollectionInfo clone() const noexcept;
    [[nodiscard]] unsigned short usagePage() const;
    void usagePage(unsigned short value);
    [[nodiscard]] unsigned short usage() const;
    void usage(unsigned short value);
    [[nodiscard]] unsigned char type() const;
    void type(unsigned char value);
    [[nodiscard]] jsbind::TypedArray<HIDCollectionInfo> children() const;
    void children(const jsbind::TypedArray<HIDCollectionInfo>& value);
    [[nodiscard]] jsbind::TypedArray<HIDReportInfo> inputReports() const;
    void inputReports(const jsbind::TypedArray<HIDReportInfo>& value);
    [[nodiscard]] jsbind::TypedArray<HIDReportInfo> outputReports() const;
    void outputReports(const jsbind::TypedArray<HIDReportInfo>& value);
    [[nodiscard]] jsbind::TypedArray<HIDReportInfo> featureReports() const;
    void featureReports(const jsbind::TypedArray<HIDReportInfo>& value);
};

} // namespace webbind