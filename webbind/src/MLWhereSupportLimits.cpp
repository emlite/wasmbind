#include <webbind/MLWhereSupportLimits.hpp>
#include <webbind/MLTensorLimits.hpp>
#include <webbind/MLDataTypeLimits.hpp>

using emlite::Val;
namespace webbind {

MLWhereSupportLimits::MLWhereSupportLimits(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MLWhereSupportLimits MLWhereSupportLimits::take_ownership(Handle h) noexcept {
        return MLWhereSupportLimits(h);
    }
MLWhereSupportLimits::MLWhereSupportLimits(const emlite::Val &val) noexcept: emlite::Val(val) {}
MLWhereSupportLimits::MLWhereSupportLimits() noexcept: emlite::Val(emlite::Val::object()) {}
MLWhereSupportLimits MLWhereSupportLimits::clone() const noexcept { return *this; }

MLTensorLimits MLWhereSupportLimits::condition() const {
    return emlite::Val::get("condition").as<MLTensorLimits>();
}

void MLWhereSupportLimits::condition(const MLTensorLimits& value) {
    emlite::Val::set("condition", value);
}

MLTensorLimits MLWhereSupportLimits::trueValue() const {
    return emlite::Val::get("trueValue").as<MLTensorLimits>();
}

void MLWhereSupportLimits::trueValue(const MLTensorLimits& value) {
    emlite::Val::set("trueValue", value);
}

MLTensorLimits MLWhereSupportLimits::falseValue() const {
    return emlite::Val::get("falseValue").as<MLTensorLimits>();
}

void MLWhereSupportLimits::falseValue(const MLTensorLimits& value) {
    emlite::Val::set("falseValue", value);
}

MLDataTypeLimits MLWhereSupportLimits::output() const {
    return emlite::Val::get("output").as<MLDataTypeLimits>();
}

void MLWhereSupportLimits::output(const MLDataTypeLimits& value) {
    emlite::Val::set("output", value);
}


} // namespace webbind