#include <webbind/MLConvTranspose2dOptions.hpp>
#include <webbind/MLOperand.hpp>

namespace webbind {

MLConvTranspose2dOptions::MLConvTranspose2dOptions(Handle h) noexcept : MLOperatorOptions(emlite::Val::take_ownership(h)) {}
MLConvTranspose2dOptions MLConvTranspose2dOptions::take_ownership(Handle h) noexcept {
    return MLConvTranspose2dOptions(h);
}

MLConvTranspose2dOptions::MLConvTranspose2dOptions(const emlite::Val &val) noexcept: MLOperatorOptions(val) {}

MLConvTranspose2dOptions::MLConvTranspose2dOptions() noexcept: MLOperatorOptions(emlite::Val::object()) {}

MLConvTranspose2dOptions MLConvTranspose2dOptions::clone() const noexcept { return *this; }

jsbind::TypedArray<unsigned long> MLConvTranspose2dOptions::padding() const {
    return emlite::Val::get("padding").as<jsbind::TypedArray<unsigned long>>();
}

void MLConvTranspose2dOptions::padding(jsbind::TypedArray<unsigned long> value) {
    emlite::Val::set("padding", value);
}

jsbind::TypedArray<unsigned long> MLConvTranspose2dOptions::strides() const {
    return emlite::Val::get("strides").as<jsbind::TypedArray<unsigned long>>();
}

void MLConvTranspose2dOptions::strides(jsbind::TypedArray<unsigned long> value) {
    emlite::Val::set("strides", value);
}

jsbind::TypedArray<unsigned long> MLConvTranspose2dOptions::dilations() const {
    return emlite::Val::get("dilations").as<jsbind::TypedArray<unsigned long>>();
}

void MLConvTranspose2dOptions::dilations(jsbind::TypedArray<unsigned long> value) {
    emlite::Val::set("dilations", value);
}

jsbind::TypedArray<unsigned long> MLConvTranspose2dOptions::outputPadding() const {
    return emlite::Val::get("outputPadding").as<jsbind::TypedArray<unsigned long>>();
}

void MLConvTranspose2dOptions::outputPadding(jsbind::TypedArray<unsigned long> value) {
    emlite::Val::set("outputPadding", value);
}

jsbind::TypedArray<unsigned long> MLConvTranspose2dOptions::outputSizes() const {
    return emlite::Val::get("outputSizes").as<jsbind::TypedArray<unsigned long>>();
}

void MLConvTranspose2dOptions::outputSizes(jsbind::TypedArray<unsigned long> value) {
    emlite::Val::set("outputSizes", value);
}

unsigned long MLConvTranspose2dOptions::groups() const {
    return emlite::Val::get("groups").as<unsigned long>();
}

void MLConvTranspose2dOptions::groups(unsigned long value) {
    emlite::Val::set("groups", value);
}

MLInputOperandLayout MLConvTranspose2dOptions::inputLayout() const {
    return emlite::Val::get("inputLayout").as<MLInputOperandLayout>();
}

void MLConvTranspose2dOptions::inputLayout(const MLInputOperandLayout& value) {
    emlite::Val::set("inputLayout", value);
}

MLConvTranspose2dFilterOperandLayout MLConvTranspose2dOptions::filterLayout() const {
    return emlite::Val::get("filterLayout").as<MLConvTranspose2dFilterOperandLayout>();
}

void MLConvTranspose2dOptions::filterLayout(const MLConvTranspose2dFilterOperandLayout& value) {
    emlite::Val::set("filterLayout", value);
}

MLOperand MLConvTranspose2dOptions::bias() const {
    return emlite::Val::get("bias").as<MLOperand>();
}

void MLConvTranspose2dOptions::bias(const MLOperand& value) {
    emlite::Val::set("bias", value);
}


} // namespace webbind