#include <webbind/MLLogicalNotSupportLimits.hpp>
#include <webbind/MLTensorLimits.hpp>
#include <webbind/MLDataTypeLimits.hpp>

using emlite::Val;
namespace webbind {

MLLogicalNotSupportLimits::MLLogicalNotSupportLimits(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MLLogicalNotSupportLimits MLLogicalNotSupportLimits::take_ownership(Handle h) noexcept {
        return MLLogicalNotSupportLimits(h);
    }
MLLogicalNotSupportLimits::MLLogicalNotSupportLimits(const emlite::Val &val) noexcept: emlite::Val(val) {}
MLLogicalNotSupportLimits::MLLogicalNotSupportLimits() noexcept: emlite::Val(emlite::Val::object()) {}
MLLogicalNotSupportLimits MLLogicalNotSupportLimits::clone() const noexcept { return *this; }

MLTensorLimits MLLogicalNotSupportLimits::a() const {
    return emlite::Val::get("a").as<MLTensorLimits>();
}

void MLLogicalNotSupportLimits::a(const MLTensorLimits& value) {
    emlite::Val::set("a", value);
}

MLDataTypeLimits MLLogicalNotSupportLimits::output() const {
    return emlite::Val::get("output").as<MLDataTypeLimits>();
}

void MLLogicalNotSupportLimits::output(const MLDataTypeLimits& value) {
    emlite::Val::set("output", value);
}


} // namespace webbind