#include <webbind/SVGUseElementShadowRoot.hpp>


SVGUseElementShadowRoot SVGUseElementShadowRoot::take_ownership(Handle h) noexcept {
        return SVGUseElementShadowRoot(h);
    }
SVGUseElementShadowRoot SVGUseElementShadowRoot::clone() const noexcept { return *this; }
SVGUseElementShadowRoot::SVGUseElementShadowRoot(Handle h) noexcept : ShadowRoot(emlite::Val::take_ownership(h)) {}
SVGUseElementShadowRoot::SVGUseElementShadowRoot(const emlite::Val &val) noexcept: ShadowRoot(val) {}


