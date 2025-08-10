#include <webbind/MLPreluSupportLimits.hpp>
#include <webbind/MLTensorLimits.hpp>
#include <webbind/MLDataTypeLimits.hpp>

using emlite::Val;
namespace webbind {

MLPreluSupportLimits::MLPreluSupportLimits(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MLPreluSupportLimits MLPreluSupportLimits::take_ownership(Handle h) noexcept {
        return MLPreluSupportLimits(h);
    }
MLPreluSupportLimits::MLPreluSupportLimits(const emlite::Val &val) noexcept: emlite::Val(val) {}
MLPreluSupportLimits::MLPreluSupportLimits() noexcept: emlite::Val(emlite::Val::object()) {}
MLPreluSupportLimits MLPreluSupportLimits::clone() const noexcept { return *this; }

MLTensorLimits MLPreluSupportLimits::input() const {
    return emlite::Val::get("input").as<MLTensorLimits>();
}

void MLPreluSupportLimits::input(const MLTensorLimits& value) {
    emlite::Val::set("input", value);
}

MLTensorLimits MLPreluSupportLimits::slope() const {
    return emlite::Val::get("slope").as<MLTensorLimits>();
}

void MLPreluSupportLimits::slope(const MLTensorLimits& value) {
    emlite::Val::set("slope", value);
}

MLDataTypeLimits MLPreluSupportLimits::output() const {
    return emlite::Val::get("output").as<MLDataTypeLimits>();
}

void MLPreluSupportLimits::output(const MLDataTypeLimits& value) {
    emlite::Val::set("output", value);
}


} // namespace webbind