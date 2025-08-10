#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Interface SVGAnimatedString
/// [`SVGAnimatedString`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAnimatedString)
class SVGAnimatedString : public emlite::Val {
    explicit SVGAnimatedString(Handle h) noexcept;
public:
    explicit SVGAnimatedString(const emlite::Val &val) noexcept;
    static SVGAnimatedString take_ownership(Handle h) noexcept;
    [[nodiscard]] SVGAnimatedString clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`SVGAnimatedString.baseVal`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAnimatedString/baseVal)
    /// [`SVGAnimatedString.baseVal`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAnimatedString/baseVal)
    [[nodiscard]] jsbind::String baseVal() const;
    /// Setter of the `baseVal` attribute.
    /// [`SVGAnimatedString.baseVal`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAnimatedString/baseVal)
    void baseVal(const jsbind::String& value);
    /// [`SVGAnimatedString.animVal`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAnimatedString/animVal)
    /// [`SVGAnimatedString.animVal`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAnimatedString/animVal)
    [[nodiscard]] jsbind::String animVal() const;
};

} // namespace webbind