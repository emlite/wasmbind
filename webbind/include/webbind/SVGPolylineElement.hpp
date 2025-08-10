#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "SVGGeometryElement.hpp"

namespace webbind {

class SVGPointList;

/// Interface SVGPolylineElement
/// [`SVGPolylineElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGPolylineElement)
class SVGPolylineElement : public SVGGeometryElement {
    explicit SVGPolylineElement(Handle h) noexcept;
public:
    explicit SVGPolylineElement(const emlite::Val &val) noexcept;
    static SVGPolylineElement take_ownership(Handle h) noexcept;
    [[nodiscard]] SVGPolylineElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`SVGPolylineElement.points`](https://developer.mozilla.org/en-US/docs/Web/API/SVGPolylineElement/points)
    /// [`SVGPolylineElement.points`](https://developer.mozilla.org/en-US/docs/Web/API/SVGPolylineElement/points)
    [[nodiscard]] SVGPointList points() const;
    /// [`SVGPolylineElement.animatedPoints`](https://developer.mozilla.org/en-US/docs/Web/API/SVGPolylineElement/animatedPoints)
    /// [`SVGPolylineElement.animatedPoints`](https://developer.mozilla.org/en-US/docs/Web/API/SVGPolylineElement/animatedPoints)
    [[nodiscard]] SVGPointList animatedPoints() const;
};

} // namespace webbind