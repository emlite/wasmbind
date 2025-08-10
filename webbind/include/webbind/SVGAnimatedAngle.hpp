#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class SVGAngle;

/// Interface SVGAnimatedAngle
/// [`SVGAnimatedAngle`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAnimatedAngle)
class SVGAnimatedAngle : public emlite::Val {
    explicit SVGAnimatedAngle(Handle h) noexcept;
public:
    explicit SVGAnimatedAngle(const emlite::Val &val) noexcept;
    static SVGAnimatedAngle take_ownership(Handle h) noexcept;
    [[nodiscard]] SVGAnimatedAngle clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`SVGAnimatedAngle.baseVal`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAnimatedAngle/baseVal)
    /// [`SVGAnimatedAngle.baseVal`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAnimatedAngle/baseVal)
    [[nodiscard]] SVGAngle baseVal() const;
    /// [`SVGAnimatedAngle.animVal`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAnimatedAngle/animVal)
    /// [`SVGAnimatedAngle.animVal`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAnimatedAngle/animVal)
    [[nodiscard]] SVGAngle animVal() const;
};

} // namespace webbind