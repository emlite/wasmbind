#include "webbind/MLGruOptions.hpp"
#include "webbind/MLOperand.hpp"

using emlite::Val;
namespace webbind {

MLGruOptions::MLGruOptions(Handle h) noexcept : MLOperatorOptions(emlite::Val::take_ownership(h)) {}
MLGruOptions MLGruOptions::take_ownership(Handle h) noexcept {
        return MLGruOptions(h);
    }
MLGruOptions::MLGruOptions(const emlite::Val &val) noexcept: MLOperatorOptions(val) {}
MLGruOptions::MLGruOptions() noexcept: MLOperatorOptions(emlite::Val::object()) {}
MLGruOptions MLGruOptions::clone() const noexcept { return *this; }

MLOperand MLGruOptions::bias() const {
    return emlite::Val::get("bias").as<MLOperand>();
}

void MLGruOptions::bias(const MLOperand& value) {
    emlite::Val::set("bias", value);
}

MLOperand MLGruOptions::recurrentBias() const {
    return emlite::Val::get("recurrentBias").as<MLOperand>();
}

void MLGruOptions::recurrentBias(const MLOperand& value) {
    emlite::Val::set("recurrentBias", value);
}

MLOperand MLGruOptions::initialHiddenState() const {
    return emlite::Val::get("initialHiddenState").as<MLOperand>();
}

void MLGruOptions::initialHiddenState(const MLOperand& value) {
    emlite::Val::set("initialHiddenState", value);
}

bool MLGruOptions::resetAfter() const {
    return emlite::Val::get("resetAfter").as<bool>();
}

void MLGruOptions::resetAfter(bool value) {
    emlite::Val::set("resetAfter", value);
}

bool MLGruOptions::returnSequence() const {
    return emlite::Val::get("returnSequence").as<bool>();
}

void MLGruOptions::returnSequence(bool value) {
    emlite::Val::set("returnSequence", value);
}

MLRecurrentNetworkDirection MLGruOptions::direction() const {
    return emlite::Val::get("direction").as<MLRecurrentNetworkDirection>();
}

void MLGruOptions::direction(const MLRecurrentNetworkDirection& value) {
    emlite::Val::set("direction", value);
}

MLGruWeightLayout MLGruOptions::layout() const {
    return emlite::Val::get("layout").as<MLGruWeightLayout>();
}

void MLGruOptions::layout(const MLGruWeightLayout& value) {
    emlite::Val::set("layout", value);
}

jsbind::TypedArray<MLRecurrentNetworkActivation> MLGruOptions::activations() const {
    return emlite::Val::get("activations").as<jsbind::TypedArray<MLRecurrentNetworkActivation>>();
}

void MLGruOptions::activations(const jsbind::TypedArray<MLRecurrentNetworkActivation>& value) {
    emlite::Val::set("activations", value);
}


} // namespace webbind