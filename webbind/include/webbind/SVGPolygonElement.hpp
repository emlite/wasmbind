#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGGeometryElement.hpp"
#include "enums.hpp"

class SVGPointList;


/// The SVGPolygonElement class.
/// [`SVGPolygonElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGPolygonElement)
class SVGPolygonElement : public SVGGeometryElement {
    explicit SVGPolygonElement(Handle h) noexcept;

public:
    explicit SVGPolygonElement(const emlite::Val &val) noexcept;
    static SVGPolygonElement take_ownership(Handle h) noexcept;

    [[nodiscard]] SVGPolygonElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `points` attribute.
    /// [`SVGPolygonElement.points`](https://developer.mozilla.org/en-US/docs/Web/API/SVGPolygonElement/points)
    [[nodiscard]] SVGPointList points() const;
    /// Getter of the `animatedPoints` attribute.
    /// [`SVGPolygonElement.animatedPoints`](https://developer.mozilla.org/en-US/docs/Web/API/SVGPolygonElement/animatedPoints)
    [[nodiscard]] SVGPointList animatedPoints() const;
};

