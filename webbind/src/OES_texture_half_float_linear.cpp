#include <webbind/OES_texture_half_float_linear.hpp>

namespace webbind {

OES_texture_half_float_linear OES_texture_half_float_linear::take_ownership(Handle h) noexcept {
    return OES_texture_half_float_linear(h);
}

OES_texture_half_float_linear OES_texture_half_float_linear::clone() const noexcept { return *this; }

emlite::Val OES_texture_half_float_linear::instance() noexcept { return emlite::Val::global("OES_texture_half_float_linear"); }

OES_texture_half_float_linear::OES_texture_half_float_linear(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

OES_texture_half_float_linear::OES_texture_half_float_linear(const emlite::Val &val) noexcept: emlite::Val(val) {}


} // namespace webbind