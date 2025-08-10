#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type XRDepthStateInit
class XRDepthStateInit : public emlite::Val {
  explicit XRDepthStateInit(Handle h) noexcept;
public:
    static XRDepthStateInit take_ownership(Handle h) noexcept;
    explicit XRDepthStateInit(const emlite::Val &val) noexcept;
    XRDepthStateInit() noexcept;
    [[nodiscard]] XRDepthStateInit clone() const noexcept;
    /// Getter of the `usagePreference` attribute.
    [[nodiscard]] jsbind::TypedArray<XRDepthUsage> usagePreference() const;
    /// Setter of the `usagePreference` attribute.
    void usagePreference(const jsbind::TypedArray<XRDepthUsage>& value);
    /// Getter of the `dataFormatPreference` attribute.
    [[nodiscard]] jsbind::TypedArray<XRDepthDataFormat> dataFormatPreference() const;
    /// Setter of the `dataFormatPreference` attribute.
    void dataFormatPreference(const jsbind::TypedArray<XRDepthDataFormat>& value);
    /// Getter of the `depthTypeRequest` attribute.
    [[nodiscard]] jsbind::TypedArray<XRDepthType> depthTypeRequest() const;
    /// Setter of the `depthTypeRequest` attribute.
    void depthTypeRequest(const jsbind::TypedArray<XRDepthType>& value);
    /// Getter of the `matchDepthView` attribute.
    [[nodiscard]] bool matchDepthView() const;
    /// Setter of the `matchDepthView` attribute.
    void matchDepthView(bool value);
};

} // namespace webbind