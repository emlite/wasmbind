#include <webbind/MLReverseOptions.hpp>

using emlite::Val;
namespace webbind {

MLReverseOptions::MLReverseOptions(Handle h) noexcept : MLOperatorOptions(emlite::Val::take_ownership(h)) {}
MLReverseOptions MLReverseOptions::take_ownership(Handle h) noexcept {
        return MLReverseOptions(h);
    }
MLReverseOptions::MLReverseOptions(const emlite::Val &val) noexcept: MLOperatorOptions(val) {}
MLReverseOptions::MLReverseOptions() noexcept: MLOperatorOptions(emlite::Val::object()) {}
MLReverseOptions MLReverseOptions::clone() const noexcept { return *this; }

jsbind::TypedArray<unsigned long> MLReverseOptions::axes() const {
    return emlite::Val::get("axes").as<jsbind::TypedArray<unsigned long>>();
}

void MLReverseOptions::axes(jsbind::TypedArray<unsigned long> value) {
    emlite::Val::set("axes", value);
}


} // namespace webbind