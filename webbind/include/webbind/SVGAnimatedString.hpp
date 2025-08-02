#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The SVGAnimatedString class.
/// [`SVGAnimatedString`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAnimatedString)
class SVGAnimatedString : public emlite::Val {
    explicit SVGAnimatedString(Handle h) noexcept;

public:
    explicit SVGAnimatedString(const emlite::Val &val) noexcept;
    static SVGAnimatedString take_ownership(Handle h) noexcept;

    [[nodiscard]] SVGAnimatedString clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `baseVal` attribute.
    /// [`SVGAnimatedString.baseVal`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAnimatedString/baseVal)
    [[nodiscard]] jsbind::String baseVal() const;
    /// Setter of the `baseVal` attribute.
    /// [`SVGAnimatedString.baseVal`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAnimatedString/baseVal)
    void baseVal(const jsbind::String& value);
    /// Getter of the `animVal` attribute.
    /// [`SVGAnimatedString.animVal`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAnimatedString/animVal)
    [[nodiscard]] jsbind::String animVal() const;
};

