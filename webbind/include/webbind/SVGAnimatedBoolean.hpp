#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Interface SVGAnimatedBoolean
/// [`SVGAnimatedBoolean`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAnimatedBoolean)
class SVGAnimatedBoolean : public emlite::Val {
    explicit SVGAnimatedBoolean(Handle h) noexcept;
public:
    explicit SVGAnimatedBoolean(const emlite::Val &val) noexcept;
    static SVGAnimatedBoolean take_ownership(Handle h) noexcept;
    [[nodiscard]] SVGAnimatedBoolean clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`SVGAnimatedBoolean.baseVal`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAnimatedBoolean/baseVal)
    /// [`SVGAnimatedBoolean.baseVal`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAnimatedBoolean/baseVal)
    [[nodiscard]] bool baseVal() const;
    /// Setter of the `baseVal` attribute.
    /// [`SVGAnimatedBoolean.baseVal`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAnimatedBoolean/baseVal)
    void baseVal(bool value);
    /// [`SVGAnimatedBoolean.animVal`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAnimatedBoolean/animVal)
    /// [`SVGAnimatedBoolean.animVal`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAnimatedBoolean/animVal)
    [[nodiscard]] bool animVal() const;
};

} // namespace webbind