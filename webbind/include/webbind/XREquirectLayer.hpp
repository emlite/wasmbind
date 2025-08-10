#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "XRCompositionLayer.hpp"

namespace webbind {

class XRSpace;
class XRRigidTransform;

/// Interface XREquirectLayer
/// [`XREquirectLayer`](https://developer.mozilla.org/en-US/docs/Web/API/XREquirectLayer)
class XREquirectLayer : public XRCompositionLayer {
    explicit XREquirectLayer(Handle h) noexcept;
public:
    explicit XREquirectLayer(const emlite::Val &val) noexcept;
    static XREquirectLayer take_ownership(Handle h) noexcept;
    [[nodiscard]] XREquirectLayer clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `space` attribute.
    /// [`XREquirectLayer.space`](https://developer.mozilla.org/en-US/docs/Web/API/XREquirectLayer/space)
    [[nodiscard]] XRSpace space() const;
    /// Setter of the `space` attribute.
    /// [`XREquirectLayer.space`](https://developer.mozilla.org/en-US/docs/Web/API/XREquirectLayer/space)
    void space(const XRSpace& value);
    /// Getter of the `transform` attribute.
    /// [`XREquirectLayer.transform`](https://developer.mozilla.org/en-US/docs/Web/API/XREquirectLayer/transform)
    [[nodiscard]] XRRigidTransform transform() const;
    /// Setter of the `transform` attribute.
    /// [`XREquirectLayer.transform`](https://developer.mozilla.org/en-US/docs/Web/API/XREquirectLayer/transform)
    void transform(const XRRigidTransform& value);
    /// Getter of the `radius` attribute.
    /// [`XREquirectLayer.radius`](https://developer.mozilla.org/en-US/docs/Web/API/XREquirectLayer/radius)
    [[nodiscard]] float radius() const;
    /// Setter of the `radius` attribute.
    /// [`XREquirectLayer.radius`](https://developer.mozilla.org/en-US/docs/Web/API/XREquirectLayer/radius)
    void radius(float value);
    /// Getter of the `centralHorizontalAngle` attribute.
    /// [`XREquirectLayer.centralHorizontalAngle`](https://developer.mozilla.org/en-US/docs/Web/API/XREquirectLayer/centralHorizontalAngle)
    [[nodiscard]] float centralHorizontalAngle() const;
    /// Setter of the `centralHorizontalAngle` attribute.
    /// [`XREquirectLayer.centralHorizontalAngle`](https://developer.mozilla.org/en-US/docs/Web/API/XREquirectLayer/centralHorizontalAngle)
    void centralHorizontalAngle(float value);
    /// Getter of the `upperVerticalAngle` attribute.
    /// [`XREquirectLayer.upperVerticalAngle`](https://developer.mozilla.org/en-US/docs/Web/API/XREquirectLayer/upperVerticalAngle)
    [[nodiscard]] float upperVerticalAngle() const;
    /// Setter of the `upperVerticalAngle` attribute.
    /// [`XREquirectLayer.upperVerticalAngle`](https://developer.mozilla.org/en-US/docs/Web/API/XREquirectLayer/upperVerticalAngle)
    void upperVerticalAngle(float value);
    /// Getter of the `lowerVerticalAngle` attribute.
    /// [`XREquirectLayer.lowerVerticalAngle`](https://developer.mozilla.org/en-US/docs/Web/API/XREquirectLayer/lowerVerticalAngle)
    [[nodiscard]] float lowerVerticalAngle() const;
    /// Setter of the `lowerVerticalAngle` attribute.
    /// [`XREquirectLayer.lowerVerticalAngle`](https://developer.mozilla.org/en-US/docs/Web/API/XREquirectLayer/lowerVerticalAngle)
    void lowerVerticalAngle(float value);
    /// Getter of the `onredraw` attribute.
    /// [`XREquirectLayer.onredraw`](https://developer.mozilla.org/en-US/docs/Web/API/XREquirectLayer/onredraw)
    [[nodiscard]] jsbind::Any onredraw() const;
    /// Setter of the `onredraw` attribute.
    /// [`XREquirectLayer.onredraw`](https://developer.mozilla.org/en-US/docs/Web/API/XREquirectLayer/onredraw)
    void onredraw(const jsbind::Any& value);
};

} // namespace webbind