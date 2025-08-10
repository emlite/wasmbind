#include "webbind/MLGruCellSupportLimits.hpp"
#include "webbind/MLTensorLimits.hpp"
#include "webbind/MLDataTypeLimits.hpp"

using emlite::Val;
namespace webbind {

MLGruCellSupportLimits::MLGruCellSupportLimits(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MLGruCellSupportLimits MLGruCellSupportLimits::take_ownership(Handle h) noexcept {
        return MLGruCellSupportLimits(h);
    }
MLGruCellSupportLimits::MLGruCellSupportLimits(const emlite::Val &val) noexcept: emlite::Val(val) {}
MLGruCellSupportLimits::MLGruCellSupportLimits() noexcept: emlite::Val(emlite::Val::object()) {}
MLGruCellSupportLimits MLGruCellSupportLimits::clone() const noexcept { return *this; }

MLTensorLimits MLGruCellSupportLimits::input() const {
    return emlite::Val::get("input").as<MLTensorLimits>();
}

void MLGruCellSupportLimits::input(const MLTensorLimits& value) {
    emlite::Val::set("input", value);
}

MLTensorLimits MLGruCellSupportLimits::weight() const {
    return emlite::Val::get("weight").as<MLTensorLimits>();
}

void MLGruCellSupportLimits::weight(const MLTensorLimits& value) {
    emlite::Val::set("weight", value);
}

MLTensorLimits MLGruCellSupportLimits::recurrentWeight() const {
    return emlite::Val::get("recurrentWeight").as<MLTensorLimits>();
}

void MLGruCellSupportLimits::recurrentWeight(const MLTensorLimits& value) {
    emlite::Val::set("recurrentWeight", value);
}

MLTensorLimits MLGruCellSupportLimits::hiddenState() const {
    return emlite::Val::get("hiddenState").as<MLTensorLimits>();
}

void MLGruCellSupportLimits::hiddenState(const MLTensorLimits& value) {
    emlite::Val::set("hiddenState", value);
}

MLTensorLimits MLGruCellSupportLimits::bias() const {
    return emlite::Val::get("bias").as<MLTensorLimits>();
}

void MLGruCellSupportLimits::bias(const MLTensorLimits& value) {
    emlite::Val::set("bias", value);
}

MLTensorLimits MLGruCellSupportLimits::recurrentBias() const {
    return emlite::Val::get("recurrentBias").as<MLTensorLimits>();
}

void MLGruCellSupportLimits::recurrentBias(const MLTensorLimits& value) {
    emlite::Val::set("recurrentBias", value);
}

MLDataTypeLimits MLGruCellSupportLimits::output() const {
    return emlite::Val::get("output").as<MLDataTypeLimits>();
}

void MLGruCellSupportLimits::output(const MLDataTypeLimits& value) {
    emlite::Val::set("output", value);
}


} // namespace webbind