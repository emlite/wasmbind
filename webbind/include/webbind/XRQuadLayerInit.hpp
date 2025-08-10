#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "XRLayerInit.hpp"

namespace webbind {

class XRRigidTransform;

/// Dictionary type XRQuadLayerInit
/// [`XRQuadLayerInit`](https://developer.mozilla.org/en-US/docs/Web/API/XRQuadLayerInit)
class XRQuadLayerInit : public XRLayerInit {
  explicit XRQuadLayerInit(Handle h) noexcept;
public:
    static XRQuadLayerInit take_ownership(Handle h) noexcept;
    explicit XRQuadLayerInit(const emlite::Val &val) noexcept;
    XRQuadLayerInit() noexcept;
    [[nodiscard]] XRQuadLayerInit clone() const noexcept;
    [[nodiscard]] XRTextureType textureType() const;
    void textureType(const XRTextureType& value);
    [[nodiscard]] XRRigidTransform transform() const;
    void transform(const XRRigidTransform& value);
    [[nodiscard]] float width() const;
    void width(float value);
    [[nodiscard]] float height() const;
    void height(float value);
};

} // namespace webbind