#include "webbind/ColorSelectionOptions.hpp"
#include "webbind/AbortSignal.hpp"

using emlite::Val;
namespace webbind {

ColorSelectionOptions::ColorSelectionOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ColorSelectionOptions ColorSelectionOptions::take_ownership(Handle h) noexcept {
        return ColorSelectionOptions(h);
    }
ColorSelectionOptions::ColorSelectionOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
ColorSelectionOptions::ColorSelectionOptions() noexcept: emlite::Val(emlite::Val::object()) {}
ColorSelectionOptions ColorSelectionOptions::clone() const noexcept { return *this; }

AbortSignal ColorSelectionOptions::signal() const {
    return emlite::Val::get("signal").as<AbortSignal>();
}

void ColorSelectionOptions::signal(const AbortSignal& value) {
    emlite::Val::set("signal", value);
}


} // namespace webbind