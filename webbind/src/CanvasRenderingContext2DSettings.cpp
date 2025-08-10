#include "webbind/CanvasRenderingContext2DSettings.hpp"

using emlite::Val;
namespace webbind {

CanvasRenderingContext2DSettings::CanvasRenderingContext2DSettings(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
CanvasRenderingContext2DSettings CanvasRenderingContext2DSettings::take_ownership(Handle h) noexcept {
        return CanvasRenderingContext2DSettings(h);
    }
CanvasRenderingContext2DSettings::CanvasRenderingContext2DSettings(const emlite::Val &val) noexcept: emlite::Val(val) {}
CanvasRenderingContext2DSettings::CanvasRenderingContext2DSettings() noexcept: emlite::Val(emlite::Val::object()) {}
CanvasRenderingContext2DSettings CanvasRenderingContext2DSettings::clone() const noexcept { return *this; }

bool CanvasRenderingContext2DSettings::alpha() const {
    return emlite::Val::get("alpha").as<bool>();
}

void CanvasRenderingContext2DSettings::alpha(bool value) {
    emlite::Val::set("alpha", value);
}

bool CanvasRenderingContext2DSettings::desynchronized() const {
    return emlite::Val::get("desynchronized").as<bool>();
}

void CanvasRenderingContext2DSettings::desynchronized(bool value) {
    emlite::Val::set("desynchronized", value);
}

PredefinedColorSpace CanvasRenderingContext2DSettings::colorSpace() const {
    return emlite::Val::get("colorSpace").as<PredefinedColorSpace>();
}

void CanvasRenderingContext2DSettings::colorSpace(const PredefinedColorSpace& value) {
    emlite::Val::set("colorSpace", value);
}

CanvasColorType CanvasRenderingContext2DSettings::colorType() const {
    return emlite::Val::get("colorType").as<CanvasColorType>();
}

void CanvasRenderingContext2DSettings::colorType(const CanvasColorType& value) {
    emlite::Val::set("colorType", value);
}

bool CanvasRenderingContext2DSettings::willReadFrequently() const {
    return emlite::Val::get("willReadFrequently").as<bool>();
}

void CanvasRenderingContext2DSettings::willReadFrequently(bool value) {
    emlite::Val::set("willReadFrequently", value);
}


} // namespace webbind