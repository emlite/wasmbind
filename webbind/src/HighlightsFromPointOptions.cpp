#include <webbind/HighlightsFromPointOptions.hpp>
#include <webbind/ShadowRoot.hpp>

using emlite::Val;
namespace webbind {

HighlightsFromPointOptions::HighlightsFromPointOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
HighlightsFromPointOptions HighlightsFromPointOptions::take_ownership(Handle h) noexcept {
        return HighlightsFromPointOptions(h);
    }
HighlightsFromPointOptions::HighlightsFromPointOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
HighlightsFromPointOptions::HighlightsFromPointOptions() noexcept: emlite::Val(emlite::Val::object()) {}
HighlightsFromPointOptions HighlightsFromPointOptions::clone() const noexcept { return *this; }

jsbind::TypedArray<ShadowRoot> HighlightsFromPointOptions::shadowRoots() const {
    return emlite::Val::get("shadowRoots").as<jsbind::TypedArray<ShadowRoot>>();
}

void HighlightsFromPointOptions::shadowRoots(const jsbind::TypedArray<ShadowRoot>& value) {
    emlite::Val::set("shadowRoots", value);
}


} // namespace webbind