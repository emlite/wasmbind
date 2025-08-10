#include <webbind/MLResample2dOptions.hpp>

using emlite::Val;
namespace webbind {

MLResample2dOptions::MLResample2dOptions(Handle h) noexcept : MLOperatorOptions(emlite::Val::take_ownership(h)) {}
MLResample2dOptions MLResample2dOptions::take_ownership(Handle h) noexcept {
        return MLResample2dOptions(h);
    }
MLResample2dOptions::MLResample2dOptions(const emlite::Val &val) noexcept: MLOperatorOptions(val) {}
MLResample2dOptions::MLResample2dOptions() noexcept: MLOperatorOptions(emlite::Val::object()) {}
MLResample2dOptions MLResample2dOptions::clone() const noexcept { return *this; }

MLInterpolationMode MLResample2dOptions::mode() const {
    return emlite::Val::get("mode").as<MLInterpolationMode>();
}

void MLResample2dOptions::mode(const MLInterpolationMode& value) {
    emlite::Val::set("mode", value);
}

jsbind::TypedArray<float> MLResample2dOptions::scales() const {
    return emlite::Val::get("scales").as<jsbind::TypedArray<float>>();
}

void MLResample2dOptions::scales(jsbind::TypedArray<float> value) {
    emlite::Val::set("scales", value);
}

jsbind::TypedArray<unsigned long> MLResample2dOptions::sizes() const {
    return emlite::Val::get("sizes").as<jsbind::TypedArray<unsigned long>>();
}

void MLResample2dOptions::sizes(jsbind::TypedArray<unsigned long> value) {
    emlite::Val::set("sizes", value);
}

jsbind::TypedArray<unsigned long> MLResample2dOptions::axes() const {
    return emlite::Val::get("axes").as<jsbind::TypedArray<unsigned long>>();
}

void MLResample2dOptions::axes(jsbind::TypedArray<unsigned long> value) {
    emlite::Val::set("axes", value);
}


} // namespace webbind