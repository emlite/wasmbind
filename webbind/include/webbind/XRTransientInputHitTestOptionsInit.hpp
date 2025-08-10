#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class XRRay;

/// Dictionary type XRTransientInputHitTestOptionsInit
class XRTransientInputHitTestOptionsInit : public emlite::Val {
  explicit XRTransientInputHitTestOptionsInit(Handle h) noexcept;
public:
    static XRTransientInputHitTestOptionsInit take_ownership(Handle h) noexcept;
    explicit XRTransientInputHitTestOptionsInit(const emlite::Val &val) noexcept;
    XRTransientInputHitTestOptionsInit() noexcept;
    [[nodiscard]] XRTransientInputHitTestOptionsInit clone() const noexcept;
    /// Getter of the `profile` attribute.
    [[nodiscard]] jsbind::String profile() const;
    /// Setter of the `profile` attribute.
    void profile(const jsbind::String& value);
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