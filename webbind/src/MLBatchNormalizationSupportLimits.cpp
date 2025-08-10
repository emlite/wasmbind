#include "webbind/MLBatchNormalizationSupportLimits.hpp"
#include "webbind/MLTensorLimits.hpp"
#include "webbind/MLDataTypeLimits.hpp"

using emlite::Val;
namespace webbind {

MLBatchNormalizationSupportLimits::MLBatchNormalizationSupportLimits(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MLBatchNormalizationSupportLimits MLBatchNormalizationSupportLimits::take_ownership(Handle h) noexcept {
        return MLBatchNormalizationSupportLimits(h);
    }
MLBatchNormalizationSupportLimits::MLBatchNormalizationSupportLimits(const emlite::Val &val) noexcept: emlite::Val(val) {}
MLBatchNormalizationSupportLimits::MLBatchNormalizationSupportLimits() noexcept: emlite::Val(emlite::Val::object()) {}
MLBatchNormalizationSupportLimits MLBatchNormalizationSupportLimits::clone() const noexcept { return *this; }

MLTensorLimits MLBatchNormalizationSupportLimits::input() const {
    return emlite::Val::get("input").as<MLTensorLimits>();
}

void MLBatchNormalizationSupportLimits::input(const MLTensorLimits& value) {
    emlite::Val::set("input", value);
}

MLTensorLimits MLBatchNormalizationSupportLimits::mean() const {
    return emlite::Val::get("mean").as<MLTensorLimits>();
}

void MLBatchNormalizationSupportLimits::mean(const MLTensorLimits& value) {
    emlite::Val::set("mean", value);
}

MLTensorLimits MLBatchNormalizationSupportLimits::variance() const {
    return emlite::Val::get("variance").as<MLTensorLimits>();
}

void MLBatchNormalizationSupportLimits::variance(const MLTensorLimits& value) {
    emlite::Val::set("variance", value);
}

MLTensorLimits MLBatchNormalizationSupportLimits::scale() const {
    return emlite::Val::get("scale").as<MLTensorLimits>();
}

void MLBatchNormalizationSupportLimits::scale(const MLTensorLimits& value) {
    emlite::Val::set("scale", value);
}

MLTensorLimits MLBatchNormalizationSupportLimits::bias() const {
    return emlite::Val::get("bias").as<MLTensorLimits>();
}

void MLBatchNormalizationSupportLimits::bias(const MLTensorLimits& value) {
    emlite::Val::set("bias", value);
}

MLDataTypeLimits MLBatchNormalizationSupportLimits::output() const {
    return emlite::Val::get("output").as<MLDataTypeLimits>();
}

void MLBatchNormalizationSupportLimits::output(const MLDataTypeLimits& value) {
    emlite::Val::set("output", value);
}


} // namespace webbind