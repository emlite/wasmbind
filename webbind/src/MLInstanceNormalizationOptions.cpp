#include "webbind/MLInstanceNormalizationOptions.hpp"
#include "webbind/MLOperand.hpp"

using emlite::Val;
namespace webbind {

MLInstanceNormalizationOptions::MLInstanceNormalizationOptions(Handle h) noexcept : MLOperatorOptions(emlite::Val::take_ownership(h)) {}
MLInstanceNormalizationOptions MLInstanceNormalizationOptions::take_ownership(Handle h) noexcept {
        return MLInstanceNormalizationOptions(h);
    }
MLInstanceNormalizationOptions::MLInstanceNormalizationOptions(const emlite::Val &val) noexcept: MLOperatorOptions(val) {}
MLInstanceNormalizationOptions::MLInstanceNormalizationOptions() noexcept: MLOperatorOptions(emlite::Val::object()) {}
MLInstanceNormalizationOptions MLInstanceNormalizationOptions::clone() const noexcept { return *this; }

MLOperand MLInstanceNormalizationOptions::scale() const {
    return emlite::Val::get("scale").as<MLOperand>();
}

void MLInstanceNormalizationOptions::scale(const MLOperand& value) {
    emlite::Val::set("scale", value);
}

MLOperand MLInstanceNormalizationOptions::bias() const {
    return emlite::Val::get("bias").as<MLOperand>();
}

void MLInstanceNormalizationOptions::bias(const MLOperand& value) {
    emlite::Val::set("bias", value);
}

double MLInstanceNormalizationOptions::epsilon() const {
    return emlite::Val::get("epsilon").as<double>();
}

void MLInstanceNormalizationOptions::epsilon(double value) {
    emlite::Val::set("epsilon", value);
}

MLInputOperandLayout MLInstanceNormalizationOptions::layout() const {
    return emlite::Val::get("layout").as<MLInputOperandLayout>();
}

void MLInstanceNormalizationOptions::layout(const MLInputOperandLayout& value) {
    emlite::Val::set("layout", value);
}


} // namespace webbind