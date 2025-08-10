#include <webbind/MLSliceOptions.hpp>

namespace webbind {

MLSliceOptions::MLSliceOptions(Handle h) noexcept : MLOperatorOptions(emlite::Val::take_ownership(h)) {}
MLSliceOptions MLSliceOptions::take_ownership(Handle h) noexcept {
    return MLSliceOptions(h);
}

MLSliceOptions::MLSliceOptions(const emlite::Val &val) noexcept: MLOperatorOptions(val) {}

MLSliceOptions::MLSliceOptions() noexcept: MLOperatorOptions(emlite::Val::object()) {}

MLSliceOptions MLSliceOptions::clone() const noexcept { return *this; }

jsbind::TypedArray<unsigned long> MLSliceOptions::strides() const {
    return emlite::Val::get("strides").as<jsbind::TypedArray<unsigned long>>();
}

void MLSliceOptions::strides(jsbind::TypedArray<unsigned long> value) {
    emlite::Val::set("strides", value);
}


} // namespace webbind