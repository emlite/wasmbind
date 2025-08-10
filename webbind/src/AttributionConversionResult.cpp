#include <webbind/AttributionConversionResult.hpp>

using emlite::Val;
namespace webbind {

AttributionConversionResult::AttributionConversionResult(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
AttributionConversionResult AttributionConversionResult::take_ownership(Handle h) noexcept {
        return AttributionConversionResult(h);
    }
AttributionConversionResult::AttributionConversionResult(const emlite::Val &val) noexcept: emlite::Val(val) {}
AttributionConversionResult::AttributionConversionResult() noexcept: emlite::Val(emlite::Val::object()) {}
AttributionConversionResult AttributionConversionResult::clone() const noexcept { return *this; }

jsbind::Uint8Array AttributionConversionResult::report() const {
    return emlite::Val::get("report").as<jsbind::Uint8Array>();
}

void AttributionConversionResult::report(const jsbind::Uint8Array& value) {
    emlite::Val::set("report", value);
}


} // namespace webbind