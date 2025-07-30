#include <webbind/MLOperand.hpp>


MLOperand MLOperand::take_ownership(Handle h) noexcept {
        return MLOperand(h);
    }
MLOperand MLOperand::clone() const noexcept { return *this; }
MLOperand::MLOperand(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MLOperand::MLOperand(const emlite::Val &val) noexcept: emlite::Val(val) {}


MLOperandDataType MLOperand::dataType() const {
    return emlite::Val::get("dataType").as<MLOperandDataType>();
}

jsbind::TypedArray<unsigned long> MLOperand::shape() const {
    return emlite::Val::get("shape").as<jsbind::TypedArray<unsigned long>>();
}

