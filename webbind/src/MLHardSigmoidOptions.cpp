#include <webbind/MLHardSigmoidOptions.hpp>

using emlite::Val;
namespace webbind {

MLHardSigmoidOptions::MLHardSigmoidOptions(Handle h) noexcept : MLOperatorOptions(emlite::Val::take_ownership(h)) {}
MLHardSigmoidOptions MLHardSigmoidOptions::take_ownership(Handle h) noexcept {
        return MLHardSigmoidOptions(h);
    }
MLHardSigmoidOptions::MLHardSigmoidOptions(const emlite::Val &val) noexcept: MLOperatorOptions(val) {}
MLHardSigmoidOptions::MLHardSigmoidOptions() noexcept: MLOperatorOptions(emlite::Val::object()) {}
MLHardSigmoidOptions MLHardSigmoidOptions::clone() const noexcept { return *this; }

double MLHardSigmoidOptions::alpha() const {
    return emlite::Val::get("alpha").as<double>();
}

void MLHardSigmoidOptions::alpha(double value) {
    emlite::Val::set("alpha", value);
}

double MLHardSigmoidOptions::beta() const {
    return emlite::Val::get("beta").as<double>();
}

void MLHardSigmoidOptions::beta(double value) {
    emlite::Val::set("beta", value);
}


} // namespace webbind