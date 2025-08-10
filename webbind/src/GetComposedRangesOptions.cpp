#include <webbind/GetComposedRangesOptions.hpp>
#include <webbind/ShadowRoot.hpp>

namespace webbind {

GetComposedRangesOptions::GetComposedRangesOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GetComposedRangesOptions GetComposedRangesOptions::take_ownership(Handle h) noexcept {
    return GetComposedRangesOptions(h);
}

GetComposedRangesOptions::GetComposedRangesOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}

GetComposedRangesOptions::GetComposedRangesOptions() noexcept: emlite::Val(emlite::Val::object()) {}

GetComposedRangesOptions GetComposedRangesOptions::clone() const noexcept { return *this; }

jsbind::TypedArray<ShadowRoot> GetComposedRangesOptions::shadowRoots() const {
    return emlite::Val::get("shadowRoots").as<jsbind::TypedArray<ShadowRoot>>();
}

void GetComposedRangesOptions::shadowRoots(const jsbind::TypedArray<ShadowRoot>& value) {
    emlite::Val::set("shadowRoots", value);
}


} // namespace webbind