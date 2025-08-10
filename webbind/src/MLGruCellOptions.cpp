#include "webbind/MLGruCellOptions.hpp"
#include "webbind/MLOperand.hpp"

using emlite::Val;
namespace webbind {

MLGruCellOptions::MLGruCellOptions(Handle h) noexcept : MLOperatorOptions(emlite::Val::take_ownership(h)) {}
MLGruCellOptions MLGruCellOptions::take_ownership(Handle h) noexcept {
        return MLGruCellOptions(h);
    }
MLGruCellOptions::MLGruCellOptions(const emlite::Val &val) noexcept: MLOperatorOptions(val) {}
MLGruCellOptions::MLGruCellOptions() noexcept: MLOperatorOptions(emlite::Val::object()) {}
MLGruCellOptions MLGruCellOptions::clone() const noexcept { return *this; }

MLOperand MLGruCellOptions::bias() const {
    return emlite::Val::get("bias").as<MLOperand>();
}

void MLGruCellOptions::bias(const MLOperand& value) {
    emlite::Val::set("bias", value);
}

MLOperand MLGruCellOptions::recurrentBias() const {
    return emlite::Val::get("recurrentBias").as<MLOperand>();
}

void MLGruCellOptions::recurrentBias(const MLOperand& value) {
    emlite::Val::set("recurrentBias", value);
}

bool MLGruCellOptions::resetAfter() const {
    return emlite::Val::get("resetAfter").as<bool>();
}

void MLGruCellOptions::resetAfter(bool value) {
    emlite::Val::set("resetAfter", value);
}

MLGruWeightLayout MLGruCellOptions::layout() const {
    return emlite::Val::get("layout").as<MLGruWeightLayout>();
}

void MLGruCellOptions::layout(const MLGruWeightLayout& value) {
    emlite::Val::set("layout", value);
}

jsbind::TypedArray<MLRecurrentNetworkActivation> MLGruCellOptions::activations() const {
    return emlite::Val::get("activations").as<jsbind::TypedArray<MLRecurrentNetworkActivation>>();
}

void MLGruCellOptions::activations(const jsbind::TypedArray<MLRecurrentNetworkActivation>& value) {
    emlite::Val::set("activations", value);
}


} // namespace webbind