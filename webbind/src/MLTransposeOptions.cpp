#include "webbind/MLTransposeOptions.hpp"

using emlite::Val;
namespace webbind {

MLTransposeOptions::MLTransposeOptions(Handle h) noexcept : MLOperatorOptions(emlite::Val::take_ownership(h)) {}
MLTransposeOptions MLTransposeOptions::take_ownership(Handle h) noexcept {
        return MLTransposeOptions(h);
    }
MLTransposeOptions::MLTransposeOptions(const emlite::Val &val) noexcept: MLOperatorOptions(val) {}
MLTransposeOptions::MLTransposeOptions() noexcept: MLOperatorOptions(emlite::Val::object()) {}
MLTransposeOptions MLTransposeOptions::clone() const noexcept { return *this; }

jsbind::TypedArray<unsigned long> MLTransposeOptions::permutation() const {
    return emlite::Val::get("permutation").as<jsbind::TypedArray<unsigned long>>();
}

void MLTransposeOptions::permutation(jsbind::TypedArray<unsigned long> value) {
    emlite::Val::set("permutation", value);
}


} // namespace webbind