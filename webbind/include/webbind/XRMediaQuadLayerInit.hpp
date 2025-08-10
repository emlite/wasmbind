#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "XRMediaLayerInit.hpp"

namespace webbind {

class XRRigidTransform;

/// Dictionary type XRMediaQuadLayerInit
class XRMediaQuadLayerInit : public XRMediaLayerInit {
  explicit XRMediaQuadLayerInit(Handle h) noexcept;
public:
    static XRMediaQuadLayerInit take_ownership(Handle h) noexcept;
    explicit XRMediaQuadLayerInit(const emlite::Val &val) noexcept;
    XRMediaQuadLayerInit() noexcept;
    [[nodiscard]] XRMediaQuadLayerInit clone() const noexcept;
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