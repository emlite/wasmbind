#include "webbind/MLBatchNormalizationOptions.hpp"
#include "webbind/MLOperand.hpp"

using emlite::Val;
namespace webbind {

MLBatchNormalizationOptions::MLBatchNormalizationOptions(Handle h) noexcept : MLOperatorOptions(emlite::Val::take_ownership(h)) {}
MLBatchNormalizationOptions MLBatchNormalizationOptions::take_ownership(Handle h) noexcept {
        return MLBatchNormalizationOptions(h);
    }
MLBatchNormalizationOptions::MLBatchNormalizationOptions(const emlite::Val &val) noexcept: MLOperatorOptions(val) {}
MLBatchNormalizationOptions::MLBatchNormalizationOptions() noexcept: MLOperatorOptions(emlite::Val::object()) {}
MLBatchNormalizationOptions MLBatchNormalizationOptions::clone() const noexcept { return *this; }

MLOperand MLBatchNormalizationOptions::scale() const {
    return emlite::Val::get("scale").as<MLOperand>();
}

void MLBatchNormalizationOptions::scale(const MLOperand& value) {
    emlite::Val::set("scale", value);
}

MLOperand MLBatchNormalizationOptions::bias() const {
    return emlite::Val::get("bias").as<MLOperand>();
}

void MLBatchNormalizationOptions::bias(const MLOperand& value) {
    emlite::Val::set("bias", value);
}

unsigned long MLBatchNormalizationOptions::axis() const {
    return emlite::Val::get("axis").as<unsigned long>();
}

void MLBatchNormalizationOptions::axis(unsigned long value) {
    emlite::Val::set("axis", value);
}

double MLBatchNormalizationOptions::epsilon() const {
    return emlite::Val::get("epsilon").as<double>();
}

void MLBatchNormalizationOptions::epsilon(double value) {
    emlite::Val::set("epsilon", value);
}


} // namespace webbind