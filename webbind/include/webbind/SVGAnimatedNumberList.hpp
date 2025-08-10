#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class SVGNumberList;

/// Interface SVGAnimatedNumberList
/// [`SVGAnimatedNumberList`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAnimatedNumberList)
class SVGAnimatedNumberList : public emlite::Val {
    explicit SVGAnimatedNumberList(Handle h) noexcept;
public:
    explicit SVGAnimatedNumberList(const emlite::Val &val) noexcept;
    static SVGAnimatedNumberList take_ownership(Handle h) noexcept;
    [[nodiscard]] SVGAnimatedNumberList clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`SVGAnimatedNumberList.baseVal`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAnimatedNumberList/baseVal)
    /// [`SVGAnimatedNumberList.baseVal`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAnimatedNumberList/baseVal)
    [[nodiscard]] SVGNumberList baseVal() const;
    /// [`SVGAnimatedNumberList.animVal`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAnimatedNumberList/animVal)
    /// [`SVGAnimatedNumberList.animVal`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAnimatedNumberList/animVal)
    [[nodiscard]] SVGNumberList animVal() const;
};

} // namespace webbind