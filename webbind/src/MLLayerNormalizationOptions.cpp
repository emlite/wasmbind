#include "webbind/MLLayerNormalizationOptions.hpp"
#include "webbind/MLOperand.hpp"

using emlite::Val;
namespace webbind {

MLLayerNormalizationOptions::MLLayerNormalizationOptions(Handle h) noexcept : MLOperatorOptions(emlite::Val::take_ownership(h)) {}
MLLayerNormalizationOptions MLLayerNormalizationOptions::take_ownership(Handle h) noexcept {
        return MLLayerNormalizationOptions(h);
    }
MLLayerNormalizationOptions::MLLayerNormalizationOptions(const emlite::Val &val) noexcept: MLOperatorOptions(val) {}
MLLayerNormalizationOptions::MLLayerNormalizationOptions() noexcept: MLOperatorOptions(emlite::Val::object()) {}
MLLayerNormalizationOptions MLLayerNormalizationOptions::clone() const noexcept { return *this; }

MLOperand MLLayerNormalizationOptions::scale() const {
    return emlite::Val::get("scale").as<MLOperand>();
}

void MLLayerNormalizationOptions::scale(const MLOperand& value) {
    emlite::Val::set("scale", value);
}

MLOperand MLLayerNormalizationOptions::bias() const {
    return emlite::Val::get("bias").as<MLOperand>();
}

void MLLayerNormalizationOptions::bias(const MLOperand& value) {
    emlite::Val::set("bias", value);
}

jsbind::TypedArray<unsigned long> MLLayerNormalizationOptions::axes() const {
    return emlite::Val::get("axes").as<jsbind::TypedArray<unsigned long>>();
}

void MLLayerNormalizationOptions::axes(jsbind::TypedArray<unsigned long> value) {
    emlite::Val::set("axes", value);
}

double MLLayerNormalizationOptions::epsilon() const {
    return emlite::Val::get("epsilon").as<double>();
}

void MLLayerNormalizationOptions::epsilon(double value) {
    emlite::Val::set("epsilon", value);
}


} // namespace webbind