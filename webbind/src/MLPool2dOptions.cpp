#include <webbind/MLPool2dOptions.hpp>

using emlite::Val;
namespace webbind {

MLPool2dOptions::MLPool2dOptions(Handle h) noexcept : MLOperatorOptions(emlite::Val::take_ownership(h)) {}
MLPool2dOptions MLPool2dOptions::take_ownership(Handle h) noexcept {
        return MLPool2dOptions(h);
    }
MLPool2dOptions::MLPool2dOptions(const emlite::Val &val) noexcept: MLOperatorOptions(val) {}
MLPool2dOptions::MLPool2dOptions() noexcept: MLOperatorOptions(emlite::Val::object()) {}
MLPool2dOptions MLPool2dOptions::clone() const noexcept { return *this; }

jsbind::TypedArray<unsigned long> MLPool2dOptions::windowDimensions() const {
    return emlite::Val::get("windowDimensions").as<jsbind::TypedArray<unsigned long>>();
}

void MLPool2dOptions::windowDimensions(jsbind::TypedArray<unsigned long> value) {
    emlite::Val::set("windowDimensions", value);
}

jsbind::TypedArray<unsigned long> MLPool2dOptions::padding() const {
    return emlite::Val::get("padding").as<jsbind::TypedArray<unsigned long>>();
}

void MLPool2dOptions::padding(jsbind::TypedArray<unsigned long> value) {
    emlite::Val::set("padding", value);
}

jsbind::TypedArray<unsigned long> MLPool2dOptions::strides() const {
    return emlite::Val::get("strides").as<jsbind::TypedArray<unsigned long>>();
}

void MLPool2dOptions::strides(jsbind::TypedArray<unsigned long> value) {
    emlite::Val::set("strides", value);
}

jsbind::TypedArray<unsigned long> MLPool2dOptions::dilations() const {
    return emlite::Val::get("dilations").as<jsbind::TypedArray<unsigned long>>();
}

void MLPool2dOptions::dilations(jsbind::TypedArray<unsigned long> value) {
    emlite::Val::set("dilations", value);
}

MLInputOperandLayout MLPool2dOptions::layout() const {
    return emlite::Val::get("layout").as<MLInputOperandLayout>();
}

void MLPool2dOptions::layout(const MLInputOperandLayout& value) {
    emlite::Val::set("layout", value);
}

MLRoundingType MLPool2dOptions::roundingType() const {
    return emlite::Val::get("roundingType").as<MLRoundingType>();
}

void MLPool2dOptions::roundingType(const MLRoundingType& value) {
    emlite::Val::set("roundingType", value);
}

jsbind::TypedArray<unsigned long> MLPool2dOptions::outputSizes() const {
    return emlite::Val::get("outputSizes").as<jsbind::TypedArray<unsigned long>>();
}

void MLPool2dOptions::outputSizes(jsbind::TypedArray<unsigned long> value) {
    emlite::Val::set("outputSizes", value);
}


} // namespace webbind