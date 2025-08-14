#include <webbind/AttributionLogicOptions.hpp>

namespace webbind {

AttributionLogicOptions::AttributionLogicOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
AttributionLogicOptions AttributionLogicOptions::take_ownership(Handle h) noexcept {
    return AttributionLogicOptions(h);
}

AttributionLogicOptions::AttributionLogicOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}

AttributionLogicOptions::AttributionLogicOptions() noexcept: emlite::Val(emlite::Val::object()) {}

AttributionLogicOptions AttributionLogicOptions::clone() const noexcept { return *this; }

jsbind::TypedArray<double> AttributionLogicOptions::credit() const {
    return emlite::Val::get("credit").as<jsbind::TypedArray<double>>();
}

void AttributionLogicOptions::credit(jsbind::TypedArray<double> value) {
    emlite::Val::set("credit", value);
}


} // namespace webbind