#include <webbind/CaretPositionFromPointOptions.hpp>
#include <webbind/ShadowRoot.hpp>

namespace webbind {

CaretPositionFromPointOptions::CaretPositionFromPointOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
CaretPositionFromPointOptions CaretPositionFromPointOptions::take_ownership(Handle h) noexcept {
    return CaretPositionFromPointOptions(h);
}

CaretPositionFromPointOptions::CaretPositionFromPointOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}

CaretPositionFromPointOptions::CaretPositionFromPointOptions() noexcept: emlite::Val(emlite::Val::object()) {}

CaretPositionFromPointOptions CaretPositionFromPointOptions::clone() const noexcept { return *this; }

jsbind::TypedArray<ShadowRoot> CaretPositionFromPointOptions::shadowRoots() const {
    return emlite::Val::get("shadowRoots").as<jsbind::TypedArray<ShadowRoot>>();
}

void CaretPositionFromPointOptions::shadowRoots(const jsbind::TypedArray<ShadowRoot>& value) {
    emlite::Val::set("shadowRoots", value);
}


} // namespace webbind