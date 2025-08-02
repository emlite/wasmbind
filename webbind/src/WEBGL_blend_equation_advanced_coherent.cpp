#include <webbind/WEBGL_blend_equation_advanced_coherent.hpp>


WEBGL_blend_equation_advanced_coherent WEBGL_blend_equation_advanced_coherent::take_ownership(Handle h) noexcept {
        return WEBGL_blend_equation_advanced_coherent(h);
    }
WEBGL_blend_equation_advanced_coherent WEBGL_blend_equation_advanced_coherent::clone() const noexcept { return *this; }
emlite::Val WEBGL_blend_equation_advanced_coherent::instance() noexcept { return emlite::Val::global("WEBGL_blend_equation_advanced_coherent"); }
WEBGL_blend_equation_advanced_coherent::WEBGL_blend_equation_advanced_coherent(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
WEBGL_blend_equation_advanced_coherent::WEBGL_blend_equation_advanced_coherent(const emlite::Val &val) noexcept: emlite::Val(val) {}


