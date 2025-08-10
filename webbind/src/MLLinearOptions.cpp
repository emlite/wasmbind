#include <webbind/MLLinearOptions.hpp>

namespace webbind {

MLLinearOptions::MLLinearOptions(Handle h) noexcept : MLOperatorOptions(emlite::Val::take_ownership(h)) {}
MLLinearOptions MLLinearOptions::take_ownership(Handle h) noexcept {
    return MLLinearOptions(h);
}

MLLinearOptions::MLLinearOptions(const emlite::Val &val) noexcept: MLOperatorOptions(val) {}

MLLinearOptions::MLLinearOptions() noexcept: MLOperatorOptions(emlite::Val::object()) {}

MLLinearOptions MLLinearOptions::clone() const noexcept { return *this; }

double MLLinearOptions::alpha() const {
    return emlite::Val::get("alpha").as<double>();
}

void MLLinearOptions::alpha(double value) {
    emlite::Val::set("alpha", value);
}

double MLLinearOptions::beta() const {
    return emlite::Val::get("beta").as<double>();
}

void MLLinearOptions::beta(double value) {
    emlite::Val::set("beta", value);
}


} // namespace webbind