#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "SVGGeometryElement.hpp"

namespace webbind {

class SVGPointList;

/// Interface SVGPolygonElement
/// [`SVGPolygonElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGPolygonElement)
class SVGPolygonElement : public SVGGeometryElement {
    explicit SVGPolygonElement(Handle h) noexcept;
public:
    explicit SVGPolygonElement(const emlite::Val &val) noexcept;
    static SVGPolygonElement take_ownership(Handle h) noexcept;
    [[nodiscard]] SVGPolygonElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`SVGPolygonElement.points`](https://developer.mozilla.org/en-US/docs/Web/API/SVGPolygonElement/points)
    /// [`SVGPolygonElement.points`](https://developer.mozilla.org/en-US/docs/Web/API/SVGPolygonElement/points)
    [[nodiscard]] SVGPointList points() const;
    /// [`SVGPolygonElement.animatedPoints`](https://developer.mozilla.org/en-US/docs/Web/API/SVGPolygonElement/animatedPoints)
    /// [`SVGPolygonElement.animatedPoints`](https://developer.mozilla.org/en-US/docs/Web/API/SVGPolygonElement/animatedPoints)
    [[nodiscard]] SVGPointList animatedPoints() const;
};

} // namespace webbind