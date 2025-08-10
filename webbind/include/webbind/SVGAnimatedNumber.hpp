#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Interface SVGAnimatedNumber
/// [`SVGAnimatedNumber`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAnimatedNumber)
class SVGAnimatedNumber : public emlite::Val {
    explicit SVGAnimatedNumber(Handle h) noexcept;
public:
    explicit SVGAnimatedNumber(const emlite::Val &val) noexcept;
    static SVGAnimatedNumber take_ownership(Handle h) noexcept;
    [[nodiscard]] SVGAnimatedNumber clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`SVGAnimatedNumber.baseVal`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAnimatedNumber/baseVal)
    /// [`SVGAnimatedNumber.baseVal`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAnimatedNumber/baseVal)
    [[nodiscard]] float baseVal() const;
    /// Setter of the `baseVal` attribute.
    /// [`SVGAnimatedNumber.baseVal`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAnimatedNumber/baseVal)
    void baseVal(float value);
    /// [`SVGAnimatedNumber.animVal`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAnimatedNumber/animVal)
    /// [`SVGAnimatedNumber.animVal`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAnimatedNumber/animVal)
    [[nodiscard]] float animVal() const;
};

} // namespace webbind