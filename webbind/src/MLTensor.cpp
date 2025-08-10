#include <webbind/MLTensor.hpp>

namespace webbind {

MLTensor MLTensor::take_ownership(Handle h) noexcept {
        return MLTensor(h);
    }
MLTensor MLTensor::clone() const noexcept { return *this; }
emlite::Val MLTensor::instance() noexcept { return emlite::Val::global("MLTensor"); }
MLTensor::MLTensor(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MLTensor::MLTensor(const emlite::Val &val) noexcept: emlite::Val(val) {}

MLOperandDataType MLTensor::dataType() const {
    return emlite::Val::get("dataType").as<MLOperandDataType>();
}

jsbind::TypedArray<unsigned long> MLTensor::shape() const {
    return emlite::Val::get("shape").as<jsbind::TypedArray<unsigned long>>();
}

bool MLTensor::readable() const {
    return emlite::Val::get("readable").as<bool>();
}

bool MLTensor::writable() const {
    return emlite::Val::get("writable").as<bool>();
}

bool MLTensor::constant() const {
    return emlite::Val::get("constant").as<bool>();
}

jsbind::Undefined MLTensor::destroy() {
    return emlite::Val::call("destroy").as<jsbind::Undefined>();
}


} // namespace webbind