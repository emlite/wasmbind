#include <webbind/Viewport.hpp>
#include <webbind/DOMRect.hpp>


Viewport Viewport::take_ownership(Handle h) noexcept {
        return Viewport(h);
    }
Viewport Viewport::clone() const noexcept { return *this; }
Viewport::Viewport(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
Viewport::Viewport(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::FrozenArray<DOMRect> Viewport::segments() const {
    return emlite::Val::get("segments").as<jsbind::FrozenArray<DOMRect>>();
}

