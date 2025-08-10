#include "webbind/MLLstmCellOptions.hpp"
#include "webbind/MLOperand.hpp"

using emlite::Val;
namespace webbind {

MLLstmCellOptions::MLLstmCellOptions(Handle h) noexcept : MLOperatorOptions(emlite::Val::take_ownership(h)) {}
MLLstmCellOptions MLLstmCellOptions::take_ownership(Handle h) noexcept {
        return MLLstmCellOptions(h);
    }
MLLstmCellOptions::MLLstmCellOptions(const emlite::Val &val) noexcept: MLOperatorOptions(val) {}
MLLstmCellOptions::MLLstmCellOptions() noexcept: MLOperatorOptions(emlite::Val::object()) {}
MLLstmCellOptions MLLstmCellOptions::clone() const noexcept { return *this; }

MLOperand MLLstmCellOptions::bias() const {
    return emlite::Val::get("bias").as<MLOperand>();
}

void MLLstmCellOptions::bias(const MLOperand& value) {
    emlite::Val::set("bias", value);
}

MLOperand MLLstmCellOptions::recurrentBias() const {
    return emlite::Val::get("recurrentBias").as<MLOperand>();
}

void MLLstmCellOptions::recurrentBias(const MLOperand& value) {
    emlite::Val::set("recurrentBias", value);
}

MLOperand MLLstmCellOptions::peepholeWeight() const {
    return emlite::Val::get("peepholeWeight").as<MLOperand>();
}

void MLLstmCellOptions::peepholeWeight(const MLOperand& value) {
    emlite::Val::set("peepholeWeight", value);
}

MLLstmWeightLayout MLLstmCellOptions::layout() const {
    return emlite::Val::get("layout").as<MLLstmWeightLayout>();
}

void MLLstmCellOptions::layout(const MLLstmWeightLayout& value) {
    emlite::Val::set("layout", value);
}

jsbind::TypedArray<MLRecurrentNetworkActivation> MLLstmCellOptions::activations() const {
    return emlite::Val::get("activations").as<jsbind::TypedArray<MLRecurrentNetworkActivation>>();
}

void MLLstmCellOptions::activations(const jsbind::TypedArray<MLRecurrentNetworkActivation>& value) {
    emlite::Val::set("activations", value);
}


} // namespace webbind