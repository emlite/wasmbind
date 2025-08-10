#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "XRLayerInit.hpp"

namespace webbind {

class XRRigidTransform;

/// Dictionary type XRCylinderLayerInit
/// [`XRCylinderLayerInit`](https://developer.mozilla.org/en-US/docs/Web/API/XRCylinderLayerInit)
class XRCylinderLayerInit : public XRLayerInit {
  explicit XRCylinderLayerInit(Handle h) noexcept;
public:
    static XRCylinderLayerInit take_ownership(Handle h) noexcept;
    explicit XRCylinderLayerInit(const emlite::Val &val) noexcept;
    XRCylinderLayerInit() noexcept;
    [[nodiscard]] XRCylinderLayerInit clone() const noexcept;
    [[nodiscard]] XRTextureType textureType() const;
    void textureType(const XRTextureType& value);
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