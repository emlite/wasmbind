#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class SVGPreserveAspectRatio;


/// The SVGAnimatedPreserveAspectRatio class.
/// [`SVGAnimatedPreserveAspectRatio`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAnimatedPreserveAspectRatio)
class SVGAnimatedPreserveAspectRatio : public emlite::Val {
    explicit SVGAnimatedPreserveAspectRatio(Handle h) noexcept;

public:
    explicit SVGAnimatedPreserveAspectRatio(const emlite::Val &val) noexcept;
    static SVGAnimatedPreserveAspectRatio take_ownership(Handle h) noexcept;

    [[nodiscard]] SVGAnimatedPreserveAspectRatio clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `baseVal` attribute.
    /// [`SVGAnimatedPreserveAspectRatio.baseVal`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAnimatedPreserveAspectRatio/baseVal)
    [[nodiscard]] SVGPreserveAspectRatio baseVal() const;
    /// Getter of the `animVal` attribute.
    /// [`SVGAnimatedPreserveAspectRatio.animVal`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAnimatedPreserveAspectRatio/animVal)
    [[nodiscard]] SVGPreserveAspectRatio animVal() const;
};

