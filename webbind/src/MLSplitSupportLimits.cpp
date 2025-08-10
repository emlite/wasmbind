#include "webbind/MLSplitSupportLimits.hpp"
#include "webbind/MLTensorLimits.hpp"
#include "webbind/MLDataTypeLimits.hpp"

using emlite::Val;
namespace webbind {

MLSplitSupportLimits::MLSplitSupportLimits(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MLSplitSupportLimits MLSplitSupportLimits::take_ownership(Handle h) noexcept {
        return MLSplitSupportLimits(h);
    }
MLSplitSupportLimits::MLSplitSupportLimits(const emlite::Val &val) noexcept: emlite::Val(val) {}
MLSplitSupportLimits::MLSplitSupportLimits() noexcept: emlite::Val(emlite::Val::object()) {}
MLSplitSupportLimits MLSplitSupportLimits::clone() const noexcept { return *this; }

MLTensorLimits MLSplitSupportLimits::input() const {
    return emlite::Val::get("input").as<MLTensorLimits>();
}

void MLSplitSupportLimits::input(const MLTensorLimits& value) {
    emlite::Val::set("input", value);
}

MLDataTypeLimits MLSplitSupportLimits::outputs() const {
    return emlite::Val::get("outputs").as<MLDataTypeLimits>();
}

void MLSplitSupportLimits::outputs(const MLDataTypeLimits& value) {
    emlite::Val::set("outputs", value);
}


} // namespace webbind