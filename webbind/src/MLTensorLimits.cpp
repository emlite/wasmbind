#include <webbind/MLTensorLimits.hpp>
#include <webbind/MLRankRange.hpp>

using emlite::Val;
namespace webbind {

MLTensorLimits::MLTensorLimits(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MLTensorLimits MLTensorLimits::take_ownership(Handle h) noexcept {
        return MLTensorLimits(h);
    }
MLTensorLimits::MLTensorLimits(const emlite::Val &val) noexcept: emlite::Val(val) {}
MLTensorLimits::MLTensorLimits() noexcept: emlite::Val(emlite::Val::object()) {}
MLTensorLimits MLTensorLimits::clone() const noexcept { return *this; }

jsbind::Any MLTensorLimits::dataTypes() const {
    return emlite::Val::get("dataTypes").as<jsbind::Any>();
}

void MLTensorLimits::dataTypes(const jsbind::Any& value) {
    emlite::Val::set("dataTypes", value);
}

MLRankRange MLTensorLimits::rankRange() const {
    return emlite::Val::get("rankRange").as<MLRankRange>();
}

void MLTensorLimits::rankRange(const MLRankRange& value) {
    emlite::Val::set("rankRange", value);
}


} // namespace webbind