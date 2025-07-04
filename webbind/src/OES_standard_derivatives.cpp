#include <webbind/OES_standard_derivatives.hpp>


OES_standard_derivatives OES_standard_derivatives::take_ownership(Handle h) noexcept {
        return OES_standard_derivatives(h);
    }
OES_standard_derivatives OES_standard_derivatives::clone() const noexcept { return *this; }
OES_standard_derivatives::OES_standard_derivatives(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
OES_standard_derivatives::OES_standard_derivatives(const emlite::Val &val) noexcept: emlite::Val(val) {}


