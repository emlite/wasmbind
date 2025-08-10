#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "XRMediaLayerInit.hpp"

namespace webbind {

class XRRigidTransform;

/// Dictionary type XRMediaEquirectLayerInit
class XRMediaEquirectLayerInit : public XRMediaLayerInit {
  explicit XRMediaEquirectLayerInit(Handle h) noexcept;
public:
    static XRMediaEquirectLayerInit take_ownership(Handle h) noexcept;
    explicit XRMediaEquirectLayerInit(const emlite::Val &val) noexcept;
    XRMediaEquirectLayerInit() noexcept;
    [[nodiscard]] XRMediaEquirectLayerInit clone() const noexcept;
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