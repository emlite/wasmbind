#include "webbind/MLGemmSupportLimits.hpp"
#include "webbind/MLTensorLimits.hpp"
#include "webbind/MLDataTypeLimits.hpp"

using emlite::Val;
namespace webbind {

MLGemmSupportLimits::MLGemmSupportLimits(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MLGemmSupportLimits MLGemmSupportLimits::take_ownership(Handle h) noexcept {
        return MLGemmSupportLimits(h);
    }
MLGemmSupportLimits::MLGemmSupportLimits(const emlite::Val &val) noexcept: emlite::Val(val) {}
MLGemmSupportLimits::MLGemmSupportLimits() noexcept: emlite::Val(emlite::Val::object()) {}
MLGemmSupportLimits MLGemmSupportLimits::clone() const noexcept { return *this; }

MLTensorLimits MLGemmSupportLimits::a() const {
    return emlite::Val::get("a").as<MLTensorLimits>();
}

void MLGemmSupportLimits::a(const MLTensorLimits& value) {
    emlite::Val::set("a", value);
}

MLTensorLimits MLGemmSupportLimits::b() const {
    return emlite::Val::get("b").as<MLTensorLimits>();
}

void MLGemmSupportLimits::b(const MLTensorLimits& value) {
    emlite::Val::set("b", value);
}

MLTensorLimits MLGemmSupportLimits::c() const {
    return emlite::Val::get("c").as<MLTensorLimits>();
}

void MLGemmSupportLimits::c(const MLTensorLimits& value) {
    emlite::Val::set("c", value);
}

MLDataTypeLimits MLGemmSupportLimits::output() const {
    return emlite::Val::get("output").as<MLDataTypeLimits>();
}

void MLGemmSupportLimits::output(const MLDataTypeLimits& value) {
    emlite::Val::set("output", value);
}


} // namespace webbind