#include <webbind/MLLstmCellSupportLimits.hpp>
#include <webbind/MLTensorLimits.hpp>
#include <webbind/MLDataTypeLimits.hpp>

using emlite::Val;
namespace webbind {

MLLstmCellSupportLimits::MLLstmCellSupportLimits(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MLLstmCellSupportLimits MLLstmCellSupportLimits::take_ownership(Handle h) noexcept {
        return MLLstmCellSupportLimits(h);
    }
MLLstmCellSupportLimits::MLLstmCellSupportLimits(const emlite::Val &val) noexcept: emlite::Val(val) {}
MLLstmCellSupportLimits::MLLstmCellSupportLimits() noexcept: emlite::Val(emlite::Val::object()) {}
MLLstmCellSupportLimits MLLstmCellSupportLimits::clone() const noexcept { return *this; }

MLTensorLimits MLLstmCellSupportLimits::input() const {
    return emlite::Val::get("input").as<MLTensorLimits>();
}

void MLLstmCellSupportLimits::input(const MLTensorLimits& value) {
    emlite::Val::set("input", value);
}

MLTensorLimits MLLstmCellSupportLimits::weight() const {
    return emlite::Val::get("weight").as<MLTensorLimits>();
}

void MLLstmCellSupportLimits::weight(const MLTensorLimits& value) {
    emlite::Val::set("weight", value);
}

MLTensorLimits MLLstmCellSupportLimits::recurrentWeight() const {
    return emlite::Val::get("recurrentWeight").as<MLTensorLimits>();
}

void MLLstmCellSupportLimits::recurrentWeight(const MLTensorLimits& value) {
    emlite::Val::set("recurrentWeight", value);
}

MLTensorLimits MLLstmCellSupportLimits::hiddenState() const {
    return emlite::Val::get("hiddenState").as<MLTensorLimits>();
}

void MLLstmCellSupportLimits::hiddenState(const MLTensorLimits& value) {
    emlite::Val::set("hiddenState", value);
}

MLTensorLimits MLLstmCellSupportLimits::cellState() const {
    return emlite::Val::get("cellState").as<MLTensorLimits>();
}

void MLLstmCellSupportLimits::cellState(const MLTensorLimits& value) {
    emlite::Val::set("cellState", value);
}

MLTensorLimits MLLstmCellSupportLimits::bias() const {
    return emlite::Val::get("bias").as<MLTensorLimits>();
}

void MLLstmCellSupportLimits::bias(const MLTensorLimits& value) {
    emlite::Val::set("bias", value);
}

MLTensorLimits MLLstmCellSupportLimits::recurrentBias() const {
    return emlite::Val::get("recurrentBias").as<MLTensorLimits>();
}

void MLLstmCellSupportLimits::recurrentBias(const MLTensorLimits& value) {
    emlite::Val::set("recurrentBias", value);
}

MLTensorLimits MLLstmCellSupportLimits::peepholeWeight() const {
    return emlite::Val::get("peepholeWeight").as<MLTensorLimits>();
}

void MLLstmCellSupportLimits::peepholeWeight(const MLTensorLimits& value) {
    emlite::Val::set("peepholeWeight", value);
}

MLDataTypeLimits MLLstmCellSupportLimits::outputs() const {
    return emlite::Val::get("outputs").as<MLDataTypeLimits>();
}

void MLLstmCellSupportLimits::outputs(const MLDataTypeLimits& value) {
    emlite::Val::set("outputs", value);
}


} // namespace webbind