#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class DOMRect;
class DOMRectReadOnly;

/// Interface SVGAnimatedRect
/// [`SVGAnimatedRect`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAnimatedRect)
class SVGAnimatedRect : public emlite::Val {
    explicit SVGAnimatedRect(Handle h) noexcept;
public:
    explicit SVGAnimatedRect(const emlite::Val &val) noexcept;
    static SVGAnimatedRect take_ownership(Handle h) noexcept;
    [[nodiscard]] SVGAnimatedRect clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`SVGAnimatedRect.baseVal`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAnimatedRect/baseVal)
    /// [`SVGAnimatedRect.baseVal`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAnimatedRect/baseVal)
    [[nodiscard]] DOMRect baseVal() const;
    /// [`SVGAnimatedRect.animVal`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAnimatedRect/animVal)
    /// [`SVGAnimatedRect.animVal`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAnimatedRect/animVal)
    [[nodiscard]] DOMRectReadOnly animVal() const;
};

} // namespace webbind