#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The SVGAnimatedBoolean class.
/// [`SVGAnimatedBoolean`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAnimatedBoolean)
class SVGAnimatedBoolean : public emlite::Val {
    explicit SVGAnimatedBoolean(Handle h) noexcept;

public:
    explicit SVGAnimatedBoolean(const emlite::Val &val) noexcept;
    static SVGAnimatedBoolean take_ownership(Handle h) noexcept;

    [[nodiscard]] SVGAnimatedBoolean clone() const noexcept;
    /// Getter of the `baseVal` attribute.
    /// [`SVGAnimatedBoolean.baseVal`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAnimatedBoolean/baseVal)
    [[nodiscard]] bool baseVal() const;
    /// Setter of the `baseVal` attribute.
    /// [`SVGAnimatedBoolean.baseVal`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAnimatedBoolean/baseVal)
    void baseVal(bool value);
    /// Getter of the `animVal` attribute.
    /// [`SVGAnimatedBoolean.animVal`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAnimatedBoolean/animVal)
    [[nodiscard]] bool animVal() const;
};

