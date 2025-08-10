#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class XRSpace;
class XRRay;

/// Dictionary type XRHitTestOptionsInit
/// [`XRHitTestOptionsInit`](https://developer.mozilla.org/en-US/docs/Web/API/XRHitTestOptionsInit)
class XRHitTestOptionsInit : public emlite::Val {
  explicit XRHitTestOptionsInit(Handle h) noexcept;
public:
    static XRHitTestOptionsInit take_ownership(Handle h) noexcept;
    explicit XRHitTestOptionsInit(const emlite::Val &val) noexcept;
    XRHitTestOptionsInit() noexcept;
    [[nodiscard]] XRHitTestOptionsInit clone() const noexcept;
    [[nodiscard]] XRSpace space() const;
    void space(const XRSpace& value);
    [[nodiscard]] jsbind::TypedArray<XRHitTestTrackableType> entityTypes() const;
    void entityTypes(const jsbind::TypedArray<XRHitTestTrackableType>& value);
    [[nodiscard]] XRRay offsetRay() const;
    void offsetRay(const XRRay& value);
};

} // namespace webbind