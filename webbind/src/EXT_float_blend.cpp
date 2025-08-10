#include <webbind/EXT_float_blend.hpp>

namespace webbind {

EXT_float_blend EXT_float_blend::take_ownership(Handle h) noexcept {
    return EXT_float_blend(h);
}

EXT_float_blend EXT_float_blend::clone() const noexcept { return *this; }

emlite::Val EXT_float_blend::instance() noexcept { return emlite::Val::global("EXT_float_blend"); }

EXT_float_blend::EXT_float_blend(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

EXT_float_blend::EXT_float_blend(const emlite::Val &val) noexcept: emlite::Val(val) {}


} // namespace webbind