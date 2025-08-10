#include <webbind/MLConcatSupportLimits.hpp>
#include <webbind/MLTensorLimits.hpp>
#include <webbind/MLDataTypeLimits.hpp>

namespace webbind {

MLConcatSupportLimits::MLConcatSupportLimits(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MLConcatSupportLimits MLConcatSupportLimits::take_ownership(Handle h) noexcept {
    return MLConcatSupportLimits(h);
}

MLConcatSupportLimits::MLConcatSupportLimits(const emlite::Val &val) noexcept: emlite::Val(val) {}

MLConcatSupportLimits::MLConcatSupportLimits() noexcept: emlite::Val(emlite::Val::object()) {}

MLConcatSupportLimits MLConcatSupportLimits::clone() const noexcept { return *this; }

MLTensorLimits MLConcatSupportLimits::inputs() const {
    return emlite::Val::get("inputs").as<MLTensorLimits>();
}

void MLConcatSupportLimits::inputs(const MLTensorLimits& value) {
    emlite::Val::set("inputs", value);
}

MLDataTypeLimits MLConcatSupportLimits::output() const {
    return emlite::Val::get("output").as<MLDataTypeLimits>();
}

void MLConcatSupportLimits::output(const MLDataTypeLimits& value) {
    emlite::Val::set("output", value);
}


} // namespace webbind