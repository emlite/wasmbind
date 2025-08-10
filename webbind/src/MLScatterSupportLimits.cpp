#include <webbind/MLScatterSupportLimits.hpp>
#include <webbind/MLTensorLimits.hpp>
#include <webbind/MLDataTypeLimits.hpp>

namespace webbind {

MLScatterSupportLimits::MLScatterSupportLimits(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MLScatterSupportLimits MLScatterSupportLimits::take_ownership(Handle h) noexcept {
    return MLScatterSupportLimits(h);
}

MLScatterSupportLimits::MLScatterSupportLimits(const emlite::Val &val) noexcept: emlite::Val(val) {}

MLScatterSupportLimits::MLScatterSupportLimits() noexcept: emlite::Val(emlite::Val::object()) {}

MLScatterSupportLimits MLScatterSupportLimits::clone() const noexcept { return *this; }

MLTensorLimits MLScatterSupportLimits::input() const {
    return emlite::Val::get("input").as<MLTensorLimits>();
}

void MLScatterSupportLimits::input(const MLTensorLimits& value) {
    emlite::Val::set("input", value);
}

MLTensorLimits MLScatterSupportLimits::indices() const {
    return emlite::Val::get("indices").as<MLTensorLimits>();
}

void MLScatterSupportLimits::indices(const MLTensorLimits& value) {
    emlite::Val::set("indices", value);
}

MLTensorLimits MLScatterSupportLimits::updates() const {
    return emlite::Val::get("updates").as<MLTensorLimits>();
}

void MLScatterSupportLimits::updates(const MLTensorLimits& value) {
    emlite::Val::set("updates", value);
}

MLDataTypeLimits MLScatterSupportLimits::output() const {
    return emlite::Val::get("output").as<MLDataTypeLimits>();
}

void MLScatterSupportLimits::output(const MLDataTypeLimits& value) {
    emlite::Val::set("output", value);
}


} // namespace webbind