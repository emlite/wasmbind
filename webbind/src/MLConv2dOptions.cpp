#include <webbind/MLConv2dOptions.hpp>
#include <webbind/MLOperand.hpp>

namespace webbind {

MLConv2dOptions::MLConv2dOptions(Handle h) noexcept : MLOperatorOptions(emlite::Val::take_ownership(h)) {}
MLConv2dOptions MLConv2dOptions::take_ownership(Handle h) noexcept {
    return MLConv2dOptions(h);
}

MLConv2dOptions::MLConv2dOptions(const emlite::Val &val) noexcept: MLOperatorOptions(val) {}

MLConv2dOptions::MLConv2dOptions() noexcept: MLOperatorOptions(emlite::Val::object()) {}

MLConv2dOptions MLConv2dOptions::clone() const noexcept { return *this; }

jsbind::TypedArray<unsigned long> MLConv2dOptions::padding() const {
    return emlite::Val::get("padding").as<jsbind::TypedArray<unsigned long>>();
}

void MLConv2dOptions::padding(jsbind::TypedArray<unsigned long> value) {
    emlite::Val::set("padding", value);
}

jsbind::TypedArray<unsigned long> MLConv2dOptions::strides() const {
    return emlite::Val::get("strides").as<jsbind::TypedArray<unsigned long>>();
}

void MLConv2dOptions::strides(jsbind::TypedArray<unsigned long> value) {
    emlite::Val::set("strides", value);
}

jsbind::TypedArray<unsigned long> MLConv2dOptions::dilations() const {
    return emlite::Val::get("dilations").as<jsbind::TypedArray<unsigned long>>();
}

void MLConv2dOptions::dilations(jsbind::TypedArray<unsigned long> value) {
    emlite::Val::set("dilations", value);
}

unsigned long MLConv2dOptions::groups() const {
    return emlite::Val::get("groups").as<unsigned long>();
}

void MLConv2dOptions::groups(unsigned long value) {
    emlite::Val::set("groups", value);
}

MLInputOperandLayout MLConv2dOptions::inputLayout() const {
    return emlite::Val::get("inputLayout").as<MLInputOperandLayout>();
}

void MLConv2dOptions::inputLayout(const MLInputOperandLayout& value) {
    emlite::Val::set("inputLayout", value);
}

MLConv2dFilterOperandLayout MLConv2dOptions::filterLayout() const {
    return emlite::Val::get("filterLayout").as<MLConv2dFilterOperandLayout>();
}

void MLConv2dOptions::filterLayout(const MLConv2dFilterOperandLayout& value) {
    emlite::Val::set("filterLayout", value);
}

MLOperand MLConv2dOptions::bias() const {
    return emlite::Val::get("bias").as<MLOperand>();
}

void MLConv2dOptions::bias(const MLOperand& value) {
    emlite::Val::set("bias", value);
}


} // namespace webbind