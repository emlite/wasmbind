#include "webbind/MLTriangularOptions.hpp"

using emlite::Val;
namespace webbind {

MLTriangularOptions::MLTriangularOptions(Handle h) noexcept : MLOperatorOptions(emlite::Val::take_ownership(h)) {}
MLTriangularOptions MLTriangularOptions::take_ownership(Handle h) noexcept {
        return MLTriangularOptions(h);
    }
MLTriangularOptions::MLTriangularOptions(const emlite::Val &val) noexcept: MLOperatorOptions(val) {}
MLTriangularOptions::MLTriangularOptions() noexcept: MLOperatorOptions(emlite::Val::object()) {}
MLTriangularOptions MLTriangularOptions::clone() const noexcept { return *this; }

bool MLTriangularOptions::upper() const {
    return emlite::Val::get("upper").as<bool>();
}

void MLTriangularOptions::upper(bool value) {
    emlite::Val::set("upper", value);
}

long MLTriangularOptions::diagonal() const {
    return emlite::Val::get("diagonal").as<long>();
}

void MLTriangularOptions::diagonal(long value) {
    emlite::Val::set("diagonal", value);
}


} // namespace webbind