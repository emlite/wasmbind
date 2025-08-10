#include <webbind/MLQuantizeDequantizeLinearSupportLimits.hpp>
#include <webbind/MLTensorLimits.hpp>
#include <webbind/MLDataTypeLimits.hpp>

using emlite::Val;
namespace webbind {

MLQuantizeDequantizeLinearSupportLimits::MLQuantizeDequantizeLinearSupportLimits(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MLQuantizeDequantizeLinearSupportLimits MLQuantizeDequantizeLinearSupportLimits::take_ownership(Handle h) noexcept {
        return MLQuantizeDequantizeLinearSupportLimits(h);
    }
MLQuantizeDequantizeLinearSupportLimits::MLQuantizeDequantizeLinearSupportLimits(const emlite::Val &val) noexcept: emlite::Val(val) {}
MLQuantizeDequantizeLinearSupportLimits::MLQuantizeDequantizeLinearSupportLimits() noexcept: emlite::Val(emlite::Val::object()) {}
MLQuantizeDequantizeLinearSupportLimits MLQuantizeDequantizeLinearSupportLimits::clone() const noexcept { return *this; }

MLTensorLimits MLQuantizeDequantizeLinearSupportLimits::input() const {
    return emlite::Val::get("input").as<MLTensorLimits>();
}

void MLQuantizeDequantizeLinearSupportLimits::input(const MLTensorLimits& value) {
    emlite::Val::set("input", value);
}

MLTensorLimits MLQuantizeDequantizeLinearSupportLimits::scale() const {
    return emlite::Val::get("scale").as<MLTensorLimits>();
}

void MLQuantizeDequantizeLinearSupportLimits::scale(const MLTensorLimits& value) {
    emlite::Val::set("scale", value);
}

MLTensorLimits MLQuantizeDequantizeLinearSupportLimits::zeroPoint() const {
    return emlite::Val::get("zeroPoint").as<MLTensorLimits>();
}

void MLQuantizeDequantizeLinearSupportLimits::zeroPoint(const MLTensorLimits& value) {
    emlite::Val::set("zeroPoint", value);
}

MLDataTypeLimits MLQuantizeDequantizeLinearSupportLimits::output() const {
    return emlite::Val::get("output").as<MLDataTypeLimits>();
}

void MLQuantizeDequantizeLinearSupportLimits::output(const MLDataTypeLimits& value) {
    emlite::Val::set("output", value);
}


} // namespace webbind