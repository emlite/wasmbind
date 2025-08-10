#include <webbind/SVGTextContentElement.hpp>
#include <webbind/SVGAnimatedLength.hpp>
#include <webbind/SVGAnimatedEnumeration.hpp>
#include <webbind/DOMPoint.hpp>
#include <webbind/DOMRect.hpp>
#include <webbind/DOMPointInit.hpp>

namespace webbind {

SVGTextContentElement SVGTextContentElement::take_ownership(Handle h) noexcept {
        return SVGTextContentElement(h);
    }
SVGTextContentElement SVGTextContentElement::clone() const noexcept { return *this; }
emlite::Val SVGTextContentElement::instance() noexcept { return emlite::Val::global("SVGTextContentElement"); }
SVGTextContentElement::SVGTextContentElement(Handle h) noexcept : SVGGraphicsElement(emlite::Val::take_ownership(h)) {}
SVGTextContentElement::SVGTextContentElement(const emlite::Val &val) noexcept: SVGGraphicsElement(val) {}

SVGAnimatedLength SVGTextContentElement::textLength() const {
    return SVGGraphicsElement::get("textLength").as<SVGAnimatedLength>();
}

SVGAnimatedEnumeration SVGTextContentElement::lengthAdjust() const {
    return SVGGraphicsElement::get("lengthAdjust").as<SVGAnimatedEnumeration>();
}

long SVGTextContentElement::getNumberOfChars() {
    return SVGGraphicsElement::call("getNumberOfChars").as<long>();
}

float SVGTextContentElement::getComputedTextLength() {
    return SVGGraphicsElement::call("getComputedTextLength").as<float>();
}

float SVGTextContentElement::getSubStringLength(unsigned long charnum, unsigned long nchars) {
    return SVGGraphicsElement::call("getSubStringLength", charnum, nchars).as<float>();
}

DOMPoint SVGTextContentElement::getStartPositionOfChar(unsigned long charnum) {
    return SVGGraphicsElement::call("getStartPositionOfChar", charnum).as<DOMPoint>();
}

DOMPoint SVGTextContentElement::getEndPositionOfChar(unsigned long charnum) {
    return SVGGraphicsElement::call("getEndPositionOfChar", charnum).as<DOMPoint>();
}

DOMRect SVGTextContentElement::getExtentOfChar(unsigned long charnum) {
    return SVGGraphicsElement::call("getExtentOfChar", charnum).as<DOMRect>();
}

float SVGTextContentElement::getRotationOfChar(unsigned long charnum) {
    return SVGGraphicsElement::call("getRotationOfChar", charnum).as<float>();
}

long SVGTextContentElement::getCharNumAtPosition() {
    return SVGGraphicsElement::call("getCharNumAtPosition").as<long>();
}

long SVGTextContentElement::getCharNumAtPosition(const DOMPointInit& point) {
    return SVGGraphicsElement::call("getCharNumAtPosition", point).as<long>();
}

jsbind::Undefined SVGTextContentElement::selectSubString(unsigned long charnum, unsigned long nchars) {
    return SVGGraphicsElement::call("selectSubString", charnum, nchars).as<jsbind::Undefined>();
}


} // namespace webbind