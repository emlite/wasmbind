#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "XRLayerInit.hpp"

namespace webbind {

class XRRigidTransform;

/// Dictionary type XRCylinderLayerInit
class XRCylinderLayerInit : public XRLayerInit {
  explicit XRCylinderLayerInit(Handle h) noexcept;
public:
    static XRCylinderLayerInit take_ownership(Handle h) noexcept;
    explicit XRCylinderLayerInit(const emlite::Val &val) noexcept;
    XRCylinderLayerInit() noexcept;
    [[nodiscard]] XRCylinderLayerInit clone() const noexcept;
    /// Getter of the `textureType` attribute.
    [[nodiscard]] XRTextureType textureType() const;
    /// Setter of the `textureType` attribute.
    void textureType(const XRTextureType& value);
    /// Getter of the `transform` attribute.
    [[nodiscard]] XRRigidTransform transform() const;
    /// Setter of the `transform` attribute.
    void transform(const XRRigidTransform& value);
    /// Getter of the `radius` attribute.
    [[nodiscard]] float radius() const;
    /// Setter of the `radius` attribute.
    void radius(float value);
    /// Getter of the `centralAngle` attribute.
    [[nodiscard]] float centralAngle() const;
    /// Setter of the `centralAngle` attribute.
    void centralAngle(float value);
    /// Getter of the `aspectRatio` attribute.
    [[nodiscard]] float aspectRatio() const;
    /// Setter of the `aspectRatio` attribute.
    void aspectRatio(float value);
};

} // namespace webbind