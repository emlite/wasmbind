#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class SVGNumberList;


/// The SVGAnimatedNumberList class.
/// [`SVGAnimatedNumberList`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAnimatedNumberList)
class SVGAnimatedNumberList : public emlite::Val {
    explicit SVGAnimatedNumberList(Handle h) noexcept;

public:
    explicit SVGAnimatedNumberList(const emlite::Val &val) noexcept;
    static SVGAnimatedNumberList take_ownership(Handle h) noexcept;

    [[nodiscard]] SVGAnimatedNumberList clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `baseVal` attribute.
    /// [`SVGAnimatedNumberList.baseVal`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAnimatedNumberList/baseVal)
    [[nodiscard]] SVGNumberList baseVal() const;
    /// Getter of the `animVal` attribute.
    /// [`SVGAnimatedNumberList.animVal`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAnimatedNumberList/animVal)
    [[nodiscard]] SVGNumberList animVal() const;
};

