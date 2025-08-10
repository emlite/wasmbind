#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "XRMediaLayerInit.hpp"

namespace webbind {

class XRRigidTransform;

/// Dictionary type XRMediaCylinderLayerInit
/// [`XRMediaCylinderLayerInit`](https://developer.mozilla.org/en-US/docs/Web/API/XRMediaCylinderLayerInit)
class XRMediaCylinderLayerInit : public XRMediaLayerInit {
  explicit XRMediaCylinderLayerInit(Handle h) noexcept;
public:
    static XRMediaCylinderLayerInit take_ownership(Handle h) noexcept;
    explicit XRMediaCylinderLayerInit(const emlite::Val &val) noexcept;
    XRMediaCylinderLayerInit() noexcept;
    [[nodiscard]] XRMediaCylinderLayerInit clone() const noexcept;
    [[nodiscard]] XRRigidTransform transform() const;
    void transform(const XRRigidTransform& value);
    [[nodiscard]] float radius() const;
    void radius(float value);
    [[nodiscard]] float centralAngle() const;
    void centralAngle(float value);
    [[nodiscard]] float aspectRatio() const;
    void aspectRatio(float value);
};

} // namespace webbind