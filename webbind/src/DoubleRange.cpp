#include "webbind/DoubleRange.hpp"

using emlite::Val;
namespace webbind {

DoubleRange::DoubleRange(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
DoubleRange DoubleRange::take_ownership(Handle h) noexcept {
        return DoubleRange(h);
    }
DoubleRange::DoubleRange(const emlite::Val &val) noexcept: emlite::Val(val) {}
DoubleRange::DoubleRange() noexcept: emlite::Val(emlite::Val::object()) {}
DoubleRange DoubleRange::clone() const noexcept { return *this; }

double DoubleRange::max() const {
    return emlite::Val::get("max").as<double>();
}

void DoubleRange::max(double value) {
    emlite::Val::set("max", value);
}

double DoubleRange::min() const {
    return emlite::Val::get("min").as<double>();
}

void DoubleRange::min(double value) {
    emlite::Val::set("min", value);
}


} // namespace webbind