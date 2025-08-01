#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGAnimationElement.hpp"
#include "enums.hpp"


/// The SVGDiscardElement class.
/// [`SVGDiscardElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGDiscardElement)
class SVGDiscardElement : public SVGAnimationElement {
    explicit SVGDiscardElement(Handle h) noexcept;

public:
    explicit SVGDiscardElement(const emlite::Val &val) noexcept;
    static SVGDiscardElement take_ownership(Handle h) noexcept;

    [[nodiscard]] SVGDiscardElement clone() const noexcept;
};

