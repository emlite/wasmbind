#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "XRMediaLayerInit.hpp"

namespace webbind {

class XRRigidTransform;

/// Dictionary type XRMediaEquirectLayerInit
/// [`XRMediaEquirectLayerInit`](https://developer.mozilla.org/en-US/docs/Web/API/XRMediaEquirectLayerInit)
class XRMediaEquirectLayerInit : public XRMediaLayerInit {
  explicit XRMediaEquirectLayerInit(Handle h) noexcept;
public:
    static XRMediaEquirectLayerInit take_ownership(Handle h) noexcept;
    explicit XRMediaEquirectLayerInit(const emlite::Val &val) noexcept;
    XRMediaEquirectLayerInit() noexcept;
    [[nodiscard]] XRMediaEquirectLayerInit clone() const noexcept;
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