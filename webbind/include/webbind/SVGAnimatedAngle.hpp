#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class SVGAngle;


/// The SVGAnimatedAngle class.
/// [`SVGAnimatedAngle`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAnimatedAngle)
class SVGAnimatedAngle : public emlite::Val {
    explicit SVGAnimatedAngle(Handle h) noexcept;

public:
    explicit SVGAnimatedAngle(const emlite::Val &val) noexcept;
    static SVGAnimatedAngle take_ownership(Handle h) noexcept;

    [[nodiscard]] SVGAnimatedAngle clone() const noexcept;
    /// Getter of the `baseVal` attribute.
    /// [`SVGAnimatedAngle.baseVal`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAnimatedAngle/baseVal)
    [[nodiscard]] SVGAngle baseVal() const;
    /// Getter of the `animVal` attribute.
    /// [`SVGAnimatedAngle.animVal`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAnimatedAngle/animVal)
    [[nodiscard]] SVGAngle animVal() const;
};

