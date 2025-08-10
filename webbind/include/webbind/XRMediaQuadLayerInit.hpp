#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "XRMediaLayerInit.hpp"

namespace webbind {

class XRRigidTransform;

/// Dictionary type XRMediaQuadLayerInit
/// [`XRMediaQuadLayerInit`](https://developer.mozilla.org/en-US/docs/Web/API/XRMediaQuadLayerInit)
class XRMediaQuadLayerInit : public XRMediaLayerInit {
  explicit XRMediaQuadLayerInit(Handle h) noexcept;
public:
    static XRMediaQuadLayerInit take_ownership(Handle h) noexcept;
    explicit XRMediaQuadLayerInit(const emlite::Val &val) noexcept;
    XRMediaQuadLayerInit() noexcept;
    [[nodiscard]] XRMediaQuadLayerInit clone() const noexcept;
    [[nodiscard]] XRRigidTransform transform() const;
    void transform(const XRRigidTransform& value);
    [[nodiscard]] float width() const;
    void width(float value);
    [[nodiscard]] float height() const;
    void height(float value);
};

} // namespace webbind