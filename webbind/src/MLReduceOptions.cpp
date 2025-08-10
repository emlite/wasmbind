#include <webbind/MLReduceOptions.hpp>

namespace webbind {

MLReduceOptions::MLReduceOptions(Handle h) noexcept : MLOperatorOptions(emlite::Val::take_ownership(h)) {}
MLReduceOptions MLReduceOptions::take_ownership(Handle h) noexcept {
    return MLReduceOptions(h);
}

MLReduceOptions::MLReduceOptions(const emlite::Val &val) noexcept: MLOperatorOptions(val) {}

MLReduceOptions::MLReduceOptions() noexcept: MLOperatorOptions(emlite::Val::object()) {}

MLReduceOptions MLReduceOptions::clone() const noexcept { return *this; }

jsbind::TypedArray<unsigned long> MLReduceOptions::axes() const {
    return emlite::Val::get("axes").as<jsbind::TypedArray<unsigned long>>();
}

void MLReduceOptions::axes(jsbind::TypedArray<unsigned long> value) {
    emlite::Val::set("axes", value);
}

bool MLReduceOptions::keepDimensions() const {
    return emlite::Val::get("keepDimensions").as<bool>();
}

void MLReduceOptions::keepDimensions(bool value) {
    emlite::Val::set("keepDimensions", value);
}


} // namespace webbind