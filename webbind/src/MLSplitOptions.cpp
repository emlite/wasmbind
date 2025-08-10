#include <webbind/MLSplitOptions.hpp>

using emlite::Val;
namespace webbind {

MLSplitOptions::MLSplitOptions(Handle h) noexcept : MLOperatorOptions(emlite::Val::take_ownership(h)) {}
MLSplitOptions MLSplitOptions::take_ownership(Handle h) noexcept {
        return MLSplitOptions(h);
    }
MLSplitOptions::MLSplitOptions(const emlite::Val &val) noexcept: MLOperatorOptions(val) {}
MLSplitOptions::MLSplitOptions() noexcept: MLOperatorOptions(emlite::Val::object()) {}
MLSplitOptions MLSplitOptions::clone() const noexcept { return *this; }

unsigned long MLSplitOptions::axis() const {
    return emlite::Val::get("axis").as<unsigned long>();
}

void MLSplitOptions::axis(unsigned long value) {
    emlite::Val::set("axis", value);
}


} // namespace webbind