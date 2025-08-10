#include <webbind/EXT_texture_filter_anisotropic.hpp>

namespace webbind {

EXT_texture_filter_anisotropic EXT_texture_filter_anisotropic::take_ownership(Handle h) noexcept {
    return EXT_texture_filter_anisotropic(h);
}

EXT_texture_filter_anisotropic EXT_texture_filter_anisotropic::clone() const noexcept { return *this; }

emlite::Val EXT_texture_filter_anisotropic::instance() noexcept { return emlite::Val::global("EXT_texture_filter_anisotropic"); }

EXT_texture_filter_anisotropic::EXT_texture_filter_anisotropic(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

EXT_texture_filter_anisotropic::EXT_texture_filter_anisotropic(const emlite::Val &val) noexcept: emlite::Val(val) {}


} // namespace webbind