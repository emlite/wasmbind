#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type XRDepthStateInit
/// [`XRDepthStateInit`](https://developer.mozilla.org/en-US/docs/Web/API/XRDepthStateInit)
class XRDepthStateInit : public emlite::Val {
  explicit XRDepthStateInit(Handle h) noexcept;
public:
    static XRDepthStateInit take_ownership(Handle h) noexcept;
    explicit XRDepthStateInit(const emlite::Val &val) noexcept;
    XRDepthStateInit() noexcept;
    [[nodiscard]] XRDepthStateInit clone() const noexcept;
    [[nodiscard]] jsbind::TypedArray<XRDepthUsage> usagePreference() const;
    void usagePreference(const jsbind::TypedArray<XRDepthUsage>& value);
    [[nodiscard]] jsbind::TypedArray<XRDepthDataFormat> dataFormatPreference() const;
    void dataFormatPreference(const jsbind::TypedArray<XRDepthDataFormat>& value);
    [[nodiscard]] jsbind::TypedArray<XRDepthType> depthTypeRequest() const;
    void depthTypeRequest(const jsbind::TypedArray<XRDepthType>& value);
    [[nodiscard]] bool matchDepthView() const;
    void matchDepthView(bool value);
};

} // namespace webbind