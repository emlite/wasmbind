#include <webbind/PaintRenderingContext2DSettings.hpp>

namespace webbind {

PaintRenderingContext2DSettings::PaintRenderingContext2DSettings(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
PaintRenderingContext2DSettings PaintRenderingContext2DSettings::take_ownership(Handle h) noexcept {
    return PaintRenderingContext2DSettings(h);
}

PaintRenderingContext2DSettings::PaintRenderingContext2DSettings(const emlite::Val &val) noexcept: emlite::Val(val) {}

PaintRenderingContext2DSettings::PaintRenderingContext2DSettings() noexcept: emlite::Val(emlite::Val::object()) {}

PaintRenderingContext2DSettings PaintRenderingContext2DSettings::clone() const noexcept { return *this; }

bool PaintRenderingContext2DSettings::alpha() const {
    return emlite::Val::get("alpha").as<bool>();
}

void PaintRenderingContext2DSettings::alpha(bool value) {
    emlite::Val::set("alpha", value);
}


} // namespace webbind