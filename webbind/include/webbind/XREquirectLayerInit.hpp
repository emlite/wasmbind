#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "XRLayerInit.hpp"

namespace webbind {

class XRRigidTransform;

/// Dictionary type XREquirectLayerInit
class XREquirectLayerInit : public XRLayerInit {
  explicit XREquirectLayerInit(Handle h) noexcept;
public:
    static XREquirectLayerInit take_ownership(Handle h) noexcept;
    explicit XREquirectLayerInit(const emlite::Val &val) noexcept;
    XREquirectLayerInit() noexcept;
    [[nodiscard]] XREquirectLayerInit clone() const noexcept;
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
    /// Getter of the `centralHorizontalAngle` attribute.
    [[nodiscard]] float centralHorizontalAngle() const;
    /// Setter of the `centralHorizontalAngle` attribute.
    void centralHorizontalAngle(float value);
    /// Getter of the `upperVerticalAngle` attribute.
    [[nodiscard]] float upperVerticalAngle() const;
    /// Setter of the `upperVerticalAngle` attribute.
    void upperVerticalAngle(float value);
    /// Getter of the `lowerVerticalAngle` attribute.
    [[nodiscard]] float lowerVerticalAngle() const;
    /// Setter of the `lowerVerticalAngle` attribute.
    void lowerVerticalAngle(float value);
};

} // namespace webbind