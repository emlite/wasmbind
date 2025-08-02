#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class SVGLength;


/// The SVGAnimatedLength class.
/// [`SVGAnimatedLength`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAnimatedLength)
class SVGAnimatedLength : public emlite::Val {
    explicit SVGAnimatedLength(Handle h) noexcept;

public:
    explicit SVGAnimatedLength(const emlite::Val &val) noexcept;
    static SVGAnimatedLength take_ownership(Handle h) noexcept;

    [[nodiscard]] SVGAnimatedLength clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `baseVal` attribute.
    /// [`SVGAnimatedLength.baseVal`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAnimatedLength/baseVal)
    [[nodiscard]] SVGLength baseVal() const;
    /// Getter of the `animVal` attribute.
    /// [`SVGAnimatedLength.animVal`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAnimatedLength/animVal)
    [[nodiscard]] SVGLength animVal() const;
};

