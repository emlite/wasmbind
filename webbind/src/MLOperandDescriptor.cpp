#include <webbind/MLOperandDescriptor.hpp>

using emlite::Val;
namespace webbind {

MLOperandDescriptor::MLOperandDescriptor(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MLOperandDescriptor MLOperandDescriptor::take_ownership(Handle h) noexcept {
        return MLOperandDescriptor(h);
    }
MLOperandDescriptor::MLOperandDescriptor(const emlite::Val &val) noexcept: emlite::Val(val) {}
MLOperandDescriptor::MLOperandDescriptor() noexcept: emlite::Val(emlite::Val::object()) {}
MLOperandDescriptor MLOperandDescriptor::clone() const noexcept { return *this; }

MLOperandDataType MLOperandDescriptor::dataType() const {
    return emlite::Val::get("dataType").as<MLOperandDataType>();
}

void MLOperandDescriptor::dataType(const MLOperandDataType& value) {
    emlite::Val::set("dataType", value);
}

jsbind::TypedArray<unsigned long> MLOperandDescriptor::shape() const {
    return emlite::Val::get("shape").as<jsbind::TypedArray<unsigned long>>();
}

void MLOperandDescriptor::shape(jsbind::TypedArray<unsigned long> value) {
    emlite::Val::set("shape", value);
}


} // namespace webbind