#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class SVGLengthList;


/// The SVGAnimatedLengthList class.
/// [`SVGAnimatedLengthList`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAnimatedLengthList)
class SVGAnimatedLengthList : public emlite::Val {
    explicit SVGAnimatedLengthList(Handle h) noexcept;

public:
    explicit SVGAnimatedLengthList(const emlite::Val &val) noexcept;
    static SVGAnimatedLengthList take_ownership(Handle h) noexcept;

    [[nodiscard]] SVGAnimatedLengthList clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `baseVal` attribute.
    /// [`SVGAnimatedLengthList.baseVal`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAnimatedLengthList/baseVal)
    [[nodiscard]] SVGLengthList baseVal() const;
    /// Getter of the `animVal` attribute.
    /// [`SVGAnimatedLengthList.animVal`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAnimatedLengthList/animVal)
    [[nodiscard]] SVGLengthList animVal() const;
};

