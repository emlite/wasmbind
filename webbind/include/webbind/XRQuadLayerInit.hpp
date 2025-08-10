#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "XRLayerInit.hpp"

namespace webbind {

class XRRigidTransform;

/// Dictionary type XRQuadLayerInit
class XRQuadLayerInit : public XRLayerInit {
  explicit XRQuadLayerInit(Handle h) noexcept;
public:
    static XRQuadLayerInit take_ownership(Handle h) noexcept;
    explicit XRQuadLayerInit(const emlite::Val &val) noexcept;
    XRQuadLayerInit() noexcept;
    [[nodiscard]] XRQuadLayerInit clone() const noexcept;
    /// Getter of the `textureType` attribute.
    [[nodiscard]] XRTextureType textureType() const;
    /// Setter of the `textureType` attribute.
    void textureType(const XRTextureType& value);
    /// Getter of the `transform` attribute.
    [[nodiscard]] XRRigidTransform transform() const;
    /// Setter of the `transform` attribute.
    void transform(const XRRigidTransform& value);
    /// Getter of the `width` attribute.
    [[nodiscard]] float width() const;
    /// Setter of the `width` attribute.
    void width(float value);
    /// Getter of the `height` attribute.
    [[nodiscard]] float height() const;
    /// Setter of the `height` attribute.
    void height(float value);
};

} // namespace webbind