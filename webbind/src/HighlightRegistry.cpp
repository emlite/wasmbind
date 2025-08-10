#include <webbind/HighlightRegistry.hpp>
#include <webbind/HighlightHitResult.hpp>
#include <webbind/HighlightsFromPointOptions.hpp>

namespace webbind {

HighlightRegistry HighlightRegistry::take_ownership(Handle h) noexcept {
    return HighlightRegistry(h);
}

HighlightRegistry HighlightRegistry::clone() const noexcept { return *this; }

emlite::Val HighlightRegistry::instance() noexcept { return emlite::Val::global("HighlightRegistry"); }

HighlightRegistry::HighlightRegistry(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

HighlightRegistry::HighlightRegistry(const emlite::Val &val) noexcept: emlite::Val(val) {}

jsbind::TypedArray<HighlightHitResult> HighlightRegistry::highlightsFromPoint(float x, float y) {
    return emlite::Val::call("highlightsFromPoint", x, y).as<jsbind::TypedArray<HighlightHitResult>>();
}

jsbind::TypedArray<HighlightHitResult> HighlightRegistry::highlightsFromPoint(float x, float y, const HighlightsFromPointOptions& options) {
    return emlite::Val::call("highlightsFromPoint", x, y, options).as<jsbind::TypedArray<HighlightHitResult>>();
}


} // namespace webbind