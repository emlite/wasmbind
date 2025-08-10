#include <webbind/MLBinarySupportLimits.hpp>
#include <webbind/MLTensorLimits.hpp>
#include <webbind/MLDataTypeLimits.hpp>

using emlite::Val;
namespace webbind {

MLBinarySupportLimits::MLBinarySupportLimits(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MLBinarySupportLimits MLBinarySupportLimits::take_ownership(Handle h) noexcept {
        return MLBinarySupportLimits(h);
    }
MLBinarySupportLimits::MLBinarySupportLimits(const emlite::Val &val) noexcept: emlite::Val(val) {}
MLBinarySupportLimits::MLBinarySupportLimits() noexcept: emlite::Val(emlite::Val::object()) {}
MLBinarySupportLimits MLBinarySupportLimits::clone() const noexcept { return *this; }

MLTensorLimits MLBinarySupportLimits::a() const {
    return emlite::Val::get("a").as<MLTensorLimits>();
}

void MLBinarySupportLimits::a(const MLTensorLimits& value) {
    emlite::Val::set("a", value);
}

MLTensorLimits MLBinarySupportLimits::b() const {
    return emlite::Val::get("b").as<MLTensorLimits>();
}

void MLBinarySupportLimits::b(const MLTensorLimits& value) {
    emlite::Val::set("b", value);
}

MLDataTypeLimits MLBinarySupportLimits::output() const {
    return emlite::Val::get("output").as<MLDataTypeLimits>();
}

void MLBinarySupportLimits::output(const MLDataTypeLimits& value) {
    emlite::Val::set("output", value);
}


} // namespace webbind