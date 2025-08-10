#include "webbind/EyeDropper.hpp"
#include "webbind/ColorSelectionResult.hpp"
#include "webbind/ColorSelectionOptions.hpp"

namespace webbind {

EyeDropper EyeDropper::take_ownership(Handle h) noexcept {
        return EyeDropper(h);
    }
EyeDropper EyeDropper::clone() const noexcept { return *this; }
emlite::Val EyeDropper::instance() noexcept { return emlite::Val::global("EyeDropper"); }
EyeDropper::EyeDropper(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
EyeDropper::EyeDropper(const emlite::Val &val) noexcept: emlite::Val(val) {}

EyeDropper::EyeDropper() : emlite::Val(emlite::Val::global("EyeDropper").new_()) {}

jsbind::Promise<ColorSelectionResult> EyeDropper::open() {
    return emlite::Val::call("open").as<jsbind::Promise<ColorSelectionResult>>();
}

jsbind::Promise<ColorSelectionResult> EyeDropper::open(const ColorSelectionOptions& options) {
    return emlite::Val::call("open", options).as<jsbind::Promise<ColorSelectionResult>>();
}


} // namespace webbind