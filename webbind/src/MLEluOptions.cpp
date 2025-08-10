#include "webbind/MLEluOptions.hpp"

using emlite::Val;
namespace webbind {

MLEluOptions::MLEluOptions(Handle h) noexcept : MLOperatorOptions(emlite::Val::take_ownership(h)) {}
MLEluOptions MLEluOptions::take_ownership(Handle h) noexcept {
        return MLEluOptions(h);
    }
MLEluOptions::MLEluOptions(const emlite::Val &val) noexcept: MLOperatorOptions(val) {}
MLEluOptions::MLEluOptions() noexcept: MLOperatorOptions(emlite::Val::object()) {}
MLEluOptions MLEluOptions::clone() const noexcept { return *this; }

double MLEluOptions::alpha() const {
    return emlite::Val::get("alpha").as<double>();
}

void MLEluOptions::alpha(double value) {
    emlite::Val::set("alpha", value);
}


} // namespace webbind