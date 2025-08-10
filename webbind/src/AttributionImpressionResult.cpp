#include <webbind/AttributionImpressionResult.hpp>

using emlite::Val;
namespace webbind {

AttributionImpressionResult::AttributionImpressionResult(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
AttributionImpressionResult AttributionImpressionResult::take_ownership(Handle h) noexcept {
        return AttributionImpressionResult(h);
    }
AttributionImpressionResult::AttributionImpressionResult(const emlite::Val &val) noexcept: emlite::Val(val) {}
AttributionImpressionResult::AttributionImpressionResult() noexcept: emlite::Val(emlite::Val::object()) {}
AttributionImpressionResult AttributionImpressionResult::clone() const noexcept { return *this; }


} // namespace webbind