#include <webbind/MLNormalizationSupportLimits.hpp>
#include <webbind/MLTensorLimits.hpp>
#include <webbind/MLDataTypeLimits.hpp>

namespace webbind {

MLNormalizationSupportLimits::MLNormalizationSupportLimits(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MLNormalizationSupportLimits MLNormalizationSupportLimits::take_ownership(Handle h) noexcept {
    return MLNormalizationSupportLimits(h);
}

MLNormalizationSupportLimits::MLNormalizationSupportLimits(const emlite::Val &val) noexcept: emlite::Val(val) {}

MLNormalizationSupportLimits::MLNormalizationSupportLimits() noexcept: emlite::Val(emlite::Val::object()) {}

MLNormalizationSupportLimits MLNormalizationSupportLimits::clone() const noexcept { return *this; }

MLTensorLimits MLNormalizationSupportLimits::input() const {
    return emlite::Val::get("input").as<MLTensorLimits>();
}

void MLNormalizationSupportLimits::input(const MLTensorLimits& value) {
    emlite::Val::set("input", value);
}

MLTensorLimits MLNormalizationSupportLimits::scale() const {
    return emlite::Val::get("scale").as<MLTensorLimits>();
}

void MLNormalizationSupportLimits::scale(const MLTensorLimits& value) {
    emlite::Val::set("scale", value);
}

MLTensorLimits MLNormalizationSupportLimits::bias() const {
    return emlite::Val::get("bias").as<MLTensorLimits>();
}

void MLNormalizationSupportLimits::bias(const MLTensorLimits& value) {
    emlite::Val::set("bias", value);
}

MLDataTypeLimits MLNormalizationSupportLimits::output() const {
    return emlite::Val::get("output").as<MLDataTypeLimits>();
}

void MLNormalizationSupportLimits::output(const MLDataTypeLimits& value) {
    emlite::Val::set("output", value);
}


} // namespace webbind