#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "SVGElement.hpp"

namespace webbind {

class SVGAnimatedLength;
class SVGAnimatedEnumeration;
class SVGAnimatedAngle;
class SVGAngle;
class SVGAnimatedRect;
class SVGAnimatedPreserveAspectRatio;

/// Interface SVGMarkerElement
/// [`SVGMarkerElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGMarkerElement)
class SVGMarkerElement : public SVGElement {
    explicit SVGMarkerElement(Handle h) noexcept;
public:
    explicit SVGMarkerElement(const emlite::Val &val) noexcept;
    static SVGMarkerElement take_ownership(Handle h) noexcept;
    [[nodiscard]] SVGMarkerElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `refX` attribute.
    /// [`SVGMarkerElement.refX`](https://developer.mozilla.org/en-US/docs/Web/API/SVGMarkerElement/refX)
    [[nodiscard]] SVGAnimatedLength refX() const;
    /// Getter of the `refY` attribute.
    /// [`SVGMarkerElement.refY`](https://developer.mozilla.org/en-US/docs/Web/API/SVGMarkerElement/refY)
    [[nodiscard]] SVGAnimatedLength refY() const;
    /// Getter of the `markerUnits` attribute.
    /// [`SVGMarkerElement.markerUnits`](https://developer.mozilla.org/en-US/docs/Web/API/SVGMarkerElement/markerUnits)
    [[nodiscard]] SVGAnimatedEnumeration markerUnits() const;
    /// Getter of the `markerWidth` attribute.
    /// [`SVGMarkerElement.markerWidth`](https://developer.mozilla.org/en-US/docs/Web/API/SVGMarkerElement/markerWidth)
    [[nodiscard]] SVGAnimatedLength markerWidth() const;
    /// Getter of the `markerHeight` attribute.
    /// [`SVGMarkerElement.markerHeight`](https://developer.mozilla.org/en-US/docs/Web/API/SVGMarkerElement/markerHeight)
    [[nodiscard]] SVGAnimatedLength markerHeight() const;
    /// Getter of the `orientType` attribute.
    /// [`SVGMarkerElement.orientType`](https://developer.mozilla.org/en-US/docs/Web/API/SVGMarkerElement/orientType)
    [[nodiscard]] SVGAnimatedEnumeration orientType() const;
    /// Getter of the `orientAngle` attribute.
    /// [`SVGMarkerElement.orientAngle`](https://developer.mozilla.org/en-US/docs/Web/API/SVGMarkerElement/orientAngle)
    [[nodiscard]] SVGAnimatedAngle orientAngle() const;
    /// Getter of the `orient` attribute.
    /// [`SVGMarkerElement.orient`](https://developer.mozilla.org/en-US/docs/Web/API/SVGMarkerElement/orient)
    [[nodiscard]] jsbind::String orient() const;
    /// Setter of the `orient` attribute.
    /// [`SVGMarkerElement.orient`](https://developer.mozilla.org/en-US/docs/Web/API/SVGMarkerElement/orient)
    void orient(const jsbind::String& value);
    /// The setOrientToAuto method.
    /// [`SVGMarkerElement.setOrientToAuto`](https://developer.mozilla.org/en-US/docs/Web/API/SVGMarkerElement/setOrientToAuto)
    jsbind::Undefined setOrientToAuto();
    /// The setOrientToAngle method.
    /// [`SVGMarkerElement.setOrientToAngle`](https://developer.mozilla.org/en-US/docs/Web/API/SVGMarkerElement/setOrientToAngle)
    jsbind::Undefined setOrientToAngle(const SVGAngle& angle);
    /// Getter of the `viewBox` attribute.
    /// [`SVGMarkerElement.viewBox`](https://developer.mozilla.org/en-US/docs/Web/API/SVGMarkerElement/viewBox)
    [[nodiscard]] SVGAnimatedRect viewBox() const;
    /// Getter of the `preserveAspectRatio` attribute.
    /// [`SVGMarkerElement.preserveAspectRatio`](https://developer.mozilla.org/en-US/docs/Web/API/SVGMarkerElement/preserveAspectRatio)
    [[nodiscard]] SVGAnimatedPreserveAspectRatio preserveAspectRatio() const;
};

} // namespace webbind