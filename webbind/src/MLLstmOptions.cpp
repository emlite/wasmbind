#include "webbind/MLLstmOptions.hpp"
#include "webbind/MLOperand.hpp"

using emlite::Val;
namespace webbind {

MLLstmOptions::MLLstmOptions(Handle h) noexcept : MLOperatorOptions(emlite::Val::take_ownership(h)) {}
MLLstmOptions MLLstmOptions::take_ownership(Handle h) noexcept {
        return MLLstmOptions(h);
    }
MLLstmOptions::MLLstmOptions(const emlite::Val &val) noexcept: MLOperatorOptions(val) {}
MLLstmOptions::MLLstmOptions() noexcept: MLOperatorOptions(emlite::Val::object()) {}
MLLstmOptions MLLstmOptions::clone() const noexcept { return *this; }

MLOperand MLLstmOptions::bias() const {
    return emlite::Val::get("bias").as<MLOperand>();
}

void MLLstmOptions::bias(const MLOperand& value) {
    emlite::Val::set("bias", value);
}

MLOperand MLLstmOptions::recurrentBias() const {
    return emlite::Val::get("recurrentBias").as<MLOperand>();
}

void MLLstmOptions::recurrentBias(const MLOperand& value) {
    emlite::Val::set("recurrentBias", value);
}

MLOperand MLLstmOptions::peepholeWeight() const {
    return emlite::Val::get("peepholeWeight").as<MLOperand>();
}

void MLLstmOptions::peepholeWeight(const MLOperand& value) {
    emlite::Val::set("peepholeWeight", value);
}

MLOperand MLLstmOptions::initialHiddenState() const {
    return emlite::Val::get("initialHiddenState").as<MLOperand>();
}

void MLLstmOptions::initialHiddenState(const MLOperand& value) {
    emlite::Val::set("initialHiddenState", value);
}

MLOperand MLLstmOptions::initialCellState() const {
    return emlite::Val::get("initialCellState").as<MLOperand>();
}

void MLLstmOptions::initialCellState(const MLOperand& value) {
    emlite::Val::set("initialCellState", value);
}

bool MLLstmOptions::returnSequence() const {
    return emlite::Val::get("returnSequence").as<bool>();
}

void MLLstmOptions::returnSequence(bool value) {
    emlite::Val::set("returnSequence", value);
}

MLRecurrentNetworkDirection MLLstmOptions::direction() const {
    return emlite::Val::get("direction").as<MLRecurrentNetworkDirection>();
}

void MLLstmOptions::direction(const MLRecurrentNetworkDirection& value) {
    emlite::Val::set("direction", value);
}

MLLstmWeightLayout MLLstmOptions::layout() const {
    return emlite::Val::get("layout").as<MLLstmWeightLayout>();
}

void MLLstmOptions::layout(const MLLstmWeightLayout& value) {
    emlite::Val::set("layout", value);
}

jsbind::TypedArray<MLRecurrentNetworkActivation> MLLstmOptions::activations() const {
    return emlite::Val::get("activations").as<jsbind::TypedArray<MLRecurrentNetworkActivation>>();
}

void MLLstmOptions::activations(const jsbind::TypedArray<MLRecurrentNetworkActivation>& value) {
    emlite::Val::set("activations", value);
}


} // namespace webbind