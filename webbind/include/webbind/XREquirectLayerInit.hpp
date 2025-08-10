#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "XRLayerInit.hpp"

namespace webbind {

class XRRigidTransform;

/// Dictionary type XREquirectLayerInit
/// [`XREquirectLayerInit`](https://developer.mozilla.org/en-US/docs/Web/API/XREquirectLayerInit)
class XREquirectLayerInit : public XRLayerInit {
  explicit XREquirectLayerInit(Handle h) noexcept;
public:
    static XREquirectLayerInit take_ownership(Handle h) noexcept;
    explicit XREquirectLayerInit(const emlite::Val &val) noexcept;
    XREquirectLayerInit() noexcept;
    [[nodiscard]] XREquirectLayerInit clone() const noexcept;
    [[nodiscard]] XRTextureType textureType() const;
    void textureType(const XRTextureType& value);
    [[nodiscard]] XRRigidTransform transform() const;
    void transform(const XRRigidTransform& value);
    [[nodiscard]] float radius() const;
    void radius(float value);
    [[nodiscard]] float centralHorizontalAngle() const;
    void centralHorizontalAngle(float value);
    [[nodiscard]] float upperVerticalAngle() const;
    void upperVerticalAngle(float value);
    [[nodiscard]] float lowerVerticalAngle() const;
    void lowerVerticalAngle(float value);
};

} // namespace webbind