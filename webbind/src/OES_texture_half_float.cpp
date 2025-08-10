#include <webbind/OES_texture_half_float.hpp>

namespace webbind {

OES_texture_half_float OES_texture_half_float::take_ownership(Handle h) noexcept {
        return OES_texture_half_float(h);
    }
OES_texture_half_float OES_texture_half_float::clone() const noexcept { return *this; }
emlite::Val OES_texture_half_float::instance() noexcept { return emlite::Val::global("OES_texture_half_float"); }
OES_texture_half_float::OES_texture_half_float(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
OES_texture_half_float::OES_texture_half_float(const emlite::Val &val) noexcept: emlite::Val(val) {}


} // namespace webbind