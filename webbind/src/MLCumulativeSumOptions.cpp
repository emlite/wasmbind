#include <webbind/MLCumulativeSumOptions.hpp>

using emlite::Val;
namespace webbind {

MLCumulativeSumOptions::MLCumulativeSumOptions(Handle h) noexcept : MLOperatorOptions(emlite::Val::take_ownership(h)) {}
MLCumulativeSumOptions MLCumulativeSumOptions::take_ownership(Handle h) noexcept {
        return MLCumulativeSumOptions(h);
    }
MLCumulativeSumOptions::MLCumulativeSumOptions(const emlite::Val &val) noexcept: MLOperatorOptions(val) {}
MLCumulativeSumOptions::MLCumulativeSumOptions() noexcept: MLOperatorOptions(emlite::Val::object()) {}
MLCumulativeSumOptions MLCumulativeSumOptions::clone() const noexcept { return *this; }

bool MLCumulativeSumOptions::exclusive() const {
    return emlite::Val::get("exclusive").as<bool>();
}

void MLCumulativeSumOptions::exclusive(bool value) {
    emlite::Val::set("exclusive", value);
}

bool MLCumulativeSumOptions::reversed() const {
    return emlite::Val::get("reversed").as<bool>();
}

void MLCumulativeSumOptions::reversed(bool value) {
    emlite::Val::set("reversed", value);
}


} // namespace webbind