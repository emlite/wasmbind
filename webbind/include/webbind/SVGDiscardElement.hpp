#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "SVGAnimationElement.hpp"

namespace webbind {

/// Interface SVGDiscardElement
/// [`SVGDiscardElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGDiscardElement)
class SVGDiscardElement : public SVGAnimationElement {
    explicit SVGDiscardElement(Handle h) noexcept;
public:
    explicit SVGDiscardElement(const emlite::Val &val) noexcept;
    static SVGDiscardElement take_ownership(Handle h) noexcept;
    [[nodiscard]] SVGDiscardElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
};

} // namespace webbind