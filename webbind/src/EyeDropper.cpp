#include <webbind/EyeDropper.hpp>
#include <webbind/AbortSignal.hpp>


ColorSelectionResult::ColorSelectionResult(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ColorSelectionResult ColorSelectionResult::take_ownership(Handle h) noexcept {
        return ColorSelectionResult(h);
    }
ColorSelectionResult::ColorSelectionResult(const emlite::Val &val) noexcept: emlite::Val(val) {}
ColorSelectionResult::ColorSelectionResult() noexcept: emlite::Val(emlite::Val::object()) {}
ColorSelectionResult ColorSelectionResult::clone() const noexcept { return *this; }

jsbind::DOMString ColorSelectionResult::sRGBHex() const {
    return emlite::Val::get("sRGBHex").as<jsbind::DOMString>();
}

void ColorSelectionResult::sRGBHex(const jsbind::DOMString& value) {
    emlite::Val::set("sRGBHex", value);
}

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

EyeDropper EyeDropper::take_ownership(Handle h) noexcept {
        return EyeDropper(h);
    }
EyeDropper EyeDropper::clone() const noexcept { return *this; }
EyeDropper::EyeDropper(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
EyeDropper::EyeDropper(const emlite::Val &val) noexcept: emlite::Val(val) {}


EyeDropper::EyeDropper(): emlite::Val(emlite::Val::global("EyeDropper").new_()) {}

jsbind::Promise EyeDropper::open(const ColorSelectionOptions& options) {
    return emlite::Val::call("open", options).as<jsbind::Promise>();
}

