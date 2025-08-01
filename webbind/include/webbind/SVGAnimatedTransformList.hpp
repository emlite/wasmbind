#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class SVGTransformList;


/// The SVGAnimatedTransformList class.
/// [`SVGAnimatedTransformList`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAnimatedTransformList)
class SVGAnimatedTransformList : public emlite::Val {
    explicit SVGAnimatedTransformList(Handle h) noexcept;

public:
    explicit SVGAnimatedTransformList(const emlite::Val &val) noexcept;
    static SVGAnimatedTransformList take_ownership(Handle h) noexcept;

    [[nodiscard]] SVGAnimatedTransformList clone() const noexcept;
    /// Getter of the `baseVal` attribute.
    /// [`SVGAnimatedTransformList.baseVal`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAnimatedTransformList/baseVal)
    [[nodiscard]] SVGTransformList baseVal() const;
    /// Getter of the `animVal` attribute.
    /// [`SVGAnimatedTransformList.animVal`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAnimatedTransformList/animVal)
    [[nodiscard]] SVGTransformList animVal() const;
};

