#include <webbind/LayoutOptions.hpp>

namespace webbind {

LayoutOptions::LayoutOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
LayoutOptions LayoutOptions::take_ownership(Handle h) noexcept {
    return LayoutOptions(h);
}

LayoutOptions::LayoutOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}

LayoutOptions::LayoutOptions() noexcept: emlite::Val(emlite::Val::object()) {}

LayoutOptions LayoutOptions::clone() const noexcept { return *this; }

ChildDisplayType LayoutOptions::childDisplay() const {
    return emlite::Val::get("childDisplay").as<ChildDisplayType>();
}

void LayoutOptions::childDisplay(const ChildDisplayType& value) {
    emlite::Val::set("childDisplay", value);
}

LayoutSizingMode LayoutOptions::sizing() const {
    return emlite::Val::get("sizing").as<LayoutSizingMode>();
}

void LayoutOptions::sizing(const LayoutSizingMode& value) {
    emlite::Val::set("sizing", value);
}


} // namespace webbind