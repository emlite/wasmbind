#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class SVGLengthList;

/// Interface SVGAnimatedLengthList
/// [`SVGAnimatedLengthList`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAnimatedLengthList)
class SVGAnimatedLengthList : public emlite::Val {
    explicit SVGAnimatedLengthList(Handle h) noexcept;
public:
    explicit SVGAnimatedLengthList(const emlite::Val &val) noexcept;
    static SVGAnimatedLengthList take_ownership(Handle h) noexcept;
    [[nodiscard]] SVGAnimatedLengthList clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`SVGAnimatedLengthList.baseVal`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAnimatedLengthList/baseVal)
    /// [`SVGAnimatedLengthList.baseVal`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAnimatedLengthList/baseVal)
    [[nodiscard]] SVGLengthList baseVal() const;
    /// [`SVGAnimatedLengthList.animVal`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAnimatedLengthList/animVal)
    /// [`SVGAnimatedLengthList.animVal`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAnimatedLengthList/animVal)
    [[nodiscard]] SVGLengthList animVal() const;
};

} // namespace webbind