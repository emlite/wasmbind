#include "webbind/MLSingleInputSupportLimits.hpp"
#include "webbind/MLTensorLimits.hpp"
#include "webbind/MLDataTypeLimits.hpp"

using emlite::Val;
namespace webbind {

MLSingleInputSupportLimits::MLSingleInputSupportLimits(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MLSingleInputSupportLimits MLSingleInputSupportLimits::take_ownership(Handle h) noexcept {
        return MLSingleInputSupportLimits(h);
    }
MLSingleInputSupportLimits::MLSingleInputSupportLimits(const emlite::Val &val) noexcept: emlite::Val(val) {}
MLSingleInputSupportLimits::MLSingleInputSupportLimits() noexcept: emlite::Val(emlite::Val::object()) {}
MLSingleInputSupportLimits MLSingleInputSupportLimits::clone() const noexcept { return *this; }

MLTensorLimits MLSingleInputSupportLimits::input() const {
    return emlite::Val::get("input").as<MLTensorLimits>();
}

void MLSingleInputSupportLimits::input(const MLTensorLimits& value) {
    emlite::Val::set("input", value);
}

MLDataTypeLimits MLSingleInputSupportLimits::output() const {
    return emlite::Val::get("output").as<MLDataTypeLimits>();
}

void MLSingleInputSupportLimits::output(const MLDataTypeLimits& value) {
    emlite::Val::set("output", value);
}


} // namespace webbind