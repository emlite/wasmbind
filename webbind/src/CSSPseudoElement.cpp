#include <webbind/CSSPseudoElement.hpp>
#include <webbind/Element.hpp>
#include <webbind/DOMQuad.hpp>
#include <webbind/Document.hpp>
#include <webbind/DOMRectReadOnly.hpp>
#include <webbind/DOMPoint.hpp>
#include <webbind/SVGGeometryElement.hpp>


CSSPseudoElement CSSPseudoElement::take_ownership(Handle h) noexcept {
        return CSSPseudoElement(h);
    }
CSSPseudoElement CSSPseudoElement::clone() const noexcept { return *this; }
CSSPseudoElement::CSSPseudoElement(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
CSSPseudoElement::CSSPseudoElement(const emlite::Val &val) noexcept: EventTarget(val) {}


jsbind::CSSOMString CSSPseudoElement::type() const {
    return EventTarget::get("type").as<jsbind::CSSOMString>();
}

Element CSSPseudoElement::element() const {
    return EventTarget::get("element").as<Element>();
}

jsbind::Any CSSPseudoElement::parent() const {
    return EventTarget::get("parent").as<jsbind::Any>();
}

CSSPseudoElement CSSPseudoElement::pseudo(const jsbind::CSSOMString& type) {
    return EventTarget::call("pseudo", type).as<CSSPseudoElement>();
}

jsbind::Sequence<DOMQuad> CSSPseudoElement::getBoxQuads() {
    return EventTarget::call("getBoxQuads").as<jsbind::Sequence<DOMQuad>>();
}

jsbind::Sequence<DOMQuad> CSSPseudoElement::getBoxQuads(const BoxQuadOptions& options) {
    return EventTarget::call("getBoxQuads", options).as<jsbind::Sequence<DOMQuad>>();
}

DOMQuad CSSPseudoElement::convertQuadFromNode(const DOMQuadInit& quad, const jsbind::Any& from) {
    return EventTarget::call("convertQuadFromNode", quad, from).as<DOMQuad>();
}

DOMQuad CSSPseudoElement::convertQuadFromNode(const DOMQuadInit& quad, const jsbind::Any& from, const ConvertCoordinateOptions& options) {
    return EventTarget::call("convertQuadFromNode", quad, from, options).as<DOMQuad>();
}

DOMQuad CSSPseudoElement::convertRectFromNode(const DOMRectReadOnly& rect, const jsbind::Any& from) {
    return EventTarget::call("convertRectFromNode", rect, from).as<DOMQuad>();
}

DOMQuad CSSPseudoElement::convertRectFromNode(const DOMRectReadOnly& rect, const jsbind::Any& from, const ConvertCoordinateOptions& options) {
    return EventTarget::call("convertRectFromNode", rect, from, options).as<DOMQuad>();
}

DOMPoint CSSPseudoElement::convertPointFromNode(const DOMPointInit& point, const jsbind::Any& from) {
    return EventTarget::call("convertPointFromNode", point, from).as<DOMPoint>();
}

DOMPoint CSSPseudoElement::convertPointFromNode(const DOMPointInit& point, const jsbind::Any& from, const ConvertCoordinateOptions& options) {
    return EventTarget::call("convertPointFromNode", point, from, options).as<DOMPoint>();
}

