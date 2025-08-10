#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Interface SVGAnimatedEnumeration
/// [`SVGAnimatedEnumeration`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAnimatedEnumeration)
class SVGAnimatedEnumeration : public emlite::Val {
    explicit SVGAnimatedEnumeration(Handle h) noexcept;
public:
    explicit SVGAnimatedEnumeration(const emlite::Val &val) noexcept;
    static SVGAnimatedEnumeration take_ownership(Handle h) noexcept;
    [[nodiscard]] SVGAnimatedEnumeration clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`SVGAnimatedEnumeration.baseVal`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAnimatedEnumeration/baseVal)
    /// [`SVGAnimatedEnumeration.baseVal`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAnimatedEnumeration/baseVal)
    [[nodiscard]] unsigned short baseVal() const;
    /// Setter of the `baseVal` attribute.
    /// [`SVGAnimatedEnumeration.baseVal`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAnimatedEnumeration/baseVal)
    void baseVal(unsigned short value);
    /// [`SVGAnimatedEnumeration.animVal`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAnimatedEnumeration/animVal)
    /// [`SVGAnimatedEnumeration.animVal`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAnimatedEnumeration/animVal)
    [[nodiscard]] unsigned short animVal() const;
};

} // namespace webbind