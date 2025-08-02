#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGGeometryElement.hpp"
#include "enums.hpp"

class SVGPointList;


/// The SVGPolylineElement class.
/// [`SVGPolylineElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGPolylineElement)
class SVGPolylineElement : public SVGGeometryElement {
    explicit SVGPolylineElement(Handle h) noexcept;

public:
    explicit SVGPolylineElement(const emlite::Val &val) noexcept;
    static SVGPolylineElement take_ownership(Handle h) noexcept;

    [[nodiscard]] SVGPolylineElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `points` attribute.
    /// [`SVGPolylineElement.points`](https://developer.mozilla.org/en-US/docs/Web/API/SVGPolylineElement/points)
    [[nodiscard]] SVGPointList points() const;
    /// Getter of the `animatedPoints` attribute.
    /// [`SVGPolylineElement.animatedPoints`](https://developer.mozilla.org/en-US/docs/Web/API/SVGPolylineElement/animatedPoints)
    [[nodiscard]] SVGPointList animatedPoints() const;
};

