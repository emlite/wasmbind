#include <webbind/MLLstmSupportLimits.hpp>
#include <webbind/MLTensorLimits.hpp>
#include <webbind/MLDataTypeLimits.hpp>

namespace webbind {

MLLstmSupportLimits::MLLstmSupportLimits(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MLLstmSupportLimits MLLstmSupportLimits::take_ownership(Handle h) noexcept {
    return MLLstmSupportLimits(h);
}

MLLstmSupportLimits::MLLstmSupportLimits(const emlite::Val &val) noexcept: emlite::Val(val) {}

MLLstmSupportLimits::MLLstmSupportLimits() noexcept: emlite::Val(emlite::Val::object()) {}

MLLstmSupportLimits MLLstmSupportLimits::clone() const noexcept { return *this; }

MLTensorLimits MLLstmSupportLimits::input() const {
    return emlite::Val::get("input").as<MLTensorLimits>();
}

void MLLstmSupportLimits::input(const MLTensorLimits& value) {
    emlite::Val::set("input", value);
}

MLTensorLimits MLLstmSupportLimits::weight() const {
    return emlite::Val::get("weight").as<MLTensorLimits>();
}

void MLLstmSupportLimits::weight(const MLTensorLimits& value) {
    emlite::Val::set("weight", value);
}

MLTensorLimits MLLstmSupportLimits::recurrentWeight() const {
    return emlite::Val::get("recurrentWeight").as<MLTensorLimits>();
}

void MLLstmSupportLimits::recurrentWeight(const MLTensorLimits& value) {
    emlite::Val::set("recurrentWeight", value);
}

MLTensorLimits MLLstmSupportLimits::bias() const {
    return emlite::Val::get("bias").as<MLTensorLimits>();
}

void MLLstmSupportLimits::bias(const MLTensorLimits& value) {
    emlite::Val::set("bias", value);
}

MLTensorLimits MLLstmSupportLimits::recurrentBias() const {
    return emlite::Val::get("recurrentBias").as<MLTensorLimits>();
}

void MLLstmSupportLimits::recurrentBias(const MLTensorLimits& value) {
    emlite::Val::set("recurrentBias", value);
}

MLTensorLimits MLLstmSupportLimits::peepholeWeight() const {
    return emlite::Val::get("peepholeWeight").as<MLTensorLimits>();
}

void MLLstmSupportLimits::peepholeWeight(const MLTensorLimits& value) {
    emlite::Val::set("peepholeWeight", value);
}

MLTensorLimits MLLstmSupportLimits::initialHiddenState() const {
    return emlite::Val::get("initialHiddenState").as<MLTensorLimits>();
}

void MLLstmSupportLimits::initialHiddenState(const MLTensorLimits& value) {
    emlite::Val::set("initialHiddenState", value);
}

MLTensorLimits MLLstmSupportLimits::initialCellState() const {
    return emlite::Val::get("initialCellState").as<MLTensorLimits>();
}

void MLLstmSupportLimits::initialCellState(const MLTensorLimits& value) {
    emlite::Val::set("initialCellState", value);
}

MLDataTypeLimits MLLstmSupportLimits::outputs() const {
    return emlite::Val::get("outputs").as<MLDataTypeLimits>();
}

void MLLstmSupportLimits::outputs(const MLDataTypeLimits& value) {
    emlite::Val::set("outputs", value);
}


} // namespace webbind