#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "XRCompositionLayer.hpp"
#include "enums.hpp"

class XRSpace;
class XRRigidTransform;


/// The XRCylinderLayer class.
/// [`XRCylinderLayer`](https://developer.mozilla.org/en-US/docs/Web/API/XRCylinderLayer)
class XRCylinderLayer : public XRCompositionLayer {
    explicit XRCylinderLayer(Handle h) noexcept;

public:
    explicit XRCylinderLayer(const emlite::Val &val) noexcept;
    static XRCylinderLayer take_ownership(Handle h) noexcept;

    [[nodiscard]] XRCylinderLayer clone() const noexcept;
    /// Getter of the `space` attribute.
    /// [`XRCylinderLayer.space`](https://developer.mozilla.org/en-US/docs/Web/API/XRCylinderLayer/space)
    [[nodiscard]] XRSpace space() const;
    /// Setter of the `space` attribute.
    /// [`XRCylinderLayer.space`](https://developer.mozilla.org/en-US/docs/Web/API/XRCylinderLayer/space)
    void space(const XRSpace& value);
    /// Getter of the `transform` attribute.
    /// [`XRCylinderLayer.transform`](https://developer.mozilla.org/en-US/docs/Web/API/XRCylinderLayer/transform)
    [[nodiscard]] XRRigidTransform transform() const;
    /// Setter of the `transform` attribute.
    /// [`XRCylinderLayer.transform`](https://developer.mozilla.org/en-US/docs/Web/API/XRCylinderLayer/transform)
    void transform(const XRRigidTransform& value);
    /// Getter of the `radius` attribute.
    /// [`XRCylinderLayer.radius`](https://developer.mozilla.org/en-US/docs/Web/API/XRCylinderLayer/radius)
    [[nodiscard]] float radius() const;
    /// Setter of the `radius` attribute.
    /// [`XRCylinderLayer.radius`](https://developer.mozilla.org/en-US/docs/Web/API/XRCylinderLayer/radius)
    void radius(float value);
    /// Getter of the `centralAngle` attribute.
    /// [`XRCylinderLayer.centralAngle`](https://developer.mozilla.org/en-US/docs/Web/API/XRCylinderLayer/centralAngle)
    [[nodiscard]] float centralAngle() const;
    /// Setter of the `centralAngle` attribute.
    /// [`XRCylinderLayer.centralAngle`](https://developer.mozilla.org/en-US/docs/Web/API/XRCylinderLayer/centralAngle)
    void centralAngle(float value);
    /// Getter of the `aspectRatio` attribute.
    /// [`XRCylinderLayer.aspectRatio`](https://developer.mozilla.org/en-US/docs/Web/API/XRCylinderLayer/aspectRatio)
    [[nodiscard]] float aspectRatio() const;
    /// Setter of the `aspectRatio` attribute.
    /// [`XRCylinderLayer.aspectRatio`](https://developer.mozilla.org/en-US/docs/Web/API/XRCylinderLayer/aspectRatio)
    void aspectRatio(float value);
    /// Getter of the `onredraw` attribute.
    /// [`XRCylinderLayer.onredraw`](https://developer.mozilla.org/en-US/docs/Web/API/XRCylinderLayer/onredraw)
    [[nodiscard]] jsbind::Any onredraw() const;
    /// Setter of the `onredraw` attribute.
    /// [`XRCylinderLayer.onredraw`](https://developer.mozilla.org/en-US/docs/Web/API/XRCylinderLayer/onredraw)
    void onredraw(const jsbind::Any& value);
};

