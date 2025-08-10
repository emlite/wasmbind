#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class XRRay;

/// Dictionary type XRTransientInputHitTestOptionsInit
/// [`XRTransientInputHitTestOptionsInit`](https://developer.mozilla.org/en-US/docs/Web/API/XRTransientInputHitTestOptionsInit)
class XRTransientInputHitTestOptionsInit : public emlite::Val {
  explicit XRTransientInputHitTestOptionsInit(Handle h) noexcept;
public:
    static XRTransientInputHitTestOptionsInit take_ownership(Handle h) noexcept;
    explicit XRTransientInputHitTestOptionsInit(const emlite::Val &val) noexcept;
    XRTransientInputHitTestOptionsInit() noexcept;
    [[nodiscard]] XRTransientInputHitTestOptionsInit clone() const noexcept;
    [[nodiscard]] jsbind::String profile() const;
    void profile(const jsbind::String& value);
    [[nodiscard]] jsbind::TypedArray<XRHitTestTrackableType> entityTypes() const;
    void entityTypes(const jsbind::TypedArray<XRHitTestTrackableType>& value);
    [[nodiscard]] XRRay offsetRay() const;
    void offsetRay(const XRRay& value);
};

} // namespace webbind