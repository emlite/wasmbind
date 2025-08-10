#include "webbind/ColorSelectionResult.hpp"

using emlite::Val;
namespace webbind {

ColorSelectionResult::ColorSelectionResult(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ColorSelectionResult ColorSelectionResult::take_ownership(Handle h) noexcept {
        return ColorSelectionResult(h);
    }
ColorSelectionResult::ColorSelectionResult(const emlite::Val &val) noexcept: emlite::Val(val) {}
ColorSelectionResult::ColorSelectionResult() noexcept: emlite::Val(emlite::Val::object()) {}
ColorSelectionResult ColorSelectionResult::clone() const noexcept { return *this; }

jsbind::String ColorSelectionResult::sRGBHex() const {
    return emlite::Val::get("sRGBHex").as<jsbind::String>();
}

void ColorSelectionResult::sRGBHex(const jsbind::String& value) {
    emlite::Val::set("sRGBHex", value);
}


} // namespace webbind