#include <webbind/MLGatherSupportLimits.hpp>
#include <webbind/MLTensorLimits.hpp>
#include <webbind/MLDataTypeLimits.hpp>

using emlite::Val;
namespace webbind {

MLGatherSupportLimits::MLGatherSupportLimits(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MLGatherSupportLimits MLGatherSupportLimits::take_ownership(Handle h) noexcept {
        return MLGatherSupportLimits(h);
    }
MLGatherSupportLimits::MLGatherSupportLimits(const emlite::Val &val) noexcept: emlite::Val(val) {}
MLGatherSupportLimits::MLGatherSupportLimits() noexcept: emlite::Val(emlite::Val::object()) {}
MLGatherSupportLimits MLGatherSupportLimits::clone() const noexcept { return *this; }

MLTensorLimits MLGatherSupportLimits::input() const {
    return emlite::Val::get("input").as<MLTensorLimits>();
}

void MLGatherSupportLimits::input(const MLTensorLimits& value) {
    emlite::Val::set("input", value);
}

MLTensorLimits MLGatherSupportLimits::indices() const {
    return emlite::Val::get("indices").as<MLTensorLimits>();
}

void MLGatherSupportLimits::indices(const MLTensorLimits& value) {
    emlite::Val::set("indices", value);
}

MLDataTypeLimits MLGatherSupportLimits::output() const {
    return emlite::Val::get("output").as<MLDataTypeLimits>();
}

void MLGatherSupportLimits::output(const MLDataTypeLimits& value) {
    emlite::Val::set("output", value);
}


} // namespace webbind