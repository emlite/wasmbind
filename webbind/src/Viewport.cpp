#include <webbind/Viewport.hpp>
#include <webbind/DOMRect.hpp>

namespace webbind {

Viewport Viewport::take_ownership(Handle h) noexcept {
    return Viewport(h);
}

Viewport Viewport::clone() const noexcept { return *this; }

emlite::Val Viewport::instance() noexcept { return emlite::Val::global("Viewport"); }

Viewport::Viewport(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

Viewport::Viewport(const emlite::Val &val) noexcept: emlite::Val(val) {}

jsbind::TypedArray<DOMRect> Viewport::segments() const {
    return emlite::Val::get("segments").as<jsbind::TypedArray<DOMRect>>();
}


} // namespace webbind