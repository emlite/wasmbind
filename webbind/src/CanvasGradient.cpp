#include <webbind/CanvasGradient.hpp>


CanvasGradient CanvasGradient::take_ownership(Handle h) noexcept {
        return CanvasGradient(h);
    }
CanvasGradient CanvasGradient::clone() const noexcept { return *this; }
emlite::Val CanvasGradient::instance() noexcept { return emlite::Val::global("CanvasGradient"); }
CanvasGradient::CanvasGradient(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
CanvasGradient::CanvasGradient(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::Undefined CanvasGradient::addColorStop(double offset, const jsbind::String& color) {
    return emlite::Val::call("addColorStop", offset, color).as<jsbind::Undefined>();
}

