#include <webbind/SVGAnimatedRect.hpp>
#include <webbind/DOMRect.hpp>
#include <webbind/DOMRectReadOnly.hpp>


SVGAnimatedRect SVGAnimatedRect::take_ownership(Handle h) noexcept {
        return SVGAnimatedRect(h);
    }
SVGAnimatedRect SVGAnimatedRect::clone() const noexcept { return *this; }
emlite::Val SVGAnimatedRect::instance() noexcept { return emlite::Val::global("SVGAnimatedRect"); }
SVGAnimatedRect::SVGAnimatedRect(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
SVGAnimatedRect::SVGAnimatedRect(const emlite::Val &val) noexcept: emlite::Val(val) {}


DOMRect SVGAnimatedRect::baseVal() const {
    return emlite::Val::get("baseVal").as<DOMRect>();
}

DOMRectReadOnly SVGAnimatedRect::animVal() const {
    return emlite::Val::get("animVal").as<DOMRectReadOnly>();
}

