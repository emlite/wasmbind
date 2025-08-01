#include <webbind/SVGTextPathElement.hpp>
#include <webbind/SVGAnimatedLength.hpp>
#include <webbind/SVGAnimatedEnumeration.hpp>
#include <webbind/SVGAnimatedString.hpp>


SVGTextPathElement SVGTextPathElement::take_ownership(Handle h) noexcept {
        return SVGTextPathElement(h);
    }
SVGTextPathElement SVGTextPathElement::clone() const noexcept { return *this; }
SVGTextPathElement::SVGTextPathElement(Handle h) noexcept : SVGTextContentElement(emlite::Val::take_ownership(h)) {}
SVGTextPathElement::SVGTextPathElement(const emlite::Val &val) noexcept: SVGTextContentElement(val) {}


SVGAnimatedLength SVGTextPathElement::startOffset() const {
    return SVGTextContentElement::get("startOffset").as<SVGAnimatedLength>();
}

SVGAnimatedEnumeration SVGTextPathElement::method() const {
    return SVGTextContentElement::get("method").as<SVGAnimatedEnumeration>();
}

SVGAnimatedEnumeration SVGTextPathElement::spacing() const {
    return SVGTextContentElement::get("spacing").as<SVGAnimatedEnumeration>();
}

SVGAnimatedString SVGTextPathElement::href() const {
    return SVGTextContentElement::get("href").as<SVGAnimatedString>();
}

