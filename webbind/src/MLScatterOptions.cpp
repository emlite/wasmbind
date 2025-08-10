#include <webbind/MLScatterOptions.hpp>

namespace webbind {

MLScatterOptions::MLScatterOptions(Handle h) noexcept : MLOperatorOptions(emlite::Val::take_ownership(h)) {}
MLScatterOptions MLScatterOptions::take_ownership(Handle h) noexcept {
    return MLScatterOptions(h);
}

MLScatterOptions::MLScatterOptions(const emlite::Val &val) noexcept: MLOperatorOptions(val) {}

MLScatterOptions::MLScatterOptions() noexcept: MLOperatorOptions(emlite::Val::object()) {}

MLScatterOptions MLScatterOptions::clone() const noexcept { return *this; }

unsigned long MLScatterOptions::axis() const {
    return emlite::Val::get("axis").as<unsigned long>();
}

void MLScatterOptions::axis(unsigned long value) {
    emlite::Val::set("axis", value);
}


} // namespace webbind