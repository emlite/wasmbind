#include <webbind/CanvasPattern.hpp>
#include <webbind/SVGSVGElement.hpp>


CanvasPattern CanvasPattern::take_ownership(Handle h) noexcept {
        return CanvasPattern(h);
    }
CanvasPattern CanvasPattern::clone() const noexcept { return *this; }
CanvasPattern::CanvasPattern(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
CanvasPattern::CanvasPattern(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::Undefined CanvasPattern::setTransform() {
    return emlite::Val::call("setTransform").as<jsbind::Undefined>();
}

jsbind::Undefined CanvasPattern::setTransform(const DOMMatrix2DInit& transform) {
    return emlite::Val::call("setTransform", transform).as<jsbind::Undefined>();
}

