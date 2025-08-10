#include "webbind/MLLeakyReluOptions.hpp"

using emlite::Val;
namespace webbind {

MLLeakyReluOptions::MLLeakyReluOptions(Handle h) noexcept : MLOperatorOptions(emlite::Val::take_ownership(h)) {}
MLLeakyReluOptions MLLeakyReluOptions::take_ownership(Handle h) noexcept {
        return MLLeakyReluOptions(h);
    }
MLLeakyReluOptions::MLLeakyReluOptions(const emlite::Val &val) noexcept: MLOperatorOptions(val) {}
MLLeakyReluOptions::MLLeakyReluOptions() noexcept: MLOperatorOptions(emlite::Val::object()) {}
MLLeakyReluOptions MLLeakyReluOptions::clone() const noexcept { return *this; }

double MLLeakyReluOptions::alpha() const {
    return emlite::Val::get("alpha").as<double>();
}

void MLLeakyReluOptions::alpha(double value) {
    emlite::Val::set("alpha", value);
}


} // namespace webbind