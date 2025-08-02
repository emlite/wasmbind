#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The SVGAnimatedInteger class.
/// [`SVGAnimatedInteger`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAnimatedInteger)
class SVGAnimatedInteger : public emlite::Val {
    explicit SVGAnimatedInteger(Handle h) noexcept;

public:
    explicit SVGAnimatedInteger(const emlite::Val &val) noexcept;
    static SVGAnimatedInteger take_ownership(Handle h) noexcept;

    [[nodiscard]] SVGAnimatedInteger clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `baseVal` attribute.
    /// [`SVGAnimatedInteger.baseVal`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAnimatedInteger/baseVal)
    [[nodiscard]] long baseVal() const;
    /// Setter of the `baseVal` attribute.
    /// [`SVGAnimatedInteger.baseVal`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAnimatedInteger/baseVal)
    void baseVal(long value);
    /// Getter of the `animVal` attribute.
    /// [`SVGAnimatedInteger.animVal`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAnimatedInteger/animVal)
    [[nodiscard]] long animVal() const;
};

