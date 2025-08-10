#include <webbind/MLGruSupportLimits.hpp>
#include <webbind/MLTensorLimits.hpp>
#include <webbind/MLDataTypeLimits.hpp>

using emlite::Val;
namespace webbind {

MLGruSupportLimits::MLGruSupportLimits(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MLGruSupportLimits MLGruSupportLimits::take_ownership(Handle h) noexcept {
        return MLGruSupportLimits(h);
    }
MLGruSupportLimits::MLGruSupportLimits(const emlite::Val &val) noexcept: emlite::Val(val) {}
MLGruSupportLimits::MLGruSupportLimits() noexcept: emlite::Val(emlite::Val::object()) {}
MLGruSupportLimits MLGruSupportLimits::clone() const noexcept { return *this; }

MLTensorLimits MLGruSupportLimits::input() const {
    return emlite::Val::get("input").as<MLTensorLimits>();
}

void MLGruSupportLimits::input(const MLTensorLimits& value) {
    emlite::Val::set("input", value);
}

MLTensorLimits MLGruSupportLimits::weight() const {
    return emlite::Val::get("weight").as<MLTensorLimits>();
}

void MLGruSupportLimits::weight(const MLTensorLimits& value) {
    emlite::Val::set("weight", value);
}

MLTensorLimits MLGruSupportLimits::recurrentWeight() const {
    return emlite::Val::get("recurrentWeight").as<MLTensorLimits>();
}

void MLGruSupportLimits::recurrentWeight(const MLTensorLimits& value) {
    emlite::Val::set("recurrentWeight", value);
}

MLTensorLimits MLGruSupportLimits::bias() const {
    return emlite::Val::get("bias").as<MLTensorLimits>();
}

void MLGruSupportLimits::bias(const MLTensorLimits& value) {
    emlite::Val::set("bias", value);
}

MLTensorLimits MLGruSupportLimits::recurrentBias() const {
    return emlite::Val::get("recurrentBias").as<MLTensorLimits>();
}

void MLGruSupportLimits::recurrentBias(const MLTensorLimits& value) {
    emlite::Val::set("recurrentBias", value);
}

MLTensorLimits MLGruSupportLimits::initialHiddenState() const {
    return emlite::Val::get("initialHiddenState").as<MLTensorLimits>();
}

void MLGruSupportLimits::initialHiddenState(const MLTensorLimits& value) {
    emlite::Val::set("initialHiddenState", value);
}

MLDataTypeLimits MLGruSupportLimits::outputs() const {
    return emlite::Val::get("outputs").as<MLDataTypeLimits>();
}

void MLGruSupportLimits::outputs(const MLDataTypeLimits& value) {
    emlite::Val::set("outputs", value);
}


} // namespace webbind