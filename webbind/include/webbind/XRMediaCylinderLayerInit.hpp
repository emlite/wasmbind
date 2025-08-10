#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "XRMediaLayerInit.hpp"

namespace webbind {

class XRRigidTransform;

/// Dictionary type XRMediaCylinderLayerInit
class XRMediaCylinderLayerInit : public XRMediaLayerInit {
  explicit XRMediaCylinderLayerInit(Handle h) noexcept;
public:
    static XRMediaCylinderLayerInit take_ownership(Handle h) noexcept;
    explicit XRMediaCylinderLayerInit(const emlite::Val &val) noexcept;
    XRMediaCylinderLayerInit() noexcept;
    [[nodiscard]] XRMediaCylinderLayerInit clone() const noexcept;
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