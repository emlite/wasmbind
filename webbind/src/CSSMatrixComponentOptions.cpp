#include <webbind/CSSMatrixComponentOptions.hpp>

namespace webbind {

CSSMatrixComponentOptions::CSSMatrixComponentOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
CSSMatrixComponentOptions CSSMatrixComponentOptions::take_ownership(Handle h) noexcept {
    return CSSMatrixComponentOptions(h);
}

CSSMatrixComponentOptions::CSSMatrixComponentOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}

CSSMatrixComponentOptions::CSSMatrixComponentOptions() noexcept: emlite::Val(emlite::Val::object()) {}

CSSMatrixComponentOptions CSSMatrixComponentOptions::clone() const noexcept { return *this; }

bool CSSMatrixComponentOptions::is2D() const {
    return emlite::Val::get("is2D").as<bool>();
}

void CSSMatrixComponentOptions::is2D(bool value) {
    emlite::Val::set("is2D", value);
}


} // namespace webbind