#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class XRSpace;
class XRRay;

/// Dictionary type XRHitTestOptionsInit
class XRHitTestOptionsInit : public emlite::Val {
  explicit XRHitTestOptionsInit(Handle h) noexcept;
public:
    static XRHitTestOptionsInit take_ownership(Handle h) noexcept;
    explicit XRHitTestOptionsInit(const emlite::Val &val) noexcept;
    XRHitTestOptionsInit() noexcept;
    [[nodiscard]] XRHitTestOptionsInit clone() const noexcept;
    /// Getter of the `space` attribute.
    [[nodiscard]] XRSpace space() const;
    /// Setter of the `space` attribute.
    void space(const XRSpace& value);
    /// Getter of the `entityTypes` attribute.
    [[nodiscard]] jsbind::TypedArray<XRHitTestTrackableType> entityTypes() const;
    /// Setter of the `entityTypes` attribute.
    void entityTypes(const jsbind::TypedArray<XRHitTestTrackableType>& value);
    /// Getter of the `offsetRay` attribute.
    [[nodiscard]] XRRay offsetRay() const;
    /// Setter of the `offsetRay` attribute.
    void offsetRay(const XRRay& value);
};

} // namespace webbind