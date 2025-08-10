#include <webbind/OES_standard_derivatives.hpp>

namespace webbind {

OES_standard_derivatives OES_standard_derivatives::take_ownership(Handle h) noexcept {
        return OES_standard_derivatives(h);
    }
OES_standard_derivatives OES_standard_derivatives::clone() const noexcept { return *this; }
emlite::Val OES_standard_derivatives::instance() noexcept { return emlite::Val::global("OES_standard_derivatives"); }
OES_standard_derivatives::OES_standard_derivatives(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
OES_standard_derivatives::OES_standard_derivatives(const emlite::Val &val) noexcept: emlite::Val(val) {}


} // namespace webbind