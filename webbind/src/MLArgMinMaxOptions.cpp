#include <webbind/MLArgMinMaxOptions.hpp>

namespace webbind {

MLArgMinMaxOptions::MLArgMinMaxOptions(Handle h) noexcept : MLOperatorOptions(emlite::Val::take_ownership(h)) {}
MLArgMinMaxOptions MLArgMinMaxOptions::take_ownership(Handle h) noexcept {
    return MLArgMinMaxOptions(h);
}

MLArgMinMaxOptions::MLArgMinMaxOptions(const emlite::Val &val) noexcept: MLOperatorOptions(val) {}

MLArgMinMaxOptions::MLArgMinMaxOptions() noexcept: MLOperatorOptions(emlite::Val::object()) {}

MLArgMinMaxOptions MLArgMinMaxOptions::clone() const noexcept { return *this; }

bool MLArgMinMaxOptions::keepDimensions() const {
    return emlite::Val::get("keepDimensions").as<bool>();
}

void MLArgMinMaxOptions::keepDimensions(bool value) {
    emlite::Val::set("keepDimensions", value);
}

MLOperandDataType MLArgMinMaxOptions::outputDataType() const {
    return emlite::Val::get("outputDataType").as<MLOperandDataType>();
}

void MLArgMinMaxOptions::outputDataType(const MLOperandDataType& value) {
    emlite::Val::set("outputDataType", value);
}


} // namespace webbind