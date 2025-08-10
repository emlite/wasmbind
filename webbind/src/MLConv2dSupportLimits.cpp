#include <webbind/MLConv2dSupportLimits.hpp>
#include <webbind/MLTensorLimits.hpp>
#include <webbind/MLDataTypeLimits.hpp>

using emlite::Val;
namespace webbind {

MLConv2dSupportLimits::MLConv2dSupportLimits(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MLConv2dSupportLimits MLConv2dSupportLimits::take_ownership(Handle h) noexcept {
        return MLConv2dSupportLimits(h);
    }
MLConv2dSupportLimits::MLConv2dSupportLimits(const emlite::Val &val) noexcept: emlite::Val(val) {}
MLConv2dSupportLimits::MLConv2dSupportLimits() noexcept: emlite::Val(emlite::Val::object()) {}
MLConv2dSupportLimits MLConv2dSupportLimits::clone() const noexcept { return *this; }

MLTensorLimits MLConv2dSupportLimits::input() const {
    return emlite::Val::get("input").as<MLTensorLimits>();
}

void MLConv2dSupportLimits::input(const MLTensorLimits& value) {
    emlite::Val::set("input", value);
}

MLTensorLimits MLConv2dSupportLimits::filter() const {
    return emlite::Val::get("filter").as<MLTensorLimits>();
}

void MLConv2dSupportLimits::filter(const MLTensorLimits& value) {
    emlite::Val::set("filter", value);
}

MLTensorLimits MLConv2dSupportLimits::bias() const {
    return emlite::Val::get("bias").as<MLTensorLimits>();
}

void MLConv2dSupportLimits::bias(const MLTensorLimits& value) {
    emlite::Val::set("bias", value);
}

MLDataTypeLimits MLConv2dSupportLimits::output() const {
    return emlite::Val::get("output").as<MLDataTypeLimits>();
}

void MLConv2dSupportLimits::output(const MLDataTypeLimits& value) {
    emlite::Val::set("output", value);
}


} // namespace webbind