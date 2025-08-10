#include "webbind/ConstrainDoubleRange.hpp"

using emlite::Val;
namespace webbind {

ConstrainDoubleRange::ConstrainDoubleRange(Handle h) noexcept : DoubleRange(emlite::Val::take_ownership(h)) {}
ConstrainDoubleRange ConstrainDoubleRange::take_ownership(Handle h) noexcept {
        return ConstrainDoubleRange(h);
    }
ConstrainDoubleRange::ConstrainDoubleRange(const emlite::Val &val) noexcept: DoubleRange(val) {}
ConstrainDoubleRange::ConstrainDoubleRange() noexcept: DoubleRange(emlite::Val::object()) {}
ConstrainDoubleRange ConstrainDoubleRange::clone() const noexcept { return *this; }

double ConstrainDoubleRange::exact() const {
    return emlite::Val::get("exact").as<double>();
}

void ConstrainDoubleRange::exact(double value) {
    emlite::Val::set("exact", value);
}

double ConstrainDoubleRange::ideal() const {
    return emlite::Val::get("ideal").as<double>();
}

void ConstrainDoubleRange::ideal(double value) {
    emlite::Val::set("ideal", value);
}


} // namespace webbind