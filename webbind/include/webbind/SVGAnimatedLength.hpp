#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class SVGLength;

/// Interface SVGAnimatedLength
/// [`SVGAnimatedLength`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAnimatedLength)
class SVGAnimatedLength : public emlite::Val {
    explicit SVGAnimatedLength(Handle h) noexcept;
public:
    explicit SVGAnimatedLength(const emlite::Val &val) noexcept;
    static SVGAnimatedLength take_ownership(Handle h) noexcept;
    [[nodiscard]] SVGAnimatedLength clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`SVGAnimatedLength.baseVal`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAnimatedLength/baseVal)
    /// [`SVGAnimatedLength.baseVal`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAnimatedLength/baseVal)
    [[nodiscard]] SVGLength baseVal() const;
    /// [`SVGAnimatedLength.animVal`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAnimatedLength/animVal)
    /// [`SVGAnimatedLength.animVal`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAnimatedLength/animVal)
    [[nodiscard]] SVGLength animVal() const;
};

} // namespace webbind